/****************************************************************************
** Meta object code from reading C++ file 'TabManager.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "TabManager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TabManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cubegui__TabManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x0a,
      48,   20,   20,   20, 0x0a,
      71,   66,   20,   20, 0x08,
     109,   95,   20,   20, 0x08,
     142,   66,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cubegui__TabManager[] = {
    "cubegui::TabManager\0\0updateTreeItemProperties()\0"
    "updateTreeItems()\0tree\0treeItemSelected(Tree*)\0"
    "item,expanded\0treeItemExpanded(TreeItem*,bool)\0"
    "recalculateTree(Tree*)\0"
};

void cubegui::TabManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TabManager *_t = static_cast<TabManager *>(_o);
        switch (_id) {
        case 0: _t->updateTreeItemProperties(); break;
        case 1: _t->updateTreeItems(); break;
        case 2: _t->treeItemSelected((*reinterpret_cast< Tree*(*)>(_a[1]))); break;
        case 3: _t->treeItemExpanded((*reinterpret_cast< TreeItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->recalculateTree((*reinterpret_cast< Tree*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cubegui::TabManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cubegui::TabManager::staticMetaObject = {
    { &QSplitter::staticMetaObject, qt_meta_stringdata_cubegui__TabManager,
      qt_meta_data_cubegui__TabManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cubegui::TabManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cubegui::TabManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cubegui::TabManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cubegui__TabManager))
        return static_cast<void*>(const_cast< TabManager*>(this));
    return QSplitter::qt_metacast(_clname);
}

int cubegui::TabManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSplitter::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
