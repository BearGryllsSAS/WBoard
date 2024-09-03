/****************************************************************************
** Meta object code from reading C++ file 'WBGraphicsWidgetItem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/domain/WBGraphicsWidgetItem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBGraphicsWidgetItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WBGraphicsWidgetItem_t {
    QByteArrayData data[12];
    char stringdata0[163];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBGraphicsWidgetItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBGraphicsWidgetItem_t qt_meta_stringdata_WBGraphicsWidgetItem = {
    {
QT_MOC_LITERAL(0, 0, 20), // "WBGraphicsWidgetItem"
QT_MOC_LITERAL(1, 21, 6), // "freeze"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 8), // "unFreeze"
QT_MOC_LITERAL(4, 38, 23), // "geometryChangeRequested"
QT_MOC_LITERAL(5, 62, 4), // "geom"
QT_MOC_LITERAL(6, 67, 29), // "javaScriptWindowObjectCleared"
QT_MOC_LITERAL(7, 97, 21), // "mainFrameLoadFinished"
QT_MOC_LITERAL(8, 119, 2), // "ok"
QT_MOC_LITERAL(9, 122, 13), // "onLinkClicked"
QT_MOC_LITERAL(10, 136, 3), // "url"
QT_MOC_LITERAL(11, 140, 22) // "initialLayoutCompleted"

    },
    "WBGraphicsWidgetItem\0freeze\0\0unFreeze\0"
    "geometryChangeRequested\0geom\0"
    "javaScriptWindowObjectCleared\0"
    "mainFrameLoadFinished\0ok\0onLinkClicked\0"
    "url\0initialLayoutCompleted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBGraphicsWidgetItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    0,   50,    2, 0x0a /* Public */,
       4,    1,   51,    2, 0x09 /* Protected */,
       6,    0,   54,    2, 0x09 /* Protected */,
       7,    1,   55,    2, 0x09 /* Protected */,
       9,    1,   58,    2, 0x08 /* Private */,
      11,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QRect,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::QUrl,   10,
    QMetaType::Void,

       0        // eod
};

void WBGraphicsWidgetItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBGraphicsWidgetItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->freeze(); break;
        case 1: _t->unFreeze(); break;
        case 2: _t->geometryChangeRequested((*reinterpret_cast< const QRect(*)>(_a[1]))); break;
        case 3: _t->javaScriptWindowObjectCleared(); break;
        case 4: _t->mainFrameLoadFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->onLinkClicked((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 6: _t->initialLayoutCompleted(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WBGraphicsWidgetItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsWidget::staticMetaObject>(),
    qt_meta_stringdata_WBGraphicsWidgetItem.data,
    qt_meta_data_WBGraphicsWidgetItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBGraphicsWidgetItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBGraphicsWidgetItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBGraphicsWidgetItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "WBItem"))
        return static_cast< WBItem*>(this);
    if (!strcmp(_clname, "WBResizableGraphicsItem"))
        return static_cast< WBResizableGraphicsItem*>(this);
    if (!strcmp(_clname, "WBGraphicsItem"))
        return static_cast< WBGraphicsItem*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QGraphicsItem"))
        return static_cast< QGraphicsItem*>(this);
    return QGraphicsWidget::qt_metacast(_clname);
}

int WBGraphicsWidgetItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
struct qt_meta_stringdata_WBGraphicsAppleWidgetItem_t {
    QByteArrayData data[1];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBGraphicsAppleWidgetItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBGraphicsAppleWidgetItem_t qt_meta_stringdata_WBGraphicsAppleWidgetItem = {
    {
QT_MOC_LITERAL(0, 0, 25) // "WBGraphicsAppleWidgetItem"

    },
    "WBGraphicsAppleWidgetItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBGraphicsAppleWidgetItem[] = {

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

void WBGraphicsAppleWidgetItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject WBGraphicsAppleWidgetItem::staticMetaObject = { {
    QMetaObject::SuperData::link<WBGraphicsWidgetItem::staticMetaObject>(),
    qt_meta_stringdata_WBGraphicsAppleWidgetItem.data,
    qt_meta_data_WBGraphicsAppleWidgetItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBGraphicsAppleWidgetItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBGraphicsAppleWidgetItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBGraphicsAppleWidgetItem.stringdata0))
        return static_cast<void*>(this);
    return WBGraphicsWidgetItem::qt_metacast(_clname);
}

int WBGraphicsAppleWidgetItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WBGraphicsWidgetItem::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_WBGraphicsW3CWidgetItem_t {
    QByteArrayData data[3];
    char stringdata0[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBGraphicsW3CWidgetItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBGraphicsW3CWidgetItem_t qt_meta_stringdata_WBGraphicsW3CWidgetItem = {
    {
QT_MOC_LITERAL(0, 0, 23), // "WBGraphicsW3CWidgetItem"
QT_MOC_LITERAL(1, 24, 29), // "javaScriptWindowObjectCleared"
QT_MOC_LITERAL(2, 54, 0) // ""

    },
    "WBGraphicsW3CWidgetItem\0"
    "javaScriptWindowObjectCleared\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBGraphicsW3CWidgetItem[] = {

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
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void WBGraphicsW3CWidgetItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBGraphicsW3CWidgetItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->javaScriptWindowObjectCleared(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject WBGraphicsW3CWidgetItem::staticMetaObject = { {
    QMetaObject::SuperData::link<WBGraphicsWidgetItem::staticMetaObject>(),
    qt_meta_stringdata_WBGraphicsW3CWidgetItem.data,
    qt_meta_data_WBGraphicsW3CWidgetItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBGraphicsW3CWidgetItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBGraphicsW3CWidgetItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBGraphicsW3CWidgetItem.stringdata0))
        return static_cast<void*>(this);
    return WBGraphicsWidgetItem::qt_metacast(_clname);
}

int WBGraphicsW3CWidgetItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WBGraphicsWidgetItem::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
