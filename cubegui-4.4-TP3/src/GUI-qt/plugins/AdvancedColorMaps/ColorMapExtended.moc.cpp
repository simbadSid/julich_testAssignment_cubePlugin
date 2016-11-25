/****************************************************************************
** Meta object code from reading C++ file 'ColorMapExtended.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ColorMapExtended.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ColorMapExtended.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ColorMapExtended[] = {

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

static const char qt_meta_stringdata_ColorMapExtended[] = {
    "ColorMapExtended\0"
};

void ColorMapExtended::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ColorMapExtended::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ColorMapExtended::staticMetaObject = {
    { &cubegui::ColorMap::staticMetaObject, qt_meta_stringdata_ColorMapExtended,
      qt_meta_data_ColorMapExtended, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ColorMapExtended::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ColorMapExtended::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ColorMapExtended::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ColorMapExtended))
        return static_cast<void*>(const_cast< ColorMapExtended*>(this));
    typedef cubegui::ColorMap QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int ColorMapExtended::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef cubegui::ColorMap QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_ColorMapWidget[] = {

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
      18,   16,   15,   15, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ColorMapWidget[] = {
    "ColorMapWidget\0\0,\0"
    "processColorChanged(ColorMapPlot::Color,QColor)\0"
};

void ColorMapWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ColorMapWidget *_t = static_cast<ColorMapWidget *>(_o);
        switch (_id) {
        case 0: _t->processColorChanged((*reinterpret_cast< ColorMapPlot::Color(*)>(_a[1])),(*reinterpret_cast< const QColor(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ColorMapWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ColorMapWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ColorMapWidget,
      qt_meta_data_ColorMapWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ColorMapWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ColorMapWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ColorMapWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ColorMapWidget))
        return static_cast<void*>(const_cast< ColorMapWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int ColorMapWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
