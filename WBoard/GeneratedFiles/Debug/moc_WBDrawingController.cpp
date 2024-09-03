/****************************************************************************
** Meta object code from reading C++ file 'WBDrawingController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/board/WBDrawingController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBDrawingController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WBDrawingController_t {
    QByteArrayData data[25];
    char stringdata0[406];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBDrawingController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBDrawingController_t qt_meta_stringdata_WBDrawingController = {
    {
QT_MOC_LITERAL(0, 0, 19), // "WBDrawingController"
QT_MOC_LITERAL(1, 20, 17), // "stylusToolChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 4), // "tool"
QT_MOC_LITERAL(4, 44, 19), // "colorPaletteChanged"
QT_MOC_LITERAL(5, 64, 21), // "lineWidthIndexChanged"
QT_MOC_LITERAL(6, 86, 5), // "index"
QT_MOC_LITERAL(7, 92, 17), // "colorIndexChanged"
QT_MOC_LITERAL(8, 110, 13), // "setStylusTool"
QT_MOC_LITERAL(9, 124, 17), // "setLineWidthIndex"
QT_MOC_LITERAL(10, 142, 13), // "setColorIndex"
QT_MOC_LITERAL(11, 156, 19), // "setEraserWidthIndex"
QT_MOC_LITERAL(12, 176, 15), // "penToolSelected"
QT_MOC_LITERAL(13, 192, 7), // "checked"
QT_MOC_LITERAL(14, 200, 18), // "eraserToolSelected"
QT_MOC_LITERAL(15, 219, 18), // "markerToolSelected"
QT_MOC_LITERAL(16, 238, 20), // "selectorToolSelected"
QT_MOC_LITERAL(17, 259, 16), // "playToolSelected"
QT_MOC_LITERAL(18, 276, 16), // "handToolSelected"
QT_MOC_LITERAL(19, 293, 18), // "zoomInToolSelected"
QT_MOC_LITERAL(20, 312, 19), // "zoomOutToolSelected"
QT_MOC_LITERAL(21, 332, 19), // "pointerToolSelected"
QT_MOC_LITERAL(22, 352, 16), // "lineToolSelected"
QT_MOC_LITERAL(23, 369, 16), // "textToolSelected"
QT_MOC_LITERAL(24, 386, 19) // "captureToolSelected"

    },
    "WBDrawingController\0stylusToolChanged\0"
    "\0tool\0colorPaletteChanged\0"
    "lineWidthIndexChanged\0index\0"
    "colorIndexChanged\0setStylusTool\0"
    "setLineWidthIndex\0setColorIndex\0"
    "setEraserWidthIndex\0penToolSelected\0"
    "checked\0eraserToolSelected\0"
    "markerToolSelected\0selectorToolSelected\0"
    "playToolSelected\0handToolSelected\0"
    "zoomInToolSelected\0zoomOutToolSelected\0"
    "pointerToolSelected\0lineToolSelected\0"
    "textToolSelected\0captureToolSelected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBDrawingController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  114,    2, 0x06 /* Public */,
       4,    0,  117,    2, 0x06 /* Public */,
       5,    1,  118,    2, 0x06 /* Public */,
       7,    1,  121,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,  124,    2, 0x0a /* Public */,
       9,    1,  127,    2, 0x0a /* Public */,
      10,    1,  130,    2, 0x0a /* Public */,
      11,    1,  133,    2, 0x0a /* Public */,
      12,    1,  136,    2, 0x08 /* Private */,
      14,    1,  139,    2, 0x08 /* Private */,
      15,    1,  142,    2, 0x08 /* Private */,
      16,    1,  145,    2, 0x08 /* Private */,
      17,    1,  148,    2, 0x08 /* Private */,
      18,    1,  151,    2, 0x08 /* Private */,
      19,    1,  154,    2, 0x08 /* Private */,
      20,    1,  157,    2, 0x08 /* Private */,
      21,    1,  160,    2, 0x08 /* Private */,
      22,    1,  163,    2, 0x08 /* Private */,
      23,    1,  166,    2, 0x08 /* Private */,
      24,    1,  169,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,

       0        // eod
};

void WBDrawingController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBDrawingController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stylusToolChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->colorPaletteChanged(); break;
        case 2: _t->lineWidthIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->colorIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setStylusTool((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setLineWidthIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setColorIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setEraserWidthIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->penToolSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->eraserToolSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->markerToolSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->selectorToolSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->playToolSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->handToolSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->zoomInToolSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->zoomOutToolSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->pointerToolSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->lineToolSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->textToolSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->captureToolSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WBDrawingController::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBDrawingController::stylusToolChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WBDrawingController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBDrawingController::colorPaletteChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WBDrawingController::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBDrawingController::lineWidthIndexChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (WBDrawingController::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBDrawingController::colorIndexChanged)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WBDrawingController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_WBDrawingController.data,
    qt_meta_data_WBDrawingController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBDrawingController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBDrawingController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBDrawingController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WBDrawingController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void WBDrawingController::stylusToolChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WBDrawingController::colorPaletteChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void WBDrawingController::lineWidthIndexChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WBDrawingController::colorIndexChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
