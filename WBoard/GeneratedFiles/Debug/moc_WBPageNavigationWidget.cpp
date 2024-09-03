/****************************************************************************
** Meta object code from reading C++ file 'WBPageNavigationWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/gui/WBPageNavigationWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBPageNavigationWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WBPageNavigationWidget_t {
    QByteArrayData data[8];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBPageNavigationWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBPageNavigationWidget_t qt_meta_stringdata_WBPageNavigationWidget = {
    {
QT_MOC_LITERAL(0, 0, 22), // "WBPageNavigationWidget"
QT_MOC_LITERAL(1, 23, 13), // "resizeRequest"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 13), // "QResizeEvent*"
QT_MOC_LITERAL(4, 52, 5), // "event"
QT_MOC_LITERAL(5, 58, 13), // "setPageNumber"
QT_MOC_LITERAL(6, 72, 7), // "current"
QT_MOC_LITERAL(7, 80, 5) // "total"

    },
    "WBPageNavigationWidget\0resizeRequest\0"
    "\0QResizeEvent*\0event\0setPageNumber\0"
    "current\0total"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBPageNavigationWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    2,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,

       0        // eod
};

void WBPageNavigationWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBPageNavigationWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->resizeRequest((*reinterpret_cast< QResizeEvent*(*)>(_a[1]))); break;
        case 1: _t->setPageNumber((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WBPageNavigationWidget::*)(QResizeEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBPageNavigationWidget::resizeRequest)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WBPageNavigationWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<WBDockPaletteWidget::staticMetaObject>(),
    qt_meta_stringdata_WBPageNavigationWidget.data,
    qt_meta_data_WBPageNavigationWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBPageNavigationWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBPageNavigationWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBPageNavigationWidget.stringdata0))
        return static_cast<void*>(this);
    return WBDockPaletteWidget::qt_metacast(_clname);
}

int WBPageNavigationWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WBDockPaletteWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void WBPageNavigationWidget::resizeRequest(QResizeEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
