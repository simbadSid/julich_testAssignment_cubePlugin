/****************************************************************************
** Meta object code from reading C++ file 'AdvancedColorMapsSettings.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "AdvancedColorMapsSettings.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AdvancedColorMapsSettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AdvancedColorMapsSettings[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   26,   26,   26, 0x05,
      68,   26,   26,   26, 0x05,

 // slots: signature, parameters, type, tag, flags
      86,   26,   26,   26, 0x08,
     103,   26,   26,   26, 0x08,
     131,  124,   26,   26, 0x08,
     167,   26,   26,   26, 0x08,
     188,   26,   26,   26, 0x08,
     206,   26,   26,   26, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AdvancedColorMapsSettings[] = {
    "AdvancedColorMapsSettings\0\0"
    "changeColorMap(cubepluginapi::ColorMap*)\0"
    "colorMapChanged()\0handleOKButton()\0"
    "handleCancelButton()\0button\0"
    "handleApplyButton(QAbstractButton*)\0"
    "colorMapChanged(int)\0colorMapUpdated()\0"
    "colorExcludedValuesChanged(QColor)\0"
};

void AdvancedColorMapsSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AdvancedColorMapsSettings *_t = static_cast<AdvancedColorMapsSettings *>(_o);
        switch (_id) {
        case 0: _t->changeColorMap((*reinterpret_cast< cubepluginapi::ColorMap*(*)>(_a[1]))); break;
        case 1: _t->colorMapChanged(); break;
        case 2: _t->handleOKButton(); break;
        case 3: _t->handleCancelButton(); break;
        case 4: _t->handleApplyButton((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 5: _t->colorMapChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->colorMapUpdated(); break;
        case 7: _t->colorExcludedValuesChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AdvancedColorMapsSettings::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AdvancedColorMapsSettings::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AdvancedColorMapsSettings,
      qt_meta_data_AdvancedColorMapsSettings, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AdvancedColorMapsSettings::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AdvancedColorMapsSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AdvancedColorMapsSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AdvancedColorMapsSettings))
        return static_cast<void*>(const_cast< AdvancedColorMapsSettings*>(this));
    if (!strcmp(_clname, "cubepluginapi::SettingsHandler"))
        return static_cast< cubepluginapi::SettingsHandler*>(const_cast< AdvancedColorMapsSettings*>(this));
    return QDialog::qt_metacast(_clname);
}

int AdvancedColorMapsSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void AdvancedColorMapsSettings::changeColorMap(cubepluginapi::ColorMap * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AdvancedColorMapsSettings::colorMapChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
