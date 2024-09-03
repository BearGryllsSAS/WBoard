/****************************************************************************
** Meta object code from reading C++ file 'WBPersistenceWorker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/core/WBPersistenceWorker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBPersistenceWorker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WBPersistenceWorker_t {
    QByteArrayData data[16];
    char stringdata0[178];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBPersistenceWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBPersistenceWorker_t qt_meta_stringdata_WBPersistenceWorker = {
    {
QT_MOC_LITERAL(0, 0, 19), // "WBPersistenceWorker"
QT_MOC_LITERAL(1, 20, 8), // "finished"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 5), // "error"
QT_MOC_LITERAL(4, 36, 6), // "string"
QT_MOC_LITERAL(5, 43, 11), // "sceneLoaded"
QT_MOC_LITERAL(6, 55, 4), // "text"
QT_MOC_LITERAL(7, 60, 16), // "WBDocumentProxy*"
QT_MOC_LITERAL(8, 77, 5), // "proxy"
QT_MOC_LITERAL(9, 83, 9), // "pageIndex"
QT_MOC_LITERAL(10, 93, 14), // "scenePersisted"
QT_MOC_LITERAL(11, 108, 16), // "WBGraphicsScene*"
QT_MOC_LITERAL(12, 125, 5), // "scene"
QT_MOC_LITERAL(13, 131, 17), // "metadataPersisted"
QT_MOC_LITERAL(14, 149, 7), // "process"
QT_MOC_LITERAL(15, 157, 20) // "applicationWillClose"

    },
    "WBPersistenceWorker\0finished\0\0error\0"
    "string\0sceneLoaded\0text\0WBDocumentProxy*\0"
    "proxy\0pageIndex\0scenePersisted\0"
    "WBGraphicsScene*\0scene\0metadataPersisted\0"
    "process\0applicationWillClose"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBPersistenceWorker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    1,   50,    2, 0x06 /* Public */,
       5,    3,   53,    2, 0x06 /* Public */,
      10,    1,   60,    2, 0x06 /* Public */,
      13,    1,   63,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,   66,    2, 0x0a /* Public */,
      15,    0,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QByteArray, 0x80000000 | 7, QMetaType::Int,    6,    8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 7,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WBPersistenceWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBPersistenceWorker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->error((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->sceneLoaded((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< WBDocumentProxy*(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3]))); break;
        case 3: _t->scenePersisted((*reinterpret_cast< WBGraphicsScene*(*)>(_a[1]))); break;
        case 4: _t->metadataPersisted((*reinterpret_cast< WBDocumentProxy*(*)>(_a[1]))); break;
        case 5: _t->process(); break;
        case 6: _t->applicationWillClose(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WBDocumentProxy* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WBGraphicsScene* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WBDocumentProxy* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WBPersistenceWorker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBPersistenceWorker::finished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WBPersistenceWorker::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBPersistenceWorker::error)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WBPersistenceWorker::*)(QByteArray , WBDocumentProxy * , const int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBPersistenceWorker::sceneLoaded)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (WBPersistenceWorker::*)(WBGraphicsScene * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBPersistenceWorker::scenePersisted)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (WBPersistenceWorker::*)(WBDocumentProxy * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBPersistenceWorker::metadataPersisted)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WBPersistenceWorker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_WBPersistenceWorker.data,
    qt_meta_data_WBPersistenceWorker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBPersistenceWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBPersistenceWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBPersistenceWorker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WBPersistenceWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void WBPersistenceWorker::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WBPersistenceWorker::error(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WBPersistenceWorker::sceneLoaded(QByteArray _t1, WBDocumentProxy * _t2, const int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WBPersistenceWorker::scenePersisted(WBGraphicsScene * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void WBPersistenceWorker::metadataPersisted(WBDocumentProxy * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
