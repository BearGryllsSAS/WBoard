/****************************************************************************
** Meta object code from reading C++ file 'WBAbstractVideoEncoder.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/podcast/WBAbstractVideoEncoder.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBAbstractVideoEncoder.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WBAbstractVideoEncoder_t {
    QByteArrayData data[8];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBAbstractVideoEncoder_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBAbstractVideoEncoder_t qt_meta_stringdata_WBAbstractVideoEncoder = {
    {
QT_MOC_LITERAL(0, 0, 22), // "WBAbstractVideoEncoder"
QT_MOC_LITERAL(1, 23, 14), // "encodingStatus"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 7), // "pStatus"
QT_MOC_LITERAL(4, 47, 16), // "encodingFinished"
QT_MOC_LITERAL(5, 64, 2), // "ok"
QT_MOC_LITERAL(6, 67, 17), // "audioLevelChanged"
QT_MOC_LITERAL(7, 85, 5) // "level"

    },
    "WBAbstractVideoEncoder\0encodingStatus\0"
    "\0pStatus\0encodingFinished\0ok\0"
    "audioLevelChanged\0level"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBAbstractVideoEncoder[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,
       6,    1,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::UChar,    7,

       0        // eod
};

void WBAbstractVideoEncoder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBAbstractVideoEncoder *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->encodingStatus((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->encodingFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->audioLevelChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WBAbstractVideoEncoder::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBAbstractVideoEncoder::encodingStatus)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WBAbstractVideoEncoder::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBAbstractVideoEncoder::encodingFinished)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WBAbstractVideoEncoder::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBAbstractVideoEncoder::audioLevelChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WBAbstractVideoEncoder::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_WBAbstractVideoEncoder.data,
    qt_meta_data_WBAbstractVideoEncoder,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBAbstractVideoEncoder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBAbstractVideoEncoder::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBAbstractVideoEncoder.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WBAbstractVideoEncoder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void WBAbstractVideoEncoder::encodingStatus(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WBAbstractVideoEncoder::encodingFinished(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WBAbstractVideoEncoder::audioLevelChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
