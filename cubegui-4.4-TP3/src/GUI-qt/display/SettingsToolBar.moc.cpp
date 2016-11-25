/****************************************************************************
** Meta object code from reading C++ file 'SettingsToolBar.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "SettingsToolBar.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SettingsToolBar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cubegui__SettingsToolBar[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      26,   25,   25,   25, 0x05,
      58,   25,   25,   25, 0x05,

 // slots: signature, parameters, type, tag, flags
      90,   25,   25,   25, 0x08,
     108,   25,   25,   25, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cubegui__SettingsToolBar[] = {
    "cubegui::SettingsToolBar\0\0"
    "saveExperimentSettings(QString)\0"
    "loadExperimentSettings(QString)\0"
    "settingSelected()\0saveSettings()\0"
};

void cubegui::SettingsToolBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SettingsToolBar *_t = static_cast<SettingsToolBar *>(_o);
        switch (_id) {
        case 0: _t->saveExperimentSettings((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->loadExperimentSettings((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->settingSelected(); break;
        case 3: _t->saveSettings(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cubegui::SettingsToolBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cubegui::SettingsToolBar::staticMetaObject = {
    { &QToolBar::staticMetaObject, qt_meta_stringdata_cubegui__SettingsToolBar,
      qt_meta_data_cubegui__SettingsToolBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cubegui::SettingsToolBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cubegui::SettingsToolBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cubegui::SettingsToolBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cubegui__SettingsToolBar))
        return static_cast<void*>(const_cast< SettingsToolBar*>(this));
    return QToolBar::qt_metacast(_clname);
}

int cubegui::SettingsToolBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void cubegui::SettingsToolBar::saveExperimentSettings(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void cubegui::SettingsToolBar::loadExperimentSettings(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
