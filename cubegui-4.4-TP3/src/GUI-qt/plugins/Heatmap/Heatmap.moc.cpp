/****************************************************************************
** Meta object code from reading C++ file 'Heatmap.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Heatmap.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Heatmap.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Heatmap[] = {

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
      19,    9,    8,    8, 0x08,
      94,   88,    8,    8, 0x08,
     150,  145,    8,    8, 0x08,
     189,  178,    8,    8, 0x08,
     241,  237,    8,    8, 0x08,
     270,  265,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Heatmap[] = {
    "Heatmap\0\0type,item\0"
    "treeItemIsSelected(cubepluginapi::TreeType,cubepluginapi::TreeItem*)\0"
    "order\0orderHasChanged(QList<cubepluginapi::DisplayType>)\0"
    "name\0globalValueChanged(QString)\0"
    "mouseEvent\0heatmapAreaMouseCoordEventHandler(QMouseEvent*)\0"
    "pos\0ShowContextMenu(QPoint)\0type\0"
    "markItemAsLoop(cubepluginapi::UserAction)\0"
};

void Heatmap::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Heatmap *_t = static_cast<Heatmap *>(_o);
        switch (_id) {
        case 0: _t->treeItemIsSelected((*reinterpret_cast< cubepluginapi::TreeType(*)>(_a[1])),(*reinterpret_cast< cubepluginapi::TreeItem*(*)>(_a[2]))); break;
        case 1: _t->orderHasChanged((*reinterpret_cast< const QList<cubepluginapi::DisplayType>(*)>(_a[1]))); break;
        case 2: _t->globalValueChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->heatmapAreaMouseCoordEventHandler((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 4: _t->ShowContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 5: _t->markItemAsLoop((*reinterpret_cast< cubepluginapi::UserAction(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Heatmap::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Heatmap::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Heatmap,
      qt_meta_data_Heatmap, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Heatmap::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Heatmap::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Heatmap::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Heatmap))
        return static_cast<void*>(const_cast< Heatmap*>(this));
    if (!strcmp(_clname, "cubepluginapi::CubePlugin"))
        return static_cast< cubepluginapi::CubePlugin*>(const_cast< Heatmap*>(this));
    if (!strcmp(_clname, "cubepluginapi::TabInterface"))
        return static_cast< cubepluginapi::TabInterface*>(const_cast< Heatmap*>(this));
    if (!strcmp(_clname, "cubepluginapi::SettingsHandler"))
        return static_cast< cubepluginapi::SettingsHandler*>(const_cast< Heatmap*>(this));
    if (!strcmp(_clname, PLUGIN_VERSION))
        return static_cast< cubepluginapi::CubePlugin*>(const_cast< Heatmap*>(this));
    return QObject::qt_metacast(_clname);
}

int Heatmap::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
