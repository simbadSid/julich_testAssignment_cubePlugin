/****************************************************************************
** Meta object code from reading C++ file 'HeatmapController.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "HeatmapController.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HeatmapController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_HeatMapPlotAreaController[] = {

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
      56,   27,   26,   26, 0x0a,
     165,  143,  136,   26, 0x0a,
     182,   26,   26,   26, 0x0a,
     207,  190,   26,   26, 0x0a,
     236,   26,  232,   26, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_HeatMapPlotAreaController[] = {
    "HeatMapPlotAreaController\0\0"
    "data,dataMin,dataMax,service\0"
    "setData(QVector<QVector<double> >,double,double,cubepluginapi::PluginS"
    "ervices*)\0"
    "double\0processId,iterationId\0"
    "getData(int,int)\0reset()\0legendItemsCount\0"
    "setLegendItemsCount(int)\0int\0"
    "getLegendItemsCount()\0"
};

void HeatMapPlotAreaController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        HeatMapPlotAreaController *_t = static_cast<HeatMapPlotAreaController *>(_o);
        switch (_id) {
        case 0: _t->setData((*reinterpret_cast< QVector<QVector<double> >(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< cubepluginapi::PluginServices*(*)>(_a[4]))); break;
        case 1: { double _r = _t->getData((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 2: _t->reset(); break;
        case 3: _t->setLegendItemsCount((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: { int _r = _t->getLegendItemsCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData HeatMapPlotAreaController::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject HeatMapPlotAreaController::staticMetaObject = {
    { &AbstractPlotAreaController::staticMetaObject, qt_meta_stringdata_HeatMapPlotAreaController,
      qt_meta_data_HeatMapPlotAreaController, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &HeatMapPlotAreaController::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *HeatMapPlotAreaController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *HeatMapPlotAreaController::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HeatMapPlotAreaController))
        return static_cast<void*>(const_cast< HeatMapPlotAreaController*>(this));
    return AbstractPlotAreaController::qt_metacast(_clname);
}

int HeatMapPlotAreaController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPlotAreaController::qt_metacall(_c, _id, _a);
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
