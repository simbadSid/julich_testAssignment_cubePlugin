/****************************************************************************
** Meta object code from reading C++ file 'Coloring.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Coloring.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Coloring.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cubegui__DefaultColorMap[] = {

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
      26,   25,   25,   25, 0x05,

 // slots: signature, parameters, type, tag, flags
      44,   25,   25,   25, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cubegui__DefaultColorMap[] = {
    "cubegui::DefaultColorMap\0\0colorMapChanged()\0"
    "onColorMapChanged()\0"
};

void cubegui::DefaultColorMap::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DefaultColorMap *_t = static_cast<DefaultColorMap *>(_o);
        switch (_id) {
        case 0: _t->colorMapChanged(); break;
        case 1: _t->onColorMapChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData cubegui::DefaultColorMap::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cubegui::DefaultColorMap::staticMetaObject = {
    { &ColorMap::staticMetaObject, qt_meta_stringdata_cubegui__DefaultColorMap,
      qt_meta_data_cubegui__DefaultColorMap, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cubegui::DefaultColorMap::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cubegui::DefaultColorMap::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cubegui::DefaultColorMap::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cubegui__DefaultColorMap))
        return static_cast<void*>(const_cast< DefaultColorMap*>(this));
    if (!strcmp(_clname, "SettingsHandler"))
        return static_cast< SettingsHandler*>(const_cast< DefaultColorMap*>(this));
    return ColorMap::qt_metacast(_clname);
}

int cubegui::DefaultColorMap::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ColorMap::qt_metacall(_c, _id, _a);
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
void cubegui::DefaultColorMap::colorMapChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_cubegui__ColorWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x05,
      41,   21,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
      70,   57,   21,   21, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_cubegui__ColorWidget[] = {
    "cubegui::ColorWidget\0\0updateValueSpins()\0"
    "colorsChanged()\0_colorWidget\0"
    "onApply(ColorWidget*)\0"
};

void cubegui::ColorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ColorWidget *_t = static_cast<ColorWidget *>(_o);
        switch (_id) {
        case 0: _t->updateValueSpins(); break;
        case 1: _t->colorsChanged(); break;
        case 2: _t->onApply((*reinterpret_cast< ColorWidget*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cubegui::ColorWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cubegui::ColorWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_cubegui__ColorWidget,
      qt_meta_data_cubegui__ColorWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cubegui::ColorWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cubegui::ColorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cubegui::ColorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cubegui__ColorWidget))
        return static_cast<void*>(const_cast< ColorWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int cubegui::ColorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void cubegui::ColorWidget::updateValueSpins()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void cubegui::ColorWidget::colorsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
static const uint qt_meta_data_cubegui__ColorDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
      42,   21,   21,   21, 0x0a,
      69,   63,   21,   21, 0x08,
      93,   63,   21,   21, 0x08,
     115,   63,   21,   21, 0x08,
     136,   63,   21,   21, 0x08,
     157,   63,   21,   21, 0x08,
     178,   63,   21,   21, 0x08,
     199,   63,   21,   21, 0x08,
     226,  220,   21,   21, 0x08,
     241,  220,   21,   21, 0x08,
     260,  220,   21,   21, 0x08,
     279,  220,   21,   21, 0x08,
     300,  220,   21,   21, 0x08,
     321,   21,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cubegui__ColorDialog[] = {
    "cubegui::ColorDialog\0\0apply(ColorWidget*)\0"
    "onUpdateValueSpins()\0value\0"
    "setLightenStart(double)\0setWhiteStart(double)\0"
    "setColorPos0(double)\0setColorPos1(double)\0"
    "setColorPos2(double)\0setColorPos3(double)\0"
    "setColorPos4(double)\0activ\0onLinear(bool)\0"
    "onQuadratic1(bool)\0onQuadratic2(bool)\0"
    "onExponential1(bool)\0onExponential2(bool)\0"
    "onApply()\0"
};

void cubegui::ColorDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ColorDialog *_t = static_cast<ColorDialog *>(_o);
        switch (_id) {
        case 0: _t->apply((*reinterpret_cast< ColorWidget*(*)>(_a[1]))); break;
        case 1: _t->onUpdateValueSpins(); break;
        case 2: _t->setLightenStart((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->setWhiteStart((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->setColorPos0((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->setColorPos1((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->setColorPos2((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->setColorPos3((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->setColorPos4((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->onLinear((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->onQuadratic1((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->onQuadratic2((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->onExponential1((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->onExponential2((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->onApply(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cubegui::ColorDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cubegui::ColorDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_cubegui__ColorDialog,
      qt_meta_data_cubegui__ColorDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cubegui::ColorDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cubegui::ColorDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cubegui::ColorDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cubegui__ColorDialog))
        return static_cast<void*>(const_cast< ColorDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int cubegui::ColorDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void cubegui::ColorDialog::apply(ColorWidget * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
