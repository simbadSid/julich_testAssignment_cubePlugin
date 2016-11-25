/****************************************************************************
** Meta object code from reading C++ file 'FontWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "FontWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FontWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cubegui__FontWidget[] = {

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
      32,   21,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      51,   20,   20,   20, 0x08,
      58,   20,   20,   20, 0x08,
      68,   20,   20,   20, 0x08,
      79,   20,   20,   20, 0x08,
     102,   99,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cubegui__FontWidget[] = {
    "cubegui::FontWidget\0\0fontWidget\0"
    "apply(FontWidget*)\0onOk()\0onApply()\0"
    "onCancel()\0setSelectionColor()\0on\0"
    "setDefaulSelectionColor(bool)\0"
};

void cubegui::FontWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FontWidget *_t = static_cast<FontWidget *>(_o);
        switch (_id) {
        case 0: _t->apply((*reinterpret_cast< FontWidget*(*)>(_a[1]))); break;
        case 1: _t->onOk(); break;
        case 2: _t->onApply(); break;
        case 3: _t->onCancel(); break;
        case 4: _t->setSelectionColor(); break;
        case 5: _t->setDefaulSelectionColor((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cubegui::FontWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cubegui::FontWidget::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_cubegui__FontWidget,
      qt_meta_data_cubegui__FontWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cubegui::FontWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cubegui::FontWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cubegui::FontWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cubegui__FontWidget))
        return static_cast<void*>(const_cast< FontWidget*>(this));
    return QDialog::qt_metacast(_clname);
}

int cubegui::FontWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void cubegui::FontWidget::apply(FontWidget * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
