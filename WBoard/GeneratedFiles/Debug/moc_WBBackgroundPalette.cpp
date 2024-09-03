/****************************************************************************
** Meta object code from reading C++ file 'WBBackgroundPalette.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/gui/WBBackgroundPalette.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBBackgroundPalette.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WBBackgroundPalette_t {
    QByteArrayData data[10];
    char stringdata0[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBBackgroundPalette_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBBackgroundPalette_t qt_meta_stringdata_WBBackgroundPalette = {
    {
QT_MOC_LITERAL(0, 0, 19), // "WBBackgroundPalette"
QT_MOC_LITERAL(1, 20, 9), // "showEvent"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 11), // "QShowEvent*"
QT_MOC_LITERAL(4, 43, 5), // "event"
QT_MOC_LITERAL(5, 49, 17), // "backgroundChanged"
QT_MOC_LITERAL(6, 67, 7), // "refresh"
QT_MOC_LITERAL(7, 75, 18), // "sliderValueChanged"
QT_MOC_LITERAL(8, 94, 5), // "value"
QT_MOC_LITERAL(9, 100, 25) // "defaultBackgroundGridSize"

    },
    "WBBackgroundPalette\0showEvent\0\0"
    "QShowEvent*\0event\0backgroundChanged\0"
    "refresh\0sliderValueChanged\0value\0"
    "defaultBackgroundGridSize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBBackgroundPalette[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       5,    0,   42,    2, 0x0a /* Public */,
       6,    0,   43,    2, 0x0a /* Public */,
       7,    1,   44,    2, 0x09 /* Protected */,
       9,    0,   47,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,

       0        // eod
};

void WBBackgroundPalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBBackgroundPalette *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showEvent((*reinterpret_cast< QShowEvent*(*)>(_a[1]))); break;
        case 1: _t->backgroundChanged(); break;
        case 2: _t->refresh(); break;
        case 3: _t->sliderValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->defaultBackgroundGridSize(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WBBackgroundPalette::staticMetaObject = { {
    QMetaObject::SuperData::link<WBActionPalette::staticMetaObject>(),
    qt_meta_stringdata_WBBackgroundPalette.data,
    qt_meta_data_WBBackgroundPalette,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBBackgroundPalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBBackgroundPalette::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBBackgroundPalette.stringdata0))
        return static_cast<void*>(this);
    return WBActionPalette::qt_metacast(_clname);
}

int WBBackgroundPalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WBActionPalette::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
