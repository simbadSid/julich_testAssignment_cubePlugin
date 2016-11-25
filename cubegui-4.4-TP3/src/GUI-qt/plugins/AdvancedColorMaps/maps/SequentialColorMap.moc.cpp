/****************************************************************************
** Meta object code from reading C++ file 'SequentialColorMap.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "SequentialColorMap.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SequentialColorMap.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SequentialColorMap[] = {

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

static const char qt_meta_stringdata_SequentialColorMap[] = {
    "SequentialColorMap\0"
};

void SequentialColorMap::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SequentialColorMap::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SequentialColorMap::staticMetaObject = {
    { &ColorMapExtended::staticMetaObject, qt_meta_stringdata_SequentialColorMap,
      qt_meta_data_SequentialColorMap, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SequentialColorMap::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SequentialColorMap::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SequentialColorMap::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SequentialColorMap))
        return static_cast<void*>(const_cast< SequentialColorMap*>(this));
    return ColorMapExtended::qt_metacast(_clname);
}

int SequentialColorMap::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ColorMapExtended::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_SequentialColorMapWidget[] = {

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
      26,   25,   25,   25, 0x09,
      54,   25,   25,   25, 0x09,
      94,   86,   25,   25, 0x09,
     142,   25,   25,   25, 0x09,
     166,   25,   25,   25, 0x09,
     193,   25,   25,   25, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_SequentialColorMapWidget[] = {
    "SequentialColorMapWidget\0\0"
    "definitionMethodUpdate(int)\0"
    "interpolationMethodChanged(int)\0pos,col\0"
    "processColorChanged(ColorMapPlot::Color,QColor)\0"
    "addColorMapButton(bool)\0"
    "removeColorMapButton(bool)\0"
    "reloadColorMapButton(bool)\0"
};

void SequentialColorMapWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SequentialColorMapWidget *_t = static_cast<SequentialColorMapWidget *>(_o);
        switch (_id) {
        case 0: _t->definitionMethodUpdate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->interpolationMethodChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->processColorChanged((*reinterpret_cast< ColorMapPlot::Color(*)>(_a[1])),(*reinterpret_cast< const QColor(*)>(_a[2]))); break;
        case 3: _t->addColorMapButton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->removeColorMapButton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->reloadColorMapButton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SequentialColorMapWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SequentialColorMapWidget::staticMetaObject = {
    { &ColorMapWidget::staticMetaObject, qt_meta_stringdata_SequentialColorMapWidget,
      qt_meta_data_SequentialColorMapWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SequentialColorMapWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SequentialColorMapWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SequentialColorMapWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SequentialColorMapWidget))
        return static_cast<void*>(const_cast< SequentialColorMapWidget*>(this));
    return ColorMapWidget::qt_metacast(_clname);
}

int SequentialColorMapWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ColorMapWidget::qt_metacall(_c, _id, _a);
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
