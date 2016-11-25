/****************************************************************************
** Meta object code from reading C++ file 'SystemTopologyData.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "SystemTopologyData.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SystemTopologyData.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SystemTopologyData[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x05,
      34,   19,   19,   19, 0x05,
      48,   19,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      70,   65,   19,   19, 0x0a,
     115,   19,   19,   19, 0x0a,
     179,  172,   19,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SystemTopologyData[] = {
    "SystemTopologyData\0\0dataChanged()\0"
    "viewChanged()\0rescaleRequest()\0dims\0"
    "selectedDimensionsChanged(std::vector<long>)\0"
    "foldingDimensionsChanged(std::vector<std::vector<int> >)\0"
    "length\0splitLengthChanged(int)\0"
};

void SystemTopologyData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SystemTopologyData *_t = static_cast<SystemTopologyData *>(_o);
        switch (_id) {
        case 0: _t->dataChanged(); break;
        case 1: _t->viewChanged(); break;
        case 2: _t->rescaleRequest(); break;
        case 3: _t->selectedDimensionsChanged((*reinterpret_cast< const std::vector<long>(*)>(_a[1]))); break;
        case 4: _t->foldingDimensionsChanged((*reinterpret_cast< const std::vector<std::vector<int> >(*)>(_a[1]))); break;
        case 5: _t->splitLengthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SystemTopologyData::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SystemTopologyData::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SystemTopologyData,
      qt_meta_data_SystemTopologyData, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SystemTopologyData::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SystemTopologyData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SystemTopologyData::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SystemTopologyData))
        return static_cast<void*>(const_cast< SystemTopologyData*>(this));
    return QObject::qt_metacast(_clname);
}

int SystemTopologyData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void SystemTopologyData::dataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void SystemTopologyData::viewChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void SystemTopologyData::rescaleRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
