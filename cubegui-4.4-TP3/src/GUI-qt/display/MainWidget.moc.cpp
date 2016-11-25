/****************************************************************************
** Meta object code from reading C++ file 'MainWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MainWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cubegui__MainWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      38,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x05,
      39,   20,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      60,   20,   20,   20, 0x08,
      85,   20,   20,   20, 0x08,
     118,  104,   20,   20, 0x08,
     153,  148,   20,   20, 0x28,
     175,   20,   20,   20, 0x08,
     186,   20,   20,   20, 0x08,
     202,   20,   20,   20, 0x08,
     214,   20,   20,   20, 0x08,
     228,   20,  223,   20, 0x08,
     247,   20,   20,   20, 0x08,
     267,   20,   20,   20, 0x08,
     286,   20,   20,   20, 0x08,
     306,   20,   20,   20, 0x08,
     321,   20,   20,   20, 0x08,
     329,   20,   20,   20, 0x08,
     339,   20,   20,   20, 0x08,
     352,   20,   20,   20, 0x08,
     379,  374,   20,   20, 0x08,
     393,   20,   20,   20, 0x08,
     414,   20,   20,   20, 0x08,
     429,   20,   20,   20, 0x08,
     450,  446,   20,   20, 0x08,
     476,   20,   20,   20, 0x28,
     493,   20,   20,   20, 0x08,
     508,   20,   20,   20, 0x08,
     518,   20,   20,   20, 0x08,
     555,  544,   20,   20, 0x08,
     578,   20,   20,   20, 0x08,
     596,   20,   20,   20, 0x08,
     616,  609,   20,   20, 0x08,
     652,   20,   20,   20, 0x08,
     667,   20,   20,   20, 0x08,
     689,  684,   20,   20, 0x08,
     721,  717,   20,   20, 0x08,
     744,   20,   20,   20, 0x28,
     764,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_cubegui__MainWidget[] = {
    "cubegui::MainWidget\0\0enableClose(bool)\0"
    "enableExtClose(bool)\0configureCallTreeLabel()\0"
    "cubeReportLoaded()\0cube,filename\0"
    "openCube(cube::Cube*,QString)\0cube\0"
    "openCube(cube::Cube*)\0openFile()\0"
    "openLastFiles()\0closeFile()\0saveAs()\0"
    "bool\0openExternalFile()\0closeExternalFile()\0"
    "closeApplication()\0setDimensionOrder()\0"
    "introduction()\0about()\0keyHelp()\0"
    "screenshot()\0setDynloadThreshold()\0"
    "busy\0setBusy(bool)\0updateColormapMenu()\0"
    "editColorMap()\0selectColorMap()\0map\0"
    "updateColorMap(ColorMap*)\0updateColorMap()\0"
    "setPrecision()\0setFont()\0"
    "triggerStatusOfFlattree()\0fontWidget\0"
    "applyFont(FontWidget*)\0distributeWidth()\0"
    "adaptWidth()\0widget\0"
    "selectExternalValueMode(TabWidget*)\0"
    "onRegionInfo()\0updateProgress()\0link\0"
    "recentFileSelected(QString)\0idx\0"
    "recentFileHovered(int)\0recentFileHovered()\0"
    "receiveSettingsFromClipboard()\0"
};

void cubegui::MainWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWidget *_t = static_cast<MainWidget *>(_o);
        switch (_id) {
        case 0: _t->enableClose((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->enableExtClose((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->configureCallTreeLabel(); break;
        case 3: _t->cubeReportLoaded(); break;
        case 4: _t->openCube((*reinterpret_cast< cube::Cube*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->openCube((*reinterpret_cast< cube::Cube*(*)>(_a[1]))); break;
        case 6: _t->openFile(); break;
        case 7: _t->openLastFiles(); break;
        case 8: _t->closeFile(); break;
        case 9: _t->saveAs(); break;
        case 10: { bool _r = _t->openExternalFile();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: _t->closeExternalFile(); break;
        case 12: _t->closeApplication(); break;
        case 13: _t->setDimensionOrder(); break;
        case 14: _t->introduction(); break;
        case 15: _t->about(); break;
        case 16: _t->keyHelp(); break;
        case 17: _t->screenshot(); break;
        case 18: _t->setDynloadThreshold(); break;
        case 19: _t->setBusy((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->updateColormapMenu(); break;
        case 21: _t->editColorMap(); break;
        case 22: _t->selectColorMap(); break;
        case 23: _t->updateColorMap((*reinterpret_cast< ColorMap*(*)>(_a[1]))); break;
        case 24: _t->updateColorMap(); break;
        case 25: _t->setPrecision(); break;
        case 26: _t->setFont(); break;
        case 27: _t->triggerStatusOfFlattree(); break;
        case 28: _t->applyFont((*reinterpret_cast< FontWidget*(*)>(_a[1]))); break;
        case 29: _t->distributeWidth(); break;
        case 30: _t->adaptWidth(); break;
        case 31: _t->selectExternalValueMode((*reinterpret_cast< TabWidget*(*)>(_a[1]))); break;
        case 32: _t->onRegionInfo(); break;
        case 33: _t->updateProgress(); break;
        case 34: _t->recentFileSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 35: _t->recentFileHovered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 36: _t->recentFileHovered(); break;
        case 37: _t->receiveSettingsFromClipboard(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cubegui::MainWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cubegui::MainWidget::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_cubegui__MainWidget,
      qt_meta_data_cubegui__MainWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cubegui::MainWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cubegui::MainWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cubegui::MainWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cubegui__MainWidget))
        return static_cast<void*>(const_cast< MainWidget*>(this));
    if (!strcmp(_clname, "InternalSettingsHandler"))
        return static_cast< InternalSettingsHandler*>(const_cast< MainWidget*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int cubegui::MainWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 38)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 38;
    }
    return _id;
}

// SIGNAL 0
void cubegui::MainWidget::enableClose(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void cubegui::MainWidget::enableExtClose(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
static const uint qt_meta_data_cubegui__HoverLabel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x05,
      34,   20,   20,   20, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_cubegui__HoverLabel[] = {
    "cubegui::HoverLabel\0\0hovered(int)\0"
    "leave()\0"
};

void cubegui::HoverLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        HoverLabel *_t = static_cast<HoverLabel *>(_o);
        switch (_id) {
        case 0: _t->hovered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->leave(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cubegui::HoverLabel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cubegui::HoverLabel::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_cubegui__HoverLabel,
      qt_meta_data_cubegui__HoverLabel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cubegui::HoverLabel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cubegui::HoverLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cubegui::HoverLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cubegui__HoverLabel))
        return static_cast<void*>(const_cast< HoverLabel*>(this));
    return QLabel::qt_metacast(_clname);
}

int cubegui::HoverLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void cubegui::HoverLabel::hovered(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void cubegui::HoverLabel::leave()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
static const uint qt_meta_data_cubegui__MoveableWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_cubegui__MoveableWidget[] = {
    "cubegui::MoveableWidget\0"
};

void cubegui::MoveableWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData cubegui::MoveableWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cubegui::MoveableWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_cubegui__MoveableWidget,
      qt_meta_data_cubegui__MoveableWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cubegui::MoveableWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cubegui::MoveableWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cubegui::MoveableWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cubegui__MoveableWidget))
        return static_cast<void*>(const_cast< MoveableWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int cubegui::MoveableWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
