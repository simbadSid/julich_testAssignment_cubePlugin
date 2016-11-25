/****************************************************************************
** Meta object code from reading C++ file 'PrecisionWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "PrecisionWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PrecisionWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cubegui__PrecisionWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      26,   25,   25,   25, 0x05,

 // slots: signature, parameters, type, tag, flags
      38,   25,   34,   25, 0x0a,
      45,   25,   25,   25, 0x08,
      57,   25,   25,   25, 0x08,
      71,   25,   25,   25, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cubegui__PrecisionWidget[] = {
    "cubegui::PrecisionWidget\0\0apply()\0int\0"
    "exec()\0setValues()\0resetValues()\0"
    "applyValues()\0"
};

void cubegui::PrecisionWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PrecisionWidget *_t = static_cast<PrecisionWidget *>(_o);
        switch (_id) {
        case 0: _t->apply(); break;
        case 1: { int _r = _t->exec();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: _t->setValues(); break;
        case 3: _t->resetValues(); break;
        case 4: _t->applyValues(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cubegui::PrecisionWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cubegui::PrecisionWidget::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_cubegui__PrecisionWidget,
      qt_meta_data_cubegui__PrecisionWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cubegui::PrecisionWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cubegui::PrecisionWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cubegui::PrecisionWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cubegui__PrecisionWidget))
        return static_cast<void*>(const_cast< PrecisionWidget*>(this));
    return QDialog::qt_metacast(_clname);
}

int cubegui::PrecisionWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void cubegui::PrecisionWidget::apply()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
