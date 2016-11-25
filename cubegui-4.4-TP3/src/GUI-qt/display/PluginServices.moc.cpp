/****************************************************************************
** Meta object code from reading C++ file 'PluginServices.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "PluginServices.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PluginServices.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cubepluginapi__PluginServices[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      41,   31,   30,   30, 0x05,
     116,  110,   30,   30, 0x05,
     167,   31,   30,   30, 0x05,
     243,  236,   30,   30, 0x05,
     293,  288,   30,   30, 0x05,
     326,  321,   30,   30, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_cubepluginapi__PluginServices[] = {
    "cubepluginapi::PluginServices\0\0type,item\0"
    "treeItemIsSelected(cubepluginapi::TreeType,cubepluginapi::TreeItem*)\0"
    "order\0orderHasChanged(QList<cubepluginapi::DisplayType>)\0"
    "contextMenuIsShown(cubepluginapi::TreeType,cubepluginapi::TreeItem*)\0"
    "action\0genericUserAction(cubepluginapi::UserAction)\0"
    "name\0globalValueChanged(QString)\0type\0"
    "tabActivated(cubepluginapi::TreeType)\0"
};

void cubepluginapi::PluginServices::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PluginServices *_t = static_cast<PluginServices *>(_o);
        switch (_id) {
        case 0: _t->treeItemIsSelected((*reinterpret_cast< cubepluginapi::TreeType(*)>(_a[1])),(*reinterpret_cast< cubepluginapi::TreeItem*(*)>(_a[2]))); break;
        case 1: _t->orderHasChanged((*reinterpret_cast< const QList<cubepluginapi::DisplayType>(*)>(_a[1]))); break;
        case 2: _t->contextMenuIsShown((*reinterpret_cast< cubepluginapi::TreeType(*)>(_a[1])),(*reinterpret_cast< cubepluginapi::TreeItem*(*)>(_a[2]))); break;
        case 3: _t->genericUserAction((*reinterpret_cast< cubepluginapi::UserAction(*)>(_a[1]))); break;
        case 4: _t->globalValueChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->tabActivated((*reinterpret_cast< cubepluginapi::TreeType(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cubepluginapi::PluginServices::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cubepluginapi::PluginServices::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_cubepluginapi__PluginServices,
      qt_meta_data_cubepluginapi__PluginServices, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cubepluginapi::PluginServices::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cubepluginapi::PluginServices::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cubepluginapi::PluginServices::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cubepluginapi__PluginServices))
        return static_cast<void*>(const_cast< PluginServices*>(this));
    return QObject::qt_metacast(_clname);
}

int cubepluginapi::PluginServices::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void cubepluginapi::PluginServices::treeItemIsSelected(cubepluginapi::TreeType _t1, cubepluginapi::TreeItem * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void cubepluginapi::PluginServices::orderHasChanged(const QList<cubepluginapi::DisplayType> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void cubepluginapi::PluginServices::contextMenuIsShown(cubepluginapi::TreeType _t1, cubepluginapi::TreeItem * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void cubepluginapi::PluginServices::genericUserAction(cubepluginapi::UserAction _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void cubepluginapi::PluginServices::globalValueChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void cubepluginapi::PluginServices::tabActivated(cubepluginapi::TreeType _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
