/****************************************************************************
** Meta object code from reading C++ file 'WBGraphicsItemAction.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/customWidgets/WBGraphicsItemAction.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBGraphicsItemAction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WBGraphicsItemAction_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBGraphicsItemAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBGraphicsItemAction_t qt_meta_stringdata_WBGraphicsItemAction = {
    {
QT_MOC_LITERAL(0, 0, 20) // "WBGraphicsItemAction"

    },
    "WBGraphicsItemAction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBGraphicsItemAction[] = {

 // content:
       8,       // revision
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

void WBGraphicsItemAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject WBGraphicsItemAction::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_WBGraphicsItemAction.data,
    qt_meta_data_WBGraphicsItemAction,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBGraphicsItemAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBGraphicsItemAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBGraphicsItemAction.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WBGraphicsItemAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_WBGraphicsItemPlayAudioAction_t {
    QByteArrayData data[3];
    char stringdata0[44];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBGraphicsItemPlayAudioAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBGraphicsItemPlayAudioAction_t qt_meta_stringdata_WBGraphicsItemPlayAudioAction = {
    {
QT_MOC_LITERAL(0, 0, 29), // "WBGraphicsItemPlayAudioAction"
QT_MOC_LITERAL(1, 30, 12), // "onSourceHide"
QT_MOC_LITERAL(2, 43, 0) // ""

    },
    "WBGraphicsItemPlayAudioAction\0"
    "onSourceHide\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBGraphicsItemPlayAudioAction[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void WBGraphicsItemPlayAudioAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBGraphicsItemPlayAudioAction *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onSourceHide(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject WBGraphicsItemPlayAudioAction::staticMetaObject = { {
    QMetaObject::SuperData::link<WBGraphicsItemAction::staticMetaObject>(),
    qt_meta_stringdata_WBGraphicsItemPlayAudioAction.data,
    qt_meta_data_WBGraphicsItemPlayAudioAction,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBGraphicsItemPlayAudioAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBGraphicsItemPlayAudioAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBGraphicsItemPlayAudioAction.stringdata0))
        return static_cast<void*>(this);
    return WBGraphicsItemAction::qt_metacast(_clname);
}

int WBGraphicsItemPlayAudioAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WBGraphicsItemAction::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_WBGraphicsItemMoveToPageAction_t {
    QByteArrayData data[1];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBGraphicsItemMoveToPageAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBGraphicsItemMoveToPageAction_t qt_meta_stringdata_WBGraphicsItemMoveToPageAction = {
    {
QT_MOC_LITERAL(0, 0, 30) // "WBGraphicsItemMoveToPageAction"

    },
    "WBGraphicsItemMoveToPageAction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBGraphicsItemMoveToPageAction[] = {

 // content:
       8,       // revision
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

void WBGraphicsItemMoveToPageAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject WBGraphicsItemMoveToPageAction::staticMetaObject = { {
    QMetaObject::SuperData::link<WBGraphicsItemAction::staticMetaObject>(),
    qt_meta_stringdata_WBGraphicsItemMoveToPageAction.data,
    qt_meta_data_WBGraphicsItemMoveToPageAction,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBGraphicsItemMoveToPageAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBGraphicsItemMoveToPageAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBGraphicsItemMoveToPageAction.stringdata0))
        return static_cast<void*>(this);
    return WBGraphicsItemAction::qt_metacast(_clname);
}

int WBGraphicsItemMoveToPageAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WBGraphicsItemAction::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_WBGraphicsItemLinkToWebPageAction_t {
    QByteArrayData data[1];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBGraphicsItemLinkToWebPageAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBGraphicsItemLinkToWebPageAction_t qt_meta_stringdata_WBGraphicsItemLinkToWebPageAction = {
    {
QT_MOC_LITERAL(0, 0, 33) // "WBGraphicsItemLinkToWebPageAc..."

    },
    "WBGraphicsItemLinkToWebPageAction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBGraphicsItemLinkToWebPageAction[] = {

 // content:
       8,       // revision
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

void WBGraphicsItemLinkToWebPageAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject WBGraphicsItemLinkToWebPageAction::staticMetaObject = { {
    QMetaObject::SuperData::link<WBGraphicsItemAction::staticMetaObject>(),
    qt_meta_stringdata_WBGraphicsItemLinkToWebPageAction.data,
    qt_meta_data_WBGraphicsItemLinkToWebPageAction,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBGraphicsItemLinkToWebPageAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBGraphicsItemLinkToWebPageAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBGraphicsItemLinkToWebPageAction.stringdata0))
        return static_cast<void*>(this);
    return WBGraphicsItemAction::qt_metacast(_clname);
}

int WBGraphicsItemLinkToWebPageAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WBGraphicsItemAction::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
