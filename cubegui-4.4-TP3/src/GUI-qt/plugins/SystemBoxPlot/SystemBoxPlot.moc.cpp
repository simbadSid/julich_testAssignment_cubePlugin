/****************************************************************************
** Meta object code from reading C++ file 'SystemBoxPlot.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "SystemBoxPlot.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SystemBoxPlot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SystemBoxPlot[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   15,   14,   14, 0x08,
      76,   72,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SystemBoxPlot[] = {
    "SystemBoxPlot\0\0order\0"
    "orderHasChanged(QList<cubepluginapi::DisplayType>)\0"
    "idx\0subsetChanged(int)\0"
};

void SystemBoxPlot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SystemBoxPlot *_t = static_cast<SystemBoxPlot *>(_o);
        switch (_id) {
        case 0: _t->orderHasChanged((*reinterpret_cast< const QList<cubepluginapi::DisplayType>(*)>(_a[1]))); break;
        case 1: _t->subsetChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SystemBoxPlot::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SystemBoxPlot::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SystemBoxPlot,
      qt_meta_data_SystemBoxPlot, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SystemBoxPlot::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SystemBoxPlot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SystemBoxPlot::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SystemBoxPlot))
        return static_cast<void*>(const_cast< SystemBoxPlot*>(this));
    if (!strcmp(_clname, "cubepluginapi::TabInterface"))
        return static_cast< cubepluginapi::TabInterface*>(const_cast< SystemBoxPlot*>(this));
    if (!strcmp(_clname, "cubepluginapi::CubePlugin"))
        return static_cast< cubepluginapi::CubePlugin*>(const_cast< SystemBoxPlot*>(this));
    if (!strcmp(_clname, PLUGIN_VERSION))
        return static_cast< cubepluginapi::CubePlugin*>(const_cast< SystemBoxPlot*>(this));
    return QObject::qt_metacast(_clname);
}

int SystemBoxPlot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE