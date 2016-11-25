/****************************************************************************
**  CUBE        http://www.scalasca.org/                                   **
*****************************************************************************
**  Copyright (c) 1998-2016                                                **
**  Forschungszentrum Juelich GmbH, Juelich Supercomputing Centre          **
**                                                                         **
**  This software may be modified and distributed under the terms of       **
**  a BSD-style license.  See the COPYING file in the package base         **
**  directory for details.                                                 **
****************************************************************************/


#include "config.h"

// @see http://qt-project.org/doc/qt-4.8/modelview.html

#include <QtGui>
#include "TreeItem.h"
#include "TreeModel.h"
#include "Globals.h"
#include "TreeItemMarker.h"

using namespace cubegui;

TreeModel::TreeModel( Tree* tree )
{
    this->tree = tree;
}

TreeModel::~TreeModel()
{
}


// --- begin QAbstractItemModel functions --------------------------
int
TreeModel::columnCount( const QModelIndex& ) const
{
    return 1;
}

/**
 * @brief TreeModel::data
 * @param index tree index of the item to be displayed
 * @param role type of element to be displayed
 * @return the data to display for a tree item
 */
QVariant
TreeModel::data( const QModelIndex& index, int role ) const
{
    if ( !index.isValid() )
    {
        return QVariant();
    }

    if ( role == Qt::DisplayRole )
    {
        TreeItem* item = static_cast<TreeItem*>( index.internalPointer() );
        return item->getLabel();
    }
    else if ( role == Qt::BackgroundRole )
    {
        if ( foundItems.contains( index ) )
        {
            return FOUND_ITEM;
        }
        else if ( foundParents.contains( index ) )
        {
            return FOUND_ITEM_PARENT;
        }
        else if ( selectedParents.contains( ( index ) ) )
        {
            return SELECTED_ITEM_PARENT;
        }
    }
    else if ( role == TreeItemRole ) // used in TreeItemDelegate::paint
    {
        TreeItem* item = static_cast<TreeItem*>( index.internalPointer() );
        return qVariantFromValue( ( void* )item );
    }
    return QVariant();
}

Qt::ItemFlags
TreeModel::flags( const QModelIndex& index ) const
{
    if ( !index.isValid() )
    {
        return 0;
    }

    return Qt::ItemIsEnabled | Qt::ItemIsSelectable;
}

QModelIndex
TreeModel::index( int row, int column, const QModelIndex& parent ) const
{
    if ( !hasIndex( row, column, parent ) )
    {
        return QModelIndex();
    }
    TreeItem* childItem = getChildren( parent ).at( row );
    if ( childItem )
    {
        return createIndex( row, column, childItem );
    }
    else
    {
        return QModelIndex();
    }
}

/**
 * @brief TreeModel::getChildren returns all children of the given parent. If the children are hidden, the children of the next visible level are shown
 * @param parentItem the parent item whose children should be returned
 * @return
 */
const QList<TreeItem*>&
TreeModel::getChildren( const QModelIndex parent ) const
{
    TreeItem* parentItem = getTreeItem( parent );

    if ( tree->getTreeType() == SYSTEMTREE ) // special case: hiding in system tree
    {
        int nextLevel = parentItem->getDepth() + 1;
        if ( !hiddenLevel.contains( nextLevel ) )
        {
            return parentItem->getChildren();
        }
        else // children are hidden
        {
            int row =  ( parent.row() < 0 ) ? 0 : parent.row();
            return hiddenLevelItems[ nextLevel ][ row ];
        }
    }
    else
    {
        return parentItem->getChildren();
    }
}

QModelIndex
TreeModel::parent( const QModelIndex& index ) const
{
    if ( !index.isValid() )
    {
        return QModelIndex();
    }

    TreeItem* childItem  = static_cast<TreeItem*>( index.internalPointer() );
    TreeItem* parentItem = childItem->getParent();

    // check if parent is hidden -> choose first visible parent
    if ( tree->getTreeType() == SYSTEMTREE && parentItem && hiddenLevel.size() > 0 )
    {
        int level = parentItem->getDepth();
        while ( parentItem && hiddenLevel.contains( level ) )
        {
            level--;
            parentItem = parentItem->getParent();
        }
    }

    if ( !parentItem || parentItem == tree->getRootItem() )
    {
        return QModelIndex();
    }
    else
    {
        return createIndex( parentItem->row(), DATA_COL, parentItem );
    }
}


int
TreeModel::rowCount( const QModelIndex& parent ) const
{
    if ( parent.column() > 0 ) // model has only one column
    {
        return 0;
    }

    return getChildren( parent ).size();
}
// --- end QAbstractItemModel functions --------------------------


