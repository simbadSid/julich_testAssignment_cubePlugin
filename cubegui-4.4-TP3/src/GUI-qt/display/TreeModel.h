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




#ifndef TREEMODEL_H
#define TREEMODEL_H

#include <QAbstractItemModel>
#include <QModelIndex>
#include <QVariant>
#include <QHash>
#include "Tree.h"

namespace cubegui
{
#define DATA_COL 0
#define TreeItemRole Qt::UserRole

class TreeItem;

enum TreeItemMarkType { NORMAL_ITEM, FOUND_ITEM, FOUND_ITEM_PARENT, SELECTED_ITEM_PARENT };

/**
 * @brief The TreeModelInterface class is used by the tree views. It extends the QAbstractItemModel
 * with Tree and TreeItem specific functions.
 * The Interface is necessary to allow to exchange the TreeModel with the TreeModelProxy and vice versa.
 */
class TreeModelInterface
{
public:
    /** returns the model which is used by the tree view to access the data of the Tree class */
    virtual QAbstractItemModel*
    getModel() = 0;

    virtual Tree*
    getTree() const = 0;

    virtual TreeItem*
    getTreeItem( const QModelIndex& idx ) const = 0;

    virtual void
    markSelectedParents( const QModelIndexList& selected ) = 0;

    virtual QModelIndex
    find( TreeItem* searchItem ) const = 0;

    virtual QModelIndexList
    find( QRegExp regExp ) const = 0;

    /** Searches for an element described by the path string. Each level of the tree element path is separated by ":::" */
    virtual QModelIndex
    findPath( const QString& path ) const = 0;

    /** set items which should be marked as found in the view */
    virtual void
    setFoundItems( const QModelIndexList& indexList ) = 0;

    /** unmark all items in the view */
    virtual void
    clearFoundItems() = 0;

    /** hide a tree level and move children to parent (only useful for system tree) */
    virtual void
    hideTreeLevel( int level ) = 0;
    virtual void
    unhideTreeLevel() = 0;

    /** notifies the view that all values have been changed */
    virtual void
    updateValues() = 0;
};

/**
 * @brief The TreeModel class is the model for the data in the Tree class. With this model, the data of the
 * tree can be displayed with a QTreeView.
 * The model also contains tree manipulaton methods.
 */
class TreeModel : public QAbstractItemModel, public TreeModelInterface
{
    //  Q_OBJECT
public:
    TreeModel( Tree* tree );
    ~TreeModel();

    // ----- begin TreeModelInterface implementation ----

    virtual QAbstractItemModel*
    getModel();

    virtual Tree*
    getTree() const;

    virtual TreeItem*
    getTreeItem( const QModelIndex& idx ) const
    {
        if ( !idx.isValid() ) // invalid index is used for tree root
        {
            return tree->getRootItem();
        }
        else
        {
            return static_cast<TreeItem*>( idx.internalPointer() );
        }
    }

    virtual void
    markSelectedParents( const QModelIndexList& selected );

    virtual QModelIndex
    find( TreeItem* searchItem ) const;

    virtual QModelIndexList
    find( QRegExp regExp ) const;

    virtual QModelIndex
    findPath( const QString& path ) const;

    virtual void
    setFoundItems( const QModelIndexList& value );

    virtual void
    clearFoundItems();

    // ----- end TreeModelInterface implementation ----

    // ----- virtual methods that are required for Qt TreeView ----
    QVariant
    data( const QModelIndex& index,
          int                role ) const;
    QModelIndex
    index( int                row,
           int                column,
           const QModelIndex& parent = QModelIndex() ) const;
    QModelIndex
    parent( const QModelIndex& index ) const;
    int
    rowCount( const QModelIndex& parent = QModelIndex() ) const;
    int
    columnCount( const QModelIndex& = QModelIndex() ) const;
    Qt::ItemFlags
    flags( const QModelIndex& index ) const;

    // ----- end methods required for Qt TreeView ----

    // ----- start tree manipulation methods
    void
    replaceSubtree( TreeItem* oldItem,
                    TreeItem* newItem );

    /** Inserts newItem into to the tree as child of parent. If parent is null, the item
        is added as top level entry */
    void
    addSubtree( TreeItem* newItem,
                TreeItem* parent = 0 );

    /** removes item and all its children from the tree */
    void
    removeSubtree( TreeItem* item );

    /** removes all children of item from the tree */
    void
    removeChildren( TreeItem* item );

    void
    hideTreeLevel( int level );
    void
    unhideTreeLevel();

    /** notifies the view that all values have been changed */
    void
    updateValues();

    // ----- end tree manipulation methods
private:
    Tree*           tree;
    QModelIndexList foundItems;                        // items which should be marked as found in the view
    QModelIndexList foundParents;                      // parent items of the found items
    QModelIndexList selectedParents;                   // parent items of the selected items

    QList<QList<QList<TreeItem*> > > hiddenLevelItems; // [level number] [item number (row)] -> list of children from hidden levels
    QList<int>                       hiddenLevel;      // contains all hidden level (root level = 1)
    const QList<TreeItem*>&
    getChildren( QModelIndex ) const;                  // gets currenly displayed children, which can be children of a hidden level of direct children
    void
    getItemsAtLevel( QList<QModelIndex>& list,
                     int                 level );
};
}
#endif
