/****************************************************************************
** Meta object code from reading C++ file 'SystemTopology.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "SystemTopology.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SystemTopology.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SystemTopology[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x08,
      34,   15,   15,   15, 0x08,
      54,   15,   15,   15, 0x08,
      65,   15,   15,   15, 0x08,
      75,   15,   15,   15, 0x08,
      88,   15,   15,   15, 0x08,
     100,   15,   15,   15, 0x08,
     113,   15,   15,   15, 0x08,
     123,   15,   15,   15, 0x08,
     144,   15,   15,   15, 0x08,
     165,  159,   15,   15, 0x08,
     196,  187,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SystemTopology[] = {
    "SystemTopology\0\0enableFocus(bool)\0"
    "updateToolBarMenu()\0whiteOff()\0whiteOn()\0"
    "blackLines()\0grayLines()\0whiteLines()\0"
    "noLines()\0toggleAntialiasing()\0"
    "toggleUnused()\0value\0setAntialiasing(bool)\0"
    "lineType\0setLineType(cubepluginapi::LineType)\0"
};

void SystemTopology::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SystemTopology *_t = static_cast<SystemTopology *>(_o);
        switch (_id) {
        case 0: _t->enableFocus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->updateToolBarMenu(); break;
        case 2: _t->whiteOff(); break;
        case 3: _t->whiteOn(); break;
        case 4: _t->blackLines(); break;
        case 5: _t->grayLines(); break;
        case 6: _t->whiteLines(); break;
        case 7: _t->noLines(); break;
        case 8: _t->toggleAntialiasing(); break;
        case 9: _t->toggleUnused(); break;
        case 10: _t->setAntialiasing((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->setLineType((*reinterpret_cast< cubepluginapi::LineType(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SystemTopology::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SystemTopology::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SystemTopology,
      qt_meta_data_SystemTopology, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SystemTopology::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SystemTopology::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SystemTopology::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SystemTopology))
        return static_cast<void*>(const_cast< SystemTopology*>(this));
    if (!strcmp(_clname, "cubepluginapi::CubePlugin"))
        return static_cast< cubepluginapi::CubePlugin*>(const_cast< SystemTopology*>(this));
    if (!strcmp(_clname, "cubepluginapi::SettingsHandler"))
        return static_cast< cubepluginapi::SettingsHandler*>(const_cast< SystemTopology*>(this));
    if (!strcmp(_clname, PLUGIN_VERSION))
        return static_cast< cubepluginapi::CubePlugin*>(const_cast< SystemTopology*>(this));
    return QObject::qt_metacast(_clname);
}

int SystemTopology::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
