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

#include "Tree.h"
#include "TreeModel.h"
#include "TreeView.h"

#include "Cube.h"
#include "CubeMetric.h"
#include "CubeCnode.h"
#include "CubeRegion.h"
#include "CubeMachine.h"
#include "CubeNode.h"
#include "CubeProcess.h"
#include "CubeThread.h"
#include "CubeVertex.h"
#include "CubeError.h"
#include "CubeGeneralEvaluation.h"
#include "Globals.h"
#include "MetricTree.h"

using namespace cubegui;

Tree::Tree()
{
    cube          = 0;
    top           = 0;
    maxValue      = 0;
    lastSelection = 0;
    maxDepth      = -1;
    integerType   = false;
    integerType   = false;
    active        = true;
    valueModus    = ABSOLUTE;
    treeModel     = new TreeModel( this );
    activeFilter  = FILTER_NONE;

    userDefinedMinMaxValues  = false;
    valueModusReferenceValue = 0.;
}

Tree::~Tree()
{
    foreach( TreeItem * item, treeItems )
    {
        delete item;
    }
    delete treeModel;
    delete top;
}

void
Tree::initialize( cube::Cube* cube )
{
    this->cube = cube;
    top        = createTree();
    top->setExpandedStatus( true );

    treeItems = treeItemHash.values();
}

void
Tree::computeValues( const QList<Tree*>& leftTrees )
{
    integerType = false;
    foreach( Tree * tree, leftTrees )
    {
        if ( tree->getTreeType() == METRICTREE )
        {
            // set integerType of the tree to true, if all selected metrics have integer type
            integerType = true;
            const QList<TreeItem*>& selected = tree->getSelectionList();
            foreach( TreeItem * item, selected )
            {
                if ( !static_cast<cube::Metric*> ( item->getCubeObject() )->isIntegerType() )
                {
                    integerType = false;
                    break;
                }
            }
        }
    }
    computeBasicValues( leftTrees );

    updateItems();
}

TreeModel*
Tree::getModel() const
{
    return treeModel;
}

void
Tree::setTrees( QList<Tree*> trees )
{
    foreach( Tree * tree, trees )
    {
        treeHash.insert( tree->treeType, tree );
    }
}

bool
Tree::hasIntegerType() const
{
    if ( getValueModus() != ABSOLUTE )
    {
        return false;
    }
    else
    {
        return integerType;
    }
}

const QList<TreeItem*>&
Tree::getItems() const
{
    return treeItems;
}

bool
Tree::itemIsValid( cube::Vertex* )
{
    return true;
}

TreeItem*
Tree::getRootItem() const
{
    return top;
}

TreeType
Tree::getTreeType() const
{
    return treeType;
}

/**
 * initializes tree items before new values are calculated
 */
void
Tree::initializeValues()
{
    foreach( TreeItem * item, this->getItems() )
    {
        item->calculated = false;
        item->totalValue = 0.0;
        item->ownValue   = 0.0;
        if ( treeType == SYSTEMTREE )
        {
            item->minValue = 0.0;
            item->maxValue = 0.0;
        }
        if ( activeFilter == FILTER_DYNAMIC )
        {
            item->hidden = false; // hidden items aren't recalculated -> ensure recalculation of all items for dynamic filtering
        }
    }

    /** recursively set root item for all tree elements */
    foreach( TreeItem * rootItem, top->getChildren() )
    {
        QList<TreeItem*> children;
        children.append( rootItem );
        while ( !children.isEmpty() )
        {
            TreeItem* child = children.takeLast();
            child->rootItem = rootItem;
            children.append( child->getChildren() );
        }
    }
}

double
Tree::getValueModusReferenceValue() const
{
    return valueModusReferenceValue;
}

ValueModus
Tree::getValueModus() const
{
    return valueModus;
}

void
Tree::valueModusChanged( ValueModus modus )
{
    this->valueModus = modus;
    updateItems();
}

void
Tree::setActive( bool active )
{
    this->active = active;
}

bool
Tree::isActive() const
{
    return active;
}

void
Tree::expandItem( TreeItem* item, bool expand )
{
    emit itemExpanded( item, expand );
}

void
Tree::selectItem( TreeItem* item, bool addToSelection )
{
    emit itemSelected( item, addToSelection );
}

void
Tree::deselectItem( TreeItem* item )
{
    emit itemDeselected( item );
}

TreeItem*
Tree::getLastSelection() const
{
    return lastSelection;
}

void
Tree::setLastSelection( TreeItem* value )
{
    lastSelection = value;
}

