/****************************************************************************
** Meta object code from reading C++ file 'TopologyDimensionBar.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "TopologyDimensionBar.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TopologyDimensionBar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TopologyDimensionBar[] = {

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
      22,   21,   21,   21, 0x05,
      79,   21,   21,   21, 0x05,
     131,  124,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
     155,   21,   21,   21, 0x08,
     183,   21,   21,   21, 0x08,
     210,   21,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TopologyDimensionBar[] = {
    "TopologyDimensionBar\0\0"
    "foldingDimensionsChanged(std::vector<std::vector<int> >)\0"
    "selectedDimensionsChanged(std::vector<long>)\0"
    "length\0splitLengthChanged(int)\0"
    "selectedDimensionsChanged()\0"
    "foldingDimensionsChanged()\0"
    "handleSplitLengthChanged()\0"
};

void TopologyDimensionBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TopologyDimensionBar *_t = static_cast<TopologyDimensionBar *>(_o);
        switch (_id) {
        case 0: _t->foldingDimensionsChanged((*reinterpret_cast< std::vector<std::vector<int> >(*)>(_a[1]))); break;
        case 1: _t->selectedDimensionsChanged((*reinterpret_cast< std::vector<long>(*)>(_a[1]))); break;
        case 2: _t->splitLengthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->selectedDimensionsChanged(); break;
        case 4: _t->foldingDimensionsChanged(); break;
        case 5: _t->handleSplitLengthChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TopologyDimensionBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TopologyDimensionBar::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TopologyDimensionBar,
      qt_meta_data_TopologyDimensionBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TopologyDimensionBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TopologyDimensionBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TopologyDimensionBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TopologyDimensionBar))
        return static_cast<void*>(const_cast< TopologyDimensionBar*>(this));
    return QWidget::qt_metacast(_clname);
}

int TopologyDimensionBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void TopologyDimensionBar::foldingDimensionsChanged(std::vector<std::vector<int> > _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TopologyDimensionBar::selectedDimensionsChanged(std::vector<long> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TopologyDimensionBar::splitLengthChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
