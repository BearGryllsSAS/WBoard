/****************************************************************************
** Meta object code from reading C++ file 'WBApplicationController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/core/WBApplicationController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBApplicationController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WBApplicationController_t {
    QByteArrayData data[27];
    char stringdata0[374];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBApplicationController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBApplicationController_t qt_meta_stringdata_WBApplicationController = {
    {
QT_MOC_LITERAL(0, 0, 23), // "WBApplicationController"
QT_MOC_LITERAL(1, 24, 15), // "mainModeChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 33), // "WBApplicationController::Main..."
QT_MOC_LITERAL(4, 75, 5), // "pMode"
QT_MOC_LITERAL(5, 81, 11), // "desktopMode"
QT_MOC_LITERAL(6, 93, 9), // "displayed"
QT_MOC_LITERAL(7, 103, 17), // "addCapturedPixmap"
QT_MOC_LITERAL(8, 121, 7), // "pPixmap"
QT_MOC_LITERAL(9, 129, 8), // "pageMode"
QT_MOC_LITERAL(10, 138, 9), // "sourceUrl"
QT_MOC_LITERAL(11, 148, 20), // "addCapturedEmbedCode"
QT_MOC_LITERAL(12, 169, 9), // "embedCode"
QT_MOC_LITERAL(13, 179, 19), // "screenLayoutChanged"
QT_MOC_LITERAL(14, 199, 11), // "showDesktop"
QT_MOC_LITERAL(15, 211, 22), // "dontSwitchFrontProcess"
QT_MOC_LITERAL(16, 234, 11), // "hideDesktop"
QT_MOC_LITERAL(17, 246, 14), // "useMultiScreen"
QT_MOC_LITERAL(18, 261, 3), // "use"
QT_MOC_LITERAL(19, 265, 9), // "actionCut"
QT_MOC_LITERAL(20, 275, 10), // "actionCopy"
QT_MOC_LITERAL(21, 286, 11), // "actionPaste"
QT_MOC_LITERAL(22, 298, 18), // "checkUpdateRequest"
QT_MOC_LITERAL(23, 317, 13), // "checkAtLaunch"
QT_MOC_LITERAL(24, 331, 21), // "updateRequestFinished"
QT_MOC_LITERAL(25, 353, 14), // "QNetworkReply*"
QT_MOC_LITERAL(26, 368, 5) // "reply"

    },
    "WBApplicationController\0mainModeChanged\0"
    "\0WBApplicationController::MainMode\0"
    "pMode\0desktopMode\0displayed\0"
    "addCapturedPixmap\0pPixmap\0pageMode\0"
    "sourceUrl\0addCapturedEmbedCode\0embedCode\0"
    "screenLayoutChanged\0showDesktop\0"
    "dontSwitchFrontProcess\0hideDesktop\0"
    "useMultiScreen\0use\0actionCut\0actionCopy\0"
    "actionPaste\0checkUpdateRequest\0"
    "checkAtLaunch\0updateRequestFinished\0"
    "QNetworkReply*\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBApplicationController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,
       5,    1,   97,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    3,  100,    2, 0x0a /* Public */,
       7,    2,  107,    2, 0x2a /* Public | MethodCloned */,
      11,    1,  112,    2, 0x0a /* Public */,
      13,    0,  115,    2, 0x0a /* Public */,
      14,    1,  116,    2, 0x0a /* Public */,
      14,    0,  119,    2, 0x2a /* Public | MethodCloned */,
      16,    0,  120,    2, 0x0a /* Public */,
      17,    1,  121,    2, 0x0a /* Public */,
      19,    0,  124,    2, 0x0a /* Public */,
      20,    0,  125,    2, 0x0a /* Public */,
      21,    0,  126,    2, 0x0a /* Public */,
      22,    0,  127,    2, 0x0a /* Public */,
      23,    0,  128,    2, 0x0a /* Public */,
      24,    1,  129,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QPixmap, QMetaType::Bool, QMetaType::QUrl,    8,    9,   10,
    QMetaType::Void, QMetaType::QPixmap, QMetaType::Bool,    8,    9,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 25,   26,

       0        // eod
};

void WBApplicationController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBApplicationController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mainModeChanged((*reinterpret_cast< WBApplicationController::MainMode(*)>(_a[1]))); break;
        case 1: _t->desktopMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->addCapturedPixmap((*reinterpret_cast< const QPixmap(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QUrl(*)>(_a[3]))); break;
        case 3: _t->addCapturedPixmap((*reinterpret_cast< const QPixmap(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->addCapturedEmbedCode((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->screenLayoutChanged(); break;
        case 6: _t->showDesktop((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->showDesktop(); break;
        case 8: _t->hideDesktop(); break;
        case 9: _t->useMultiScreen((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->actionCut(); break;
        case 11: _t->actionCopy(); break;
        case 12: _t->actionPaste(); break;
        case 13: _t->checkUpdateRequest(); break;
        case 14: _t->checkAtLaunch(); break;
        case 15: _t->updateRequestFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WBApplicationController::*)(WBApplicationController::MainMode );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBApplicationController::mainModeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WBApplicationController::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBApplicationController::desktopMode)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WBApplicationController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_WBApplicationController.data,
    qt_meta_data_WBApplicationController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBApplicationController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBApplicationController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBApplicationController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WBApplicationController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void WBApplicationController::mainModeChanged(WBApplicationController::MainMode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WBApplicationController::desktopMode(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