const QList<TreeItem*>&
Tree::getSelectionList() const
{
    return selectionList;
}

/**
 * Adds hidden children of selected parent items to selection list. This allows trees right of the current one to
 * calculate values for the hidden items, too.
 * Removes hidden children from previous selections.
 */
void
Tree::updateHidenItemsInSelectionList()
{
    foreach( TreeItem * item, hiddenSelections )
    {
        selectionList.removeOne( item );
    }
    hiddenSelections.clear();

    if ( activeFilter != FILTER_NONE )
    {
        // add hidden children to each selected item
        foreach( TreeItem * item, selectionList )
        {
            if ( item->isExpanded() && !item->isHidden() )
            {
                foreach( TreeItem * child, item->getChildren() )
                {
                    if ( child->isHidden() )
                    {
                        hiddenSelections.append( child );
                    }
                }
            }
        }
        selectionList.append( hiddenSelections );
    }
}

void
Tree::setSelectionList( const QList<TreeItem*>& value )
{
    hiddenSelections.clear();
    foreach( TreeItem * item, selectionList )
    {
        item->setSelectionStatus( false );
    }

    selectionList = value;
    foreach( TreeItem * item, selectionList )
    {
        item->setSelectionStatus( true );
    }

    if ( activeFilter != FILTER_NONE )
    {
        updateHidenItemsInSelectionList();
    }
}

cube::Cube*
Tree::getCube() const
{
    return cube;
}

/*
 * updates the labels of the tree and the value widget after calculation has been done
 */
void
Tree::updateItems()
{
    this->valueModusReferenceValue = computeReferenceValue( valueModus );

    computeMaxValues();

    /* update the color and the label of the visible (expanded) items */
    QList<TreeItem*> list;
    list.append( top->getChildren() );
    while ( !list.isEmpty() )
    {
        TreeItem* item = list.takeFirst();
        item->updateItem();
        // Only update expanded items, only system tree has to update all its values as they are used in the topologies.
        // All system tree values are calculated at once, so no further call to this method is required if items are expanded.
        if ( item->isExpanded() || treeType == SYSTEMTREE )
        {
            list.append( item->getChildren() );
        }
    }
}

void
Tree::deleteItem( TreeItem* item )
{
    if ( item->getParent() )
    {
        item->getParent()->children.removeOne( item ); // remove item from parent
    }
    treeItemHash.remove( item->getCubeObject() );
    selectionList.removeOne( item );
    treeItems.removeOne( item );

    delete item;
}

void
Tree::deleteChildren( TreeItem* item )
{
    foreach( TreeItem * child, item->getChildren() )
    {
        deleteChildren( child );
        deleteItem( child );
    }
}

double
Tree::getMaxValue( TreeItem* ) const
{
    return maxValue;
}

// get the larger one from the item's current own and total value
void
Tree::getMax( TreeItem* item, double& value )
{
    // we compare just the absolut values. In the case of the differences
    // of the cubes it may appear negatives values.
    value = ( fabs( item->ownValue ) < fabs( item->totalValue ) ? item->totalValue : item->ownValue );

    // don't use own value, if value object is zero ( = maximum negative value )
    if ( item->getOwnValueObject() && ( ( cube::Value* )item->getOwnValueObject() )->isZero() )
    {
        value = item->totalValue;
    }
}

void
Tree::computeMaxValues()
{
    double value;
    double max = getItems().first()->totalValue;

    // search for the minmal/maximal values in the whole tree
    foreach( TreeItem * item, getItems() )
    {
        getMax( item, value );
        // If the difference of two cube files (e.g. File->Open external) is displayed, the inclusive value of a parent item may be smaller than the
        // absolute values of the child nodes. For that reason, the absolute values of all children have to be compared.
        if ( fabs( max ) < fabs( value ) )
        {
            max = value;
        }
    }
    double roundThreshold = Globals::getRoundThreshold( FORMAT_TREES );
    if ( fabs( max ) <= fabs( roundThreshold ) )
    {
        max = 0.0;
    }
    maxValue = max;
}

