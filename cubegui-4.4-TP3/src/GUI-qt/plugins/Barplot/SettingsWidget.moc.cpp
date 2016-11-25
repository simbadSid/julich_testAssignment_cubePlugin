/****************************************************************************
** Meta object code from reading C++ file 'SettingsWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "SettingsWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SettingsWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SettingWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   15,   14,   14, 0x05,
      77,   71,   14,   14, 0x05,
     117,   71,   14,   14, 0x05,
     157,   15,   14,   14, 0x05,
     205,   71,   14,   14, 0x05,
     247,   71,   14,   14, 0x05,
     289,   14,   14,   14, 0x05,
     321,   14,   14,   14, 0x05,
     365,  356,   14,   14, 0x05,
     401,  356,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     440,   14,   14,   14, 0x0a,
     465,   14,   14,   14, 0x0a,
     493,   14,   14,   14, 0x0a,
     519,   14,   14,   14, 0x08,
     542,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SettingWidget[] = {
    "SettingWidget\0\0intervalSize\0"
    "setProcessesRulerMajorNotchesInterval(int)\0"
    "count\0setProcessesRulerMajorNotchesCount(int)\0"
    "setProcessesRulerMinorNotchesCount(int)\0"
    "setMeasurementRulerMajorNotchesInterval(double)\0"
    "setMeasurementRulerMajorNotchesCount(int)\0"
    "setMeasurementRulerMinorNotchesCount(int)\0"
    "resetMeasurementTopNotchValue()\0"
    "resetMeasurementBottomNotchValue()\0"
    "newValue\0setMeasurementTopNotchValue(double)\0"
    "setMeasurementBottomNotchValue(double)\0"
    "setTopNotchToAutomatic()\0"
    "setBottomNotchToAutomatic()\0"
    "resetButtonClickHandler()\0"
    "okButtonClickHandler()\0"
    "cancelButtonClickHandler()\0"
};

void SettingWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SettingWidget *_t = static_cast<SettingWidget *>(_o);
        switch (_id) {
        case 0: _t->setProcessesRulerMajorNotchesInterval((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setProcessesRulerMajorNotchesCount((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setProcessesRulerMinorNotchesCount((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setMeasurementRulerMajorNotchesInterval((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->setMeasurementRulerMajorNotchesCount((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setMeasurementRulerMinorNotchesCount((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->resetMeasurementTopNotchValue(); break;
        case 7: _t->resetMeasurementBottomNotchValue(); break;
        case 8: _t->setMeasurementTopNotchValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->setMeasurementBottomNotchValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->setTopNotchToAutomatic(); break;
        case 11: _t->setBottomNotchToAutomatic(); break;
        case 12: _t->resetButtonClickHandler(); break;
        case 13: _t->okButtonClickHandler(); break;
        case 14: _t->cancelButtonClickHandler(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SettingWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SettingWidget::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SettingWidget,
      qt_meta_data_SettingWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SettingWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SettingWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SettingWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SettingWidget))
        return static_cast<void*>(const_cast< SettingWidget*>(this));
    return QDialog::qt_metacast(_clname);
}

int SettingWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void SettingWidget::setProcessesRulerMajorNotchesInterval(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SettingWidget::setProcessesRulerMajorNotchesCount(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SettingWidget::setProcessesRulerMinorNotchesCount(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SettingWidget::setMeasurementRulerMajorNotchesInterval(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SettingWidget::setMeasurementRulerMajorNotchesCount(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void SettingWidget::setMeasurementRulerMinorNotchesCount(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void SettingWidget::resetMeasurementTopNotchValue()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void SettingWidget::resetMeasurementBottomNotchValue()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void SettingWidget::setMeasurementTopNotchValue(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void SettingWidget::setMeasurementBottomNotchValue(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_END_MOC_NAMESPACE
