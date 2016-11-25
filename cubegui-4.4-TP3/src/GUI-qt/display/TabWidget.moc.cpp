/****************************************************************************
** Meta object code from reading C++ file 'TabWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "TabWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TabWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cubegui__TabWidget[] = {

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
      20,   19,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      59,   19,   19,   19, 0x0a,
      81,   75,   19,   19, 0x08,
     103,   75,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cubegui__TabWidget[] = {
    "cubegui::TabWidget\0\0"
    "externalValueModusSelected(TabWidget*)\0"
    "valuesChanged()\0index\0onCurrentChanged(int)\0"
    "setValueModus(int)\0"
};

void cubegui::TabWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TabWidget *_t = static_cast<TabWidget *>(_o);
        switch (_id) {
        case 0: _t->externalValueModusSelected((*reinterpret_cast< TabWidget*(*)>(_a[1]))); break;
        case 1: _t->valuesChanged(); break;
        case 2: _t->onCurrentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setValueModus((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cubegui::TabWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cubegui::TabWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_cubegui__TabWidget,
      qt_meta_data_cubegui__TabWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cubegui::TabWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cubegui::TabWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cubegui::TabWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cubegui__TabWidget))
        return static_cast<void*>(const_cast< TabWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int cubegui::TabWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void cubegui::TabWidget::externalValueModusSelected(TabWidget * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
