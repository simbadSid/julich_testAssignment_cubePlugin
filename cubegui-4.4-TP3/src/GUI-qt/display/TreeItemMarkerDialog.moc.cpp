/****************************************************************************
** Meta object code from reading C++ file 'TreeItemMarkerDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "TreeItemMarkerDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TreeItemMarkerDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cubegui__TreeItemMarkerDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      31,   30,   30,   30, 0x0a,
      40,   30,   30,   30, 0x0a,
      49,   30,   30,   30, 0x0a,
      65,   57,   30,   30, 0x0a,
      81,   57,   30,   30, 0x08,
      99,   57,   30,   30, 0x08,
     116,   30,   30,   30, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cubegui__TreeItemMarkerDialog[] = {
    "cubegui::TreeItemMarkerDialog\0\0accept()\0"
    "reject()\0apply()\0enabled\0grayItems(bool)\0"
    "enableColor(bool)\0enableIcon(bool)\0"
    "chooseColor()\0"
};

void cubegui::TreeItemMarkerDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TreeItemMarkerDialog *_t = static_cast<TreeItemMarkerDialog *>(_o);
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->reject(); break;
        case 2: _t->apply(); break;
        case 3: _t->grayItems((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->enableColor((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->enableIcon((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->chooseColor(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cubegui::TreeItemMarkerDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cubegui::TreeItemMarkerDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_cubegui__TreeItemMarkerDialog,
      qt_meta_data_cubegui__TreeItemMarkerDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cubegui::TreeItemMarkerDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cubegui::TreeItemMarkerDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cubegui::TreeItemMarkerDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cubegui__TreeItemMarkerDialog))
        return static_cast<void*>(const_cast< TreeItemMarkerDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int cubegui::TreeItemMarkerDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
