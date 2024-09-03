/****************************************************************************
** Meta object code from reading C++ file 'WBKeyboardPalette.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/gui/WBKeyboardPalette.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBKeyboardPalette.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WBKeyboardPalette_t {
    QByteArrayData data[17];
    char stringdata0[190];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBKeyboardPalette_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBKeyboardPalette_t qt_meta_stringdata_WBKeyboardPalette = {
    {
QT_MOC_LITERAL(0, 0, 17), // "WBKeyboardPalette"
QT_MOC_LITERAL(1, 18, 5), // "moved"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 13), // "localeChanged"
QT_MOC_LITERAL(4, 39, 17), // "keyboardActivated"
QT_MOC_LITERAL(5, 57, 12), // "syncPosition"
QT_MOC_LITERAL(6, 70, 3), // "pos"
QT_MOC_LITERAL(7, 74, 10), // "syncLocale"
QT_MOC_LITERAL(8, 85, 7), // "nLocale"
QT_MOC_LITERAL(9, 93, 32), // "keyboardPaletteButtonSizeChanged"
QT_MOC_LITERAL(10, 126, 4), // "size"
QT_MOC_LITERAL(11, 131, 11), // "onActivated"
QT_MOC_LITERAL(12, 143, 1), // "b"
QT_MOC_LITERAL(13, 145, 13), // "onDeactivated"
QT_MOC_LITERAL(14, 159, 12), // "showKeyboard"
QT_MOC_LITERAL(15, 172, 4), // "show"
QT_MOC_LITERAL(16, 177, 12) // "hideKeyboard"

    },
    "WBKeyboardPalette\0moved\0\0localeChanged\0"
    "keyboardActivated\0syncPosition\0pos\0"
    "syncLocale\0nLocale\0keyboardPaletteButtonSizeChanged\0"
    "size\0onActivated\0b\0onDeactivated\0"
    "showKeyboard\0show\0hideKeyboard"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBKeyboardPalette[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       3,    1,   67,    2, 0x06 /* Public */,
       4,    1,   70,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   73,    2, 0x08 /* Private */,
       7,    1,   76,    2, 0x08 /* Private */,
       9,    1,   79,    2, 0x08 /* Private */,
      11,    1,   82,    2, 0x08 /* Private */,
      13,    0,   85,    2, 0x08 /* Private */,
      14,    1,   86,    2, 0x08 /* Private */,
      16,    0,   89,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::QVariant,   10,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void,

       0        // eod
};

void WBKeyboardPalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBKeyboardPalette *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->moved((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 1: _t->localeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->keyboardActivated((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->syncPosition((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 4: _t->syncLocale((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->keyboardPaletteButtonSizeChanged((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 6: _t->onActivated((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->onDeactivated(); break;
        case 8: _t->showKeyboard((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->hideKeyboard(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WBKeyboardPalette::*)(const QPoint & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBKeyboardPalette::moved)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WBKeyboardPalette::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBKeyboardPalette::localeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WBKeyboardPalette::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBKeyboardPalette::keyboardActivated)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WBKeyboardPalette::staticMetaObject = { {
    QMetaObject::SuperData::link<WBActionPalette::staticMetaObject>(),
    qt_meta_stringdata_WBKeyboardPalette.data,
    qt_meta_data_WBKeyboardPalette,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBKeyboardPalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBKeyboardPalette::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBKeyboardPalette.stringdata0))
        return static_cast<void*>(this);
    return WBActionPalette::qt_metacast(_clname);
}

int WBKeyboardPalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WBActionPalette::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void WBKeyboardPalette::moved(const QPoint & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WBKeyboardPalette::localeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WBKeyboardPalette::keyboardActivated(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_WBKeyboardButton_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBKeyboardButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBKeyboardButton_t qt_meta_stringdata_WBKeyboardButton = {
    {
QT_MOC_LITERAL(0, 0, 16) // "WBKeyboardButton"

    },
    "WBKeyboardButton"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBKeyboardButton[] = {

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

void WBKeyboardButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject WBKeyboardButton::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_WBKeyboardButton.data,
    qt_meta_data_WBKeyboardButton,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBKeyboardButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBKeyboardButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBKeyboardButton.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int WBKeyboardButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_WBKeyButton_t {
    QByteArrayData data[1];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBKeyButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBKeyButton_t qt_meta_stringdata_WBKeyButton = {
    {
QT_MOC_LITERAL(0, 0, 11) // "WBKeyButton"

    },
    "WBKeyButton"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBKeyButton[] = {

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

void WBKeyButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject WBKeyButton::staticMetaObject = { {
    QMetaObject::SuperData::link<WBKeyboardButton::staticMetaObject>(),
    qt_meta_stringdata_WBKeyButton.data,
    qt_meta_data_WBKeyButton,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBKeyButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBKeyButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBKeyButton.stringdata0))
        return static_cast<void*>(this);
    return WBKeyboardButton::qt_metacast(_clname);
}

int WBKeyButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WBKeyboardButton::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_WBCntrlButton_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBCntrlButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBCntrlButton_t qt_meta_stringdata_WBCntrlButton = {
    {
QT_MOC_LITERAL(0, 0, 13) // "WBCntrlButton"

    },
    "WBCntrlButton"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBCntrlButton[] = {

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

void WBCntrlButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject WBCntrlButton::staticMetaObject = { {
    QMetaObject::SuperData::link<WBKeyboardButton::staticMetaObject>(),
    qt_meta_stringdata_WBCntrlButton.data,
    qt_meta_data_WBCntrlButton,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBCntrlButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBCntrlButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBCntrlButton.stringdata0))
        return static_cast<void*>(this);
    return WBKeyboardButton::qt_metacast(_clname);
}

int WBCntrlButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WBKeyboardButton::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_WBCapsLockButton_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBCapsLockButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBCapsLockButton_t qt_meta_stringdata_WBCapsLockButton = {
    {
QT_MOC_LITERAL(0, 0, 16) // "WBCapsLockButton"

    },
    "WBCapsLockButton"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBCapsLockButton[] = {

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

void WBCapsLockButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject WBCapsLockButton::staticMetaObject = { {
    QMetaObject::SuperData::link<WBKeyboardButton::staticMetaObject>(),
    qt_meta_stringdata_WBCapsLockButton.data,
    qt_meta_data_WBCapsLockButton,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBCapsLockButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBCapsLockButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBCapsLockButton.stringdata0))
        return static_cast<void*>(this);
    return WBKeyboardButton::qt_metacast(_clname);
}

int WBCapsLockButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WBKeyboardButton::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_WBShiftButton_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBShiftButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBShiftButton_t qt_meta_stringdata_WBShiftButton = {
    {
QT_MOC_LITERAL(0, 0, 13) // "WBShiftButton"

    },
    "WBShiftButton"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBShiftButton[] = {

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

void WBShiftButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject WBShiftButton::staticMetaObject = { {
    QMetaObject::SuperData::link<WBKeyboardButton::staticMetaObject>(),
    qt_meta_stringdata_WBShiftButton.data,
    qt_meta_data_WBShiftButton,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBShiftButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBShiftButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBShiftButton.stringdata0))
        return static_cast<void*>(this);
    return WBKeyboardButton::qt_metacast(_clname);
}

int WBShiftButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WBKeyboardButton::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_WBLocaleButton_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBLocaleButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBLocaleButton_t qt_meta_stringdata_WBLocaleButton = {
    {
QT_MOC_LITERAL(0, 0, 14) // "WBLocaleButton"

    },
    "WBLocaleButton"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBLocaleButton[] = {

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

void WBLocaleButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject WBLocaleButton::staticMetaObject = { {
    QMetaObject::SuperData::link<WBKeyboardButton::staticMetaObject>(),
    qt_meta_stringdata_WBLocaleButton.data,
    qt_meta_data_WBLocaleButton,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBLocaleButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBLocaleButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBLocaleButton.stringdata0))
        return static_cast<void*>(this);
    return WBKeyboardButton::qt_metacast(_clname);
}

int WBLocaleButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WBKeyboardButton::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
