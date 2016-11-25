/****************************************************************************
** Meta object code from reading C++ file 'SynchronizationToolBar.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "SynchronizationToolBar.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SynchronizationToolBar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cubegui__SynchronizationToolBar[] = {

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
      33,   32,   32,   32, 0x05,

 // slots: signature, parameters, type, tag, flags
      47,   32,   32,   32, 0x08,
      57,   32,   32,   32, 0x08,
      75,   32,   32,   32, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cubegui__SynchronizationToolBar[] = {
    "cubegui::SynchronizationToolBar\0\0"
    "receiveData()\0receive()\0setAutoSend(bool)\0"
    "setAutoReceive(bool)\0"
};

void cubegui::SynchronizationToolBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SynchronizationToolBar *_t = static_cast<SynchronizationToolBar *>(_o);
        switch (_id) {
        case 0: _t->receiveData(); break;
        case 1: _t->receive(); break;
        case 2: _t->setAutoSend((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setAutoReceive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cubegui::SynchronizationToolBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cubegui::SynchronizationToolBar::staticMetaObject = {
    { &QToolBar::staticMetaObject, qt_meta_stringdata_cubegui__SynchronizationToolBar,
      qt_meta_data_cubegui__SynchronizationToolBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cubegui::SynchronizationToolBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cubegui::SynchronizationToolBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cubegui::SynchronizationToolBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cubegui__SynchronizationToolBar))
        return static_cast<void*>(const_cast< SynchronizationToolBar*>(this));
    return QToolBar::qt_metacast(_clname);
}

int cubegui::SynchronizationToolBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolBar::qt_metacall(_c, _id, _a);
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
void cubegui::SynchronizationToolBar::receiveData()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
