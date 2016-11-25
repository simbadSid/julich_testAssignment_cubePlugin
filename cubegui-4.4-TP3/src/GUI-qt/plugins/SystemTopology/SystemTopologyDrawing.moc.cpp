/****************************************************************************
** Meta object code from reading C++ file 'SystemTopologyDrawing.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "SystemTopologyDrawing.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SystemTopologyDrawing.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SystemTopologyDrawing[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x0a,
      39,   22,   22,   22, 0x0a,
      63,   56,   22,   22, 0x0a,
      89,   82,   22,   22, 0x0a,
     111,  104,   22,   22, 0x0a,
     132,  126,   22,   22, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SystemTopologyDrawing[] = {
    "SystemTopologyDrawing\0\0updateDrawing()\0"
    "rescaleDrawing()\0factor\0changeZoom(double)\0"
    "xangle\0setXAngle(int)\0yangle\0"
    "setYAngle(int)\0dx,dy\0move(int,int)\0"
};

void SystemTopologyDrawing::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SystemTopologyDrawing *_t = static_cast<SystemTopologyDrawing *>(_o);
        switch (_id) {
        case 0: _t->updateDrawing(); break;
        case 1: _t->rescaleDrawing(); break;
        case 2: _t->changeZoom((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->setXAngle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setYAngle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->move((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SystemTopologyDrawing::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SystemTopologyDrawing::staticMetaObject = {
    { &SystemTopologyView::staticMetaObject, qt_meta_stringdata_SystemTopologyDrawing,
      qt_meta_data_SystemTopologyDrawing, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SystemTopologyDrawing::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SystemTopologyDrawing::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SystemTopologyDrawing::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SystemTopologyDrawing))
        return static_cast<void*>(const_cast< SystemTopologyDrawing*>(this));
    return SystemTopologyView::qt_metacast(_clname);
}

int SystemTopologyDrawing::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SystemTopologyView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
