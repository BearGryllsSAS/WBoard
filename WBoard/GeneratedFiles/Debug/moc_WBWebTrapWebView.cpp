/****************************************************************************
** Meta object code from reading C++ file 'WBWebTrapWebView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/web/browser/WBWebTrapWebView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBWebTrapWebView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WBWebTrapWebView_t {
    QByteArrayData data[16];
    char stringdata0[167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBWebTrapWebView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBWebTrapWebView_t qt_meta_stringdata_WBWebTrapWebView = {
    {
QT_MOC_LITERAL(0, 0, 16), // "WBWebTrapWebView"
QT_MOC_LITERAL(1, 17, 14), // "pixmapCaptured"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 6), // "pixmap"
QT_MOC_LITERAL(4, 40, 8), // "pageMode"
QT_MOC_LITERAL(5, 49, 14), // "objectCaptured"
QT_MOC_LITERAL(6, 64, 4), // "pUrl"
QT_MOC_LITERAL(7, 69, 9), // "pMimeType"
QT_MOC_LITERAL(8, 79, 6), // "pWidth"
QT_MOC_LITERAL(9, 86, 7), // "pHeight"
QT_MOC_LITERAL(10, 94, 17), // "embedCodeCaptured"
QT_MOC_LITERAL(11, 112, 9), // "embedCode"
QT_MOC_LITERAL(12, 122, 18), // "webElementCaptured"
QT_MOC_LITERAL(13, 141, 5), // "query"
QT_MOC_LITERAL(14, 147, 16), // "viewLoadFinished"
QT_MOC_LITERAL(15, 164, 2) // "ok"

    },
    "WBWebTrapWebView\0pixmapCaptured\0\0"
    "pixmap\0pageMode\0objectCaptured\0pUrl\0"
    "pMimeType\0pWidth\0pHeight\0embedCodeCaptured\0"
    "embedCode\0webElementCaptured\0query\0"
    "viewLoadFinished\0ok"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBWebTrapWebView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,
       5,    4,   44,    2, 0x06 /* Public */,
      10,    1,   53,    2, 0x06 /* Public */,
      12,    2,   56,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    1,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPixmap, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::QUrl, QMetaType::QString, QMetaType::Int, QMetaType::Int,    6,    7,    8,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QUrl, QMetaType::QString,    6,   13,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   15,

       0        // eod
};

void WBWebTrapWebView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBWebTrapWebView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pixmapCaptured((*reinterpret_cast< const QPixmap(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->objectCaptured((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 2: _t->embedCodeCaptured((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->webElementCaptured((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->viewLoadFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WBWebTrapWebView::*)(const QPixmap & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBWebTrapWebView::pixmapCaptured)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WBWebTrapWebView::*)(const QUrl & , const QString & , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBWebTrapWebView::objectCaptured)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WBWebTrapWebView::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBWebTrapWebView::embedCodeCaptured)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (WBWebTrapWebView::*)(const QUrl & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBWebTrapWebView::webElementCaptured)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WBWebTrapWebView::staticMetaObject = { {
    QMetaObject::SuperData::link<QWebEngineView::staticMetaObject>(),
    qt_meta_stringdata_WBWebTrapWebView.data,
    qt_meta_data_WBWebTrapWebView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBWebTrapWebView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBWebTrapWebView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBWebTrapWebView.stringdata0))
        return static_cast<void*>(this);
    return QWebEngineView::qt_metacast(_clname);
}

int WBWebTrapWebView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWebEngineView::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void WBWebTrapWebView::pixmapCaptured(const QPixmap & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WBWebTrapWebView::objectCaptured(const QUrl & _t1, const QString & _t2, int _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WBWebTrapWebView::embedCodeCaptured(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WBWebTrapWebView::webElementCaptured(const QUrl & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
