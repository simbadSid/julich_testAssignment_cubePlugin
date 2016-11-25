/****************************************************************************
** Meta object code from reading C++ file 'BarplotController.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "BarplotController.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BarplotController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BarsPlotAreaController[] = {

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
      29,   24,   23,   23, 0x0a,
      62,   23,   23,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_BarsPlotAreaController[] = {
    "BarsPlotAreaController\0\0data\0"
    "updateData(QList<CubeDataItem>&)\0"
    "reset()\0"
};

void BarsPlotAreaController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BarsPlotAreaController *_t = static_cast<BarsPlotAreaController *>(_o);
        switch (_id) {
        case 0: _t->updateData((*reinterpret_cast< QList<CubeDataItem>(*)>(_a[1]))); break;
        case 1: _t->reset(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BarsPlotAreaController::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BarsPlotAreaController::staticMetaObject = {
    { &AbstractPlotAreaController::staticMetaObject, qt_meta_stringdata_BarsPlotAreaController,
      qt_meta_data_BarsPlotAreaController, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BarsPlotAreaController::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BarsPlotAreaController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BarsPlotAreaController::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BarsPlotAreaController))
        return static_cast<void*>(const_cast< BarsPlotAreaController*>(this));
    return AbstractPlotAreaController::qt_metacast(_clname);
}

int BarsPlotAreaController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPlotAreaController::qt_metacall(_c, _id, _a);
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
