/****************************************************************************
** Meta object code from reading C++ file 'WBOpenSankoreImporterWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/gui/WBOpenSankoreImporterWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBOpenSankoreImporterWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WBOpenSankoreImporterWidget_t {
    QByteArrayData data[4];
    char stringdata0[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBOpenSankoreImporterWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBOpenSankoreImporterWidget_t qt_meta_stringdata_WBOpenSankoreImporterWidget = {
    {
QT_MOC_LITERAL(0, 0, 27), // "WBOpenSankoreImporterWidget"
QT_MOC_LITERAL(1, 28, 28), // "onNextRestartCheckBoxClicked"
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 7) // "clicked"

    },
    "WBOpenSankoreImporterWidget\0"
    "onNextRestartCheckBoxClicked\0\0clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBOpenSankoreImporterWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

void WBOpenSankoreImporterWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBOpenSankoreImporterWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onNextRestartCheckBoxClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WBOpenSankoreImporterWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<WBFloatingPalette::staticMetaObject>(),
    qt_meta_stringdata_WBOpenSankoreImporterWidget.data,
    qt_meta_data_WBOpenSankoreImporterWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBOpenSankoreImporterWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBOpenSankoreImporterWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBOpenSankoreImporterWidget.stringdata0))
        return static_cast<void*>(this);
    return WBFloatingPalette::qt_metacast(_clname);
}

int WBOpenSankoreImporterWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WBFloatingPalette::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