// -- begin additional model manipulation methods ---------------------------------------
void
TreeModel::updateValues()
{
    emit( dataChanged( QModelIndex(), QModelIndex() ) );
}

/** Removes the children of given item from the model and the tree. The children are deleted afterwards. */
void
TreeModel::removeChildren( TreeItem* item )
{
    QModelIndex idx = find( item );
    beginRemoveRows( idx, 0, rowCount( idx ) );
    tree->deleteChildren( item );
    endRemoveRows();
}

/** Removes the given item from the model and the tree. The item is deleted afterwards. */
void
TreeModel::removeSubtree( TreeItem* item )
{
    QModelIndex idx    = find( item );
    QModelIndex parent = idx.parent();
    int         row    = idx.row();

    beginRemoveRows( parent, row, row );
    tree->deleteChildren( item );
    tree->deleteItem( item );
    endRemoveRows();
}

/**
 * Replaces oldItem with newItem in tree and model and notifies the view.
 */
void
TreeModel::replaceSubtree( TreeItem* oldItem, TreeItem* newItem )
{
    TreeItem*         parent   = oldItem->getParent();
    QList<TreeItem*>& children = parent->children;

    QModelIndex idx       = find( parent );
    int         row       = find( oldItem ).row();
    int         listIndex = children.indexOf( oldItem );

    beginRemoveRows( idx, row, row );
    children.removeAt( listIndex );
    endRemoveRows();

    beginInsertRows( idx, row, row );
    children.insert( listIndex, newItem );
    newItem->parentItem = oldItem->parentItem;
    endInsertRows();
}

/** Adds newItem to the model and the tree. If parent is null, the item is added as top level item  */
void
TreeModel::addSubtree( TreeItem* newItem, TreeItem* parent )
{
    if ( !parent )
    {
        parent = tree->getRootItem();
    }
    QModelIndex idx = find( parent );
    int         row = rowCount( idx );
    beginInsertRows( idx, row, row );

    parent->addChild( newItem );

    endInsertRows();
}



// --------------------------------------------------------------------------------------
// -- begin TreeModelInterface ----------------------------------------------------------------

QAbstractItemModel*
TreeModel::getModel()
{
    return this;
}

Tree*
TreeModel::getTree() const
{
    return tree;
}

void
TreeModel::clearFoundItems() // todo check if obsolete
{
    foundItems.clear();
    foundParents.clear();
}

void
TreeModel::markSelectedParents( const QModelIndexList& selected )
{
    QSet<QModelIndex> parents;

    foreach( QModelIndex idx, selected )
    {
        QModelIndex parentIdx = parent( idx );
        while ( parentIdx.isValid() )
        {
            parents.insert( parentIdx );
            parentIdx = parent( parentIdx );
        }
    }

    selectedParents = parents.toList();
}

QModelIndex
TreeModel::find( TreeItem* searchItem ) const
{
    QList<QModelIndex> list;
    QModelIndex        root = QModelIndex();
    list.append( root );

    TreeItem*   item = 0;
    QModelIndex idx;

    while ( !list.isEmpty() )
    {
        QModelIndex parent = list.takeFirst();
        int         rows   = rowCount( parent );
        for ( int i = 0; i < rows; ++i )
        {
            idx  = index( i, DATA_COL, parent );
            item = static_cast<TreeItem*>( idx.internalPointer() );
            if ( item == searchItem ) // found
            {
                list.clear();
                break;
            }
            list.append( idx ); // check children
        }
    }
    if ( item != searchItem )
    {
        idx = QModelIndex();
    }
    return idx;
}

void
TreeModel::getItemsAtLevel( QList<QModelIndex>& list, int level )
{
    if ( level == 0 )
    {
        list.append( QModelIndex() );
    }
    else
    {
        QList<QModelIndex> tmpList;
        tmpList.append( QModelIndex() ); // start with root and search for all elements in nonHiddenParentLevel
        while ( !tmpList.isEmpty() )
        {
            QModelIndex parent = tmpList.takeFirst();
            int         rows   = rowCount( parent );
            for ( int i = 0; i < rows; ++i )
            {
                QModelIndex idx = index( i, DATA_COL, parent );

                TreeItem* item = static_cast<TreeItem*>( idx.internalPointer() );
                if ( item->getDepth() == level )
                {
                    list.append( idx );
                }
                else
                {
                    tmpList.append( idx ); // check children
                }
            }
        }
    }
}

void
TreeModel::unhideTreeLevel()
{
    beginResetModel();
    hiddenLevelItems.clear();
    hiddenLevel.clear();
    endResetModel();
}

