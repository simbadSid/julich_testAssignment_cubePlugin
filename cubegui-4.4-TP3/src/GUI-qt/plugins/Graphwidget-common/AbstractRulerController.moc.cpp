/****************************************************************************
** Meta object code from reading C++ file 'AbstractRulerController.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "AbstractRulerController.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AbstractRulerController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AbstractRulerController[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x05,
      66,   24,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
     133,  107,   24,   24, 0x0a,
     152,  107,   24,   24, 0x0a,
     198,  178,   24,   24, 0x0a,
     243,  223,   24,   24, 0x0a,
     294,  270,   24,   24, 0x0a,
     338,  320,   24,   24, 0x0a,
     377,  364,   24,   24, 0x0a,
     406,  364,   24,   24, 0x0a,
     439,   24,   24,   24, 0x0a,
     479,   24,  474,   24, 0x0a,
     514,   24,  510,   24, 0x0a,
     537,   24,  510,   24, 0x0a,
     560,   24,  510,   24, 0x0a,
     598,  586,   24,   24, 0x0a,
     644,  638,   24,   24, 0x2a,
     670,   24,  662,   24, 0x0a,
     703,   24,  681,   24, 0x0a,
     723,   24,   24,   24, 0x0a,
     763,   24,   24,   24, 0x0a,
     806,   24,  681,   24, 0x0a,
     837,  827,   24,   24, 0x0a,
     859,   24,   24,   24, 0x0a,
     912,   24,   24,   24, 0x09,
    1016,  934,   24,   24, 0x08,
    1062,   24,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AbstractRulerController[] = {
    "AbstractRulerController\0\0"
    "majorNotchesLocationsChanged(QList<int>)\0"
    "minorNotchesLocationsChanged(QList<int>)\0"
    "minimumLimit,maximumLimit\0setLimits(int,int)\0"
    "setLimitsF(double,double)\0tempCalibrateStatus\0"
    "setCalibrateStatus(bool)\0isRealValuedNotches\0"
    "setRealValuedNotches(bool)\0"
    "majorNotchesCustomCount\0"
    "setMajorNotchesCount(int)\0minorNotchesCount\0"
    "setMinorNotchesCount(int)\0intervalSize\0"
    "setMajorNotchesInterval(int)\0"
    "setMajorNotchesIntervalF(double)\0"
    "setMajorAndMinorNotchesToDefault()\0"
    "bool\0isMajorNotchesUsingIntervals()\0"
    "int\0getMajorNotchesCount()\0"
    "getMinorNotchesCount()\0getMajorNotchesInterval()\0"
    "title,align\0setTitle(QString,plotWidget::Alignment)\0"
    "title\0setTitle(QString)\0QString\0"
    "getTitle()\0plotWidget::Alignment\0"
    "getTitleAlignment()\0"
    "setTitleAlignmnt(plotWidget::Alignment)\0"
    "setNotchesAlignment(plotWidget::Alignment)\0"
    "getNotchesAligment()\0isVisible\0"
    "setTitleVisible(bool)\0"
    "forceIndexAtMousePositionChangedSignal(QMouseEvent*)\0"
    "calibrateAllNotches()\0"
    "notchValueF,notchLocation,maxNotchLocationInPixels,newNotchValue,newNo"
    "tchLocation\0"
    "roundNotchToInteger(double,int,int,int&,int&)\0"
    "sizeChangedHandler()\0"
};

void AbstractRulerController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AbstractRulerController *_t = static_cast<AbstractRulerController *>(_o);
        switch (_id) {
        case 0: _t->majorNotchesLocationsChanged((*reinterpret_cast< QList<int>(*)>(_a[1]))); break;
        case 1: _t->minorNotchesLocationsChanged((*reinterpret_cast< QList<int>(*)>(_a[1]))); break;
        case 2: _t->setLimits((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->setLimitsF((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 4: _t->setCalibrateStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setRealValuedNotches((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setMajorNotchesCount((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setMinorNotchesCount((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setMajorNotchesInterval((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->setMajorNotchesIntervalF((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->setMajorAndMinorNotchesToDefault(); break;
        case 11: { bool _r = _t->isMajorNotchesUsingIntervals();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { int _r = _t->getMajorNotchesCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 13: { int _r = _t->getMinorNotchesCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 14: { int _r = _t->getMajorNotchesInterval();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 15: _t->setTitle((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< plotWidget::Alignment(*)>(_a[2]))); break;
        case 16: _t->setTitle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 17: { QString _r = _t->getTitle();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 18: { plotWidget::Alignment _r = _t->getTitleAlignment();
            if (_a[0]) *reinterpret_cast< plotWidget::Alignment*>(_a[0]) = _r; }  break;
        case 19: _t->setTitleAlignmnt((*reinterpret_cast< plotWidget::Alignment(*)>(_a[1]))); break;
        case 20: _t->setNotchesAlignment((*reinterpret_cast< plotWidget::Alignment(*)>(_a[1]))); break;
        case 21: { plotWidget::Alignment _r = _t->getNotchesAligment();
            if (_a[0]) *reinterpret_cast< plotWidget::Alignment*>(_a[0]) = _r; }  break;
        case 22: _t->setTitleVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->forceIndexAtMousePositionChangedSignal((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 24: _t->calibrateAllNotches(); break;
        case 25: _t->roundNotchToInteger((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 26: _t->sizeChangedHandler(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AbstractRulerController::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AbstractRulerController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AbstractRulerController,
      qt_meta_data_AbstractRulerController, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AbstractRulerController::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AbstractRulerController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AbstractRulerController::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AbstractRulerController))
        return static_cast<void*>(const_cast< AbstractRulerController*>(this));
    return QObject::qt_metacast(_clname);
}

int AbstractRulerController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
    return _id;
}

// SIGNAL 0
void AbstractRulerController::majorNotchesLocationsChanged(QList<int> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AbstractRulerController::minorNotchesLocationsChanged(QList<int> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
