/****************************************************************************
** Meta object code from reading C++ file 'DownloadThread.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "DownloadThread.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DownloadThread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_cubegui__DownloadThread[] = {

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
      36,   25,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
      70,   24,   24,   24, 0x0a,
      87,   81,   24,   24, 0x08,
     127,   24,   24,   24, 0x28,

       0        // eod
};

static const char qt_meta_stringdata_cubegui__DownloadThread[] = {
    "cubegui::DownloadThread\0\0url,buffer\0"
    "downloadFinished(QUrl,QByteArray)\0"
    "loadList()\0reply\0"
    "currentDownloadFinished(QNetworkReply*)\0"
    "currentDownloadFinished()\0"
};

void cubegui::DownloadThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DownloadThread *_t = static_cast<DownloadThread *>(_o);
        switch (_id) {
        case 0: _t->downloadFinished((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 1: _t->loadList(); break;
        case 2: _t->currentDownloadFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 3: _t->currentDownloadFinished(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData cubegui::DownloadThread::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject cubegui::DownloadThread::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_cubegui__DownloadThread,
      qt_meta_data_cubegui__DownloadThread, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &cubegui::DownloadThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *cubegui::DownloadThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *cubegui::DownloadThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cubegui__DownloadThread))
        return static_cast<void*>(const_cast< DownloadThread*>(this));
    return QObject::qt_metacast(_clname);
}

int cubegui::DownloadThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void cubegui::DownloadThread::downloadFinished(const QUrl & _t1, const QByteArray & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
