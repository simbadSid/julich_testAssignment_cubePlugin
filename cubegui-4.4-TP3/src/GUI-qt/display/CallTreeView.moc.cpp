/****************************************************************************
** Meta object code from reading C++ file 'CallTreeView.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "CallTreeView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CallTreeView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cubegui__CallTreeView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x08,
      35,   22,   22,   22, 0x08,
      52,   22,   22,   22, 0x08,
      69,   22,   22,   22, 0x08,
      84,   22,   22,   22, 0x08,
      98,   22,   22,   22, 0x08,
     112,   22,   22,   22, 0x08,
     125,   22,   22,   22, 0x08,
     144,   22,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cubegui__CallTreeView[] = {
    "cubegui::CallTreeView\0\0setAsLoop()\0"
    "showIterations()\0hideIterations()\0"
    "onRerootItem()\0onPruneItem()\0onSetAsLeaf()\0"
    "onLocation()\0onLocationCallee()\0"
    "callFlatItemSelected()\0"
};

void cubegui::CallTreeView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CallTreeView *_t = static_cast<CallTreeView *>(_o);
        switch (_id) {
        case 0: _t->setAsLoop(); break;
        case 1: _t->showIterations(); break;
        case 2: _t->hideIterations(); break;
        case 3: _t->onRerootItem(); break;
        case 4: _t->onPruneItem(); break;
        case 5: _t->onSetAsLeaf(); break;
        case 6: _t->onLocation(); break;
        case 7: _t->onLocationCallee(); break;
        case 8: _t->callFlatItemSelected(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData cubegui::CallTreeView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cubegui::CallTreeView::staticMetaObject = {
    { &TreeView::staticMetaObject, qt_meta_stringdata_cubegui__CallTreeView,
      qt_meta_data_cubegui__CallTreeView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cubegui::CallTreeView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cubegui::CallTreeView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cubegui::CallTreeView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cubegui__CallTreeView))
        return static_cast<void*>(const_cast< CallTreeView*>(this));
    return TreeView::qt_metacast(_clname);
}

int cubegui::CallTreeView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TreeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
