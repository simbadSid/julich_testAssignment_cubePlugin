/****************************************************************************
** Meta object code from reading C++ file 'TreeView.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "TreeView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TreeView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cubegui__TreeView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      36,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   19,   18,   18, 0x05,
      62,   48,   18,   18, 0x05,
      91,   19,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
     126,  117,   18,   18, 0x0a,
     165,  153,   18,   18, 0x0a,
     197,  192,   18,   18, 0x0a,
     221,   18,   18,   18, 0x0a,
     243,   18,   18,   18, 0x0a,
     260,   18,   18,   18, 0x0a,
     283,  277,   18,   18, 0x08,
     309,  277,   18,   18, 0x08,
     336,   18,   18,   18, 0x08,
     358,  352,   18,   18, 0x08,
     386,   18,   18,   18, 0x08,
     406,   18,   18,   18, 0x08,
     420,   18,   18,   18, 0x08,
     438,   18,   18,   18, 0x08,
     456,   18,   18,   18, 0x08,
     473,   18,   18,   18, 0x08,
     493,   18,   18,   18, 0x08,
     513,   18,   18,   18, 0x08,
     546,  533,   18,   18, 0x08,
     561,   18,   18,   18, 0x28,
     572,   18,   18,   18, 0x08,
     585,   18,   18,   18, 0x08,
     600,   18,   18,   18, 0x08,
     618,   18,   18,   18, 0x08,
     632,   18,   18,   18, 0x08,
     648,   18,   18,   18, 0x08,
     657,   18,   18,   18, 0x08,
     677,   18,   18,   18, 0x08,
     695,   18,   18,   18, 0x08,
     710,   18,   18,   18, 0x08,
     735,   18,   18,   18, 0x08,
     760,   18,   18,   18, 0x08,
     784,   18,  779,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cubegui__TreeView[] = {
    "cubegui::TreeView\0\0tree\0selectionChanged(Tree*)\0"
    "item,expanded\0itemExpanded(TreeItem*,bool)\0"
    "recalculateRequest(Tree*)\0item,add\0"
    "selectItem(TreeItem*,bool)\0item,expand\0"
    "expandItem(TreeItem*,bool)\0item\0"
    "deselectItem(TreeItem*)\0onShowDocumentation()\0"
    "onMinMaxValues()\0filteringEnded()\0"
    "index\0itemExpanded(QModelIndex)\0"
    "itemCollapsed(QModelIndex)\0onCollapseAll()\0"
    "point\0onCustomContextMenu(QPoint)\0"
    "contextMenuClosed()\0onExpandAll()\0"
    "onExpandSubtree()\0onExpandLargest()\0"
    "onExpandMarked()\0onCollapseSubtree()\0"
    "onCopyToClipboard()\0onHidingThreshold()\0"
    "askThreshold\0onHiding(bool)\0onHiding()\0"
    "onHideItem()\0onUnhideItem()\0"
    "onDisableHiding()\0onFindItems()\0"
    "onUnmarkItems()\0onInfo()\0onUnhideTreeLevel()\0"
    "onHideTreeLevel()\0onSortByName()\0"
    "onSortByInclusiveValue()\0"
    "onSortByExclusiveValue()\0onDisableSorting()\0"
    "bool\0synchronizationIsDefault()\0"
};

void cubegui::TreeView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TreeView *_t = static_cast<TreeView *>(_o);
        switch (_id) {
        case 0: _t->selectionChanged((*reinterpret_cast< Tree*(*)>(_a[1]))); break;
        case 1: _t->itemExpanded((*reinterpret_cast< TreeItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->recalculateRequest((*reinterpret_cast< Tree*(*)>(_a[1]))); break;
        case 3: _t->selectItem((*reinterpret_cast< TreeItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->expandItem((*reinterpret_cast< TreeItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: _t->deselectItem((*reinterpret_cast< TreeItem*(*)>(_a[1]))); break;
        case 6: _t->onShowDocumentation(); break;
        case 7: _t->onMinMaxValues(); break;
        case 8: _t->filteringEnded(); break;
        case 9: _t->itemExpanded((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 10: _t->itemCollapsed((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 11: _t->onCollapseAll(); break;
        case 12: _t->onCustomContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 13: _t->contextMenuClosed(); break;
        case 14: _t->onExpandAll(); break;
        case 15: _t->onExpandSubtree(); break;
        case 16: _t->onExpandLargest(); break;
        case 17: _t->onExpandMarked(); break;
        case 18: _t->onCollapseSubtree(); break;
        case 19: _t->onCopyToClipboard(); break;
        case 20: _t->onHidingThreshold(); break;
        case 21: _t->onHiding((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->onHiding(); break;
        case 23: _t->onHideItem(); break;
        case 24: _t->onUnhideItem(); break;
        case 25: _t->onDisableHiding(); break;
        case 26: _t->onFindItems(); break;
        case 27: _t->onUnmarkItems(); break;
        case 28: _t->onInfo(); break;
        case 29: _t->onUnhideTreeLevel(); break;
        case 30: _t->onHideTreeLevel(); break;
        case 31: _t->onSortByName(); break;
        case 32: _t->onSortByInclusiveValue(); break;
        case 33: _t->onSortByExclusiveValue(); break;
        case 34: _t->onDisableSorting(); break;
        case 35: { bool _r = _t->synchronizationIsDefault();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cubegui::TreeView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cubegui::TreeView::staticMetaObject = {
    { &QTreeView::staticMetaObject, qt_meta_stringdata_cubegui__TreeView,
      qt_meta_data_cubegui__TreeView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cubegui::TreeView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cubegui::TreeView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cubegui::TreeView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cubegui__TreeView))
        return static_cast<void*>(const_cast< TreeView*>(this));
    if (!strcmp(_clname, "TabInterface"))
        return static_cast< TabInterface*>(const_cast< TreeView*>(this));
    if (!strcmp(_clname, "SettingsHandler"))
        return static_cast< SettingsHandler*>(const_cast< TreeView*>(this));
    return QTreeView::qt_metacast(_clname);
}

int cubegui::TreeView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 36)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 36;
    }
    return _id;
}

// SIGNAL 0
void cubegui::TreeView::selectionChanged(Tree * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void cubegui::TreeView::itemExpanded(TreeItem * _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void cubegui::TreeView::recalculateRequest(Tree * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
