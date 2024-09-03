/****************************************************************************
** Meta object code from reading C++ file 'WBZoomPalette.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/gui/WBZoomPalette.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBZoomPalette.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WBZoomPalette_t {
    QByteArrayData data[6];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBZoomPalette_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBZoomPalette_t qt_meta_stringdata_WBZoomPalette = {
    {
QT_MOC_LITERAL(0, 0, 13), // "WBZoomPalette"
QT_MOC_LITERAL(1, 14, 4), // "hide"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 14), // "refreshPalette"
QT_MOC_LITERAL(4, 35, 19), // "showHideExtraButton"
QT_MOC_LITERAL(5, 55, 9) // "goHundred"

    },
    "WBZoomPalette\0hide\0\0refreshPalette\0"
    "showHideExtraButton\0goHundred"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBZoomPalette[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    0,   35,    2, 0x0a /* Public */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WBZoomPalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBZoomPalette *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->hide(); break;
        case 1: _t->refreshPalette(); break;
        case 2: _t->showHideExtraButton(); break;
        case 3: _t->goHundred(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject WBZoomPalette::staticMetaObject = { {
    QMetaObject::SuperData::link<WBFloatingPalette::staticMetaObject>(),
    qt_meta_stringdata_WBZoomPalette.data,
    qt_meta_data_WBZoomPalette,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBZoomPalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBZoomPalette::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBZoomPalette.stringdata0))
        return static_cast<void*>(this);
    return WBFloatingPalette::qt_metacast(_clname);
}

int WBZoomPalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WBFloatingPalette::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
