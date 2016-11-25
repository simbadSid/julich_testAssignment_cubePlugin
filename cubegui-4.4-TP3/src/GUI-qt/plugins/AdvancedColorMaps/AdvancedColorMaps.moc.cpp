/****************************************************************************
** Meta object code from reading C++ file 'AdvancedColorMaps.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "AdvancedColorMaps.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AdvancedColorMaps.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_advancedcolormaps__AdvancedColorMaps[] = {

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
      38,   37,   37,   37, 0x08,
      79,   37,   37,   37, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_advancedcolormaps__AdvancedColorMaps[] = {
    "advancedcolormaps::AdvancedColorMaps\0"
    "\0updateColorMap(cubepluginapi::ColorMap*)\0"
    "applyChanges()\0"
};

void advancedcolormaps::AdvancedColorMaps::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AdvancedColorMaps *_t = static_cast<AdvancedColorMaps *>(_o);
        switch (_id) {
        case 0: _t->updateColorMap((*reinterpret_cast< cubepluginapi::ColorMap*(*)>(_a[1]))); break;
        case 1: _t->applyChanges(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData advancedcolormaps::AdvancedColorMaps::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject advancedcolormaps::AdvancedColorMaps::staticMetaObject = {
    { &ColorMap::staticMetaObject, qt_meta_stringdata_advancedcolormaps__AdvancedColorMaps,
      qt_meta_data_advancedcolormaps__AdvancedColorMaps, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &advancedcolormaps::AdvancedColorMaps::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *advancedcolormaps::AdvancedColorMaps::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *advancedcolormaps::AdvancedColorMaps::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_advancedcolormaps__AdvancedColorMaps))
        return static_cast<void*>(const_cast< AdvancedColorMaps*>(this));
    if (!strcmp(_clname, "CubePlugin"))
        return static_cast< CubePlugin*>(const_cast< AdvancedColorMaps*>(this));
    if (!strcmp(_clname, PLUGIN_VERSION))
        return static_cast< cubepluginapi::CubePlugin*>(const_cast< AdvancedColorMaps*>(this));
    return ColorMap::qt_metacast(_clname);
}

int advancedcolormaps::AdvancedColorMaps::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
