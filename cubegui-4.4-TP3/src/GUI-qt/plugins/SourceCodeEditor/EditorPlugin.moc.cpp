/****************************************************************************
** Meta object code from reading C++ file 'EditorPlugin.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "EditorPlugin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EditorPlugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EditorPlugin[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   14,   13,   13, 0x08,
      93,   13,   13,   13, 0x08,
     108,   13,   13,   13, 0x08,
     121,   13,   13,   13, 0x08,
     144,  136,   13,   13, 0x08,
     167,   13,   13,   13, 0x08,
     180,   13,   13,   13, 0x08,
     196,   13,   13,   13, 0x08,
     212,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_EditorPlugin[] = {
    "EditorPlugin\0\0type,item\0"
    "contextMenuIsShown(cubepluginapi::TreeType,cubepluginapi::TreeItem*)\0"
    "onChangeFont()\0onSaveFile()\0onSaveFileAs()\0"
    "checked\0onToggleReadOnly(bool)\0"
    "sourceSlot()\0search(QString)\0"
    "searchForward()\0searchBackward()\0"
};

void EditorPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EditorPlugin *_t = static_cast<EditorPlugin *>(_o);
        switch (_id) {
        case 0: _t->contextMenuIsShown((*reinterpret_cast< cubepluginapi::TreeType(*)>(_a[1])),(*reinterpret_cast< cubepluginapi::TreeItem*(*)>(_a[2]))); break;
        case 1: _t->onChangeFont(); break;
        case 2: _t->onSaveFile(); break;
        case 3: _t->onSaveFileAs(); break;
        case 4: _t->onToggleReadOnly((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->sourceSlot(); break;
        case 6: _t->search((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->searchForward(); break;
        case 8: _t->searchBackward(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData EditorPlugin::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject EditorPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_EditorPlugin,
      qt_meta_data_EditorPlugin, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EditorPlugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EditorPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EditorPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EditorPlugin))
        return static_cast<void*>(const_cast< EditorPlugin*>(this));
    if (!strcmp(_clname, "cubepluginapi::CubePlugin"))
        return static_cast< cubepluginapi::CubePlugin*>(const_cast< EditorPlugin*>(this));
    if (!strcmp(_clname, PLUGIN_VERSION))
        return static_cast< cubepluginapi::CubePlugin*>(const_cast< EditorPlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int EditorPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
