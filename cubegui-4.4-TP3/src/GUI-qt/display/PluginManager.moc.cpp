/****************************************************************************
** Meta object code from reading C++ file 'PluginManager.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "PluginManager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PluginManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cubegui__PluginManager[] = {

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
      24,   23,   23,   23, 0x0a,
      49,   23,   23,   23, 0x08,
      68,   23,   23,   23, 0x08,
      89,   23,   23,   23, 0x08,
     113,   23,   23,   23, 0x08,
     130,   23,   23,   23, 0x08,
     159,   23,   23,   23, 0x08,
     173,   23,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cubegui__PluginManager[] = {
    "cubegui::PluginManager\0\0"
    "closeContextFreePlugin()\0enablePlugin(bool)\0"
    "showSettingsWidget()\0checkPluginMenuStatus()\0"
    "showPluginHelp()\0showTreeItemMarkerSettings()\0"
    "startPlugin()\0configureSearchPath()\0"
};

void cubegui::PluginManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PluginManager *_t = static_cast<PluginManager *>(_o);
        switch (_id) {
        case 0: _t->closeContextFreePlugin(); break;
        case 1: _t->enablePlugin((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->showSettingsWidget(); break;
        case 3: _t->checkPluginMenuStatus(); break;
        case 4: _t->showPluginHelp(); break;
        case 5: _t->showTreeItemMarkerSettings(); break;
        case 6: _t->startPlugin(); break;
        case 7: _t->configureSearchPath(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cubegui::PluginManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cubegui::PluginManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_cubegui__PluginManager,
      qt_meta_data_cubegui__PluginManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cubegui::PluginManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cubegui::PluginManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cubegui::PluginManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cubegui__PluginManager))
        return static_cast<void*>(const_cast< PluginManager*>(this));
    if (!strcmp(_clname, "InternalSettingsHandler"))
        return static_cast< InternalSettingsHandler*>(const_cast< PluginManager*>(this));
    return QObject::qt_metacast(_clname);
}

int cubegui::PluginManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_cubegui__PathDialog[] = {

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
      21,   20,   20,   20, 0x08,
      30,   20,   20,   20, 0x08,
      36,   20,   20,   20, 0x08,
      43,   20,   20,   20, 0x08,
      55,   20,   20,   20, 0x08,
      60,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cubegui__PathDialog[] = {
    "cubegui::PathDialog\0\0choose()\0add()\0"
    "edit()\0deleteRow()\0up()\0down()\0"
};

void cubegui::PathDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PathDialog *_t = static_cast<PathDialog *>(_o);
        switch (_id) {
        case 0: _t->choose(); break;
        case 1: _t->add(); break;
        case 2: _t->edit(); break;
        case 3: _t->deleteRow(); break;
        case 4: _t->up(); break;
        case 5: _t->down(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData cubegui::PathDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cubegui::PathDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_cubegui__PathDialog,
      qt_meta_data_cubegui__PathDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cubegui::PathDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cubegui::PathDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cubegui::PathDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cubegui__PathDialog))
        return static_cast<void*>(const_cast< PathDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int cubegui::PathDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
