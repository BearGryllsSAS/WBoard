/****************************************************************************
** Meta object code from reading C++ file 'WBFeaturesController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/board/WBFeaturesController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBFeaturesController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WBFeaturesComputingThread_t {
    QByteArrayData data[13];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBFeaturesComputingThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBFeaturesComputingThread_t qt_meta_stringdata_WBFeaturesComputingThread = {
    {
QT_MOC_LITERAL(0, 0, 25), // "WBFeaturesComputingThread"
QT_MOC_LITERAL(1, 26, 11), // "sendFeature"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 9), // "WBFeature"
QT_MOC_LITERAL(4, 49, 8), // "pFeature"
QT_MOC_LITERAL(5, 58, 11), // "featureSent"
QT_MOC_LITERAL(6, 70, 11), // "scanStarted"
QT_MOC_LITERAL(7, 82, 12), // "scanFinished"
QT_MOC_LITERAL(8, 95, 22), // "maxFilesCountEvaluated"
QT_MOC_LITERAL(9, 118, 3), // "max"
QT_MOC_LITERAL(10, 122, 12), // "scanCategory"
QT_MOC_LITERAL(11, 135, 3), // "str"
QT_MOC_LITERAL(12, 139, 8) // "scanPath"

    },
    "WBFeaturesComputingThread\0sendFeature\0"
    "\0WBFeature\0pFeature\0featureSent\0"
    "scanStarted\0scanFinished\0"
    "maxFilesCountEvaluated\0max\0scanCategory\0"
    "str\0scanPath"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBFeaturesComputingThread[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       5,    0,   52,    2, 0x06 /* Public */,
       6,    0,   53,    2, 0x06 /* Public */,
       7,    0,   54,    2, 0x06 /* Public */,
       8,    1,   55,    2, 0x06 /* Public */,
      10,    1,   58,    2, 0x06 /* Public */,
      12,    1,   61,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   11,

       0        // eod
};

void WBFeaturesComputingThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBFeaturesComputingThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendFeature((*reinterpret_cast< WBFeature(*)>(_a[1]))); break;
        case 1: _t->featureSent(); break;
        case 2: _t->scanStarted(); break;
        case 3: _t->scanFinished(); break;
        case 4: _t->maxFilesCountEvaluated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->scanCategory((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->scanPath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WBFeature >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WBFeaturesComputingThread::*)(WBFeature );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBFeaturesComputingThread::sendFeature)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WBFeaturesComputingThread::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBFeaturesComputingThread::featureSent)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WBFeaturesComputingThread::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBFeaturesComputingThread::scanStarted)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (WBFeaturesComputingThread::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBFeaturesComputingThread::scanFinished)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (WBFeaturesComputingThread::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBFeaturesComputingThread::maxFilesCountEvaluated)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (WBFeaturesComputingThread::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBFeaturesComputingThread::scanCategory)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (WBFeaturesComputingThread::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBFeaturesComputingThread::scanPath)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WBFeaturesComputingThread::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_WBFeaturesComputingThread.data,
    qt_meta_data_WBFeaturesComputingThread,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBFeaturesComputingThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBFeaturesComputingThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBFeaturesComputingThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int WBFeaturesComputingThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void WBFeaturesComputingThread::sendFeature(WBFeature _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WBFeaturesComputingThread::featureSent()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void WBFeaturesComputingThread::scanStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void WBFeaturesComputingThread::scanFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void WBFeaturesComputingThread::maxFilesCountEvaluated(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void WBFeaturesComputingThread::scanCategory(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void WBFeaturesComputingThread::scanPath(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
struct qt_meta_stringdata_WBFeaturesController_t {
    QByteArrayData data[14];
    char stringdata0[175];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBFeaturesController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBFeaturesController_t qt_meta_stringdata_WBFeaturesController = {
    {
QT_MOC_LITERAL(0, 0, 20), // "WBFeaturesController"
QT_MOC_LITERAL(1, 21, 22), // "maxFilesCountEvaluated"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 6), // "pLimit"
QT_MOC_LITERAL(4, 52, 11), // "scanStarted"
QT_MOC_LITERAL(5, 64, 12), // "scanFinished"
QT_MOC_LITERAL(6, 77, 22), // "featureAddedFromThread"
QT_MOC_LITERAL(7, 100, 12), // "scanCategory"
QT_MOC_LITERAL(8, 113, 8), // "scanPath"
QT_MOC_LITERAL(9, 122, 12), // "addNewFolder"
QT_MOC_LITERAL(10, 135, 4), // "name"
QT_MOC_LITERAL(11, 140, 11), // "startThread"
QT_MOC_LITERAL(12, 152, 18), // "createNpApiFeature"
QT_MOC_LITERAL(13, 171, 3) // "str"

    },
    "WBFeaturesController\0maxFilesCountEvaluated\0"
    "\0pLimit\0scanStarted\0scanFinished\0"
    "featureAddedFromThread\0scanCategory\0"
    "scanPath\0addNewFolder\0name\0startThread\0"
    "createNpApiFeature\0str"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBFeaturesController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    0,   62,    2, 0x06 /* Public */,
       5,    0,   63,    2, 0x06 /* Public */,
       6,    0,   64,    2, 0x06 /* Public */,
       7,    1,   65,    2, 0x06 /* Public */,
       8,    1,   68,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   71,    2, 0x08 /* Private */,
      11,    0,   74,    2, 0x08 /* Private */,
      12,    1,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,

       0        // eod
};

void WBFeaturesController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBFeaturesController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->maxFilesCountEvaluated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->scanStarted(); break;
        case 2: _t->scanFinished(); break;
        case 3: _t->featureAddedFromThread(); break;
        case 4: _t->scanCategory((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->scanPath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->addNewFolder((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->startThread(); break;
        case 8: _t->createNpApiFeature((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WBFeaturesController::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBFeaturesController::maxFilesCountEvaluated)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WBFeaturesController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBFeaturesController::scanStarted)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WBFeaturesController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBFeaturesController::scanFinished)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (WBFeaturesController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBFeaturesController::featureAddedFromThread)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (WBFeaturesController::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBFeaturesController::scanCategory)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (WBFeaturesController::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBFeaturesController::scanPath)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WBFeaturesController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_WBFeaturesController.data,
    qt_meta_data_WBFeaturesController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBFeaturesController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBFeaturesController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBFeaturesController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WBFeaturesController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void WBFeaturesController::maxFilesCountEvaluated(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WBFeaturesController::scanStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void WBFeaturesController::scanFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void WBFeaturesController::featureAddedFromThread()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void WBFeaturesController::scanCategory(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void WBFeaturesController::scanPath(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
