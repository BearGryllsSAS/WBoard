/****************************************************************************
** Meta object code from reading C++ file 'WBDocumentNavigator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/gui/WBDocumentNavigator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBDocumentNavigator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WBDocumentNavigator_t {
    QByteArrayData data[15];
    char stringdata0[228];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBDocumentNavigator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBDocumentNavigator_t qt_meta_stringdata_WBDocumentNavigator = {
    {
QT_MOC_LITERAL(0, 0, 19), // "WBDocumentNavigator"
QT_MOC_LITERAL(1, 20, 30), // "mousePressAndHoldEventRequired"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 21), // "moveThumbnailRequired"
QT_MOC_LITERAL(4, 74, 4), // "from"
QT_MOC_LITERAL(5, 79, 2), // "to"
QT_MOC_LITERAL(6, 82, 22), // "onScrollToSelectedPage"
QT_MOC_LITERAL(7, 105, 5), // "index"
QT_MOC_LITERAL(8, 111, 18), // "generateThumbnails"
QT_MOC_LITERAL(9, 130, 20), // "WBDocumentContainer*"
QT_MOC_LITERAL(10, 151, 6), // "source"
QT_MOC_LITERAL(11, 158, 23), // "updateSpecificThumbnail"
QT_MOC_LITERAL(12, 182, 5), // "iPage"
QT_MOC_LITERAL(13, 188, 16), // "longPressTimeout"
QT_MOC_LITERAL(14, 205, 22) // "mousePressAndHoldEvent"

    },
    "WBDocumentNavigator\0mousePressAndHoldEventRequired\0"
    "\0moveThumbnailRequired\0from\0to\0"
    "onScrollToSelectedPage\0index\0"
    "generateThumbnails\0WBDocumentContainer*\0"
    "source\0updateSpecificThumbnail\0iPage\0"
    "longPressTimeout\0mousePressAndHoldEvent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBDocumentNavigator[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    2,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   55,    2, 0x0a /* Public */,
       8,    1,   58,    2, 0x0a /* Public */,
      11,    1,   61,    2, 0x0a /* Public */,
      13,    0,   64,    2, 0x0a /* Public */,
      14,    0,   65,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WBDocumentNavigator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBDocumentNavigator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mousePressAndHoldEventRequired(); break;
        case 1: _t->moveThumbnailRequired((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->onScrollToSelectedPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->generateThumbnails((*reinterpret_cast< WBDocumentContainer*(*)>(_a[1]))); break;
        case 4: _t->updateSpecificThumbnail((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->longPressTimeout(); break;
        case 6: _t->mousePressAndHoldEvent(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
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
            using _t = void (WBDocumentNavigator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBDocumentNavigator::mousePressAndHoldEventRequired)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WBDocumentNavigator::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBDocumentNavigator::moveThumbnailRequired)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WBDocumentNavigator::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsView::staticMetaObject>(),
    qt_meta_stringdata_WBDocumentNavigator.data,
    qt_meta_data_WBDocumentNavigator,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBDocumentNavigator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBDocumentNavigator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBDocumentNavigator.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsView::qt_metacast(_clname);
}

int WBDocumentNavigator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
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
void WBDocumentNavigator::mousePressAndHoldEventRequired()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WBDocumentNavigator::moveThumbnailRequired(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
