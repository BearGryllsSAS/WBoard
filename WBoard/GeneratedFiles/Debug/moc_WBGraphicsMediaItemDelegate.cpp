/****************************************************************************
** Meta object code from reading C++ file 'WBGraphicsMediaItemDelegate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/domain/WBGraphicsMediaItemDelegate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBGraphicsMediaItemDelegate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WBGraphicsMediaItemDelegate_t {
    QByteArrayData data[20];
    char stringdata0[262];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBGraphicsMediaItemDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBGraphicsMediaItemDelegate_t qt_meta_stringdata_WBGraphicsMediaItemDelegate = {
    {
QT_MOC_LITERAL(0, 0, 27), // "WBGraphicsMediaItemDelegate"
QT_MOC_LITERAL(1, 28, 10), // "toggleMute"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 12), // "updateTicker"
QT_MOC_LITERAL(4, 53, 4), // "time"
QT_MOC_LITERAL(5, 58, 8), // "showHide"
QT_MOC_LITERAL(6, 67, 4), // "show"
QT_MOC_LITERAL(7, 72, 18), // "mediaStatusChanged"
QT_MOC_LITERAL(8, 91, 25), // "QMediaPlayer::MediaStatus"
QT_MOC_LITERAL(9, 117, 6), // "status"
QT_MOC_LITERAL(10, 124, 17), // "mediaStateChanged"
QT_MOC_LITERAL(11, 142, 19), // "QMediaPlayer::State"
QT_MOC_LITERAL(12, 162, 5), // "state"
QT_MOC_LITERAL(13, 168, 6), // "remove"
QT_MOC_LITERAL(14, 175, 7), // "canUndo"
QT_MOC_LITERAL(15, 183, 15), // "togglePlayPause"
QT_MOC_LITERAL(16, 199, 20), // "updatePlayPauseState"
QT_MOC_LITERAL(17, 220, 16), // "totalTimeChanged"
QT_MOC_LITERAL(18, 237, 12), // "newTotalTime"
QT_MOC_LITERAL(19, 250, 11) // "hideToolBar"

    },
    "WBGraphicsMediaItemDelegate\0toggleMute\0"
    "\0updateTicker\0time\0showHide\0show\0"
    "mediaStatusChanged\0QMediaPlayer::MediaStatus\0"
    "status\0mediaStateChanged\0QMediaPlayer::State\0"
    "state\0remove\0canUndo\0togglePlayPause\0"
    "updatePlayPauseState\0totalTimeChanged\0"
    "newTotalTime\0hideToolBar"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBGraphicsMediaItemDelegate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a /* Public */,
       3,    1,   70,    2, 0x0a /* Public */,
       5,    1,   73,    2, 0x0a /* Public */,
       7,    1,   76,    2, 0x0a /* Public */,
      10,    1,   79,    2, 0x0a /* Public */,
      13,    1,   82,    2, 0x09 /* Protected */,
      13,    0,   85,    2, 0x29 /* Protected | MethodCloned */,
      15,    0,   86,    2, 0x09 /* Protected */,
      16,    0,   87,    2, 0x09 /* Protected */,
      17,    1,   88,    2, 0x09 /* Protected */,
      19,    0,   91,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,   18,
    QMetaType::Void,

       0        // eod
};

void WBGraphicsMediaItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBGraphicsMediaItemDelegate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->toggleMute(); break;
        case 1: _t->updateTicker((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 2: _t->showHide((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->mediaStatusChanged((*reinterpret_cast< QMediaPlayer::MediaStatus(*)>(_a[1]))); break;
        case 4: _t->mediaStateChanged((*reinterpret_cast< QMediaPlayer::State(*)>(_a[1]))); break;
        case 5: _t->remove((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->remove(); break;
        case 7: _t->togglePlayPause(); break;
        case 8: _t->updatePlayPauseState(); break;
        case 9: _t->totalTimeChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 10: _t->hideToolBar(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaPlayer::MediaStatus >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaPlayer::State >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WBGraphicsMediaItemDelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<WBGraphicsItemDelegate::staticMetaObject>(),
    qt_meta_stringdata_WBGraphicsMediaItemDelegate.data,
    qt_meta_data_WBGraphicsMediaItemDelegate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBGraphicsMediaItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBGraphicsMediaItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBGraphicsMediaItemDelegate.stringdata0))
        return static_cast<void*>(this);
    return WBGraphicsItemDelegate::qt_metacast(_clname);
}

int WBGraphicsMediaItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WBGraphicsItemDelegate::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
