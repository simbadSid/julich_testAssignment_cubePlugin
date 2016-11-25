/****************************************************************************
** Meta object code from reading C++ file 'SystemTopologyToolBar.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "SystemTopologyToolBar.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SystemTopologyToolBar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SystemTopologyToolBar[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x08,
      42,   22,   22,   22, 0x08,
      61,   22,   22,   22, 0x08,
      72,   22,   22,   22, 0x08,
      81,   22,   22,   22, 0x08,
      93,   22,   22,   22, 0x08,
     104,   22,   22,   22, 0x08,
     128,   22,   22,   22, 0x08,
     152,   22,   22,   22, 0x08,
     161,   22,   22,   22, 0x08,
     171,   22,   22,   22, 0x08,
     179,   22,   22,   22, 0x08,
     187,   22,   22,   22, 0x08,
     204,  198,   22,   22, 0x08,
     219,  198,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SystemTopologyToolBar[] = {
    "SystemTopologyToolBar\0\0setButtonsToIcon()\0"
    "setButtonsToText()\0moveDown()\0moveUp()\0"
    "moveRight()\0moveLeft()\0increasePlaneDistance()\0"
    "decreasePlaneDistance()\0zoomIn()\0"
    "zoomOut()\0reset()\0scale()\0coloring()\0"
    "angle\0setXAngle(int)\0setYAngle(int)\0"
};

void SystemTopologyToolBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SystemTopologyToolBar *_t = static_cast<SystemTopologyToolBar *>(_o);
        switch (_id) {
        case 0: _t->setButtonsToIcon(); break;
        case 1: _t->setButtonsToText(); break;
        case 2: _t->moveDown(); break;
        case 3: _t->moveUp(); break;
        case 4: _t->moveRight(); break;
        case 5: _t->moveLeft(); break;
        case 6: _t->increasePlaneDistance(); break;
        case 7: _t->decreasePlaneDistance(); break;
        case 8: _t->zoomIn(); break;
        case 9: _t->zoomOut(); break;
        case 10: _t->reset(); break;
        case 11: _t->scale(); break;
        case 12: _t->coloring(); break;
        case 13: _t->setXAngle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->setYAngle((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SystemTopologyToolBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SystemTopologyToolBar::staticMetaObject = {
    { &QToolBar::staticMetaObject, qt_meta_stringdata_SystemTopologyToolBar,
      qt_meta_data_SystemTopologyToolBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SystemTopologyToolBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SystemTopologyToolBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SystemTopologyToolBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SystemTopologyToolBar))
        return static_cast<void*>(const_cast< SystemTopologyToolBar*>(this));
    return QToolBar::qt_metacast(_clname);
}

int SystemTopologyToolBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