// this method computes the reference value (100%) for percentage-based value modi
//
double
Tree::computeReferenceValue( ValueModus valueModus )
{
    Tree* tree;
    if ( valueModus == METRICSELECTED  || valueModus == METRICROOT || valueModus == EXTERNAL )
    {
        tree = treeHash.value( METRICTREE );
    }
    else if ( valueModus == CALLSELECTED  || valueModus == CALLROOT )
    {
        tree = treeHash.value( CALLTREE );
        if ( !tree->isActive() )
        {
            tree = treeHash.value( CALLFLAT );
        }
    }
    else // ( valueModus == SYSTEMSELECTED  || valueModus == SYSTEMROOT )
    {
        tree = treeHash.value( SYSTEMTREE );
    }

    // since we divide the absolute value by the reference value,
    // the reference value 0.0 would result in the value "undefined"
    double referenceValue = 0.0;

    // get the proper value of the required selected, root, or external item
    if ( valueModus == METRICSELECTED || valueModus == CALLSELECTED || valueModus == SYSTEMSELECTED )
    {
        QList<TreeItem*> selected = tree->getSelectionList();
        foreach( TreeItem * item, selected )
        {
            referenceValue += item->isExpanded() ? item->ownValue : item->totalValue;
        }
    }
    else if ( valueModus == METRICROOT )
    {
        // for metrics, only items with the same root can be selected simultaneously;
        // thus we take this common root's value
        if ( tree->getSelectionList().size() > 0 )
        {
            referenceValue = tree->lastSelection->rootItem->totalValue;
        }
    }
    else if ( valueModus == CALLROOT  || valueModus == SYSTEMROOT )
    {
        // for the call tree, items with different roots can be selected;
        // in this case we take the sum of all roots as reference value
        bool* seen = new bool[ tree->getItems().size() ];
        for ( int i = 0; i < tree->getItems().size(); i++ )
        {
            seen[ i ] = false;
        }
        foreach( const TreeItem * item, tree->getSelectionList() )
        {
            item = item->getTopLevelItem();

            int id = item->cubeObject->get_id();
            if ( !seen[ id ] )
            {
                referenceValue += item->rootItem->totalValue;
                seen[ id ]      = true;
            }
        }
        delete[] seen;
    }
    else if ( valueModus == EXTERNAL )
    {
        // get root item of the recently selected metric tree item as reference item for trees but metric tree
        TreeItem*     item       = tree->getLastSelection();
        cube::Metric* metric     = static_cast<cube::Metric* > ( item->getTopLevelItem()->getCubeObject() );
        QString       metricName = QString::fromStdString( metric->get_uniq_name() );
        MetricTree*   metricTree = static_cast<MetricTree*> ( tree );
        referenceValue = metricTree->getExternalReferenceValue( metricName );
    }

    // round values very close to 0.0 down to 0.0
    double roundThreshhold = Globals::getRoundThreshold( FORMAT_TREES );
    if ( referenceValue <= roundThreshhold && referenceValue >= -roundThreshhold )
    {
        referenceValue = 0.0;
    }
    return referenceValue;
}
// end of computeReferenceValues()

/**
 * @brief Tree::getStatisticValues calculates the required statistical values for the value widget.
 * It returns true, if the selected Value is valid.
 * @param minValue
 * @param maxValue
 * @param selectedValue
 * @param minAbsValue
 * @param maxAbsValue
 * @param absValue
 * @param mean
 * @param varianceSqrt
 */
bool
Tree::getStatisticValues( double& minValue, double& maxValue, double& selectedValue,
                          double& minAbsValue, double& maxAbsValue, double& absValue,
                          double& mean, double& varianceSqrt ) const
{
    minValue      = 0.;
    maxValue      = 0.;
    selectedValue = 0.;
    minAbsValue   = 0.;
    maxAbsValue   = 0.;
    absValue      = 0.;
    mean          = 0.;
    varianceSqrt  = 0.;
    bool selValid = false;

    if ( selectionList.size() > 0 )
    {
        double value;

        TreeItem* first = selectionList.first();

        foreach( TreeItem * selectedItem, selectionList )
        {
            if ( selectedItem->isHidden() )
            {
                continue; // value already included in calculateValuePlusHidden
            }

            bool   valueOk, hiddenValueOk;
            int    hiddenChildren;
            double hiddenChildrenValue;
            selectedItem->calculateValuePlusHidden( valueOk, value, hiddenValueOk, hiddenChildrenValue,
                                                    hiddenChildren, ABSOLUTE );
            if ( valueOk )
            {
                absValue += value;
                selValid  = true;
            }

            if ( valueOk && getValueModus() != ABSOLUTE )
            {
                selectedItem->calculateValuePlusHidden( valueOk, value, hiddenValueOk, hiddenChildrenValue,
                                                        hiddenChildren, getValueModus() );
                if ( valueOk )
                {
                    selectedValue += value;
                    selValid       = true;
                }
            }
        }

        double maxTreeValue = getMaxValue( first );
        if ( userDefinedMinMaxValues )
        {
            minValue = userMinValue;
            maxValue = userMaxValue;
        }
        else
        {
            minValue = 0.0;
            maxValue = getValueModus() == ABSOLUTE ? maxTreeValue : 100.0;
        }

        // absolute values
        minAbsValue = 0;
        maxAbsValue = maxTreeValue;
    }

    // mean and variance are only displayed in system tree, if no thread or process is selcted in
    // percent value modus
    if ( !selValid )
    {
        double   tmp = 0.;
        bool     ok  = false;
        unsigned N   = 0;
        foreach( TreeItem * item, getItems() )
        {
            if ( item->getChildren().size() == 0 ) // get sum of all leafs
            {
                tmp   = item->calculateValue( ABSOLUTE, ok, false );
                mean += tmp;
                N++;
            }
        }
        mean = ( N != 0 ) ? mean / N : 0.;

        double variance = 0.;
        foreach( TreeItem * item, getItems() )
        {
            if ( item->getChildren().size() == 0 )
            {
                tmp       = item->calculateValue( ABSOLUTE, ok, false );
                variance += ( mean - tmp ) * ( mean - tmp );
                N++;
            }
        }
        varianceSqrt = ( N != 0 ) ? sqrt( variance / N ) : 0.;
    }

    return selValid;
}

