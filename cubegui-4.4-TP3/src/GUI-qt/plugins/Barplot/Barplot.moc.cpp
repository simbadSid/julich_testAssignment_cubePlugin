/****************************************************************************
** Meta object code from reading C++ file 'Barplot.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Barplot.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Barplot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Barplot[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x05,
      31,    8,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
      68,   58,    8,    8, 0x08,
     143,  137,    8,    8, 0x08,
     199,  194,    8,    8, 0x08,
     238,  227,    8,    8, 0x08,
     287,    8,    8,    8, 0x08,
     329,    8,    8,    8, 0x08,
     368,  359,    8,    8, 0x08,
     388,    8,    8,    8, 0x08,
     410,  408,    8,    8, 0x08,
     438,    8,    8,    8, 0x08,
     466,  462,    8,    8, 0x08,
     495,  490,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Barplot[] = {
    "Barplot\0\0requestToAddNewPlot()\0"
    "requestToChangePlotColor()\0type,item\0"
    "treeItemIsSelected(cubepluginapi::TreeType,cubepluginapi::TreeItem*)\0"
    "order\0orderHasChanged(QList<cubepluginapi::DisplayType>)\0"
    "name\0globalValueChanged(QString)\0"
    "mouseEvent\0barsPlotAreaMouseCoordEventHandler(QMouseEvent*)\0"
    "mathOpListCurrentIndexChangedHandler(int)\0"
    "mathOpIndexChangeHandler(int)\0newIndex\0"
    "opComboHandler(int)\0colorComboHandler()\0"
    "c\0changeComboboxColor(QColor)\0"
    "stackButtonHasClicked()\0pos\0"
    "ShowContextMenu(QPoint)\0type\0"
    "markItemAsLoop(cubepluginapi::UserAction)\0"
};

void Barplot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Barplot *_t = static_cast<Barplot *>(_o);
        switch (_id) {
        case 0: _t->requestToAddNewPlot(); break;
        case 1: _t->requestToChangePlotColor(); break;
        case 2: _t->treeItemIsSelected((*reinterpret_cast< cubepluginapi::TreeType(*)>(_a[1])),(*reinterpret_cast< cubepluginapi::TreeItem*(*)>(_a[2]))); break;
        case 3: _t->orderHasChanged((*reinterpret_cast< const QList<cubepluginapi::DisplayType>(*)>(_a[1]))); break;
        case 4: _t->globalValueChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->barsPlotAreaMouseCoordEventHandler((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 6: _t->mathOpListCurrentIndexChangedHandler((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->mathOpIndexChangeHandler((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->opComboHandler((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->colorComboHandler(); break;
        case 10: _t->changeComboboxColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 11: _t->stackButtonHasClicked(); break;
        case 12: _t->ShowContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 13: _t->markItemAsLoop((*reinterpret_cast< cubepluginapi::UserAction(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Barplot::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Barplot::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Barplot,
      qt_meta_data_Barplot, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Barplot::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Barplot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Barplot::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Barplot))
        return static_cast<void*>(const_cast< Barplot*>(this));
    if (!strcmp(_clname, "cubepluginapi::CubePlugin"))
        return static_cast< cubepluginapi::CubePlugin*>(const_cast< Barplot*>(this));
    if (!strcmp(_clname, "cubepluginapi::TabInterface"))
        return static_cast< cubepluginapi::TabInterface*>(const_cast< Barplot*>(this));
    if (!strcmp(_clname, "cubepluginapi::SettingsHandler"))
        return static_cast< cubepluginapi::SettingsHandler*>(const_cast< Barplot*>(this));
    if (!strcmp(_clname, PLUGIN_VERSION))
        return static_cast< cubepluginapi::CubePlugin*>(const_cast< Barplot*>(this));
    return QObject::qt_metacast(_clname);
}

int Barplot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void Barplot::requestToAddNewPlot()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Barplot::requestToChangePlotColor()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
static const uint qt_meta_data_BarplotSlot[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_BarplotSlot[] = {
    "BarplotSlot\0"
};

void BarplotSlot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData BarplotSlot::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BarplotSlot::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BarplotSlot,
      qt_meta_data_BarplotSlot, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BarplotSlot::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BarplotSlot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BarplotSlot::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BarplotSlot))
        return static_cast<void*>(const_cast< BarplotSlot*>(this));
    return QObject::qt_metacast(_clname);
}

int BarplotSlot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
