/****************************************************************************
** Meta object code from reading C++ file 'CallTreeLabelDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "CallTreeLabelDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CallTreeLabelDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cubegui__CallTreeLabelDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   29,   29,   29, 0x05,

 // slots: signature, parameters, type, tag, flags
      46,   29,   29,   29, 0x08,
      56,   29,   29,   29, 0x08,
      63,   29,   29,   29, 0x08,
      77,   74,   29,   29, 0x08,
      96,   29,   29,   29, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cubegui__CallTreeLabelDialog[] = {
    "cubegui::CallTreeLabelDialog\0\0"
    "configChanged()\0onApply()\0onOk()\0"
    "onCancel()\0ok\0enableSlider(bool)\0"
    "setSliderLabel()\0"
};

void cubegui::CallTreeLabelDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CallTreeLabelDialog *_t = static_cast<CallTreeLabelDialog *>(_o);
        switch (_id) {
        case 0: _t->configChanged(); break;
        case 1: _t->onApply(); break;
        case 2: _t->onOk(); break;
        case 3: _t->onCancel(); break;
        case 4: _t->enableSlider((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setSliderLabel(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cubegui::CallTreeLabelDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cubegui::CallTreeLabelDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_cubegui__CallTreeLabelDialog,
      qt_meta_data_cubegui__CallTreeLabelDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cubegui::CallTreeLabelDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cubegui::CallTreeLabelDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cubegui::CallTreeLabelDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cubegui__CallTreeLabelDialog))
        return static_cast<void*>(const_cast< CallTreeLabelDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int cubegui::CallTreeLabelDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void cubegui::CallTreeLabelDialog::configChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
