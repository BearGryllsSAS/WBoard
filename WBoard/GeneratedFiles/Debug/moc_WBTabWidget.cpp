/****************************************************************************
** Meta object code from reading C++ file 'WBTabWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/web/browser/WBTabWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBTabWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WBTabBar_t {
    QByteArrayData data[15];
    char stringdata0[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBTabBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBTabBar_t qt_meta_stringdata_WBTabBar = {
    {
QT_MOC_LITERAL(0, 0, 8), // "WBTabBar"
QT_MOC_LITERAL(1, 9, 6), // "newTab"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 8), // "cloneTab"
QT_MOC_LITERAL(4, 26, 5), // "index"
QT_MOC_LITERAL(5, 32, 8), // "closeTab"
QT_MOC_LITERAL(6, 41, 14), // "closeOtherTabs"
QT_MOC_LITERAL(7, 56, 9), // "reloadTab"
QT_MOC_LITERAL(8, 66, 13), // "reloadAllTabs"
QT_MOC_LITERAL(9, 80, 16), // "tabMoveRequested"
QT_MOC_LITERAL(10, 97, 9), // "fromIndex"
QT_MOC_LITERAL(11, 107, 7), // "toIndex"
QT_MOC_LITERAL(12, 115, 15), // "selectTabAction"
QT_MOC_LITERAL(13, 131, 20), // "contextMenuRequested"
QT_MOC_LITERAL(14, 152, 8) // "position"

    },
    "WBTabBar\0newTab\0\0cloneTab\0index\0"
    "closeTab\0closeOtherTabs\0reloadTab\0"
    "reloadAllTabs\0tabMoveRequested\0fromIndex\0"
    "toIndex\0selectTabAction\0contextMenuRequested\0"
    "position"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBTabBar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    1,   80,    2, 0x06 /* Public */,
       5,    1,   83,    2, 0x06 /* Public */,
       6,    1,   86,    2, 0x06 /* Public */,
       7,    1,   89,    2, 0x06 /* Public */,
       8,    0,   92,    2, 0x06 /* Public */,
       9,    2,   93,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,   98,    2, 0x08 /* Private */,
       3,    0,   99,    2, 0x08 /* Private */,
       5,    0,  100,    2, 0x08 /* Private */,
       6,    0,  101,    2, 0x08 /* Private */,
       7,    0,  102,    2, 0x08 /* Private */,
      13,    1,  103,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   10,   11,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   14,

       0        // eod
};

void WBTabBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBTabBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newTab(); break;
        case 1: _t->cloneTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->closeTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->closeOtherTabs((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->reloadTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->reloadAllTabs(); break;
        case 6: _t->tabMoveRequested((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->selectTabAction(); break;
        case 8: _t->cloneTab(); break;
        case 9: _t->closeTab(); break;
        case 10: _t->closeOtherTabs(); break;
        case 11: _t->reloadTab(); break;
        case 12: _t->contextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WBTabBar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBTabBar::newTab)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WBTabBar::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBTabBar::cloneTab)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WBTabBar::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBTabBar::closeTab)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (WBTabBar::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBTabBar::closeOtherTabs)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (WBTabBar::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBTabBar::reloadTab)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (WBTabBar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBTabBar::reloadAllTabs)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (WBTabBar::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBTabBar::tabMoveRequested)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WBTabBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QTabBar::staticMetaObject>(),
    qt_meta_stringdata_WBTabBar.data,
    qt_meta_data_WBTabBar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBTabBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBTabBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBTabBar.stringdata0))
        return static_cast<void*>(this);
    return QTabBar::qt_metacast(_clname);
}

int WBTabBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void WBTabBar::newTab()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WBTabBar::cloneTab(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WBTabBar::closeTab(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WBTabBar::closeOtherTabs(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void WBTabBar::reloadTab(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void WBTabBar::reloadAllTabs()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void WBTabBar::tabMoveRequested(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
struct qt_meta_stringdata_WBWebActionMapper_t {
    QByteArrayData data[6];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBWebActionMapper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBWebActionMapper_t qt_meta_stringdata_WBWebActionMapper = {
    {
QT_MOC_LITERAL(0, 0, 17), // "WBWebActionMapper"
QT_MOC_LITERAL(1, 18, 13), // "rootTriggered"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 12), // "childChanged"
QT_MOC_LITERAL(4, 46, 13), // "rootDestroyed"
QT_MOC_LITERAL(5, 60, 16) // "currentDestroyed"

    },
    "WBWebActionMapper\0rootTriggered\0\0"
    "childChanged\0rootDestroyed\0currentDestroyed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBWebActionMapper[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WBWebActionMapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBWebActionMapper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rootTriggered(); break;
        case 1: _t->childChanged(); break;
        case 2: _t->rootDestroyed(); break;
        case 3: _t->currentDestroyed(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject WBWebActionMapper::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_WBWebActionMapper.data,
    qt_meta_data_WBWebActionMapper,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBWebActionMapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBWebActionMapper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBWebActionMapper.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WBWebActionMapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
struct qt_meta_stringdata_WBTabWidget_t {
    QByteArrayData data[49];
    char stringdata0[677];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBTabWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBTabWidget_t qt_meta_stringdata_WBTabWidget = {
    {
QT_MOC_LITERAL(0, 0, 11), // "WBTabWidget"
QT_MOC_LITERAL(1, 12, 8), // "loadPage"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 3), // "url"
QT_MOC_LITERAL(4, 26, 15), // "setCurrentTitle"
QT_MOC_LITERAL(5, 42, 20), // "showStatusBarMessage"
QT_MOC_LITERAL(6, 63, 7), // "message"
QT_MOC_LITERAL(7, 71, 11), // "linkHovered"
QT_MOC_LITERAL(8, 83, 4), // "link"
QT_MOC_LITERAL(9, 88, 12), // "loadProgress"
QT_MOC_LITERAL(10, 101, 8), // "progress"
QT_MOC_LITERAL(11, 110, 12), // "loadFinished"
QT_MOC_LITERAL(12, 123, 3), // "pOk"
QT_MOC_LITERAL(13, 127, 23), // "geometryChangeRequested"
QT_MOC_LITERAL(14, 151, 8), // "geometry"
QT_MOC_LITERAL(15, 160, 32), // "menuBarVisibilityChangeRequested"
QT_MOC_LITERAL(16, 193, 7), // "visible"
QT_MOC_LITERAL(17, 201, 34), // "statusBarVisibilityChangeRequ..."
QT_MOC_LITERAL(18, 236, 32), // "toolBarVisibilityChangeRequested"
QT_MOC_LITERAL(19, 269, 14), // "printRequested"
QT_MOC_LITERAL(20, 284, 12), // "QWebChannel*"
QT_MOC_LITERAL(21, 297, 5), // "frame"
QT_MOC_LITERAL(22, 303, 19), // "loadUrlInCurrentTab"
QT_MOC_LITERAL(23, 323, 6), // "newTab"
QT_MOC_LITERAL(24, 330, 10), // "WBWebView*"
QT_MOC_LITERAL(25, 341, 11), // "makeCurrent"
QT_MOC_LITERAL(26, 353, 8), // "cloneTab"
QT_MOC_LITERAL(27, 362, 5), // "index"
QT_MOC_LITERAL(28, 368, 8), // "closeTab"
QT_MOC_LITERAL(29, 377, 14), // "closeOtherTabs"
QT_MOC_LITERAL(30, 392, 9), // "reloadTab"
QT_MOC_LITERAL(31, 402, 13), // "reloadAllTabs"
QT_MOC_LITERAL(32, 416, 7), // "nextTab"
QT_MOC_LITERAL(33, 424, 11), // "previousTab"
QT_MOC_LITERAL(34, 436, 14), // "currentChanged"
QT_MOC_LITERAL(35, 451, 25), // "aboutToShowRecentTabsMenu"
QT_MOC_LITERAL(36, 477, 32), // "aboutToShowRecentTriggeredAction"
QT_MOC_LITERAL(37, 510, 8), // "QAction*"
QT_MOC_LITERAL(38, 519, 6), // "action"
QT_MOC_LITERAL(39, 526, 18), // "webViewLoadStarted"
QT_MOC_LITERAL(40, 545, 18), // "webViewIconChanged"
QT_MOC_LITERAL(41, 564, 19), // "webViewTitleChanged"
QT_MOC_LITERAL(42, 584, 5), // "title"
QT_MOC_LITERAL(43, 590, 17), // "webViewUrlChanged"
QT_MOC_LITERAL(44, 608, 21), // "lineEditReturnPressed"
QT_MOC_LITERAL(45, 630, 20), // "windowCloseRequested"
QT_MOC_LITERAL(46, 651, 7), // "moveTab"
QT_MOC_LITERAL(47, 659, 9), // "fromIndex"
QT_MOC_LITERAL(48, 669, 7) // "toIndex"

    },
    "WBTabWidget\0loadPage\0\0url\0setCurrentTitle\0"
    "showStatusBarMessage\0message\0linkHovered\0"
    "link\0loadProgress\0progress\0loadFinished\0"
    "pOk\0geometryChangeRequested\0geometry\0"
    "menuBarVisibilityChangeRequested\0"
    "visible\0statusBarVisibilityChangeRequested\0"
    "toolBarVisibilityChangeRequested\0"
    "printRequested\0QWebChannel*\0frame\0"
    "loadUrlInCurrentTab\0newTab\0WBWebView*\0"
    "makeCurrent\0cloneTab\0index\0closeTab\0"
    "closeOtherTabs\0reloadTab\0reloadAllTabs\0"
    "nextTab\0previousTab\0currentChanged\0"
    "aboutToShowRecentTabsMenu\0"
    "aboutToShowRecentTriggeredAction\0"
    "QAction*\0action\0webViewLoadStarted\0"
    "webViewIconChanged\0webViewTitleChanged\0"
    "title\0webViewUrlChanged\0lineEditReturnPressed\0"
    "windowCloseRequested\0moveTab\0fromIndex\0"
    "toIndex"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBTabWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      34,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  184,    2, 0x06 /* Public */,
       4,    1,  187,    2, 0x06 /* Public */,
       5,    1,  190,    2, 0x06 /* Public */,
       7,    1,  193,    2, 0x06 /* Public */,
       9,    1,  196,    2, 0x06 /* Public */,
      11,    1,  199,    2, 0x06 /* Public */,
      13,    1,  202,    2, 0x06 /* Public */,
      15,    1,  205,    2, 0x06 /* Public */,
      17,    1,  208,    2, 0x06 /* Public */,
      18,    1,  211,    2, 0x06 /* Public */,
      19,    1,  214,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      22,    1,  217,    2, 0x0a /* Public */,
      23,    1,  220,    2, 0x0a /* Public */,
      23,    0,  223,    2, 0x2a /* Public | MethodCloned */,
      26,    1,  224,    2, 0x0a /* Public */,
      26,    0,  227,    2, 0x2a /* Public | MethodCloned */,
      28,    1,  228,    2, 0x0a /* Public */,
      28,    0,  231,    2, 0x2a /* Public | MethodCloned */,
      29,    1,  232,    2, 0x0a /* Public */,
      30,    1,  235,    2, 0x0a /* Public */,
      30,    0,  238,    2, 0x2a /* Public | MethodCloned */,
      31,    0,  239,    2, 0x0a /* Public */,
      32,    0,  240,    2, 0x0a /* Public */,
      33,    0,  241,    2, 0x0a /* Public */,
      34,    1,  242,    2, 0x08 /* Private */,
      35,    0,  245,    2, 0x08 /* Private */,
      36,    1,  246,    2, 0x08 /* Private */,
      39,    0,  249,    2, 0x08 /* Private */,
      40,    0,  250,    2, 0x08 /* Private */,
      41,    1,  251,    2, 0x08 /* Private */,
      43,    1,  254,    2, 0x08 /* Private */,
      44,    0,  257,    2, 0x08 /* Private */,
      45,    0,  258,    2, 0x08 /* Private */,
      46,    2,  259,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::QRect,   14,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, 0x80000000 | 20,   21,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl,    3,
    0x80000000 | 24, QMetaType::Bool,   25,
    0x80000000 | 24,
    QMetaType::Void, QMetaType::Int,   27,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   27,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   27,
    QMetaType::Void, QMetaType::Int,   27,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   27,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 37,   38,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   42,
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   47,   48,

       0        // eod
};

void WBTabWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBTabWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadPage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setCurrentTitle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->showStatusBarMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->linkHovered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->loadProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->loadFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->geometryChangeRequested((*reinterpret_cast< const QRect(*)>(_a[1]))); break;
        case 7: _t->menuBarVisibilityChangeRequested((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->statusBarVisibilityChangeRequested((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->toolBarVisibilityChangeRequested((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->printRequested((*reinterpret_cast< QWebChannel*(*)>(_a[1]))); break;
        case 11: _t->loadUrlInCurrentTab((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 12: { WBWebView* _r = _t->newTab((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< WBWebView**>(_a[0]) = std::move(_r); }  break;
        case 13: { WBWebView* _r = _t->newTab();
            if (_a[0]) *reinterpret_cast< WBWebView**>(_a[0]) = std::move(_r); }  break;
        case 14: _t->cloneTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->cloneTab(); break;
        case 16: _t->closeTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->closeTab(); break;
        case 18: _t->closeOtherTabs((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->reloadTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->reloadTab(); break;
        case 21: _t->reloadAllTabs(); break;
        case 22: _t->nextTab(); break;
        case 23: _t->previousTab(); break;
        case 24: _t->currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->aboutToShowRecentTabsMenu(); break;
        case 26: _t->aboutToShowRecentTriggeredAction((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 27: _t->webViewLoadStarted(); break;
        case 28: _t->webViewIconChanged(); break;
        case 29: _t->webViewTitleChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 30: _t->webViewUrlChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 31: _t->lineEditReturnPressed(); break;
        case 32: _t->windowCloseRequested(); break;
        case 33: _t->moveTab((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWebChannel* >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WBTabWidget::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBTabWidget::loadPage)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WBTabWidget::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBTabWidget::setCurrentTitle)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WBTabWidget::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBTabWidget::showStatusBarMessage)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (WBTabWidget::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBTabWidget::linkHovered)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (WBTabWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBTabWidget::loadProgress)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (WBTabWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBTabWidget::loadFinished)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (WBTabWidget::*)(const QRect & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBTabWidget::geometryChangeRequested)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (WBTabWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBTabWidget::menuBarVisibilityChangeRequested)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (WBTabWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBTabWidget::statusBarVisibilityChangeRequested)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (WBTabWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBTabWidget::toolBarVisibilityChangeRequested)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (WBTabWidget::*)(QWebChannel * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBTabWidget::printRequested)) {
                *result = 10;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WBTabWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QTabWidget::staticMetaObject>(),
    qt_meta_stringdata_WBTabWidget.data,
    qt_meta_data_WBTabWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBTabWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBTabWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBTabWidget.stringdata0))
        return static_cast<void*>(this);
    return QTabWidget::qt_metacast(_clname);
}

int WBTabWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    }
    return _id;
}

// SIGNAL 0
void WBTabWidget::loadPage(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WBTabWidget::setCurrentTitle(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WBTabWidget::showStatusBarMessage(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WBTabWidget::linkHovered(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void WBTabWidget::loadProgress(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void WBTabWidget::loadFinished(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void WBTabWidget::geometryChangeRequested(const QRect & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void WBTabWidget::menuBarVisibilityChangeRequested(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void WBTabWidget::statusBarVisibilityChangeRequested(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void WBTabWidget::toolBarVisibilityChangeRequested(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void WBTabWidget::printRequested(QWebChannel * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
