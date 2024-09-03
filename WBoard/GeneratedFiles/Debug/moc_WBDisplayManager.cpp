/****************************************************************************
** Meta object code from reading C++ file 'WBDisplayManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/core/WBDisplayManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBDisplayManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WBDisplayManager_t {
    QByteArrayData data[16];
    char stringdata0[195];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBDisplayManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBDisplayManager_t qt_meta_stringdata_WBDisplayManager = {
    {
QT_MOC_LITERAL(0, 0, 16), // "WBDisplayManager"
QT_MOC_LITERAL(1, 17, 19), // "screenLayoutChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 26), // "adjustDisplayViewsRequired"
QT_MOC_LITERAL(4, 65, 13), // "reinitScreens"
QT_MOC_LITERAL(5, 79, 5), // "bswap"
QT_MOC_LITERAL(6, 85, 13), // "adjustScreens"
QT_MOC_LITERAL(7, 99, 6), // "screen"
QT_MOC_LITERAL(8, 106, 8), // "blackout"
QT_MOC_LITERAL(9, 115, 10), // "unBlackout"
QT_MOC_LITERAL(10, 126, 15), // "setRoleToScreen"
QT_MOC_LITERAL(11, 142, 11), // "DisplayRole"
QT_MOC_LITERAL(12, 154, 4), // "role"
QT_MOC_LITERAL(13, 159, 11), // "screenIndex"
QT_MOC_LITERAL(14, 171, 18), // "swapDisplayScreens"
QT_MOC_LITERAL(15, 190, 4) // "swap"

    },
    "WBDisplayManager\0screenLayoutChanged\0"
    "\0adjustDisplayViewsRequired\0reinitScreens\0"
    "bswap\0adjustScreens\0screen\0blackout\0"
    "unBlackout\0setRoleToScreen\0DisplayRole\0"
    "role\0screenIndex\0swapDisplayScreens\0"
    "swap"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBDisplayManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   56,    2, 0x0a /* Public */,
       6,    1,   59,    2, 0x0a /* Public */,
       8,    0,   62,    2, 0x0a /* Public */,
       9,    0,   63,    2, 0x0a /* Public */,
      10,    2,   64,    2, 0x0a /* Public */,
      14,    1,   69,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11, QMetaType::Int,   12,   13,
    QMetaType::Void, QMetaType::Bool,   15,

       0        // eod
};

void WBDisplayManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBDisplayManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->screenLayoutChanged(); break;
        case 1: _t->adjustDisplayViewsRequired(); break;
        case 2: _t->reinitScreens((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->adjustScreens((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->blackout(); break;
        case 5: _t->unBlackout(); break;
        case 6: _t->setRoleToScreen((*reinterpret_cast< DisplayRole(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->swapDisplayScreens((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WBDisplayManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBDisplayManager::screenLayoutChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WBDisplayManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBDisplayManager::adjustDisplayViewsRequired)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WBDisplayManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_WBDisplayManager.data,
    qt_meta_data_WBDisplayManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBDisplayManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBDisplayManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBDisplayManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WBDisplayManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void WBDisplayManager::screenLayoutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WBDisplayManager::adjustDisplayViewsRequired()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
