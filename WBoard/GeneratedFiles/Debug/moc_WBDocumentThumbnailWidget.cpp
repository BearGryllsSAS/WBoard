/****************************************************************************
** Meta object code from reading C++ file 'WBDocumentThumbnailWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/gui/WBDocumentThumbnailWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBDocumentThumbnailWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WBDocumentThumbnailWidget_t {
    QByteArrayData data[15];
    char stringdata0[183];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBDocumentThumbnailWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBDocumentThumbnailWidget_t qt_meta_stringdata_WBDocumentThumbnailWidget = {
    {
QT_MOC_LITERAL(0, 0, 25), // "WBDocumentThumbnailWidget"
QT_MOC_LITERAL(1, 26, 12), // "sceneDropped"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 16), // "WBDocumentProxy*"
QT_MOC_LITERAL(4, 57, 5), // "proxy"
QT_MOC_LITERAL(5, 63, 6), // "source"
QT_MOC_LITERAL(6, 70, 6), // "target"
QT_MOC_LITERAL(7, 77, 16), // "setGraphicsItems"
QT_MOC_LITERAL(8, 94, 21), // "QList<QGraphicsItem*>"
QT_MOC_LITERAL(9, 116, 14), // "pGraphicsItems"
QT_MOC_LITERAL(10, 131, 11), // "QList<QUrl>"
QT_MOC_LITERAL(11, 143, 10), // "pItemPaths"
QT_MOC_LITERAL(12, 154, 7), // "pLabels"
QT_MOC_LITERAL(13, 162, 9), // "pMimeType"
QT_MOC_LITERAL(14, 172, 10) // "autoScroll"

    },
    "WBDocumentThumbnailWidget\0sceneDropped\0"
    "\0WBDocumentProxy*\0proxy\0source\0target\0"
    "setGraphicsItems\0QList<QGraphicsItem*>\0"
    "pGraphicsItems\0QList<QUrl>\0pItemPaths\0"
    "pLabels\0pMimeType\0autoScroll"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBDocumentThumbnailWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    4,   46,    2, 0x0a /* Public */,
       7,    3,   55,    2, 0x2a /* Public | MethodCloned */,
       7,    2,   62,    2, 0x2a /* Public | MethodCloned */,
      14,    0,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    4,    5,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 10, QMetaType::QStringList, QMetaType::QString,    9,   11,   12,   13,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 10, QMetaType::QStringList,    9,   11,   12,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 10,    9,   11,
    QMetaType::Void,

       0        // eod
};

void WBDocumentThumbnailWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBDocumentThumbnailWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sceneDropped((*reinterpret_cast< WBDocumentProxy*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->setGraphicsItems((*reinterpret_cast< const QList<QGraphicsItem*>(*)>(_a[1])),(*reinterpret_cast< const QList<QUrl>(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 2: _t->setGraphicsItems((*reinterpret_cast< const QList<QGraphicsItem*>(*)>(_a[1])),(*reinterpret_cast< const QList<QUrl>(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3]))); break;
        case 3: _t->setGraphicsItems((*reinterpret_cast< const QList<QGraphicsItem*>(*)>(_a[1])),(*reinterpret_cast< const QList<QUrl>(*)>(_a[2]))); break;
        case 4: _t->autoScroll(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WBDocumentProxy* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QGraphicsItem*> >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QUrl> >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QGraphicsItem*> >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QUrl> >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QGraphicsItem*> >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QUrl> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WBDocumentThumbnailWidget::*)(WBDocumentProxy * , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBDocumentThumbnailWidget::sceneDropped)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WBDocumentThumbnailWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<WBThumbnailWidget::staticMetaObject>(),
    qt_meta_stringdata_WBDocumentThumbnailWidget.data,
    qt_meta_data_WBDocumentThumbnailWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBDocumentThumbnailWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBDocumentThumbnailWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBDocumentThumbnailWidget.stringdata0))
        return static_cast<void*>(this);
    return WBThumbnailWidget::qt_metacast(_clname);
}

int WBDocumentThumbnailWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WBThumbnailWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void WBDocumentThumbnailWidget::sceneDropped(WBDocumentProxy * _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
