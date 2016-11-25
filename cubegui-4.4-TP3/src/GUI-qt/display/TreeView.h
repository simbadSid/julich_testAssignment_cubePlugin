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


#ifndef TREEVIEW_H
#define TREEVIEW_H

#include <QTreeView>
#include <QHeaderView>
#include <QMenu>
#include <QStyledItemDelegate>

#include "TabInterface.h"
#include "TreeModel.h"
#include "PluginServices.h"
#include "SettingsHandler.h"

namespace cubegui
{
class HelpBrowser;
class TreeItem;
class InfoWidget;

/**
 * @brief The TreeItemDelegate class is responsible for the drawing of the tree items
 */
class TreeItemDelegate : public QStyledItemDelegate
{
public:
    virtual QSize
    sizeHint( const QStyleOptionViewItem& option,
              const QModelIndex&          index ) const;
    virtual void
    paint( QPainter*                   painter,
           const QStyleOptionViewItem& option,
           const QModelIndex&          index ) const;

private:
    const static int iconPad = 2; // space left to the icon

    QPixmap
    createIcon( TreeItem* item,
                int       iconSize,
                bool      gray ) const;
    void
    paintMarker( QPainter*    painter,
                 const QRect& textRect,
                 TreeItem*    item ) const;
};

/**
 * @brief TreeView is a graphical representation of the Tree class.
 * The mapping is done with treeModel which inherits from QAbstractItemModel.
 */
class TreeView : public QTreeView, public TabInterface, public SettingsHandler
{
    Q_OBJECT
public:
    /**
     * @param modelInterface contains a QAbstractItemModel e.g. QSortFilterProxyModel. It will be deleted in destructor.
     * @param tabLabel the label of the QTabWidget in the view
     */
    TreeView( TreeModelInterface* modelInterface,
              const QString&      tabLabel );
    ~TreeView();

    // implementation of TabInterface
    virtual QWidget*
    widget();
    virtual QString
    label() const;
    virtual QIcon
    icon() const;

    /** calls updateValues on the model */
    void
    updateValues();

    void
        valueModusChanged( ValueModus );
    // end implementation of TabInterface

    /** called if current Tab becomes active or inactive */
    virtual void
    setActive( bool );

    void
    setIcon( const QIcon& icon );

    /** returns the tree that belongs to the model of the view */
    Tree*
    getTree() const;

    /** inserts a menu item from a plugin into the context menu below the tree menu items */
    void
    insertPluginMenuItem( QAction* pluginAction );

    void
    loadExperimentSettings( QSettings& );

    void
    saveExperimentSettings( QSettings& );

    void
    loadStatus( QSettings& settings );

    /** @brief TreeView::saveStatus
     * Saves the tree status to the given settings. The tree items are identified by their name, not by their
     * index (@see saveExperimentSettings). This function is used to send the tree status to Clipboard */
    void
    saveStatus( QSettings& settings );

    void
    mousePressEvent( QMouseEvent* event );

    /** @brief TreeView::saveExperimentSettingsByName
     *  @param settings
     *  Saves the tree settings. It identifies the tree items not by index but by the name of the item and its parents.
     */

    /** selects all items that match the given string */
    void
    selectAll( const QString& itemName,
               bool           clear );
    bool
    hasUserDefinedMinMaxValues() const;
    void
    setUserDefinedMinMaxValues( bool value );

    virtual void
    selectionChanged( const QItemSelection& selected,
                      const QItemSelection& deselected );

    QSize
    sizeHint() const;

    QString
    settingName();

    QModelIndexList
    convertToModelIndexList( QList<TreeItem*> items );

protected:
    virtual QString
    getContextDescription( TreeItem* item ) = 0;
    void
    paintEvent( QPaintEvent* event );

signals:
    /** this signal is emitted, if the selected items have been changed */
    void
    selectionChanged( Tree* tree );

    /** this signal is emitted, if the item has been expanded (expanded = true) or collapsed */
    void
    itemExpanded( TreeItem* item,
                  bool      expanded );

    /** this signal is emitted, if the currenly displayed values have to be recalculated */
    void
    recalculateRequest( Tree* tree );

public slots:
    /** selects the given tree item. If add is false, the previous selection is cleared */
    void
    selectItem( TreeItem* item,
                bool      add );

