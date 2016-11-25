/****************************************************************************
** Meta object code from reading C++ file 'Settings.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Settings.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Settings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cubegui__Settings[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   19,   18,   18, 0x0a,
      57,   18,   18,   18, 0x2a,
      82,   19,   18,   18, 0x0a,
     114,   18,   18,   18, 0x2a,
     145,  139,   18,   18, 0x08,
     172,   18,   18,   18, 0x08,
     198,   18,   18,   18, 0x08,
     224,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cubegui__Settings[] = {
    "cubegui::Settings\0\0group\0"
    "saveExperimentSettings(QString)\0"
    "saveExperimentSettings()\0"
    "loadExperimentSettings(QString)\0"
    "loadExperimentSettings()\0state\0"
    "setGlobalBoolSetting(bool)\0"
    "saveNamedGlobalSettings()\0"
    "loadNamedGlobalSettings()\0"
    "deleteNamedGlobalSettings()\0"
};

void cubegui::Settings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Settings *_t = static_cast<Settings *>(_o);
        switch (_id) {
        case 0: _t->saveExperimentSettings((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->saveExperimentSettings(); break;
        case 2: _t->loadExperimentSettings((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->loadExperimentSettings(); break;
        case 4: _t->setGlobalBoolSetting((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->saveNamedGlobalSettings(); break;
        case 6: _t->loadNamedGlobalSettings(); break;
        case 7: _t->deleteNamedGlobalSettings(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cubegui::Settings::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cubegui::Settings::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_cubegui__Settings,
      qt_meta_data_cubegui__Settings, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cubegui::Settings::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cubegui::Settings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cubegui::Settings::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cubegui__Settings))
        return static_cast<void*>(const_cast< Settings*>(this));
    return QObject::qt_metacast(_clname);
}

int cubegui::Settings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
