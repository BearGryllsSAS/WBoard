/****************************************************************************
** Meta object code from reading C++ file 'WBGraphicsItemDelegate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/domain/WBGraphicsItemDelegate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBGraphicsItemDelegate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DelegateButton_t {
    QByteArrayData data[6];
    char stringdata0[62];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DelegateButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DelegateButton_t qt_meta_stringdata_DelegateButton = {
    {
QT_MOC_LITERAL(0, 0, 14), // "DelegateButton"
QT_MOC_LITERAL(1, 15, 7), // "clicked"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 7), // "checked"
QT_MOC_LITERAL(4, 32, 11), // "longClicked"
QT_MOC_LITERAL(5, 44, 17) // "startShowProgress"

    },
    "DelegateButton\0clicked\0\0checked\0"
    "longClicked\0startShowProgress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DelegateButton[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       1,    0,   37,    2, 0x26 /* Public | MethodCloned */,
       4,    0,   38,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   39,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void DelegateButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DelegateButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->clicked(); break;
        case 2: _t->longClicked(); break;
        case 3: _t->startShowProgress(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DelegateButton::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DelegateButton::clicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DelegateButton::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DelegateButton::longClicked)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DelegateButton::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsSvgItem::staticMetaObject>(),
    qt_meta_stringdata_DelegateButton.data,
    qt_meta_data_DelegateButton,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DelegateButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DelegateButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DelegateButton.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsSvgItem::qt_metacast(_clname);
}

int DelegateButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsSvgItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void DelegateButton::clicked(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 2
void DelegateButton::longClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
struct qt_meta_stringdata_DelegateMediaControl_t {
    QByteArrayData data[3];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DelegateMediaControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DelegateMediaControl_t qt_meta_stringdata_DelegateMediaControl = {
    {
QT_MOC_LITERAL(0, 0, 20), // "DelegateMediaControl"
QT_MOC_LITERAL(1, 21, 4), // "used"
QT_MOC_LITERAL(2, 26, 0) // ""

    },
    "DelegateMediaControl\0used\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DelegateMediaControl[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void DelegateMediaControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DelegateMediaControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->used(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DelegateMediaControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DelegateMediaControl::used)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject DelegateMediaControl::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DelegateMediaControl.data,
    qt_meta_data_DelegateMediaControl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DelegateMediaControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DelegateMediaControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DelegateMediaControl.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QGraphicsRectItem"))
        return static_cast< QGraphicsRectItem*>(this);
    return QObject::qt_metacast(_clname);
}

int DelegateMediaControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void DelegateMediaControl::used()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_WBGraphicsItemDelegate_t {
    QByteArrayData data[20];
    char stringdata0[246];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBGraphicsItemDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBGraphicsItemDelegate_t qt_meta_stringdata_WBGraphicsItemDelegate = {
    {
QT_MOC_LITERAL(0, 0, 22), // "WBGraphicsItemDelegate"
QT_MOC_LITERAL(1, 23, 20), // "showOnDisplayChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 5), // "shown"
QT_MOC_LITERAL(4, 51, 11), // "lockChanged"
QT_MOC_LITERAL(5, 63, 6), // "locked"
QT_MOC_LITERAL(6, 70, 6), // "remove"
QT_MOC_LITERAL(7, 77, 7), // "canUndo"
QT_MOC_LITERAL(8, 85, 8), // "showMenu"
QT_MOC_LITERAL(9, 94, 8), // "showHide"
QT_MOC_LITERAL(10, 103, 4), // "show"
QT_MOC_LITERAL(11, 108, 4), // "lock"
QT_MOC_LITERAL(12, 113, 9), // "duplicate"
QT_MOC_LITERAL(13, 123, 16), // "increaseZLevelUp"
QT_MOC_LITERAL(14, 140, 18), // "increaseZLevelDown"
QT_MOC_LITERAL(15, 159, 17), // "increaseZlevelTop"
QT_MOC_LITERAL(16, 177, 20), // "increaseZlevelBottom"
QT_MOC_LITERAL(17, 198, 13), // "onZoomChanged"
QT_MOC_LITERAL(18, 212, 15), // "setAsBackground"
QT_MOC_LITERAL(19, 228, 17) // "gotoContentSource"

    },
    "WBGraphicsItemDelegate\0showOnDisplayChanged\0"
    "\0shown\0lockChanged\0locked\0remove\0"
    "canUndo\0showMenu\0showHide\0show\0lock\0"
    "duplicate\0increaseZLevelUp\0"
    "increaseZLevelDown\0increaseZlevelTop\0"
    "increaseZlevelBottom\0onZoomChanged\0"
    "setAsBackground\0gotoContentSource"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBGraphicsItemDelegate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,
       4,    1,   92,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   95,    2, 0x0a /* Public */,
       6,    0,   98,    2, 0x2a /* Public | MethodCloned */,
       8,    0,   99,    2, 0x0a /* Public */,
       9,    1,  100,    2, 0x0a /* Public */,
      11,    1,  103,    2, 0x0a /* Public */,
      12,    0,  106,    2, 0x0a /* Public */,
      13,    0,  107,    2, 0x0a /* Public */,
      14,    0,  108,    2, 0x0a /* Public */,
      15,    0,  109,    2, 0x0a /* Public */,
      16,    0,  110,    2, 0x0a /* Public */,
      17,    0,  111,    2, 0x0a /* Public */,
      18,    0,  112,    2, 0x09 /* Protected */,
      19,    0,  113,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WBGraphicsItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBGraphicsItemDelegate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showOnDisplayChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->lockChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->remove((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->remove(); break;
        case 4: _t->showMenu(); break;
        case 5: _t->showHide((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->lock((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->duplicate(); break;
        case 8: _t->increaseZLevelUp(); break;
        case 9: _t->increaseZLevelDown(); break;
        case 10: _t->increaseZlevelTop(); break;
        case 11: _t->increaseZlevelBottom(); break;
        case 12: _t->onZoomChanged(); break;
        case 13: _t->setAsBackground(); break;
        case 14: _t->gotoContentSource(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WBGraphicsItemDelegate::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBGraphicsItemDelegate::showOnDisplayChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WBGraphicsItemDelegate::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBGraphicsItemDelegate::lockChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WBGraphicsItemDelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_WBGraphicsItemDelegate.data,
    qt_meta_data_WBGraphicsItemDelegate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBGraphicsItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBGraphicsItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBGraphicsItemDelegate.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WBGraphicsItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void WBGraphicsItemDelegate::showOnDisplayChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WBGraphicsItemDelegate::lockChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
