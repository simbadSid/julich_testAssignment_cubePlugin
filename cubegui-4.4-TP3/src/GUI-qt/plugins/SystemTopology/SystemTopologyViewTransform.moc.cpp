/****************************************************************************
** Meta object code from reading C++ file 'SystemTopologyViewTransform.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "SystemTopologyViewTransform.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SystemTopologyViewTransform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SystemTopologyViewTransform[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      29,   28,   28,   28, 0x05,
      46,   28,   28,   28, 0x05,
      67,   60,   28,   28, 0x05,
      87,   28,   28,   28, 0x05,
     106,   28,   28,   28, 0x05,
     127,  125,   28,   28, 0x05,

 // slots: signature, parameters, type, tag, flags
     152,   28,   28,   28, 0x0a,
     176,   28,   28,   28, 0x0a,
     212,  200,   28,   28, 0x0a,
     226,   28,   28,   28, 0x2a,
     242,  236,   28,   28, 0x0a,
     257,  236,   28,   28, 0x0a,
     272,   28,   28,   28, 0x0a,
     281,   28,   28,   28, 0x0a,
     291,   28,   28,   28, 0x0a,
     302,   28,   28,   28, 0x0a,
     311,   28,   28,   28, 0x0a,
     323,   28,   28,   28, 0x0a,
     334,   28,   28,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SystemTopologyViewTransform[] = {
    "SystemTopologyViewTransform\0\0"
    "rescaleRequest()\0viewChanged()\0factor\0"
    "zoomChanged(double)\0xAngleChanged(int)\0"
    "yAngleChanged(int)\0,\0positionChanged(int,int)\0"
    "increasePlaneDistance()\0decreasePlaneDistance()\0"
    "resetValues\0rescale(bool)\0rescale()\0"
    "angle\0setXAngle(int)\0setYAngle(int)\0"
    "zoomIn()\0zoomOut()\0moveDown()\0moveUp()\0"
    "moveRight()\0moveLeft()\0redraw()\0"
};

void SystemTopologyViewTransform::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SystemTopologyViewTransform *_t = static_cast<SystemTopologyViewTransform *>(_o);
        switch (_id) {
        case 0: _t->rescaleRequest(); break;
        case 1: _t->viewChanged(); break;
        case 2: _t->zoomChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->xAngleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->yAngleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->positionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->increasePlaneDistance(); break;
        case 7: _t->decreasePlaneDistance(); break;
        case 8: _t->rescale((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->rescale(); break;
        case 10: _t->setXAngle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->setYAngle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->zoomIn(); break;
        case 13: _t->zoomOut(); break;
        case 14: _t->moveDown(); break;
        case 15: _t->moveUp(); break;
        case 16: _t->moveRight(); break;
        case 17: _t->moveLeft(); break;
        case 18: _t->redraw(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SystemTopologyViewTransform::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SystemTopologyViewTransform::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SystemTopologyViewTransform,
      qt_meta_data_SystemTopologyViewTransform, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SystemTopologyViewTransform::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SystemTopologyViewTransform::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SystemTopologyViewTransform::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SystemTopologyViewTransform))
        return static_cast<void*>(const_cast< SystemTopologyViewTransform*>(this));
    return QObject::qt_metacast(_clname);
}

int SystemTopologyViewTransform::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void SystemTopologyViewTransform::rescaleRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void SystemTopologyViewTransform::viewChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void SystemTopologyViewTransform::zoomChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SystemTopologyViewTransform::xAngleChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SystemTopologyViewTransform::yAngleChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void SystemTopologyViewTransform::positionChanged(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
