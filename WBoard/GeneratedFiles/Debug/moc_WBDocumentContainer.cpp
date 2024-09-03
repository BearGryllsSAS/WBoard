/****************************************************************************
** Meta object code from reading C++ file 'WBDocumentContainer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/document/WBDocumentContainer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBDocumentContainer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WBDocumentContainer_t {
    QByteArrayData data[17];
    char stringdata0[262];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBDocumentContainer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBDocumentContainer_t qt_meta_stringdata_WBDocumentContainer = {
    {
QT_MOC_LITERAL(0, 0, 19), // "WBDocumentContainer"
QT_MOC_LITERAL(1, 20, 11), // "documentSet"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 16), // "WBDocumentProxy*"
QT_MOC_LITERAL(4, 50, 8), // "document"
QT_MOC_LITERAL(5, 59, 19), // "documentPageUpdated"
QT_MOC_LITERAL(6, 79, 5), // "index"
QT_MOC_LITERAL(7, 85, 22), // "initThumbnailsRequired"
QT_MOC_LITERAL(8, 108, 20), // "WBDocumentContainer*"
QT_MOC_LITERAL(9, 129, 6), // "source"
QT_MOC_LITERAL(10, 136, 20), // "addThumbnailRequired"
QT_MOC_LITERAL(11, 157, 23), // "removeThumbnailRequired"
QT_MOC_LITERAL(12, 181, 21), // "moveThumbnailRequired"
QT_MOC_LITERAL(13, 203, 4), // "from"
QT_MOC_LITERAL(14, 208, 2), // "to"
QT_MOC_LITERAL(15, 211, 24), // "updateThumbnailsRequired"
QT_MOC_LITERAL(16, 236, 25) // "documentThumbnailsUpdated"

    },
    "WBDocumentContainer\0documentSet\0\0"
    "WBDocumentProxy*\0document\0documentPageUpdated\0"
    "index\0initThumbnailsRequired\0"
    "WBDocumentContainer*\0source\0"
    "addThumbnailRequired\0removeThumbnailRequired\0"
    "moveThumbnailRequired\0from\0to\0"
    "updateThumbnailsRequired\0"
    "documentThumbnailsUpdated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBDocumentContainer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       5,    1,   57,    2, 0x06 /* Public */,
       7,    1,   60,    2, 0x06 /* Public */,
      10,    2,   63,    2, 0x06 /* Public */,
      11,    1,   68,    2, 0x06 /* Public */,
      12,    2,   71,    2, 0x06 /* Public */,
      15,    0,   76,    2, 0x06 /* Public */,
      16,    1,   77,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int,    9,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   13,   14,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void WBDocumentContainer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBDocumentContainer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->documentSet((*reinterpret_cast< WBDocumentProxy*(*)>(_a[1]))); break;
        case 1: _t->documentPageUpdated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->initThumbnailsRequired((*reinterpret_cast< WBDocumentContainer*(*)>(_a[1]))); break;
        case 3: _t->addThumbnailRequired((*reinterpret_cast< WBDocumentContainer*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->removeThumbnailRequired((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->moveThumbnailRequired((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->updateThumbnailsRequired(); break;
        case 7: _t->documentThumbnailsUpdated((*reinterpret_cast< WBDocumentContainer*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WBDocumentProxy* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WBDocumentContainer* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WBDocumentContainer* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WBDocumentContainer* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WBDocumentContainer::*)(WBDocumentProxy * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBDocumentContainer::documentSet)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WBDocumentContainer::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBDocumentContainer::documentPageUpdated)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WBDocumentContainer::*)(WBDocumentContainer * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBDocumentContainer::initThumbnailsRequired)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (WBDocumentContainer::*)(WBDocumentContainer * , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBDocumentContainer::addThumbnailRequired)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (WBDocumentContainer::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBDocumentContainer::removeThumbnailRequired)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (WBDocumentContainer::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBDocumentContainer::moveThumbnailRequired)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (WBDocumentContainer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBDocumentContainer::updateThumbnailsRequired)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (WBDocumentContainer::*)(WBDocumentContainer * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBDocumentContainer::documentThumbnailsUpdated)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WBDocumentContainer::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_WBDocumentContainer.data,
    qt_meta_data_WBDocumentContainer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBDocumentContainer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBDocumentContainer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBDocumentContainer.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WBDocumentContainer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void WBDocumentContainer::documentSet(WBDocumentProxy * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WBDocumentContainer::documentPageUpdated(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WBDocumentContainer::initThumbnailsRequired(WBDocumentContainer * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WBDocumentContainer::addThumbnailRequired(WBDocumentContainer * _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void WBDocumentContainer::removeThumbnailRequired(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void WBDocumentContainer::moveThumbnailRequired(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void WBDocumentContainer::updateThumbnailsRequired()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void WBDocumentContainer::documentThumbnailsUpdated(WBDocumentContainer * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
