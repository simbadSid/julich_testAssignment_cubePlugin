/****************************************************************************
** Meta object code from reading C++ file 'HeatmapSettingsWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "HeatmapSettingsWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HeatmapSettingsWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_HeatmapCustomizationzation[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      39,   28,   27,   27, 0x05,
      67,   28,   27,   27, 0x05,
      92,   28,   27,   27, 0x05,
     117,   28,   27,   27, 0x05,
     145,   28,   27,   27, 0x05,
     170,   28,   27,   27, 0x05,
     195,   27,   27,   27, 0x05,

 // slots: signature, parameters, type, tag, flags
     212,   27,   27,   27, 0x08,
     229,   27,   27,   27, 0x08,
     250,   27,   27,   27, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_HeatmapCustomizationzation[] = {
    "HeatmapCustomizationzation\0\0stepsCount\0"
    "setHMajorFixedInterval(int)\0"
    "setHMajorStepsCount(int)\0"
    "setHMinorStepsCount(int)\0"
    "setVMajorFixedInterval(int)\0"
    "setVMajorStepsCount(int)\0"
    "setVMinorStepsCount(int)\0resetAllValues()\0"
    "handleOKButton()\0handleCancelButton()\0"
    "handleResetToDefaultsButton()\0"
};

void HeatmapCustomizationzation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        HeatmapCustomizationzation *_t = static_cast<HeatmapCustomizationzation *>(_o);
        switch (_id) {
        case 0: _t->setHMajorFixedInterval((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setHMajorStepsCount((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setHMinorStepsCount((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setVMajorFixedInterval((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setVMajorStepsCount((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setVMinorStepsCount((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->resetAllValues(); break;
        case 7: _t->handleOKButton(); break;
        case 8: _t->handleCancelButton(); break;
        case 9: _t->handleResetToDefaultsButton(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData HeatmapCustomizationzation::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject HeatmapCustomizationzation::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_HeatmapCustomizationzation,
      qt_meta_data_HeatmapCustomizationzation, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &HeatmapCustomizationzation::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *HeatmapCustomizationzation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *HeatmapCustomizationzation::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HeatmapCustomizationzation))
        return static_cast<void*>(const_cast< HeatmapCustomizationzation*>(this));
    return QDialog::qt_metacast(_clname);
}

int HeatmapCustomizationzation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void HeatmapCustomizationzation::setHMajorFixedInterval(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void HeatmapCustomizationzation::setHMajorStepsCount(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void HeatmapCustomizationzation::setHMinorStepsCount(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void HeatmapCustomizationzation::setVMajorFixedInterval(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void HeatmapCustomizationzation::setVMajorStepsCount(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void HeatmapCustomizationzation::setVMinorStepsCount(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void HeatmapCustomizationzation::resetAllValues()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}
QT_END_MOC_NAMESPACE
