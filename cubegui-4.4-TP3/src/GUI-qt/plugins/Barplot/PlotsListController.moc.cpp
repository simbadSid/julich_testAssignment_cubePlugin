/****************************************************************************
** Meta object code from reading C++ file 'PlotsListController.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "PlotsListController.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PlotsListController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PlotsListController[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      26,   21,   20,   20, 0x0a,
      56,   20,   20,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PlotsListController[] = {
    "PlotsListController\0\0data\0"
    "setData(QList<CubeDataItem>&)\0"
    "deleteItemHandler()\0"
};

void PlotsListController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PlotsListController *_t = static_cast<PlotsListController *>(_o);
        switch (_id) {
        case 0: _t->setData((*reinterpret_cast< QList<CubeDataItem>(*)>(_a[1]))); break;
        case 1: _t->deleteItemHandler(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PlotsListController::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PlotsListController::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PlotsListController,
      qt_meta_data_PlotsListController, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PlotsListController::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PlotsListController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PlotsListController::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PlotsListController))
        return static_cast<void*>(const_cast< PlotsListController*>(this));
    return QWidget::qt_metacast(_clname);
}

int PlotsListController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
