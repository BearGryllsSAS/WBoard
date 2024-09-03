/****************************************************************************
** Meta object code from reading C++ file 'WBGraphicsMediaItem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/domain/WBGraphicsMediaItem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBGraphicsMediaItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WBGraphicsMediaItem_t {
    QByteArrayData data[15];
    char stringdata0[165];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBGraphicsMediaItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBGraphicsMediaItem_t qt_meta_stringdata_WBGraphicsMediaItem = {
    {
QT_MOC_LITERAL(0, 0, 19), // "WBGraphicsMediaItem"
QT_MOC_LITERAL(1, 20, 10), // "toggleMute"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 7), // "setMute"
QT_MOC_LITERAL(4, 40, 5), // "bMute"
QT_MOC_LITERAL(5, 46, 18), // "activeSceneChanged"
QT_MOC_LITERAL(6, 65, 20), // "showOnDisplayChanged"
QT_MOC_LITERAL(7, 86, 5), // "shown"
QT_MOC_LITERAL(8, 92, 4), // "play"
QT_MOC_LITERAL(9, 97, 5), // "pause"
QT_MOC_LITERAL(10, 103, 4), // "stop"
QT_MOC_LITERAL(11, 108, 15), // "togglePlayPause"
QT_MOC_LITERAL(12, 124, 10), // "mediaError"
QT_MOC_LITERAL(13, 135, 19), // "QMediaPlayer::Error"
QT_MOC_LITERAL(14, 155, 9) // "errorCode"

    },
    "WBGraphicsMediaItem\0toggleMute\0\0setMute\0"
    "bMute\0activeSceneChanged\0showOnDisplayChanged\0"
    "shown\0play\0pause\0stop\0togglePlayPause\0"
    "mediaError\0QMediaPlayer::Error\0errorCode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBGraphicsMediaItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a /* Public */,
       3,    1,   60,    2, 0x0a /* Public */,
       5,    0,   63,    2, 0x0a /* Public */,
       6,    1,   64,    2, 0x0a /* Public */,
       8,    0,   67,    2, 0x0a /* Public */,
       9,    0,   68,    2, 0x0a /* Public */,
      10,    0,   69,    2, 0x0a /* Public */,
      11,    0,   70,    2, 0x0a /* Public */,
      12,    1,   71,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,

       0        // eod
};

void WBGraphicsMediaItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBGraphicsMediaItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->toggleMute(); break;
        case 1: _t->setMute((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->activeSceneChanged(); break;
        case 3: _t->showOnDisplayChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->play(); break;
        case 5: _t->pause(); break;
        case 6: _t->stop(); break;
        case 7: _t->togglePlayPause(); break;
        case 8: _t->mediaError((*reinterpret_cast< QMediaPlayer::Error(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaPlayer::Error >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WBGraphicsMediaItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_WBGraphicsMediaItem.data,
    qt_meta_data_WBGraphicsMediaItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBGraphicsMediaItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBGraphicsMediaItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBGraphicsMediaItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "WBItem"))
        return static_cast< WBItem*>(this);
    if (!strcmp(_clname, "WBGraphicsItem"))
        return static_cast< WBGraphicsItem*>(this);
    if (!strcmp(_clname, "QGraphicsRectItem"))
        return static_cast< QGraphicsRectItem*>(this);
    if (!strcmp(_clname, "WBResizableGraphicsItem"))
        return static_cast< WBResizableGraphicsItem*>(this);
    return QObject::qt_metacast(_clname);
}

int WBGraphicsMediaItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
struct qt_meta_stringdata_WBGraphicsAudioItem_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBGraphicsAudioItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBGraphicsAudioItem_t qt_meta_stringdata_WBGraphicsAudioItem = {
    {
QT_MOC_LITERAL(0, 0, 19) // "WBGraphicsAudioItem"

    },
    "WBGraphicsAudioItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBGraphicsAudioItem[] = {

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

void WBGraphicsAudioItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject WBGraphicsAudioItem::staticMetaObject = { {
    QMetaObject::SuperData::link<WBGraphicsMediaItem::staticMetaObject>(),
    qt_meta_stringdata_WBGraphicsAudioItem.data,
    qt_meta_data_WBGraphicsAudioItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBGraphicsAudioItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBGraphicsAudioItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBGraphicsAudioItem.stringdata0))
        return static_cast<void*>(this);
    return WBGraphicsMediaItem::qt_metacast(_clname);
}

int WBGraphicsAudioItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WBGraphicsMediaItem::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_WBGraphicsVideoItem_t {
    QByteArrayData data[13];
    char stringdata0[175];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBGraphicsVideoItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBGraphicsVideoItem_t qt_meta_stringdata_WBGraphicsVideoItem = {
    {
QT_MOC_LITERAL(0, 0, 19), // "WBGraphicsVideoItem"
QT_MOC_LITERAL(1, 20, 16), // "videoSizeChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 7), // "newSize"
QT_MOC_LITERAL(4, 46, 15), // "hasVideoChanged"
QT_MOC_LITERAL(5, 62, 8), // "hasVideo"
QT_MOC_LITERAL(6, 71, 17), // "mediaStateChanged"
QT_MOC_LITERAL(7, 89, 19), // "QMediaPlayer::State"
QT_MOC_LITERAL(8, 109, 5), // "state"
QT_MOC_LITERAL(9, 115, 18), // "activeSceneChanged"
QT_MOC_LITERAL(10, 134, 10), // "mediaError"
QT_MOC_LITERAL(11, 145, 19), // "QMediaPlayer::Error"
QT_MOC_LITERAL(12, 165, 9) // "errorCode"

    },
    "WBGraphicsVideoItem\0videoSizeChanged\0"
    "\0newSize\0hasVideoChanged\0hasVideo\0"
    "mediaStateChanged\0QMediaPlayer::State\0"
    "state\0activeSceneChanged\0mediaError\0"
    "QMediaPlayer::Error\0errorCode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBGraphicsVideoItem[] = {

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
       4,    1,   42,    2, 0x0a /* Public */,
       6,    1,   45,    2, 0x0a /* Public */,
       9,    0,   48,    2, 0x0a /* Public */,
      10,    1,   49,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QSizeF,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,

       0        // eod
};

void WBGraphicsVideoItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBGraphicsVideoItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->videoSizeChanged((*reinterpret_cast< QSizeF(*)>(_a[1]))); break;
        case 1: _t->hasVideoChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->mediaStateChanged((*reinterpret_cast< QMediaPlayer::State(*)>(_a[1]))); break;
        case 3: _t->activeSceneChanged(); break;
        case 4: _t->mediaError((*reinterpret_cast< QMediaPlayer::Error(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaPlayer::State >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaPlayer::Error >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WBGraphicsVideoItem::staticMetaObject = { {
    QMetaObject::SuperData::link<WBGraphicsMediaItem::staticMetaObject>(),
    qt_meta_stringdata_WBGraphicsVideoItem.data,
    qt_meta_data_WBGraphicsVideoItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBGraphicsVideoItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBGraphicsVideoItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBGraphicsVideoItem.stringdata0))
        return static_cast<void*>(this);
    return WBGraphicsMediaItem::qt_metacast(_clname);
}

int WBGraphicsVideoItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WBGraphicsMediaItem::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
