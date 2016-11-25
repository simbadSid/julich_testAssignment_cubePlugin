/****************************************************************************
** Meta object code from reading C++ file 'CubehelixColorMap.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "CubehelixColorMap.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CubehelixColorMap.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CubehelixColorMap[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_CubehelixColorMap[] = {
    "CubehelixColorMap\0"
};

void CubehelixColorMap::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData CubehelixColorMap::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CubehelixColorMap::staticMetaObject = {
    { &ColorMapExtended::staticMetaObject, qt_meta_stringdata_CubehelixColorMap,
      qt_meta_data_CubehelixColorMap, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CubehelixColorMap::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CubehelixColorMap::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CubehelixColorMap::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CubehelixColorMap))
        return static_cast<void*>(const_cast< CubehelixColorMap*>(this));
    return ColorMapExtended::qt_metacast(_clname);
}

int CubehelixColorMap::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ColorMapExtended::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_CubehelixPlot[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   15,   14,   14, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_CubehelixPlot[] = {
    "CubehelixPlot\0\0,\0"
    "markerChanged(ColorMapPlot::MarkersPositions::Position,double)\0"
};

void CubehelixPlot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CubehelixPlot *_t = static_cast<CubehelixPlot *>(_o);
        switch (_id) {
        case 0: _t->markerChanged((*reinterpret_cast< ColorMapPlot::MarkersPositions::Position(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CubehelixPlot::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CubehelixPlot::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CubehelixPlot,
      qt_meta_data_CubehelixPlot, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CubehelixPlot::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CubehelixPlot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CubehelixPlot::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CubehelixPlot))
        return static_cast<void*>(const_cast< CubehelixPlot*>(this));
    return QWidget::qt_metacast(_clname);
}

int CubehelixPlot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_CubehelixColorMapWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_CubehelixColorMapWidget[] = {
    "CubehelixColorMapWidget\0\0"
    "parameterChanged(QString)\0"
};

void CubehelixColorMapWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CubehelixColorMapWidget *_t = static_cast<CubehelixColorMapWidget *>(_o);
        switch (_id) {
        case 0: _t->parameterChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CubehelixColorMapWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CubehelixColorMapWidget::staticMetaObject = {
    { &ColorMapWidget::staticMetaObject, qt_meta_stringdata_CubehelixColorMapWidget,
      qt_meta_data_CubehelixColorMapWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CubehelixColorMapWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CubehelixColorMapWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CubehelixColorMapWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CubehelixColorMapWidget))
        return static_cast<void*>(const_cast< CubehelixColorMapWidget*>(this));
    return ColorMapWidget::qt_metacast(_clname);
}

int CubehelixColorMapWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ColorMapWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
