/****************************************************************************
** Meta object code from reading C++ file 'WBHttpGet.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/network/WBHttpGet.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBHttpGet.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WBHttpGet_t {
    QByteArrayData data[16];
    char stringdata0[183];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBHttpGet_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBHttpGet_t qt_meta_stringdata_WBHttpGet = {
    {
QT_MOC_LITERAL(0, 0, 9), // "WBHttpGet"
QT_MOC_LITERAL(1, 10, 16), // "downloadProgress"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 13), // "bytesReceived"
QT_MOC_LITERAL(4, 42, 10), // "bytesTotal"
QT_MOC_LITERAL(5, 53, 16), // "downloadFinished"
QT_MOC_LITERAL(6, 70, 8), // "pSuccess"
QT_MOC_LITERAL(7, 79, 9), // "sourceUrl"
QT_MOC_LITERAL(8, 89, 18), // "pContentTypeHeader"
QT_MOC_LITERAL(9, 108, 5), // "pData"
QT_MOC_LITERAL(10, 114, 4), // "pPos"
QT_MOC_LITERAL(11, 119, 5), // "pSize"
QT_MOC_LITERAL(12, 125, 12), // "isBackground"
QT_MOC_LITERAL(13, 138, 9), // "readyRead"
QT_MOC_LITERAL(14, 148, 15), // "requestFinished"
QT_MOC_LITERAL(15, 164, 18) // "downloadProgressed"

    },
    "WBHttpGet\0downloadProgress\0\0bytesReceived\0"
    "bytesTotal\0downloadFinished\0pSuccess\0"
    "sourceUrl\0pContentTypeHeader\0pData\0"
    "pPos\0pSize\0isBackground\0readyRead\0"
    "requestFinished\0downloadProgressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBHttpGet[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,
       5,    7,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,   59,    2, 0x08 /* Private */,
      14,    0,   60,    2, 0x08 /* Private */,
      15,    2,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    3,    4,
    QMetaType::Void, QMetaType::Bool, QMetaType::QUrl, QMetaType::QString, QMetaType::QByteArray, QMetaType::QPointF, QMetaType::QSize, QMetaType::Bool,    6,    7,    8,    9,   10,   11,   12,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    3,    4,

       0        // eod
};

void WBHttpGet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBHttpGet *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->downloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 1: _t->downloadFinished((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QUrl(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QByteArray(*)>(_a[4])),(*reinterpret_cast< QPointF(*)>(_a[5])),(*reinterpret_cast< QSize(*)>(_a[6])),(*reinterpret_cast< bool(*)>(_a[7]))); break;
        case 2: _t->readyRead(); break;
        case 3: _t->requestFinished(); break;
        case 4: _t->downloadProgressed((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WBHttpGet::*)(qint64 , qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBHttpGet::downloadProgress)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WBHttpGet::*)(bool , QUrl , QString , QByteArray , QPointF , QSize , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBHttpGet::downloadFinished)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WBHttpGet::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_WBHttpGet.data,
    qt_meta_data_WBHttpGet,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBHttpGet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBHttpGet::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBHttpGet.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WBHttpGet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void WBHttpGet::downloadProgress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WBHttpGet::downloadFinished(bool _t1, QUrl _t2, QString _t3, QByteArray _t4, QPointF _t5, QSize _t6, bool _t7)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
