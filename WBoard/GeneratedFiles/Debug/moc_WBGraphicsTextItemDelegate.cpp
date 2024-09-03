/****************************************************************************
** Meta object code from reading C++ file 'WBGraphicsTextItemDelegate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/domain/WBGraphicsTextItemDelegate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBGraphicsTextItemDelegate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AlignTextButton_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AlignTextButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AlignTextButton_t qt_meta_stringdata_AlignTextButton = {
    {
QT_MOC_LITERAL(0, 0, 15) // "AlignTextButton"

    },
    "AlignTextButton"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AlignTextButton[] = {

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

void AlignTextButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AlignTextButton::staticMetaObject = { {
    QMetaObject::SuperData::link<DelegateButton::staticMetaObject>(),
    qt_meta_stringdata_AlignTextButton.data,
    qt_meta_data_AlignTextButton,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AlignTextButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AlignTextButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AlignTextButton.stringdata0))
        return static_cast<void*>(this);
    return DelegateButton::qt_metacast(_clname);
}

int AlignTextButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DelegateButton::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_WBGraphicsTextItemDelegate_t {
    QByteArrayData data[17];
    char stringdata0[220];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBGraphicsTextItemDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBGraphicsTextItemDelegate_t qt_meta_stringdata_WBGraphicsTextItemDelegate = {
    {
QT_MOC_LITERAL(0, 0, 26), // "WBGraphicsTextItemDelegate"
QT_MOC_LITERAL(1, 27, 15), // "contentsChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 11), // "setEditable"
QT_MOC_LITERAL(4, 56, 6), // "remove"
QT_MOC_LITERAL(5, 63, 7), // "canUndo"
QT_MOC_LITERAL(6, 71, 8), // "pickFont"
QT_MOC_LITERAL(7, 80, 9), // "pickColor"
QT_MOC_LITERAL(8, 90, 12), // "decreaseSize"
QT_MOC_LITERAL(9, 103, 12), // "increaseSize"
QT_MOC_LITERAL(10, 116, 18), // "alignButtonProcess"
QT_MOC_LITERAL(11, 135, 23), // "onCursorPositionChanged"
QT_MOC_LITERAL(12, 159, 11), // "QTextCursor"
QT_MOC_LITERAL(13, 171, 6), // "cursor"
QT_MOC_LITERAL(14, 178, 21), // "onModificationChanged"
QT_MOC_LITERAL(15, 200, 2), // "ch"
QT_MOC_LITERAL(16, 203, 16) // "onContentChanged"

    },
    "WBGraphicsTextItemDelegate\0contentsChanged\0"
    "\0setEditable\0remove\0canUndo\0pickFont\0"
    "pickColor\0decreaseSize\0increaseSize\0"
    "alignButtonProcess\0onCursorPositionChanged\0"
    "QTextCursor\0cursor\0onModificationChanged\0"
    "ch\0onContentChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBGraphicsTextItemDelegate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a /* Public */,
       3,    1,   70,    2, 0x0a /* Public */,
       4,    1,   73,    2, 0x0a /* Public */,
       6,    0,   76,    2, 0x08 /* Private */,
       7,    0,   77,    2, 0x08 /* Private */,
       8,    0,   78,    2, 0x08 /* Private */,
       9,    0,   79,    2, 0x08 /* Private */,
      10,    0,   80,    2, 0x08 /* Private */,
      11,    1,   81,    2, 0x08 /* Private */,
      14,    1,   84,    2, 0x08 /* Private */,
      16,    0,   87,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void,

       0        // eod
};

void WBGraphicsTextItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBGraphicsTextItemDelegate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->contentsChanged(); break;
        case 1: _t->setEditable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->remove((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->pickFont(); break;
        case 4: _t->pickColor(); break;
        case 5: _t->decreaseSize(); break;
        case 6: _t->increaseSize(); break;
        case 7: _t->alignButtonProcess(); break;
        case 8: _t->onCursorPositionChanged((*reinterpret_cast< const QTextCursor(*)>(_a[1]))); break;
        case 9: _t->onModificationChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->onContentChanged(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WBGraphicsTextItemDelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<WBGraphicsItemDelegate::staticMetaObject>(),
    qt_meta_stringdata_WBGraphicsTextItemDelegate.data,
    qt_meta_data_WBGraphicsTextItemDelegate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBGraphicsTextItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBGraphicsTextItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBGraphicsTextItemDelegate.stringdata0))
        return static_cast<void*>(this);
    return WBGraphicsItemDelegate::qt_metacast(_clname);
}

int WBGraphicsTextItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WBGraphicsItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
