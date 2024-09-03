/****************************************************************************
** Meta object code from reading C++ file 'WBDesktopPalette.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/desktop/WBDesktopPalette.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBDesktopPalette.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WBDesktopPalette_t {
    QByteArrayData data[22];
    char stringdata0[290];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBDesktopPalette_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBDesktopPalette_t qt_meta_stringdata_WBDesktopPalette = {
    {
QT_MOC_LITERAL(0, 0, 16), // "WBDesktopPalette"
QT_MOC_LITERAL(1, 17, 13), // "uniboardClick"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 11), // "customClick"
QT_MOC_LITERAL(4, 44, 11), // "windowClick"
QT_MOC_LITERAL(5, 56, 11), // "screenClick"
QT_MOC_LITERAL(6, 68, 11), // "refreshMask"
QT_MOC_LITERAL(7, 80, 17), // "stylusToolChanged"
QT_MOC_LITERAL(8, 98, 4), // "tool"
QT_MOC_LITERAL(9, 103, 13), // "showHideClick"
QT_MOC_LITERAL(10, 117, 7), // "checked"
QT_MOC_LITERAL(11, 125, 19), // "updateShowHideState"
QT_MOC_LITERAL(12, 145, 12), // "pShowEnabled"
QT_MOC_LITERAL(13, 158, 24), // "setShowHideButtonVisible"
QT_MOC_LITERAL(14, 183, 7), // "visible"
QT_MOC_LITERAL(15, 191, 29), // "setDisplaySelectButtonVisible"
QT_MOC_LITERAL(16, 221, 4), // "show"
QT_MOC_LITERAL(17, 226, 10), // "minimizeMe"
QT_MOC_LITERAL(18, 237, 18), // "eMinimizedLocation"
QT_MOC_LITERAL(19, 256, 8), // "location"
QT_MOC_LITERAL(20, 265, 10), // "maximizeMe"
QT_MOC_LITERAL(21, 276, 13) // "parentResized"

    },
    "WBDesktopPalette\0uniboardClick\0\0"
    "customClick\0windowClick\0screenClick\0"
    "refreshMask\0stylusToolChanged\0tool\0"
    "showHideClick\0checked\0updateShowHideState\0"
    "pShowEnabled\0setShowHideButtonVisible\0"
    "visible\0setDisplaySelectButtonVisible\0"
    "show\0minimizeMe\0eMinimizedLocation\0"
    "location\0maximizeMe\0parentResized"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBDesktopPalette[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    0,   80,    2, 0x06 /* Public */,
       4,    0,   81,    2, 0x06 /* Public */,
       5,    0,   82,    2, 0x06 /* Public */,
       6,    0,   83,    2, 0x06 /* Public */,
       7,    1,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   87,    2, 0x0a /* Public */,
      11,    1,   90,    2, 0x0a /* Public */,
      13,    1,   93,    2, 0x0a /* Public */,
      15,    1,   96,    2, 0x0a /* Public */,
      17,    1,   99,    2, 0x0a /* Public */,
      20,    0,  102,    2, 0x0a /* Public */,
      21,    0,  103,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WBDesktopPalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBDesktopPalette *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->uniboardClick(); break;
        case 1: _t->customClick(); break;
        case 2: _t->windowClick(); break;
        case 3: _t->screenClick(); break;
        case 4: _t->refreshMask(); break;
        case 5: _t->stylusToolChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->showHideClick((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->updateShowHideState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->setShowHideButtonVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->setDisplaySelectButtonVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->minimizeMe((*reinterpret_cast< eMinimizedLocation(*)>(_a[1]))); break;
        case 11: _t->maximizeMe(); break;
        case 12: _t->parentResized(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WBDesktopPalette::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBDesktopPalette::uniboardClick)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WBDesktopPalette::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBDesktopPalette::customClick)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WBDesktopPalette::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBDesktopPalette::windowClick)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (WBDesktopPalette::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBDesktopPalette::screenClick)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (WBDesktopPalette::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBDesktopPalette::refreshMask)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (WBDesktopPalette::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBDesktopPalette::stylusToolChanged)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WBDesktopPalette::staticMetaObject = { {
    QMetaObject::SuperData::link<WBActionPalette::staticMetaObject>(),
    qt_meta_stringdata_WBDesktopPalette.data,
    qt_meta_data_WBDesktopPalette,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBDesktopPalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBDesktopPalette::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBDesktopPalette.stringdata0))
        return static_cast<void*>(this);
    return WBActionPalette::qt_metacast(_clname);
}

int WBDesktopPalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WBActionPalette::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void WBDesktopPalette::uniboardClick()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WBDesktopPalette::customClick()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void WBDesktopPalette::windowClick()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void WBDesktopPalette::screenClick()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void WBDesktopPalette::refreshMask()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void WBDesktopPalette::stylusToolChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
