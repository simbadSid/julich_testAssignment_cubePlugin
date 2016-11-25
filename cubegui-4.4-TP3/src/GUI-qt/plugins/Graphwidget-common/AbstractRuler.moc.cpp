/****************************************************************************
** Meta object code from reading C++ file 'AbstractRuler.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "AbstractRuler.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AbstractRuler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AbstractRuler[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,
      38,   29,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      86,   74,   14,   14, 0x0a,
     132,  126,   14,   14, 0x2a,
     158,   14,  150,   14, 0x0a,
     179,  169,   14,   14, 0x0a,
     201,   14,   14,   14, 0x0a,
     264,   14,  242,   14, 0x0a,
     284,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_AbstractRuler[] = {
    "AbstractRuler\0\0sizeChanged()\0newIndex\0"
    "indexAtMousePositionChanged(double)\0"
    "title,align\0setTitle(QString,plotWidget::Alignment)\0"
    "title\0setTitle(QString)\0QString\0"
    "getTitle()\0isVisible\0setTitleVisible(bool)\0"
    "setTitleAlignment(plotWidget::Alignment)\0"
    "plotWidget::Alignment\0getTitleAlignment()\0"
    "forceIndexAtMousePositionChangedSignal(QMouseEvent*)\0"
};

void AbstractRuler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AbstractRuler *_t = static_cast<AbstractRuler *>(_o);
        switch (_id) {
        case 0: _t->sizeChanged(); break;
        case 1: _t->indexAtMousePositionChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->setTitle((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< plotWidget::Alignment(*)>(_a[2]))); break;
        case 3: _t->setTitle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: { QString _r = _t->getTitle();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 5: _t->setTitleVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setTitleAlignment((*reinterpret_cast< plotWidget::Alignment(*)>(_a[1]))); break;
        case 7: { plotWidget::Alignment _r = _t->getTitleAlignment();
            if (_a[0]) *reinterpret_cast< plotWidget::Alignment*>(_a[0]) = _r; }  break;
        case 8: _t->forceIndexAtMousePositionChangedSignal((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AbstractRuler::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AbstractRuler::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AbstractRuler,
      qt_meta_data_AbstractRuler, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AbstractRuler::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AbstractRuler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AbstractRuler::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AbstractRuler))
        return static_cast<void*>(const_cast< AbstractRuler*>(this));
    return QWidget::qt_metacast(_clname);
}

int AbstractRuler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void AbstractRuler::sizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void AbstractRuler::indexAtMousePositionChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
