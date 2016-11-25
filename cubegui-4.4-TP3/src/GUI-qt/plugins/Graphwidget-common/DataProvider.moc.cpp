/****************************************************************************
** Meta object code from reading C++ file 'DataProvider.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "DataProvider.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DataProvider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DataProvider[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   14,   13,   13, 0x05,
      44,   39,   13,   13, 0x05,
     116,   78,   13,   13, 0x05,
     203,   13,   13,   13, 0x05,
     220,   13,   13,   13, 0x05,
     256,  237,   13,   13, 0x05,
     326,  284,   13,   13, 0x05,
     359,  284,   13,   13, 0x05,
     394,  284,   13,   13, 0x05,
     429,   13,   13,   13, 0x05,
     465,   13,   13,   13, 0x05,
     503,  501,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     531,   13,   13,   13, 0x0a,
     554,   13,   13,   13, 0x0a,
     589,  572,   13,   13, 0x0a,
     638,  621,   13,   13, 0x0a,
     670,   13,   13,   13, 0x0a,
     691,   13,   13,   13, 0x0a,
     712,   13,   13,   13, 0x0a,
     733,   13,   13,   13, 0x0a,
     746,   13,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DataProvider[] = {
    "DataProvider\0\0str\0information(QString)\0"
    "data\0dataUpdated(QList<CubeDataItem>&)\0"
    "heatMap,heatMapMin,heatMapMax,service\0"
    "heatMapUpdated(QVector<QVector<double> >,double,double,cubepluginapi::"
    "PluginServices*)\0"
    "heatMapDisable()\0barPlotDisable()\0"
    "newClaibratestatus\0changeCalibrateStatus(bool)\0"
    "newMinimumLimitValue,newMaximumLimitValue\0"
    "limitsHaveChanged(double,double)\0"
    "vLimitsHaveChangedHeatmap(int,int)\0"
    "hLimitsHaveChangedHeatmap(int,int)\0"
    "maxValueIsCalculatedAutomatically()\0"
    "minValueIsCalculatedAutomatically()\0"
    "c\0updateColorCombobox(QColor)\0"
    "setAddMetricSettings()\0changePlotColor()\0"
    "newLimitMaxValue\0setCurrentLimitMaxValue(double)\0"
    "newLimitMinValue\0setCurrentLimitMinValue(double)\0"
    "resetLimitMaxValue()\0resetLimitMinValue()\0"
    "printMemoryContent()\0clearCache()\0"
    "DisableBarPlot()\0"
};

void DataProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DataProvider *_t = static_cast<DataProvider *>(_o);
        switch (_id) {
        case 0: _t->information((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->dataUpdated((*reinterpret_cast< QList<CubeDataItem>(*)>(_a[1]))); break;
        case 2: _t->heatMapUpdated((*reinterpret_cast< QVector<QVector<double> >(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< cubepluginapi::PluginServices*(*)>(_a[4]))); break;
        case 3: _t->heatMapDisable(); break;
        case 4: _t->barPlotDisable(); break;
        case 5: _t->changeCalibrateStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->limitsHaveChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 7: _t->vLimitsHaveChangedHeatmap((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->hLimitsHaveChangedHeatmap((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->maxValueIsCalculatedAutomatically(); break;
        case 10: _t->minValueIsCalculatedAutomatically(); break;
        case 11: _t->updateColorCombobox((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 12: _t->setAddMetricSettings(); break;
        case 13: _t->changePlotColor(); break;
        case 14: _t->setCurrentLimitMaxValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 15: _t->setCurrentLimitMinValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 16: _t->resetLimitMaxValue(); break;
        case 17: _t->resetLimitMinValue(); break;
        case 18: _t->printMemoryContent(); break;
        case 19: _t->clearCache(); break;
        case 20: _t->DisableBarPlot(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DataProvider::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DataProvider::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DataProvider,
      qt_meta_data_DataProvider, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DataProvider::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DataProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DataProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DataProvider))
        return static_cast<void*>(const_cast< DataProvider*>(this));
    return QObject::qt_metacast(_clname);
}

int DataProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void DataProvider::information(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DataProvider::dataUpdated(QList<CubeDataItem> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DataProvider::heatMapUpdated(QVector<QVector<double> > _t1, double _t2, double _t3, cubepluginapi::PluginServices * _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DataProvider::heatMapDisable()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void DataProvider::barPlotDisable()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void DataProvider::changeCalibrateStatus(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void DataProvider::limitsHaveChanged(double _t1, double _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void DataProvider::vLimitsHaveChangedHeatmap(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void DataProvider::hLimitsHaveChangedHeatmap(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void DataProvider::maxValueIsCalculatedAutomatically()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}

// SIGNAL 10
void DataProvider::minValueIsCalculatedAutomatically()
{
    QMetaObject::activate(this, &staticMetaObject, 10, 0);
}

// SIGNAL 11
void DataProvider::updateColorCombobox(QColor _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
QT_END_MOC_NAMESPACE