void
Tree::removeSubtree( TreeItem* item )
{
    treeModel->removeSubtree( item );
}

void
Tree::addSubtree( TreeItem* newItem, TreeItem* parent )
{
    treeModel->addSubtree( newItem, parent );
}

/**
 * Hiding is done by TreeModelProxy, but the values of the hidden children have to
 * be added to the visible parent item.
 */
void
Tree::hideMinorValues( double threshold )
{
    QList<TreeItem*> items = top->getChildren();
    while ( !items.isEmpty() )
    {
        TreeItem* item = items.takeLast();

        if ( item->isCalculated() )
        {
            double maxValue = getMaxValue( item );
            bool   visible  =  item->getTotalValue() * 100 / maxValue >= threshold;
            item->setHidden( !visible );
        }
        else // if child values aren't calculated, the parent should remain expandable
        {
            item->setHidden( false );
        }

        if ( !item->isHidden() )
        {
            items.append( item->getChildren() );
        }
    }

    /* Ensure that no hidden elements remain selected before filtering is done, otherwise they automatically get deselected
     * while filtering is done and the handling of the emitted signals cause problems.
     * Deselect all hidden elements and select visible parents instead.
     */
    QList<TreeItem*> previousSelections = selectionList;
    foreach( TreeItem * item, previousSelections ) // select parent item of selected hidden items
    {
        TreeItem* parent = item;
        while ( parent && !parent->isHidden() )
        {
            parent = parent->getParent();
        }
        if ( parent )                              // item is hidden or has hidden parent
        {
            while ( parent && parent->isHidden() ) // search visible parent
            {
                parent = parent->getParent();
            }
            parent->select( true ); // first select then deselect because at least one selection is required
            item->deselect();
        }
    }
}

void
Tree::unhideItems()
{
    updateHidenItemsInSelectionList();
    foreach( TreeItem * item, treeItems )
    {
        item->setHidden( false );
    }
}


bool
Tree::hasUserDefinedMinMaxValues() const
{
    return userDefinedMinMaxValues;
}

double
Tree::getUserDefinedMinValue() const
{
    return userMinValue;
}

double
Tree::getUserDefinedMaxValue() const
{
    return userMaxValue;
}

void
Tree::unsetUserDefinedMinMaxValues()
{
    userDefinedMinMaxValues = false;
}

void
Tree::setUserDefinedMinMaxValues( double minValue, double maxValue )
{
    this->userDefinedMinMaxValues = true;
    this->userMinValue            = minValue;
    this->userMaxValue            = maxValue;
}

void
Tree::setFilter( FilterType filter, double threshold )
{
    activeFilter = filter;
    if ( filter == FILTER_NONE )
    {
        unhideItems();
    }
    else if ( threshold >= 0 )
    {
        hideMinorValues( threshold );
    }

    updateHidenItemsInSelectionList();
    updateItems(); // add value of hidden items to parent
}

int
Tree::getDepth()
{
    if ( maxDepth < 0 )
    {
        QList<TreeItem*> list;
        list.append( getRootItem() );
        while ( !list.isEmpty() )
        {
            TreeItem* item = list.takeFirst();
            if ( item->getDepth() > maxDepth )
            {
                maxDepth = item->getDepth();
            }
            list.append( item->getChildren() );
        }
    }
    return maxDepth;
}
