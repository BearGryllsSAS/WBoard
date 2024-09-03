/****************************************************************************
** Meta object code from reading C++ file 'WBMediaWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/customWidgets/WBMediaWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBMediaWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WBMediaButton_t {
    QByteArrayData data[3];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBMediaButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBMediaButton_t qt_meta_stringdata_WBMediaButton = {
    {
QT_MOC_LITERAL(0, 0, 13), // "WBMediaButton"
QT_MOC_LITERAL(1, 14, 7), // "clicked"
QT_MOC_LITERAL(2, 22, 0) // ""

    },
    "WBMediaButton\0clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBMediaButton[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void WBMediaButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBMediaButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WBMediaButton::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBMediaButton::clicked)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject WBMediaButton::staticMetaObject = { {
    QMetaObject::SuperData::link<QLabel::staticMetaObject>(),
    qt_meta_stringdata_WBMediaButton.data,
    qt_meta_data_WBMediaButton,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBMediaButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBMediaButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBMediaButton.stringdata0))
        return static_cast<void*>(this);
    return QLabel::qt_metacast(_clname);
}

int WBMediaButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void WBMediaButton::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_WBMediaWidget_t {
    QByteArrayData data[13];
    char stringdata0[155];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBMediaWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBMediaWidget_t qt_meta_stringdata_WBMediaWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "WBMediaWidget"
QT_MOC_LITERAL(1, 14, 17), // "onPlayStopClicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 14), // "onPauseClicked"
QT_MOC_LITERAL(4, 48, 14), // "onStateChanged"
QT_MOC_LITERAL(5, 63, 19), // "QMediaPlayer::State"
QT_MOC_LITERAL(6, 83, 5), // "state"
QT_MOC_LITERAL(7, 89, 18), // "onTotalTimeChanged"
QT_MOC_LITERAL(8, 108, 5), // "total"
QT_MOC_LITERAL(9, 114, 6), // "onTick"
QT_MOC_LITERAL(10, 121, 11), // "currentTime"
QT_MOC_LITERAL(11, 133, 15), // "onSliderChanged"
QT_MOC_LITERAL(12, 149, 5) // "value"

    },
    "WBMediaWidget\0onPlayStopClicked\0\0"
    "onPauseClicked\0onStateChanged\0"
    "QMediaPlayer::State\0state\0onTotalTimeChanged\0"
    "total\0onTick\0currentTime\0onSliderChanged\0"
    "value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBMediaWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    1,   46,    2, 0x08 /* Private */,
       7,    1,   49,    2, 0x08 /* Private */,
       9,    1,   52,    2, 0x08 /* Private */,
      11,    1,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::LongLong,    8,
    QMetaType::Void, QMetaType::LongLong,   10,
    QMetaType::Void, QMetaType::Int,   12,

       0        // eod
};

void WBMediaWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBMediaWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onPlayStopClicked(); break;
        case 1: _t->onPauseClicked(); break;
        case 2: _t->onStateChanged((*reinterpret_cast< QMediaPlayer::State(*)>(_a[1]))); break;
        case 3: _t->onTotalTimeChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 4: _t->onTick((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 5: _t->onSliderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
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
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WBMediaWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<WBActionableWidget::staticMetaObject>(),
    qt_meta_stringdata_WBMediaWidget.data,
    qt_meta_data_WBMediaWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBMediaWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBMediaWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBMediaWidget.stringdata0))
        return static_cast<void*>(this);
    return WBActionableWidget::qt_metacast(_clname);
}

int WBMediaWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WBActionableWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
