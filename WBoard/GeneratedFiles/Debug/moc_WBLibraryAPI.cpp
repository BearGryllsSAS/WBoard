/****************************************************************************
** Meta object code from reading C++ file 'WBLibraryAPI.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/api/WBLibraryAPI.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBLibraryAPI.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WBLibraryAPI_t {
    QByteArrayData data[15];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBLibraryAPI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBLibraryAPI_t qt_meta_stringdata_WBLibraryAPI = {
    {
QT_MOC_LITERAL(0, 0, 12), // "WBLibraryAPI"
QT_MOC_LITERAL(1, 13, 17), // "downloadTriggered"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 3), // "url"
QT_MOC_LITERAL(4, 36, 3), // "pos"
QT_MOC_LITERAL(5, 40, 5), // "pSize"
QT_MOC_LITERAL(6, 46, 10), // "background"
QT_MOC_LITERAL(7, 57, 9), // "addObject"
QT_MOC_LITERAL(8, 67, 4), // "pUrl"
QT_MOC_LITERAL(9, 72, 5), // "width"
QT_MOC_LITERAL(10, 78, 6), // "height"
QT_MOC_LITERAL(11, 85, 1), // "x"
QT_MOC_LITERAL(12, 87, 1), // "y"
QT_MOC_LITERAL(13, 89, 9), // "startDrag"
QT_MOC_LITERAL(14, 99, 7) // "addTool"

    },
    "WBLibraryAPI\0downloadTriggered\0\0url\0"
    "pos\0pSize\0background\0addObject\0pUrl\0"
    "width\0height\0x\0y\0startDrag\0addTool"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBLibraryAPI[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    6,   78,    2, 0x0a /* Public */,
       7,    5,   91,    2, 0x2a /* Public | MethodCloned */,
       7,    4,  102,    2, 0x2a /* Public | MethodCloned */,
       7,    3,  111,    2, 0x2a /* Public | MethodCloned */,
       7,    2,  118,    2, 0x2a /* Public | MethodCloned */,
       7,    1,  123,    2, 0x2a /* Public | MethodCloned */,
      13,    1,  126,    2, 0x0a /* Public */,
      14,    3,  129,    2, 0x0a /* Public */,
      14,    2,  136,    2, 0x2a /* Public | MethodCloned */,
      14,    1,  141,    2, 0x2a /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl, QMetaType::QPointF, QMetaType::QSize, QMetaType::Bool,    3,    4,    5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Bool,    8,    9,   10,   11,   12,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    8,    9,   10,   11,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::Int,    8,    9,   10,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int,    8,    9,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    8,    9,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int,    8,   11,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    8,   11,
    QMetaType::Void, QMetaType::QString,    8,

       0        // eod
};

void WBLibraryAPI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBLibraryAPI *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->downloadTriggered((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2])),(*reinterpret_cast< const QSize(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 1: _t->addObject((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6]))); break;
        case 2: _t->addObject((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 3: _t->addObject((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 4: _t->addObject((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 5: _t->addObject((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->addObject((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->startDrag((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->addTool((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 9: _t->addTool((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->addTool((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WBLibraryAPI::*)(const QUrl & , const QPointF & , const QSize & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBLibraryAPI::downloadTriggered)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WBLibraryAPI::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_WBLibraryAPI.data,
    qt_meta_data_WBLibraryAPI,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBLibraryAPI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBLibraryAPI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBLibraryAPI.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WBLibraryAPI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void WBLibraryAPI::downloadTriggered(const QUrl & _t1, const QPointF & _t2, const QSize & _t3, bool _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
