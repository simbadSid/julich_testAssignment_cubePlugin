/****************************************************************************
** Meta object code from reading C++ file 'Tree.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Tree.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Tree.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cubegui__Tree[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   15,   14,   14, 0x05,
      76,   56,   14,   14, 0x05,
     110,  105,   14,   14, 0x25,
     134,  105,   14,   14, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_cubegui__Tree[] = {
    "cubegui::Tree\0\0item,expand\0"
    "itemExpanded(TreeItem*,bool)\0"
    "item,addToSelection\0itemSelected(TreeItem*,bool)\0"
    "item\0itemSelected(TreeItem*)\0"
    "itemDeselected(TreeItem*)\0"
};

void cubegui::Tree::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Tree *_t = static_cast<Tree *>(_o);
        switch (_id) {
        case 0: _t->itemExpanded((*reinterpret_cast< TreeItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->itemSelected((*reinterpret_cast< TreeItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->itemSelected((*reinterpret_cast< TreeItem*(*)>(_a[1]))); break;
        case 3: _t->itemDeselected((*reinterpret_cast< TreeItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cubegui::Tree::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cubegui::Tree::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_cubegui__Tree,
      qt_meta_data_cubegui__Tree, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cubegui::Tree::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cubegui::Tree::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cubegui::Tree::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cubegui__Tree))
        return static_cast<void*>(const_cast< Tree*>(this));
    return QObject::qt_metacast(_clname);
}

int cubegui::Tree::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void cubegui::Tree::itemExpanded(TreeItem * _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void cubegui::Tree::itemSelected(TreeItem * _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 3
void cubegui::Tree::itemDeselected(TreeItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
