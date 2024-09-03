/****************************************************************************
** Meta object code from reading C++ file 'WBGraphicsTextItem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/domain/WBGraphicsTextItem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBGraphicsTextItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WBGraphicsTextItem_t {
    QByteArrayData data[8];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBGraphicsTextItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBGraphicsTextItem_t qt_meta_stringdata_WBGraphicsTextItem = {
    {
QT_MOC_LITERAL(0, 0, 18), // "WBGraphicsTextItem"
QT_MOC_LITERAL(1, 19, 20), // "textUndoCommandAdded"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 19), // "WBGraphicsTextItem*"
QT_MOC_LITERAL(4, 61, 8), // "textItem"
QT_MOC_LITERAL(5, 70, 16), // "undoCommandAdded"
QT_MOC_LITERAL(6, 87, 19), // "documentSizeChanged"
QT_MOC_LITERAL(7, 107, 7) // "newSize"

    },
    "WBGraphicsTextItem\0textUndoCommandAdded\0"
    "\0WBGraphicsTextItem*\0textItem\0"
    "undoCommandAdded\0documentSizeChanged\0"
    "newSize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBGraphicsTextItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   32,    2, 0x08 /* Private */,
       6,    1,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QSizeF,    7,

       0        // eod
};

void WBGraphicsTextItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBGraphicsTextItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->textUndoCommandAdded((*reinterpret_cast< WBGraphicsTextItem*(*)>(_a[1]))); break;
        case 1: _t->undoCommandAdded(); break;
        case 2: _t->documentSizeChanged((*reinterpret_cast< const QSizeF(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WBGraphicsTextItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WBGraphicsTextItem::*)(WBGraphicsTextItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBGraphicsTextItem::textUndoCommandAdded)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WBGraphicsTextItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsTextItem::staticMetaObject>(),
    qt_meta_stringdata_WBGraphicsTextItem.data,
    qt_meta_data_WBGraphicsTextItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBGraphicsTextItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBGraphicsTextItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBGraphicsTextItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "WBItem"))
        return static_cast< WBItem*>(this);
    if (!strcmp(_clname, "WBResizableGraphicsItem"))
        return static_cast< WBResizableGraphicsItem*>(this);
    if (!strcmp(_clname, "WBGraphicsItem"))
        return static_cast< WBGraphicsItem*>(this);
    return QGraphicsTextItem::qt_metacast(_clname);
}

int WBGraphicsTextItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsTextItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void WBGraphicsTextItem::textUndoCommandAdded(WBGraphicsTextItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