/**
 * @brief TreeModel::hideTreeLevel hides the elements of the given level and moves all children of these elements to a visible parent item
 * @param level the level to hide
 */
void
TreeModel::hideTreeLevel( int level )
{
    if ( tree->getTreeType() == SYSTEMTREE && !hiddenLevel.contains( level ) && level < tree->getDepth() )
    {
        int nonHiddenParentLevel = level - 1;  // first non hidden parent level beginning with level
        while ( hiddenLevel.contains( nonHiddenParentLevel ) )
        {
            nonHiddenParentLevel--;
        }
        int nonHiddenChildLevel = level + 1;
        while ( hiddenLevel.contains( nonHiddenChildLevel ) )
        {
            nonHiddenChildLevel++;
        }

        QList<QModelIndex> parents; // list of non hidden parents of hidden level items
        getItemsAtLevel( parents, nonHiddenParentLevel );

        // set List of hidden children to zero ( = rowCount() returns 0 )
        while ( hiddenLevelItems.size() <= level ) // fill each level with empty elements up to the given level
        {
            hiddenLevelItems.append( QList< QList<TreeItem*> >() );
        }
        foreach( QModelIndex idx, parents ) // parent of hidden level
        {
            beginRemoveRows( idx, 0, rowCount( idx ) - 1 );
            hiddenLevelItems[ level ].append( QList<TreeItem*>() );
            endRemoveRows();
        }
        hiddenLevel.append( level );

        int row = 0;
        foreach( QModelIndex idx, parents ) // move children of the hidden items to parents of the hidden level
        {
            TreeItem*        parent = getTreeItem( idx );
            QList<TreeItem*> childrenToMove;

            QList<TreeItem*> list;
            list.append( parent );
            while ( !list.isEmpty() )
            {
                TreeItem* item = list.takeFirst();

                if ( item->getDepth() == nonHiddenChildLevel - 1 )
                {
                    childrenToMove.append( item->getChildren() );
                }
                else
                {
                    list.append( item->getChildren() );
                }
            }

            // get number of new children
            int newChildrenCount = childrenToMove.size();

            // insert new children
            beginInsertRows( idx, 0, newChildrenCount - 1 );
            hiddenLevelItems[ nonHiddenParentLevel + 1 ][ row++ ] = childrenToMove;
            endInsertRows();
        }
    }
}

/**
 * Marks the itenms of the given list. The items of the list become invalid after updateValues is called
 */
void
TreeModel::setFoundItems( const QModelIndexList& value )
{
    foundItems = value;
    QSet<QModelIndex> parents;

    foreach( QModelIndex idx, foundItems )
    {
        QModelIndex parentIdx = parent( idx );
        while ( parentIdx.isValid() )
        {
            parents.insert( parentIdx );
            parentIdx = parent( parentIdx );
        }
    }

    foundParents = parents.toList();
    updateValues();
}

QModelIndexList
TreeModel::find( QRegExp regExp ) const
{
    if ( !regExp.isValid() )
    {
        Globals::setStatusMessage( "Warning: no valid regular expression", Warning );
        return QModelIndexList();
    }

    QList<QModelIndex> list;
    QList<QModelIndex> found;
    QModelIndex        root = QModelIndex();

    list.append( root );
    while ( !list.isEmpty() )
    {
        QModelIndex parent = list.takeFirst();
        int         rows   = rowCount( parent );
        for ( int i = 0; i < rows; ++i )
        {
            QModelIndex idx = index( i, DATA_COL, parent );

            TreeItem* item = static_cast<TreeItem*>( idx.internalPointer() );
            if ( regExp.indexIn( item->getLabel() ) != -1 ) // found
            {
                found.append( idx );
            }
            list.append( idx ); // check children
        }
    }
    return found;
}

QModelIndex
TreeModel::findPath( const QString& path ) const
{
    QStringList elems = path.split( ":::" );

    bool        foundInLevel = false;
    QModelIndex current      = QModelIndex(); // start with root

    do
    {
        QString elem = elems.takeFirst();
        int     rows = rowCount( current );
        foundInLevel = false;
        for ( int i = 0; i < rows; ++i )
        {
            QModelIndex child = index( i, DATA_COL, current );
            TreeItem*   item  = static_cast<TreeItem*>( child.internalPointer() );
            if ( item->getName() == elem )
            {
                current      = child;
                foundInLevel = true;
                break;
            }
        }
    }
    while ( foundInLevel && elems.size() > 0 );

    if ( !foundInLevel || elems.size() > 0 ) // not found or only part found
    {
        current = QModelIndex();             // set to invalid id
    }

    return current;
}
