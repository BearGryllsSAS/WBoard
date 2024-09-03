/****************************************************************************
** Meta object code from reading C++ file 'WBDocumentTreeWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/gui/WBDocumentTreeWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBDocumentTreeWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WBDocumentTreeWidget_t {
    QByteArrayData data[10];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBDocumentTreeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBDocumentTreeWidget_t qt_meta_stringdata_WBDocumentTreeWidget = {
    {
QT_MOC_LITERAL(0, 0, 20), // "WBDocumentTreeWidget"
QT_MOC_LITERAL(1, 21, 15), // "documentUpdated"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 16), // "WBDocumentProxy*"
QT_MOC_LITERAL(4, 55, 9), // "pDocument"
QT_MOC_LITERAL(5, 65, 21), // "itemChangedValidation"
QT_MOC_LITERAL(6, 87, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(7, 104, 4), // "item"
QT_MOC_LITERAL(8, 109, 6), // "column"
QT_MOC_LITERAL(9, 116, 10) // "autoScroll"

    },
    "WBDocumentTreeWidget\0documentUpdated\0"
    "\0WBDocumentProxy*\0pDocument\0"
    "itemChangedValidation\0QTreeWidgetItem*\0"
    "item\0column\0autoScroll"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBDocumentTreeWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x08 /* Private */,
       5,    2,   32,    2, 0x08 /* Private */,
       9,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Int,    7,    8,
    QMetaType::Void,

       0        // eod
};

void WBDocumentTreeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBDocumentTreeWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->documentUpdated((*reinterpret_cast< WBDocumentProxy*(*)>(_a[1]))); break;
        case 1: _t->itemChangedValidation((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->autoScroll(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WBDocumentTreeWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QTreeWidget::staticMetaObject>(),
    qt_meta_stringdata_WBDocumentTreeWidget.data,
    qt_meta_data_WBDocumentTreeWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBDocumentTreeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBDocumentTreeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBDocumentTreeWidget.stringdata0))
        return static_cast<void*>(this);
    return QTreeWidget::qt_metacast(_clname);
}

int WBDocumentTreeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
