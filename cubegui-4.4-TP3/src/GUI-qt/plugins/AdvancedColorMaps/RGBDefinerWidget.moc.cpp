/****************************************************************************
** Meta object code from reading C++ file 'RGBDefinerWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "RGBDefinerWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RGBDefinerWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RGBDefinerWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      39,   17,   17,   17, 0x08,
      55,   17,   17,   17, 0x08,
      77,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_RGBDefinerWidget[] = {
    "RGBDefinerWidget\0\0colorChanged(QColor)\0"
    "buttonClicked()\0selectedColor(QColor)\0"
    "editedColor()\0"
};

void RGBDefinerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RGBDefinerWidget *_t = static_cast<RGBDefinerWidget *>(_o);
        switch (_id) {
        case 0: _t->colorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 1: _t->buttonClicked(); break;
        case 2: _t->selectedColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 3: _t->editedColor(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RGBDefinerWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RGBDefinerWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_RGBDefinerWidget,
      qt_meta_data_RGBDefinerWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RGBDefinerWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RGBDefinerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RGBDefinerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RGBDefinerWidget))
        return static_cast<void*>(const_cast< RGBDefinerWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int RGBDefinerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void RGBDefinerWidget::colorChanged(const QColor & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
