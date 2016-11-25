/****************************************************************************
** Meta object code from reading C++ file 'NewDerivatedMetricWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "NewDerivatedMetricWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NewDerivatedMetricWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cubegui__NewDerivatedMetricWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      35,   34,   34,   34, 0x0a,
      64,   34,   34,   34, 0x0a,
      83,   34,   34,   34, 0x0a,
     107,   34,   34,   34, 0x0a,
     128,   34,   34,   34, 0x0a,
     144,   34,   34,   34, 0x0a,
     162,   34,   34,   34, 0x0a,
     178,   34,   34,   34, 0x0a,
     195,   34,   34,   34, 0x0a,
     217,   34,   34,   34, 0x0a,
     243,   34,   34,   34, 0x0a,
     273,   34,   34,   34, 0x0a,
     304,   34,   34,   34, 0x0a,
     334,   34,   34,   34, 0x0a,
     351,   34,   34,   34, 0x0a,
     383,   34,   34,   34, 0x0a,
     422,   34,  410,   34, 0x0a,
     442,   34,   34,   34, 0x0a,
     465,   34,   34,   34, 0x0a,
     484,   34,   34,   34, 0x0a,
     512,   34,   34,   34, 0x0a,
     541,   34,  527,   34, 0x0a,
     562,   34,   34,   34, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_cubegui__NewDerivatedMetricWidget[] = {
    "cubegui::NewDerivatedMetricWidget\0\0"
    "selectMetricFromLibrary(int)\0"
    "setMetricType(int)\0setDisplayName(QString)\0"
    "setUniqName(QString)\0setUom(QString)\0"
    "setValue(QString)\0setURL(QString)\0"
    "setDescription()\0setCubePLExpression()\0"
    "setCubePLInitExpression()\0"
    "setCubePLAggrPlusExpression()\0"
    "setCubePLAggrMinusExpression()\0"
    "setCubePLAggrAggrExpression()\0"
    "showCubePLHelp()\0showKindsOfDerivedMetricsHelp()\0"
    "showMetricExpressionHelp()\0QStringList\0"
    "getCompletionList()\0createMetricFromFile()\0"
    "saveMetricToFile()\0createMetricFromClipboard()\0"
    "createMetric()\0cube::Metric*\0"
    "get_created_metric()\0selectFileForFillingForm()\0"
};

void cubegui::NewDerivatedMetricWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        NewDerivatedMetricWidget *_t = static_cast<NewDerivatedMetricWidget *>(_o);
        switch (_id) {
        case 0: _t->selectMetricFromLibrary((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setMetricType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setDisplayName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->setUniqName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->setUom((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->setValue((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->setURL((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->setDescription(); break;
        case 8: _t->setCubePLExpression(); break;
        case 9: _t->setCubePLInitExpression(); break;
        case 10: _t->setCubePLAggrPlusExpression(); break;
        case 11: _t->setCubePLAggrMinusExpression(); break;
        case 12: _t->setCubePLAggrAggrExpression(); break;
        case 13: _t->showCubePLHelp(); break;
        case 14: _t->showKindsOfDerivedMetricsHelp(); break;
        case 15: _t->showMetricExpressionHelp(); break;
        case 16: { QStringList _r = _t->getCompletionList();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 17: _t->createMetricFromFile(); break;
        case 18: _t->saveMetricToFile(); break;
        case 19: _t->createMetricFromClipboard(); break;
        case 20: _t->createMetric(); break;
        case 21: { cube::Metric* _r = _t->get_created_metric();
            if (_a[0]) *reinterpret_cast< cube::Metric**>(_a[0]) = _r; }  break;
        case 22: _t->selectFileForFillingForm(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cubegui::NewDerivatedMetricWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cubegui::NewDerivatedMetricWidget::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_cubegui__NewDerivatedMetricWidget,
      qt_meta_data_cubegui__NewDerivatedMetricWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cubegui::NewDerivatedMetricWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cubegui::NewDerivatedMetricWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cubegui::NewDerivatedMetricWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cubegui__NewDerivatedMetricWidget))
        return static_cast<void*>(const_cast< NewDerivatedMetricWidget*>(this));
    return QDialog::qt_metacast(_clname);
}

int cubegui::NewDerivatedMetricWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
