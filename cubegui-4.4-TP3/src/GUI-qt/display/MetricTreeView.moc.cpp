/****************************************************************************
** Meta object code from reading C++ file 'MetricTreeView.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MetricTreeView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MetricTreeView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cubegui__MetricTreeView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x08,
      56,   24,   24,   24, 0x08,
      86,   24,   24,   24, 0x08,
     103,   24,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cubegui__MetricTreeView[] = {
    "cubegui::MetricTreeView\0\0"
    "onCreateDerivatedChildMetric()\0"
    "onCreateDerivatedRootMetric()\0"
    "onRemoveMetric()\0onEditDerivatedMetric()\0"
};

void cubegui::MetricTreeView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MetricTreeView *_t = static_cast<MetricTreeView *>(_o);
        switch (_id) {
        case 0: _t->onCreateDerivatedChildMetric(); break;
        case 1: _t->onCreateDerivatedRootMetric(); break;
        case 2: _t->onRemoveMetric(); break;
        case 3: _t->onEditDerivatedMetric(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData cubegui::MetricTreeView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cubegui::MetricTreeView::staticMetaObject = {
    { &TreeView::staticMetaObject, qt_meta_stringdata_cubegui__MetricTreeView,
      qt_meta_data_cubegui__MetricTreeView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cubegui::MetricTreeView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cubegui::MetricTreeView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cubegui::MetricTreeView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cubegui__MetricTreeView))
        return static_cast<void*>(const_cast< MetricTreeView*>(this));
    return TreeView::qt_metacast(_clname);
}

int cubegui::MetricTreeView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TreeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
