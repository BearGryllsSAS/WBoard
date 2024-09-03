/****************************************************************************
** Meta object code from reading C++ file 'WBThumbnailWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/gui/WBThumbnailWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBThumbnailWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WBThumbnailWidget_t {
    QByteArrayData data[22];
    char stringdata0[282];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBThumbnailWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBThumbnailWidget_t qt_meta_stringdata_WBThumbnailWidget = {
    {
QT_MOC_LITERAL(0, 0, 17), // "WBThumbnailWidget"
QT_MOC_LITERAL(1, 18, 7), // "resized"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 16), // "selectionChanged"
QT_MOC_LITERAL(4, 44, 16), // "mouseDoubleClick"
QT_MOC_LITERAL(5, 61, 14), // "QGraphicsItem*"
QT_MOC_LITERAL(6, 76, 4), // "item"
QT_MOC_LITERAL(7, 81, 5), // "index"
QT_MOC_LITERAL(8, 87, 10), // "mouseClick"
QT_MOC_LITERAL(9, 98, 17), // "setThumbnailWidth"
QT_MOC_LITERAL(10, 116, 15), // "pThumbnailWidth"
QT_MOC_LITERAL(11, 132, 10), // "setSpacing"
QT_MOC_LITERAL(12, 143, 8), // "pSpacing"
QT_MOC_LITERAL(13, 152, 16), // "setGraphicsItems"
QT_MOC_LITERAL(14, 169, 21), // "QList<QGraphicsItem*>"
QT_MOC_LITERAL(15, 191, 14), // "pGraphicsItems"
QT_MOC_LITERAL(16, 206, 11), // "QList<QUrl>"
QT_MOC_LITERAL(17, 218, 10), // "pItemPaths"
QT_MOC_LITERAL(18, 229, 7), // "pLabels"
QT_MOC_LITERAL(19, 237, 9), // "pMimeType"
QT_MOC_LITERAL(20, 247, 12), // "refreshScene"
QT_MOC_LITERAL(21, 260, 21) // "sceneSelectionChanged"

    },
    "WBThumbnailWidget\0resized\0\0selectionChanged\0"
    "mouseDoubleClick\0QGraphicsItem*\0item\0"
    "index\0mouseClick\0setThumbnailWidth\0"
    "pThumbnailWidth\0setSpacing\0pSpacing\0"
    "setGraphicsItems\0QList<QGraphicsItem*>\0"
    "pGraphicsItems\0QList<QUrl>\0pItemPaths\0"
    "pLabels\0pMimeType\0refreshScene\0"
    "sceneSelectionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBThumbnailWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    2,   71,    2, 0x06 /* Public */,
       8,    2,   76,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   81,    2, 0x0a /* Public */,
      11,    1,   84,    2, 0x0a /* Public */,
      13,    4,   87,    2, 0x0a /* Public */,
      13,    3,   96,    2, 0x2a /* Public | MethodCloned */,
      13,    2,  103,    2, 0x2a /* Public | MethodCloned */,
      20,    0,  108,    2, 0x0a /* Public */,
      21,    0,  109,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int,    6,    7,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int,    6,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QReal,   10,
    QMetaType::Void, QMetaType::QReal,   12,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 16, QMetaType::QStringList, QMetaType::QString,   15,   17,   18,   19,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 16, QMetaType::QStringList,   15,   17,   18,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 16,   15,   17,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WBThumbnailWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBThumbnailWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->resized(); break;
        case 1: _t->selectionChanged(); break;
        case 2: _t->mouseDoubleClick((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->mouseClick((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->setThumbnailWidth((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 5: _t->setSpacing((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 6: _t->setGraphicsItems((*reinterpret_cast< const QList<QGraphicsItem*>(*)>(_a[1])),(*reinterpret_cast< const QList<QUrl>(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 7: _t->setGraphicsItems((*reinterpret_cast< const QList<QGraphicsItem*>(*)>(_a[1])),(*reinterpret_cast< const QList<QUrl>(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3]))); break;
        case 8: _t->setGraphicsItems((*reinterpret_cast< const QList<QGraphicsItem*>(*)>(_a[1])),(*reinterpret_cast< const QList<QUrl>(*)>(_a[2]))); break;
        case 9: _t->refreshScene(); break;
        case 10: _t->sceneSelectionChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGraphicsItem* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGraphicsItem* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QGraphicsItem*> >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QUrl> >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QGraphicsItem*> >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QUrl> >(); break;
            }
            break;
        case 8:
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
            using _t = void (WBThumbnailWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBThumbnailWidget::resized)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WBThumbnailWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBThumbnailWidget::selectionChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WBThumbnailWidget::*)(QGraphicsItem * , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBThumbnailWidget::mouseDoubleClick)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (WBThumbnailWidget::*)(QGraphicsItem * , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBThumbnailWidget::mouseClick)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WBThumbnailWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsView::staticMetaObject>(),
    qt_meta_stringdata_WBThumbnailWidget.data,
    qt_meta_data_WBThumbnailWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBThumbnailWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBThumbnailWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBThumbnailWidget.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsView::qt_metacast(_clname);
}

int WBThumbnailWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void WBThumbnailWidget::resized()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WBThumbnailWidget::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void WBThumbnailWidget::mouseDoubleClick(QGraphicsItem * _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WBThumbnailWidget::mouseClick(QGraphicsItem * _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
struct qt_meta_stringdata_WBThumbnailTextItem_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBThumbnailTextItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBThumbnailTextItem_t qt_meta_stringdata_WBThumbnailTextItem = {
    {
QT_MOC_LITERAL(0, 0, 19) // "WBThumbnailTextItem"

    },
    "WBThumbnailTextItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBThumbnailTextItem[] = {

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

void WBThumbnailTextItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject WBThumbnailTextItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsTextItem::staticMetaObject>(),
    qt_meta_stringdata_WBThumbnailTextItem.data,
    qt_meta_data_WBThumbnailTextItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBThumbnailTextItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBThumbnailTextItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBThumbnailTextItem.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsTextItem::qt_metacast(_clname);
}

int WBThumbnailTextItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsTextItem::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_WBDraggableThumbnail_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBDraggableThumbnail_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBDraggableThumbnail_t qt_meta_stringdata_WBDraggableThumbnail = {
    {
QT_MOC_LITERAL(0, 0, 20) // "WBDraggableThumbnail"

    },
    "WBDraggableThumbnail"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBDraggableThumbnail[] = {

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

void WBDraggableThumbnail::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject WBDraggableThumbnail::staticMetaObject = { {
    QMetaObject::SuperData::link<WBThumbnailProxyWidget::staticMetaObject>(),
    qt_meta_stringdata_WBDraggableThumbnail.data,
    qt_meta_data_WBDraggableThumbnail,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBDraggableThumbnail::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBDraggableThumbnail::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBDraggableThumbnail.stringdata0))
        return static_cast<void*>(this);
    return WBThumbnailProxyWidget::qt_metacast(_clname);
}

int WBDraggableThumbnail::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WBThumbnailProxyWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_WBDraggableThumbnailPixmap_t {
    QByteArrayData data[1];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBDraggableThumbnailPixmap_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBDraggableThumbnailPixmap_t qt_meta_stringdata_WBDraggableThumbnailPixmap = {
    {
QT_MOC_LITERAL(0, 0, 26) // "WBDraggableThumbnailPixmap"

    },
    "WBDraggableThumbnailPixmap"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBDraggableThumbnailPixmap[] = {

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

void WBDraggableThumbnailPixmap::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject WBDraggableThumbnailPixmap::staticMetaObject = { {
    QMetaObject::SuperData::link<WBDraggableThumbnail::staticMetaObject>(),
    qt_meta_stringdata_WBDraggableThumbnailPixmap.data,
    qt_meta_data_WBDraggableThumbnailPixmap,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBDraggableThumbnailPixmap::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBDraggableThumbnailPixmap::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBDraggableThumbnailPixmap.stringdata0))
        return static_cast<void*>(this);
    return WBDraggableThumbnail::qt_metacast(_clname);
}

int WBDraggableThumbnailPixmap::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WBDraggableThumbnail::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_WBDraggableThumbnailView_t {
    QByteArrayData data[1];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBDraggableThumbnailView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBDraggableThumbnailView_t qt_meta_stringdata_WBDraggableThumbnailView = {
    {
QT_MOC_LITERAL(0, 0, 24) // "WBDraggableThumbnailView"

    },
    "WBDraggableThumbnailView"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBDraggableThumbnailView[] = {

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

void WBDraggableThumbnailView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject WBDraggableThumbnailView::staticMetaObject = { {
    QMetaObject::SuperData::link<WBDraggableThumbnail::staticMetaObject>(),
    qt_meta_stringdata_WBDraggableThumbnailView.data,
    qt_meta_data_WBDraggableThumbnailView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBDraggableThumbnailView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBDraggableThumbnailView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBDraggableThumbnailView.stringdata0))
        return static_cast<void*>(this);
    return WBDraggableThumbnail::qt_metacast(_clname);
}

int WBDraggableThumbnailView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WBDraggableThumbnail::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
