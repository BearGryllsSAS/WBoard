/****************************************************************************
** Meta object code from reading C++ file 'WBW3CWidgetAPI.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/api/WBW3CWidgetAPI.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBW3CWidgetAPI.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WBW3CWidgetAPI_t {
    QByteArrayData data[12];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBW3CWidgetAPI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBW3CWidgetAPI_t qt_meta_stringdata_WBW3CWidgetAPI = {
    {
QT_MOC_LITERAL(0, 0, 14), // "WBW3CWidgetAPI"
QT_MOC_LITERAL(1, 15, 2), // "id"
QT_MOC_LITERAL(2, 18, 4), // "name"
QT_MOC_LITERAL(3, 23, 11), // "description"
QT_MOC_LITERAL(4, 35, 6), // "author"
QT_MOC_LITERAL(5, 42, 11), // "authorEmail"
QT_MOC_LITERAL(6, 54, 10), // "authorHref"
QT_MOC_LITERAL(7, 65, 7), // "version"
QT_MOC_LITERAL(8, 73, 5), // "width"
QT_MOC_LITERAL(9, 79, 6), // "height"
QT_MOC_LITERAL(10, 86, 11), // "preferences"
QT_MOC_LITERAL(11, 98, 4) // "uuid"

    },
    "WBW3CWidgetAPI\0id\0name\0description\0"
    "author\0authorEmail\0authorHref\0version\0"
    "width\0height\0preferences\0uuid"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBW3CWidgetAPI[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      11,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095001,
       2, QMetaType::QString, 0x00095001,
       3, QMetaType::QString, 0x00095001,
       4, QMetaType::QString, 0x00095001,
       5, QMetaType::QString, 0x00095001,
       6, QMetaType::QString, 0x00095001,
       7, QMetaType::QString, 0x00095001,
       8, QMetaType::Int, 0x00095001,
       9, QMetaType::Int, 0x00095001,
      10, QMetaType::QObjectStar, 0x00095001,
      11, QMetaType::QString, 0x00095001,

       0        // eod
};

void WBW3CWidgetAPI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<WBW3CWidgetAPI *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->id(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->description(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->author(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->authorEmail(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->authorHref(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->version(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->width(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->height(); break;
        case 9: *reinterpret_cast< QObject**>(_v) = _t->preferences(); break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->uuid(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject WBW3CWidgetAPI::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_WBW3CWidgetAPI.data,
    qt_meta_data_WBW3CWidgetAPI,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBW3CWidgetAPI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBW3CWidgetAPI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBW3CWidgetAPI.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WBW3CWidgetAPI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 11;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_WBW3CWebStorage_t {
    QByteArrayData data[10];
    char stringdata0[73];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBW3CWebStorage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBW3CWebStorage_t qt_meta_stringdata_WBW3CWebStorage = {
    {
QT_MOC_LITERAL(0, 0, 15), // "WBW3CWebStorage"
QT_MOC_LITERAL(1, 16, 3), // "key"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 5), // "index"
QT_MOC_LITERAL(4, 27, 7), // "getItem"
QT_MOC_LITERAL(5, 35, 7), // "setItem"
QT_MOC_LITERAL(6, 43, 5), // "value"
QT_MOC_LITERAL(7, 49, 10), // "removeItem"
QT_MOC_LITERAL(8, 60, 5), // "clear"
QT_MOC_LITERAL(9, 66, 6) // "length"

    },
    "WBW3CWebStorage\0key\0\0index\0getItem\0"
    "setItem\0value\0removeItem\0clear\0length"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBW3CWebStorage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       1,   54, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       4,    1,   42,    2, 0x0a /* Public */,
       5,    2,   45,    2, 0x0a /* Public */,
       7,    1,   50,    2, 0x0a /* Public */,
       8,    0,   53,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::QString, QMetaType::Int,    3,
    QMetaType::QString, QMetaType::QString,    1,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    1,    6,
    QMetaType::Void, QMetaType::QString,    1,
    QMetaType::Void,

 // properties: name, type, flags
       9, QMetaType::Int, 0x00095001,

       0        // eod
};

void WBW3CWebStorage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBW3CWebStorage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QString _r = _t->key((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 1: { QString _r = _t->getItem((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->setItem((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->removeItem((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->clear(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<WBW3CWebStorage *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->length(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject WBW3CWebStorage::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_WBW3CWebStorage.data,
    qt_meta_data_WBW3CWebStorage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBW3CWebStorage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBW3CWebStorage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBW3CWebStorage.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WBW3CWebStorage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_WBW3CWidgetPreferenceAPI_t {
    QByteArrayData data[9];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBW3CWidgetPreferenceAPI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBW3CWidgetPreferenceAPI_t qt_meta_stringdata_WBW3CWidgetPreferenceAPI = {
    {
QT_MOC_LITERAL(0, 0, 24), // "WBW3CWidgetPreferenceAPI"
QT_MOC_LITERAL(1, 25, 3), // "key"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 5), // "index"
QT_MOC_LITERAL(4, 36, 7), // "getItem"
QT_MOC_LITERAL(5, 44, 7), // "setItem"
QT_MOC_LITERAL(6, 52, 5), // "value"
QT_MOC_LITERAL(7, 58, 10), // "removeItem"
QT_MOC_LITERAL(8, 69, 5) // "clear"

    },
    "WBW3CWidgetPreferenceAPI\0key\0\0index\0"
    "getItem\0setItem\0value\0removeItem\0clear"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBW3CWidgetPreferenceAPI[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       4,    1,   42,    2, 0x0a /* Public */,
       5,    2,   45,    2, 0x0a /* Public */,
       7,    1,   50,    2, 0x0a /* Public */,
       8,    0,   53,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::QString, QMetaType::Int,    3,
    QMetaType::QString, QMetaType::QString,    1,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    1,    6,
    QMetaType::Void, QMetaType::QString,    1,
    QMetaType::Void,

       0        // eod
};

void WBW3CWidgetPreferenceAPI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBW3CWidgetPreferenceAPI *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QString _r = _t->key((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 1: { QString _r = _t->getItem((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->setItem((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->removeItem((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->clear(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WBW3CWidgetPreferenceAPI::staticMetaObject = { {
    QMetaObject::SuperData::link<WBW3CWebStorage::staticMetaObject>(),
    qt_meta_stringdata_WBW3CWidgetPreferenceAPI.data,
    qt_meta_data_WBW3CWidgetPreferenceAPI,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBW3CWidgetPreferenceAPI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBW3CWidgetPreferenceAPI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBW3CWidgetPreferenceAPI.stringdata0))
        return static_cast<void*>(this);
    return WBW3CWebStorage::qt_metacast(_clname);
}

int WBW3CWidgetPreferenceAPI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WBW3CWebStorage::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
