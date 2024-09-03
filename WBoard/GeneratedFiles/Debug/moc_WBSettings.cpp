/****************************************************************************
** Meta object code from reading C++ file 'WBSettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/core/WBSettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBSettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WBSettings_t {
    QByteArrayData data[26];
    char stringdata0[384];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBSettings_t qt_meta_stringdata_WBSettings = {
    {
QT_MOC_LITERAL(0, 0, 10), // "WBSettings"
QT_MOC_LITERAL(1, 11, 19), // "colorContextChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 16), // "setPenWidthIndex"
QT_MOC_LITERAL(4, 49, 5), // "index"
QT_MOC_LITERAL(5, 55, 16), // "setPenColorIndex"
QT_MOC_LITERAL(6, 72, 19), // "setMarkerWidthIndex"
QT_MOC_LITERAL(7, 92, 19), // "setMarkerColorIndex"
QT_MOC_LITERAL(8, 112, 19), // "setEraserWidthIndex"
QT_MOC_LITERAL(9, 132, 18), // "setEraserFineWidth"
QT_MOC_LITERAL(10, 151, 5), // "width"
QT_MOC_LITERAL(11, 157, 20), // "setEraserMediumWidth"
QT_MOC_LITERAL(12, 178, 20), // "setEraserStrongWidth"
QT_MOC_LITERAL(13, 199, 23), // "setStylusPaletteVisible"
QT_MOC_LITERAL(14, 223, 7), // "visible"
QT_MOC_LITERAL(15, 231, 23), // "setPenPressureSensitive"
QT_MOC_LITERAL(16, 255, 9), // "sensitive"
QT_MOC_LITERAL(17, 265, 19), // "setPenPreviewCircle"
QT_MOC_LITERAL(18, 285, 21), // "setPenPreviewFromSize"
QT_MOC_LITERAL(19, 307, 4), // "size"
QT_MOC_LITERAL(20, 312, 26), // "setMarkerPressureSensitive"
QT_MOC_LITERAL(21, 339, 5), // "value"
QT_MOC_LITERAL(22, 345, 3), // "key"
QT_MOC_LITERAL(23, 349, 12), // "defaultValue"
QT_MOC_LITERAL(24, 362, 8), // "setValue"
QT_MOC_LITERAL(25, 371, 12) // "colorChanged"

    },
    "WBSettings\0colorContextChanged\0\0"
    "setPenWidthIndex\0index\0setPenColorIndex\0"
    "setMarkerWidthIndex\0setMarkerColorIndex\0"
    "setEraserWidthIndex\0setEraserFineWidth\0"
    "width\0setEraserMediumWidth\0"
    "setEraserStrongWidth\0setStylusPaletteVisible\0"
    "visible\0setPenPressureSensitive\0"
    "sensitive\0setPenPreviewCircle\0"
    "setPenPreviewFromSize\0size\0"
    "setMarkerPressureSensitive\0value\0key\0"
    "defaultValue\0setValue\0colorChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBSettings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,  105,    2, 0x0a /* Public */,
       5,    1,  108,    2, 0x0a /* Public */,
       6,    1,  111,    2, 0x0a /* Public */,
       7,    1,  114,    2, 0x0a /* Public */,
       8,    1,  117,    2, 0x0a /* Public */,
       9,    1,  120,    2, 0x0a /* Public */,
      11,    1,  123,    2, 0x0a /* Public */,
      12,    1,  126,    2, 0x0a /* Public */,
      13,    1,  129,    2, 0x0a /* Public */,
      15,    1,  132,    2, 0x0a /* Public */,
      17,    1,  135,    2, 0x0a /* Public */,
      18,    1,  138,    2, 0x0a /* Public */,
      20,    1,  141,    2, 0x0a /* Public */,
      21,    2,  144,    2, 0x0a /* Public */,
      21,    1,  149,    2, 0x2a /* Public | MethodCloned */,
      24,    2,  152,    2, 0x0a /* Public */,
      25,    0,  157,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::QReal,   10,
    QMetaType::Void, QMetaType::QReal,   10,
    QMetaType::Void, QMetaType::QReal,   10,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::QVariant, QMetaType::QString, QMetaType::QVariant,   22,   23,
    QMetaType::QVariant, QMetaType::QString,   22,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,   22,   21,
    QMetaType::Void,

       0        // eod
};

void WBSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->colorContextChanged(); break;
        case 1: _t->setPenWidthIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setPenColorIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setMarkerWidthIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setMarkerColorIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setEraserWidthIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setEraserFineWidth((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 7: _t->setEraserMediumWidth((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 8: _t->setEraserStrongWidth((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 9: _t->setStylusPaletteVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->setPenPressureSensitive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->setPenPreviewCircle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->setPenPreviewFromSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->setMarkerPressureSensitive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: { QVariant _r = _t->value((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 15: { QVariant _r = _t->value((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 16: _t->setValue((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 17: _t->colorChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WBSettings::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBSettings::colorContextChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WBSettings::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_WBSettings.data,
    qt_meta_data_WBSettings,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBSettings.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WBSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void WBSettings::colorContextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
