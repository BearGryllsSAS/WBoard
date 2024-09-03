/****************************************************************************
** Meta object code from reading C++ file 'WBStartupHintsPalette.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/gui/WBStartupHintsPalette.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBStartupHintsPalette.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WBStartupHintsPalette_t {
    QByteArrayData data[5];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBStartupHintsPalette_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBStartupHintsPalette_t qt_meta_stringdata_WBStartupHintsPalette = {
    {
QT_MOC_LITERAL(0, 0, 21), // "WBStartupHintsPalette"
QT_MOC_LITERAL(1, 22, 26), // "onShowNextTimeStateChanged"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 5), // "state"
QT_MOC_LITERAL(4, 56, 29) // "javaScriptWindowObjectCleared"

    },
    "WBStartupHintsPalette\0onShowNextTimeStateChanged\0"
    "\0state\0javaScriptWindowObjectCleared"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBStartupHintsPalette[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x08 /* Private */,
       4,    0,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

       0        // eod
};

void WBStartupHintsPalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBStartupHintsPalette *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onShowNextTimeStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->javaScriptWindowObjectCleared(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WBStartupHintsPalette::staticMetaObject = { {
    QMetaObject::SuperData::link<WBFloatingPalette::staticMetaObject>(),
    qt_meta_stringdata_WBStartupHintsPalette.data,
    qt_meta_data_WBStartupHintsPalette,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBStartupHintsPalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBStartupHintsPalette::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBStartupHintsPalette.stringdata0))
        return static_cast<void*>(this);
    return WBFloatingPalette::qt_metacast(_clname);
}

int WBStartupHintsPalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WBFloatingPalette::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
