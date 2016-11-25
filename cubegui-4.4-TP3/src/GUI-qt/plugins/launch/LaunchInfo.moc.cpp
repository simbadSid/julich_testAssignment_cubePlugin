/****************************************************************************
** Meta object code from reading C++ file 'LaunchInfo.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "LaunchInfo.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LaunchInfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LaunchInfo[] = {

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
      12,   11,   11,   11, 0x0a,
      54,   11,   11,   11, 0x0a,
      67,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_LaunchInfo[] = {
    "LaunchInfo\0\0receivedLaunchVar(QPair<QString,QString>)\0"
    "launchInit()\0launchFinalize()\0"
};

void LaunchInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LaunchInfo *_t = static_cast<LaunchInfo *>(_o);
        switch (_id) {
        case 0: _t->receivedLaunchVar((*reinterpret_cast< QPair<QString,QString>(*)>(_a[1]))); break;
        case 1: _t->launchInit(); break;
        case 2: _t->launchFinalize(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LaunchInfo::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LaunchInfo::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_LaunchInfo,
      qt_meta_data_LaunchInfo, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LaunchInfo::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LaunchInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LaunchInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LaunchInfo))
        return static_cast<void*>(const_cast< LaunchInfo*>(this));
    return QObject::qt_metacast(_clname);
}

int LaunchInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
