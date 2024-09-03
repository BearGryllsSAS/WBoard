/****************************************************************************
** Meta object code from reading C++ file 'WBMagnifer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/gui/WBMagnifer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBMagnifer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WBMagnifier_t {
    QByteArrayData data[12];
    char stringdata0[202];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBMagnifier_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBMagnifier_t qt_meta_stringdata_WBMagnifier = {
    {
QT_MOC_LITERAL(0, 0, 11), // "WBMagnifier"
QT_MOC_LITERAL(1, 12, 21), // "magnifierMoved_Signal"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 6), // "newPos"
QT_MOC_LITERAL(4, 42, 21), // "magnifierClose_Signal"
QT_MOC_LITERAL(5, 64, 22), // "magnifierZoomIn_Signal"
QT_MOC_LITERAL(6, 87, 23), // "magnifierZoomOut_Signal"
QT_MOC_LITERAL(7, 111, 23), // "magnifierResized_Signal"
QT_MOC_LITERAL(8, 135, 14), // "newPercentSize"
QT_MOC_LITERAL(9, 150, 33), // "magnifierDrawingModeChange_Si..."
QT_MOC_LITERAL(10, 184, 4), // "mode"
QT_MOC_LITERAL(11, 189, 12) // "slot_refresh"

    },
    "WBMagnifier\0magnifierMoved_Signal\0\0"
    "newPos\0magnifierClose_Signal\0"
    "magnifierZoomIn_Signal\0magnifierZoomOut_Signal\0"
    "magnifierResized_Signal\0newPercentSize\0"
    "magnifierDrawingModeChange_Signal\0"
    "mode\0slot_refresh"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBMagnifier[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    0,   52,    2, 0x06 /* Public */,
       5,    0,   53,    2, 0x06 /* Public */,
       6,    0,   54,    2, 0x06 /* Public */,
       7,    1,   55,    2, 0x06 /* Public */,
       9,    1,   58,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   61,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPoint,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal,    8,
    QMetaType::Void, QMetaType::Int,   10,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void WBMagnifier::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBMagnifier *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->magnifierMoved_Signal((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 1: _t->magnifierClose_Signal(); break;
        case 2: _t->magnifierZoomIn_Signal(); break;
        case 3: _t->magnifierZoomOut_Signal(); break;
        case 4: _t->magnifierResized_Signal((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 5: _t->magnifierDrawingModeChange_Signal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->slot_refresh(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WBMagnifier::*)(QPoint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBMagnifier::magnifierMoved_Signal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WBMagnifier::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBMagnifier::magnifierClose_Signal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WBMagnifier::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBMagnifier::magnifierZoomIn_Signal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (WBMagnifier::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBMagnifier::magnifierZoomOut_Signal)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (WBMagnifier::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBMagnifier::magnifierResized_Signal)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (WBMagnifier::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBMagnifier::magnifierDrawingModeChange_Signal)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WBMagnifier::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_WBMagnifier.data,
    qt_meta_data_WBMagnifier,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBMagnifier::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBMagnifier::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBMagnifier.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int WBMagnifier::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void WBMagnifier::magnifierMoved_Signal(QPoint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WBMagnifier::magnifierClose_Signal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void WBMagnifier::magnifierZoomIn_Signal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void WBMagnifier::magnifierZoomOut_Signal()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void WBMagnifier::magnifierResized_Signal(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void WBMagnifier::magnifierDrawingModeChange_Signal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
