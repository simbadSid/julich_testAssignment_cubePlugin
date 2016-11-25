/****************************************************************************
** Meta object code from reading C++ file 'LaunchPlugin.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "LaunchPlugin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LaunchPlugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LaunchPlugin[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   14,   13,   13, 0x08,
      99,   93,   13,   13, 0x08,
     150,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_LaunchPlugin[] = {
    "LaunchPlugin\0\0type,item\0"
    "contextMenuIsShown(cubepluginapi::TreeType,cubepluginapi::TreeItem*)\0"
    "order\0orderHasChanged(QList<cubepluginapi::DisplayType>)\0"
    "onLaunch()\0"
};

void LaunchPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LaunchPlugin *_t = static_cast<LaunchPlugin *>(_o);
        switch (_id) {
        case 0: _t->contextMenuIsShown((*reinterpret_cast< cubepluginapi::TreeType(*)>(_a[1])),(*reinterpret_cast< cubepluginapi::TreeItem*(*)>(_a[2]))); break;
        case 1: _t->orderHasChanged((*reinterpret_cast< const QList<cubepluginapi::DisplayType>(*)>(_a[1]))); break;
        case 2: _t->onLaunch(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LaunchPlugin::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LaunchPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_LaunchPlugin,
      qt_meta_data_LaunchPlugin, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LaunchPlugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LaunchPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LaunchPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LaunchPlugin))
        return static_cast<void*>(const_cast< LaunchPlugin*>(this));
    if (!strcmp(_clname, "cubepluginapi::CubePlugin"))
        return static_cast< cubepluginapi::CubePlugin*>(const_cast< LaunchPlugin*>(this));
    if (!strcmp(_clname, PLUGIN_VERSION))
        return static_cast< cubepluginapi::CubePlugin*>(const_cast< LaunchPlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int LaunchPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
