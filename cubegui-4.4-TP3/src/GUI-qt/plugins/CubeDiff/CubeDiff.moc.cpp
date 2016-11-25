/****************************************************************************
** Meta object code from reading C++ file 'CubeDiff.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "CubeDiff.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CubeDiff.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CubeDiff[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x08,
      24,    9,    9,    9, 0x08,
      36,    9,    9,    9, 0x08,
      48,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CubeDiff[] = {
    "CubeDiff\0\0startAction()\0loadFile1()\0"
    "loadFile2()\0uncheckChoice()\0"
};

void CubeDiff::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CubeDiff *_t = static_cast<CubeDiff *>(_o);
        switch (_id) {
        case 0: _t->startAction(); break;
        case 1: _t->loadFile1(); break;
        case 2: _t->loadFile2(); break;
        case 3: _t->uncheckChoice(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData CubeDiff::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CubeDiff::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CubeDiff,
      qt_meta_data_CubeDiff, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CubeDiff::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CubeDiff::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CubeDiff::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CubeDiff))
        return static_cast<void*>(const_cast< CubeDiff*>(this));
    if (!strcmp(_clname, "cubepluginapi::ContextFreePlugin"))
        return static_cast< cubepluginapi::ContextFreePlugin*>(const_cast< CubeDiff*>(this));
    if (!strcmp(_clname, PLUGIN_VERSION))
        return static_cast< cubepluginapi::ContextFreePlugin*>(const_cast< CubeDiff*>(this));
    return QObject::qt_metacast(_clname);
}

int CubeDiff::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
