/****************************************************************************
** Meta object code from reading C++ file 'WBBoardThumbnailsView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/gui/WBBoardThumbnailsView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBBoardThumbnailsView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WBBoardThumbnailsView_t {
    QByteArrayData data[21];
    char stringdata0[296];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBBoardThumbnailsView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBBoardThumbnailsView_t qt_meta_stringdata_WBBoardThumbnailsView = {
    {
QT_MOC_LITERAL(0, 0, 21), // "WBBoardThumbnailsView"
QT_MOC_LITERAL(1, 22, 30), // "mousePressAndHoldEventRequired"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 3), // "pos"
QT_MOC_LITERAL(4, 58, 21), // "moveThumbnailRequired"
QT_MOC_LITERAL(5, 80, 4), // "from"
QT_MOC_LITERAL(6, 85, 2), // "to"
QT_MOC_LITERAL(7, 88, 22), // "ensureVisibleThumbnail"
QT_MOC_LITERAL(8, 111, 5), // "index"
QT_MOC_LITERAL(9, 117, 17), // "centerOnThumbnail"
QT_MOC_LITERAL(10, 135, 15), // "clearThumbnails"
QT_MOC_LITERAL(11, 151, 14), // "initThumbnails"
QT_MOC_LITERAL(12, 166, 20), // "WBDocumentContainer*"
QT_MOC_LITERAL(13, 187, 6), // "source"
QT_MOC_LITERAL(14, 194, 12), // "addThumbnail"
QT_MOC_LITERAL(15, 207, 1), // "i"
QT_MOC_LITERAL(16, 209, 13), // "moveThumbnail"
QT_MOC_LITERAL(17, 223, 15), // "removeThumbnail"
QT_MOC_LITERAL(18, 239, 16), // "updateThumbnails"
QT_MOC_LITERAL(19, 256, 16), // "longPressTimeout"
QT_MOC_LITERAL(20, 273, 22) // "mousePressAndHoldEvent"

    },
    "WBBoardThumbnailsView\0"
    "mousePressAndHoldEventRequired\0\0pos\0"
    "moveThumbnailRequired\0from\0to\0"
    "ensureVisibleThumbnail\0index\0"
    "centerOnThumbnail\0clearThumbnails\0"
    "initThumbnails\0WBDocumentContainer*\0"
    "source\0addThumbnail\0i\0moveThumbnail\0"
    "removeThumbnail\0updateThumbnails\0"
    "longPressTimeout\0mousePressAndHoldEvent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBBoardThumbnailsView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    2,   77,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   82,    2, 0x0a /* Public */,
       9,    1,   85,    2, 0x0a /* Public */,
      10,    0,   88,    2, 0x0a /* Public */,
      11,    1,   89,    2, 0x0a /* Public */,
      14,    2,   92,    2, 0x0a /* Public */,
      16,    2,   97,    2, 0x0a /* Public */,
      17,    1,  102,    2, 0x0a /* Public */,
      18,    0,  105,    2, 0x0a /* Public */,
      19,    0,  106,    2, 0x0a /* Public */,
      20,    1,  107,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPoint,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 12, QMetaType::Int,   13,   15,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    3,

       0        // eod
};

void WBBoardThumbnailsView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBBoardThumbnailsView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mousePressAndHoldEventRequired((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 1: _t->moveThumbnailRequired((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->ensureVisibleThumbnail((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->centerOnThumbnail((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->clearThumbnails(); break;
        case 5: _t->initThumbnails((*reinterpret_cast< WBDocumentContainer*(*)>(_a[1]))); break;
        case 6: _t->addThumbnail((*reinterpret_cast< WBDocumentContainer*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->moveThumbnail((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->removeThumbnail((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->updateThumbnails(); break;
        case 10: _t->longPressTimeout(); break;
        case 11: _t->mousePressAndHoldEvent((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WBDocumentContainer* >(); break;
            }
            break;
        case 6:
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
            using _t = void (WBBoardThumbnailsView::*)(QPoint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBBoardThumbnailsView::mousePressAndHoldEventRequired)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WBBoardThumbnailsView::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBBoardThumbnailsView::moveThumbnailRequired)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WBBoardThumbnailsView::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsView::staticMetaObject>(),
    qt_meta_stringdata_WBBoardThumbnailsView.data,
    qt_meta_data_WBBoardThumbnailsView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBBoardThumbnailsView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBBoardThumbnailsView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBBoardThumbnailsView.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsView::qt_metacast(_clname);
}

int WBBoardThumbnailsView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void WBBoardThumbnailsView::mousePressAndHoldEventRequired(QPoint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WBBoardThumbnailsView::moveThumbnailRequired(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
