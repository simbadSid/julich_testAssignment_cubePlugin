/****************************************************************************
** Meta object code from reading C++ file 'ParaverPlugin.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ParaverPlugin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ParaverPlugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ParaverPlugin[] = {

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
      25,   15,   14,   14, 0x08,
      94,   14,   14,   14, 0x08,
     114,   14,   14,   14, 0x08,
     132,   14,   14,   14, 0x08,
     151,   14,   14,   14, 0x08,
     176,  171,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ParaverPlugin[] = {
    "ParaverPlugin\0\0type,item\0"
    "contextMenuIsShown(cubepluginapi::TreeType,cubepluginapi::TreeItem*)\0"
    "onShowMaxSeverity()\0paraverSettings()\0"
    "getTraceFileName()\0getConfigFileName()\0"
    "name\0globalValueChanged(QString)\0"
};

void ParaverPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ParaverPlugin *_t = static_cast<ParaverPlugin *>(_o);
        switch (_id) {
        case 0: _t->contextMenuIsShown((*reinterpret_cast< cubepluginapi::TreeType(*)>(_a[1])),(*reinterpret_cast< cubepluginapi::TreeItem*(*)>(_a[2]))); break;
        case 1: _t->onShowMaxSeverity(); break;
        case 2: _t->paraverSettings(); break;
        case 3: _t->getTraceFileName(); break;
        case 4: _t->getConfigFileName(); break;
        case 5: _t->globalValueChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ParaverPlugin::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ParaverPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ParaverPlugin,
      qt_meta_data_ParaverPlugin, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ParaverPlugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ParaverPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ParaverPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ParaverPlugin))
        return static_cast<void*>(const_cast< ParaverPlugin*>(this));
    if (!strcmp(_clname, "cubepluginapi::CubePlugin"))
        return static_cast< cubepluginapi::CubePlugin*>(const_cast< ParaverPlugin*>(this));
    if (!strcmp(_clname, PLUGIN_VERSION))
        return static_cast< cubepluginapi::CubePlugin*>(const_cast< ParaverPlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int ParaverPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
