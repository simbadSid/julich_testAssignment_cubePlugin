/****************************************************************************
** Meta object code from reading C++ file 'AbstractPlotAreaController.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "AbstractPlotAreaController.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AbstractPlotAreaController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AbstractPlotAreaController[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      39,   28,   27,   27, 0x05,

 // slots: signature, parameters, type, tag, flags
      82,   68,   27,   27, 0x0a,
     137,  123,   27,   27, 0x0a,
     192,  178,   27,   27, 0x0a,
     249,  235,   27,   27, 0x0a,
     302,  292,   27,   27, 0x0a,
     360,  292,   27,   27, 0x0a,
     432,  416,   27,   27, 0x0a,
     469,  455,   27,   27, 0x0a,
     529,  515,   27,   27, 0x0a,
     599,  575,   27,   27, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_AbstractPlotAreaController[] = {
    "AbstractPlotAreaController\0\0mouseEvent\0"
    "mouseIsClicked(QMouseEvent*)\0VMajorNotches\0"
    "updateVerticalMajorMeshLines(QList<int>)\0"
    "VMinorNotches\0updateVerticalMinorMeshLines(QList<int>)\0"
    "HMajorNotches\0updateHorizontalMajorMeshLines(QList<int>)\0"
    "HMinorNotches\0updateHorizontalMinorMeshLines(QList<int>)\0"
    "alignment\0"
    "updateMouseAxisHorizontalAlignment(plotWidget::Alignment)\0"
    "updateMouseAxisVerticalAlignment(plotWidget::Alignment)\0"
    "isLegendVisible\0setLegendVisible(bool)\0"
    "newXAlignment\0"
    "updateLegendXAlignment(plotWidget::Alignment)\0"
    "newYAlignment\0"
    "updateLegendYAlignment(plotWidget::Alignment)\0"
    "isLegendBackgroundSolid\0"
    "setLegendBackgroundSolid(bool)\0"
};

void AbstractPlotAreaController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AbstractPlotAreaController *_t = static_cast<AbstractPlotAreaController *>(_o);
        switch (_id) {
        case 0: _t->mouseIsClicked((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 1: _t->updateVerticalMajorMeshLines((*reinterpret_cast< QList<int>(*)>(_a[1]))); break;
        case 2: _t->updateVerticalMinorMeshLines((*reinterpret_cast< QList<int>(*)>(_a[1]))); break;
        case 3: _t->updateHorizontalMajorMeshLines((*reinterpret_cast< QList<int>(*)>(_a[1]))); break;
        case 4: _t->updateHorizontalMinorMeshLines((*reinterpret_cast< QList<int>(*)>(_a[1]))); break;
        case 5: _t->updateMouseAxisHorizontalAlignment((*reinterpret_cast< plotWidget::Alignment(*)>(_a[1]))); break;
        case 6: _t->updateMouseAxisVerticalAlignment((*reinterpret_cast< plotWidget::Alignment(*)>(_a[1]))); break;
        case 7: _t->setLegendVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->updateLegendXAlignment((*reinterpret_cast< plotWidget::Alignment(*)>(_a[1]))); break;
        case 9: _t->updateLegendYAlignment((*reinterpret_cast< plotWidget::Alignment(*)>(_a[1]))); break;
        case 10: _t->setLegendBackgroundSolid((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AbstractPlotAreaController::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AbstractPlotAreaController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AbstractPlotAreaController,
      qt_meta_data_AbstractPlotAreaController, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AbstractPlotAreaController::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AbstractPlotAreaController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AbstractPlotAreaController::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AbstractPlotAreaController))
        return static_cast<void*>(const_cast< AbstractPlotAreaController*>(this));
    return QObject::qt_metacast(_clname);
}

int AbstractPlotAreaController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void AbstractPlotAreaController::mouseIsClicked(QMouseEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
