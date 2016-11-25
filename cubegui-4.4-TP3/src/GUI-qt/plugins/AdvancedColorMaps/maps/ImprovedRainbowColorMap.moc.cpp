/****************************************************************************
** Meta object code from reading C++ file 'ImprovedRainbowColorMap.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ImprovedRainbowColorMap.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ImprovedRainbowColorMap.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ImprovedRainbowColorMap[] = {

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
      25,   24,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ImprovedRainbowColorMap[] = {
    "ImprovedRainbowColorMap\0\0"
    "schemeChanged(ImprovedRainbowColorMap::Schemes)\0"
};

void ImprovedRainbowColorMap::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ImprovedRainbowColorMap *_t = static_cast<ImprovedRainbowColorMap *>(_o);
        switch (_id) {
        case 0: _t->schemeChanged((*reinterpret_cast< ImprovedRainbowColorMap::Schemes(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ImprovedRainbowColorMap::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ImprovedRainbowColorMap::staticMetaObject = {
    { &ColorMapExtended::staticMetaObject, qt_meta_stringdata_ImprovedRainbowColorMap,
      qt_meta_data_ImprovedRainbowColorMap, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ImprovedRainbowColorMap::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ImprovedRainbowColorMap::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ImprovedRainbowColorMap::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ImprovedRainbowColorMap))
        return static_cast<void*>(const_cast< ImprovedRainbowColorMap*>(this));
    return ColorMapExtended::qt_metacast(_clname);
}

int ImprovedRainbowColorMap::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ColorMapExtended::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_ImprovedRainbowColorMapWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      31,   30,   30,   30, 0x05,

 // slots: signature, parameters, type, tag, flags
      79,   30,   30,   30, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ImprovedRainbowColorMapWidget[] = {
    "ImprovedRainbowColorMapWidget\0\0"
    "schemeChanged(ImprovedRainbowColorMap::Schemes)\0"
    "schemeChanged(int)\0"
};

void ImprovedRainbowColorMapWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ImprovedRainbowColorMapWidget *_t = static_cast<ImprovedRainbowColorMapWidget *>(_o);
        switch (_id) {
        case 0: _t->schemeChanged((*reinterpret_cast< ImprovedRainbowColorMap::Schemes(*)>(_a[1]))); break;
        case 1: _t->schemeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ImprovedRainbowColorMapWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ImprovedRainbowColorMapWidget::staticMetaObject = {
    { &ColorMapWidget::staticMetaObject, qt_meta_stringdata_ImprovedRainbowColorMapWidget,
      qt_meta_data_ImprovedRainbowColorMapWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ImprovedRainbowColorMapWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ImprovedRainbowColorMapWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ImprovedRainbowColorMapWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ImprovedRainbowColorMapWidget))
        return static_cast<void*>(const_cast< ImprovedRainbowColorMapWidget*>(this));
    return ColorMapWidget::qt_metacast(_clname);
}

int ImprovedRainbowColorMapWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ColorMapWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ImprovedRainbowColorMapWidget::schemeChanged(ImprovedRainbowColorMap::Schemes _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