    /** expands the given tree item if expand is true, otherwise the item is collapsed */
    void
    expandItem( TreeItem* item,
                bool      expand );

    /** de selects the given tree item */
    void
    deselectItem( TreeItem* item );

    /** shows documentation about the recently selected item */
    void
    onShowDocumentation();

    /** shows a dialog set set minimum and maximum value for coloring */
    void
    onMinMaxValues();

    void
    filteringEnded();

private slots:
    void
    itemExpanded( QModelIndex index );
    void
    itemCollapsed( QModelIndex index );

    // ====== context menu =======
    void
    onCollapseAll();
    void
    onCustomContextMenu( const QPoint& point );
    void
    contextMenuClosed();
    void
    onExpandAll();
    void
    onExpandSubtree();
    void
    onExpandLargest();
    void
    onExpandMarked();
    void
    onCollapseSubtree();
    void
    onCopyToClipboard();
    void
    onHidingThreshold();
    void
    onHiding( bool askThreshold = true );
    void
    onHideItem();
    void
    onUnhideItem();
    void
    onDisableHiding();
    void
    onFindItems();
    void
    onUnmarkItems();
    void
    onInfo();
    void
    onUnhideTreeLevel();
    void
    onHideTreeLevel();
    void
    onSortByName();
    void
    onSortByInclusiveValue();
    void
    onSortByExclusiveValue();
    void
    onDisableSorting();
    bool
    synchronizationIsDefault();

protected:
    QIcon               icon_;
    QString             tabLabel;
    TreeModelInterface* modelInterface;
    QList<QAction*>     pluginActions;    // menu items of the context menu which have been created by plugins
    QMenu*              contextMenu;      // top level context menu of tree items
    TreeItem*           contextMenuItem;  // item on which the context menu is activated
    bool                contextIsInvalid; // true, if a child and its parent are selected
    bool                multipleContext;  // true, if the contextMenuItem is part of more than one selected items
    double              userMinValue;     // user defined minimum value
    double              userMaxValue;     // user defined maximum value

    enum ContextMenuAction
    {
        TreeItemInfo, ExpandMenu, ExpandAll, CollapseAll, ExpandClicked, CollapseClicked, ExpandLargest,
        ExpandMarked, CollapseSubtree, ExpandSubtree, FindItems, ClearFound, CopyClipboard,
        HidingThreshold, DynamicHiding, StaticHiding, NoHiding, HideItem, UnhideItem, Documentation,
        SortByName, SortByInclusiveValue, SortByExclusiveValue, DisableSorting, SortingMenu, UserDefinedMinMax,
        HideTreeLevel, UnhideTreeLevel
    };
    QHash <ContextMenuAction, QAction*> contextMenuHash;

    virtual void
    fillContextMenu();

    /** return false, if additional items cannot not be selected, eg. overwritten by metric tree to check if the units are compatible */
    virtual bool
    selectionIsValid( QList<TreeItem*>& list,
                      TreeItem* );

private:
    double            hidingThreshold; // save user input for next input dialog
    HelpBrowser*      helpBrowser;
    TreeItemDelegate* delegate;        // paints the tree items

    static InfoWidget* infoWidget;     // widget to display additional information about selected tree items
    void
    generateContextActions();
    void
    expandSubtree( TreeItem* item,
                   bool      expand );
    void
    expandLargest( TreeItem* item );
    double
    getHidingThreshold( TreeItem* item,
                        bool&     ok );
    void
    updateContextMenu();
    void
    updateInfoWidget( TreeItem* item );
    QModelIndex
    convertQVariantToIndex( QList<QVariant> list );
    QString
    modelIndexToPath( const QModelIndex& idx ) const;
    void
    setCollapsedExpanded( const QList<QModelIndex>& changed );
    void
    getExpandedTreeItemList( const QList<QVariant>& expandedItemsText,
                             QModelIndex            current,
                             int                    level,
                             QList<QModelIndex>&    expandedItems );

    QList<QModelIndex>
    getCollapseExpandChanges( const QList<QVariant>& expandedItems );
    void
    updateExpandedCollapsedStatus();
    void
    updateSelectionStatus();
};
}
#endif // TREEVIEW_H
