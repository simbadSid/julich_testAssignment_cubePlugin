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


#ifndef TREEVIEWSORTFILTERPROXY_H
#define TREEVIEWSORTFILTERPROXY_H

#include <QSortFilterProxyModel>
#include "Tree.h"
#include "TreeModel.h"

namespace cubegui
{
class Comparator;
class NameComparator;
class InclusiveValueComparator;
class ExclusiveValueComparator;

#define DATA_COL 0

/**
 * @brief The TreeModelProxy class is a proxy for the TreeModel class. It allows to sort or hide
 * tree items.
 */
class TreeModelProxy : public QSortFilterProxyModel, public TreeModelInterface
{
    Q_OBJECT
public:
    TreeModelProxy( TreeModel* sourceModel );

    // ----- begin TreeModelInterface implementation ----
    virtual QAbstractItemModel*
    getModel();

    virtual Tree*
    getTree() const;

    virtual TreeItem*
    getTreeItem( const QModelIndex& idx ) const
    {
        QModelIndex sidx = mapToSource( idx );

        if ( !sidx.isValid() )
        {
            return tree->getRootItem();
        }
        else
        {
            return static_cast<TreeItem*>( sidx.internalPointer() );
        }
    }

    virtual QModelIndex
    find( TreeItem* searchItem ) const;

    virtual QModelIndexList
    find( QRegExp regExp ) const;

    virtual QModelIndex
    findPath( const QString& path ) const;

    virtual void
    setFoundItems( const QModelIndexList& value );

    virtual void
    markSelectedParents( const QModelIndexList& );

    virtual void
    clearFoundItems();

    virtual void
    hideTreeLevel( int level )
    {
        sourceModel->hideTreeLevel( level );
    }
    virtual void
    unhideTreeLevel()
    {
        sourceModel->unhideTreeLevel();
    }

    // ----- end TreeModelInterface implementation ----

    virtual void
    setFilter( Tree::FilterType filter,
               double           threshold = -1 );

    virtual void
    updateValues();

    void
    setComparator( Comparator* c );

protected:
    bool
    filterAcceptsRow( int                sourceRow,
                      const QModelIndex& sourceParent ) const;
    bool
    lessThan( const QModelIndex& left,
              const QModelIndex& right ) const;

signals:
    void
    filteringEnded();

private:
    Tree*       tree;
    TreeModel*  sourceModel;
    Comparator* comparator; // used for sorting of TreeItems

    double filterThreshold;
};

/** Comparator is used to sort tree items */
class Comparator
{
public:
    virtual bool
    compare( TreeItem* item1,
             TreeItem* item2 ) = 0;
};

/** sort tree by item label (asscending) */
class NameComparator : public Comparator
{
    bool
    compare( TreeItem* item1,
             TreeItem* item2 )
    {
        return item1->getName() < item2->getName();
    }
};

/** sort tree by item's inclusive value (descending) */
class InclusiveValueComparator : public Comparator
{
    bool
    compare( TreeItem* item1,
             TreeItem* item2 )
    {
        return item1->getTotalValue() > item2->getTotalValue();
    }
};
/** sort tree by item's exclusive value (descending) */
class ExclusiveValueComparator : public Comparator
{
    bool
    compare( TreeItem* item1,
             TreeItem* item2 )
    {
        return item1->getOwnValue() > item2->getOwnValue();
    }
};
}
#endif // TREEVIEWSORTFILTERPROXY_H
