/****************************************************************************
** Meta object code from reading C++ file 'WBDownloadWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/gui/WBDownloadWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBDownloadWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WBDownloadProgressDelegate_t {
    QByteArrayData data[1];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBDownloadProgressDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBDownloadProgressDelegate_t qt_meta_stringdata_WBDownloadProgressDelegate = {
    {
QT_MOC_LITERAL(0, 0, 26) // "WBDownloadProgressDelegate"

    },
    "WBDownloadProgressDelegate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBDownloadProgressDelegate[] = {

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

void WBDownloadProgressDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject WBDownloadProgressDelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<QItemDelegate::staticMetaObject>(),
    qt_meta_stringdata_WBDownloadProgressDelegate.data,
    qt_meta_data_WBDownloadProgressDelegate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBDownloadProgressDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBDownloadProgressDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBDownloadProgressDelegate.stringdata0))
        return static_cast<void*>(this);
    return QItemDelegate::qt_metacast(_clname);
}

int WBDownloadProgressDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QItemDelegate::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_WBDownloadWidget_t {
    QByteArrayData data[13];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBDownloadWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBDownloadWidget_t qt_meta_stringdata_WBDownloadWidget = {
    {
QT_MOC_LITERAL(0, 0, 16), // "WBDownloadWidget"
QT_MOC_LITERAL(1, 17, 21), // "onFileAddedToDownload"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 17), // "onDownloadUpdated"
QT_MOC_LITERAL(4, 58, 2), // "id"
QT_MOC_LITERAL(5, 61, 4), // "crnt"
QT_MOC_LITERAL(6, 66, 5), // "total"
QT_MOC_LITERAL(7, 72, 18), // "onDownloadFinished"
QT_MOC_LITERAL(8, 91, 15), // "onCancelClicked"
QT_MOC_LITERAL(9, 107, 13), // "onItemClicked"
QT_MOC_LITERAL(10, 121, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(11, 138, 5), // "pItem"
QT_MOC_LITERAL(12, 144, 3) // "col"

    },
    "WBDownloadWidget\0onFileAddedToDownload\0"
    "\0onDownloadUpdated\0id\0crnt\0total\0"
    "onDownloadFinished\0onCancelClicked\0"
    "onItemClicked\0QTreeWidgetItem*\0pItem\0"
    "col"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBDownloadWidget[] = {

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
       1,    0,   39,    2, 0x08 /* Private */,
       3,    3,   40,    2, 0x08 /* Private */,
       7,    1,   47,    2, 0x08 /* Private */,
       8,    0,   50,    2, 0x08 /* Private */,
       9,    2,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::LongLong, QMetaType::LongLong,    4,    5,    6,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10, QMetaType::Int,   11,   12,

       0        // eod
};

void WBDownloadWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBDownloadWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onFileAddedToDownload(); break;
        case 1: _t->onDownloadUpdated((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3]))); break;
        case 2: _t->onDownloadFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onCancelClicked(); break;
        case 4: _t->onItemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WBDownloadWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_WBDownloadWidget.data,
    qt_meta_data_WBDownloadWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBDownloadWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBDownloadWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBDownloadWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int WBDownloadWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
