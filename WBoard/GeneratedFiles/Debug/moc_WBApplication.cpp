/****************************************************************************
** Meta object code from reading C++ file 'WBApplication.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/core/WBApplication.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBApplication.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WBApplication_t {
    QByteArrayData data[20];
    char stringdata0[252];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBApplication_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBApplication_t qt_meta_stringdata_WBApplication = {
    {
QT_MOC_LITERAL(0, 0, 13), // "WBApplication"
QT_MOC_LITERAL(1, 14, 9), // "showBoard"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 12), // "showInternet"
QT_MOC_LITERAL(4, 38, 12), // "showDocument"
QT_MOC_LITERAL(5, 51, 11), // "startScript"
QT_MOC_LITERAL(6, 63, 10), // "stopScript"
QT_MOC_LITERAL(7, 74, 22), // "toolBarPositionChanged"
QT_MOC_LITERAL(8, 97, 11), // "topOrBottom"
QT_MOC_LITERAL(9, 109, 25), // "toolBarDisplayTextChanged"
QT_MOC_LITERAL(10, 135, 7), // "display"
QT_MOC_LITERAL(11, 143, 10), // "closeEvent"
QT_MOC_LITERAL(12, 154, 12), // "QCloseEvent*"
QT_MOC_LITERAL(13, 167, 5), // "event"
QT_MOC_LITERAL(14, 173, 17), // "handleOpenMessage"
QT_MOC_LITERAL(15, 191, 8), // "pMessage"
QT_MOC_LITERAL(16, 200, 7), // "closing"
QT_MOC_LITERAL(17, 208, 13), // "showMinimized"
QT_MOC_LITERAL(18, 222, 20), // "onScreenCountChanged"
QT_MOC_LITERAL(19, 243, 8) // "newCount"

    },
    "WBApplication\0showBoard\0\0showInternet\0"
    "showDocument\0startScript\0stopScript\0"
    "toolBarPositionChanged\0topOrBottom\0"
    "toolBarDisplayTextChanged\0display\0"
    "closeEvent\0QCloseEvent*\0event\0"
    "handleOpenMessage\0pMessage\0closing\0"
    "showMinimized\0onScreenCountChanged\0"
    "newCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBApplication[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x0a /* Public */,
       3,    0,   75,    2, 0x0a /* Public */,
       4,    0,   76,    2, 0x0a /* Public */,
       5,    0,   77,    2, 0x0a /* Public */,
       6,    0,   78,    2, 0x0a /* Public */,
       7,    1,   79,    2, 0x0a /* Public */,
       9,    1,   82,    2, 0x0a /* Public */,
      11,    1,   85,    2, 0x0a /* Public */,
      14,    1,   88,    2, 0x0a /* Public */,
      16,    0,   91,    2, 0x08 /* Private */,
      17,    0,   92,    2, 0x08 /* Private */,
      18,    1,   93,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariant,    8,
    QMetaType::Void, QMetaType::QVariant,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Bool, QMetaType::QString,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   19,

       0        // eod
};

void WBApplication::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBApplication *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showBoard(); break;
        case 1: _t->showInternet(); break;
        case 2: _t->showDocument(); break;
        case 3: _t->startScript(); break;
        case 4: _t->stopScript(); break;
        case 5: _t->toolBarPositionChanged((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 6: _t->toolBarDisplayTextChanged((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 7: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 8: { bool _r = _t->handleOpenMessage((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->closing(); break;
        case 10: _t->showMinimized(); break;
        case 11: _t->onScreenCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WBApplication::staticMetaObject = { {
    QMetaObject::SuperData::link<QtSingleApplication::staticMetaObject>(),
    qt_meta_stringdata_WBApplication.data,
    qt_meta_data_WBApplication,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBApplication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBApplication::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBApplication.stringdata0))
        return static_cast<void*>(this);
    return QtSingleApplication::qt_metacast(_clname);
}

int WBApplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtSingleApplication::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
