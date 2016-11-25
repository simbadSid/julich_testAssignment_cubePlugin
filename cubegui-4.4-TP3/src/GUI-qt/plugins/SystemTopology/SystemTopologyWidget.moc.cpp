/****************************************************************************
** Meta object code from reading C++ file 'SystemTopologyWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "SystemTopologyWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SystemTopologyWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SystemTopologyWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   22,   21,   21, 0x05,
      47,   22,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
      70,   66,   21,   21, 0x08,
      83,   66,   21,   21, 0x08,
     106,   96,   21,   21, 0x08,
     181,  172,   21,   21, 0x0a,
     228,  223,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SystemTopologyWidget[] = {
    "SystemTopologyWidget\0\0angle\0"
    "xAngleChanged(int)\0yAngleChanged(int)\0"
    "val\0vscroll(int)\0hscroll(int)\0type,item\0"
    "handleSelection(cubepluginapi::TreeType,cubepluginapi::TreeItem*)\0"
    "item,add\0selectItem(cubepluginapi::TreeItem*,bool)\0"
    "size\0setSize(QSize)\0"
};

void SystemTopologyWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SystemTopologyWidget *_t = static_cast<SystemTopologyWidget *>(_o);
        switch (_id) {
        case 0: _t->xAngleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->yAngleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->vscroll((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->hscroll((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->handleSelection((*reinterpret_cast< cubepluginapi::TreeType(*)>(_a[1])),(*reinterpret_cast< cubepluginapi::TreeItem*(*)>(_a[2]))); break;
        case 5: _t->selectItem((*reinterpret_cast< cubepluginapi::TreeItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->setSize((*reinterpret_cast< const QSize(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SystemTopologyWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SystemTopologyWidget::staticMetaObject = {
    { &QSplitter::staticMetaObject, qt_meta_stringdata_SystemTopologyWidget,
      qt_meta_data_SystemTopologyWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SystemTopologyWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SystemTopologyWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SystemTopologyWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SystemTopologyWidget))
        return static_cast<void*>(const_cast< SystemTopologyWidget*>(this));
    if (!strcmp(_clname, "cubepluginapi::TabInterface"))
        return static_cast< cubepluginapi::TabInterface*>(const_cast< SystemTopologyWidget*>(this));
    return QSplitter::qt_metacast(_clname);
}

int SystemTopologyWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSplitter::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void SystemTopologyWidget::xAngleChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SystemTopologyWidget::yAngleChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
