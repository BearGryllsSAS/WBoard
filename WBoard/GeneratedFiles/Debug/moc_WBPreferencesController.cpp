/****************************************************************************
** Meta object code from reading C++ file 'WBPreferencesController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/core/WBPreferencesController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBPreferencesController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WBPreferencesDialog_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBPreferencesDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBPreferencesDialog_t qt_meta_stringdata_WBPreferencesDialog = {
    {
QT_MOC_LITERAL(0, 0, 19) // "WBPreferencesDialog"

    },
    "WBPreferencesDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBPreferencesDialog[] = {

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

void WBPreferencesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject WBPreferencesDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_WBPreferencesDialog.data,
    qt_meta_data_WBPreferencesDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBPreferencesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBPreferencesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBPreferencesDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int WBPreferencesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_WBPreferencesController_t {
    QByteArrayData data[22];
    char stringdata0[417];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBPreferencesController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBPreferencesController_t qt_meta_stringdata_WBPreferencesController = {
    {
QT_MOC_LITERAL(0, 0, 23), // "WBPreferencesController"
QT_MOC_LITERAL(1, 24, 4), // "show"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 5), // "close"
QT_MOC_LITERAL(4, 36, 15), // "defaultSettings"
QT_MOC_LITERAL(5, 52, 25), // "penPreviewFromSizeChanged"
QT_MOC_LITERAL(6, 78, 5), // "value"
QT_MOC_LITERAL(7, 84, 38), // "darkBackgroundCrossOpacityVal..."
QT_MOC_LITERAL(8, 123, 39), // "lightBackgroundCrossOpacityVa..."
QT_MOC_LITERAL(9, 163, 18), // "widthSliderChanged"
QT_MOC_LITERAL(10, 182, 20), // "opacitySliderChanged"
QT_MOC_LITERAL(11, 203, 13), // "colorSelected"
QT_MOC_LITERAL(12, 217, 29), // "setCrossColorOnDarkBackground"
QT_MOC_LITERAL(13, 247, 5), // "color"
QT_MOC_LITERAL(14, 253, 30), // "setCrossColorOnLightBackground"
QT_MOC_LITERAL(15, 284, 22), // "toolbarPositionChanged"
QT_MOC_LITERAL(16, 307, 7), // "checked"
QT_MOC_LITERAL(17, 315, 26), // "toolbarOrientationVertical"
QT_MOC_LITERAL(18, 342, 28), // "toolbarOrientationHorizontal"
QT_MOC_LITERAL(19, 371, 24), // "systemOSKCheckBoxToggled"
QT_MOC_LITERAL(20, 396, 13), // "adjustScreens"
QT_MOC_LITERAL(21, 410, 6) // "screen"

    },
    "WBPreferencesController\0show\0\0close\0"
    "defaultSettings\0penPreviewFromSizeChanged\0"
    "value\0darkBackgroundCrossOpacityValueChanged\0"
    "lightBackgroundCrossOpacityValueChanged\0"
    "widthSliderChanged\0opacitySliderChanged\0"
    "colorSelected\0setCrossColorOnDarkBackground\0"
    "color\0setCrossColorOnLightBackground\0"
    "toolbarPositionChanged\0checked\0"
    "toolbarOrientationVertical\0"
    "toolbarOrientationHorizontal\0"
    "systemOSKCheckBoxToggled\0adjustScreens\0"
    "screen"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBPreferencesController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x0a /* Public */,
       3,    0,   95,    2, 0x09 /* Protected */,
       4,    0,   96,    2, 0x09 /* Protected */,
       5,    1,   97,    2, 0x09 /* Protected */,
       7,    1,  100,    2, 0x09 /* Protected */,
       8,    1,  103,    2, 0x09 /* Protected */,
       9,    1,  106,    2, 0x09 /* Protected */,
      10,    1,  109,    2, 0x09 /* Protected */,
      11,    1,  112,    2, 0x09 /* Protected */,
      12,    1,  115,    2, 0x09 /* Protected */,
      14,    1,  118,    2, 0x09 /* Protected */,
      15,    1,  121,    2, 0x09 /* Protected */,
      17,    1,  124,    2, 0x09 /* Protected */,
      18,    1,  127,    2, 0x09 /* Protected */,
      19,    1,  130,    2, 0x09 /* Protected */,
      20,    1,  133,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void, QMetaType::QColor,   13,
    QMetaType::Void, QMetaType::QColor,   13,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Int,   21,

       0        // eod
};

void WBPreferencesController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBPreferencesController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->show(); break;
        case 1: _t->close(); break;
        case 2: _t->defaultSettings(); break;
        case 3: _t->penPreviewFromSizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->darkBackgroundCrossOpacityValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->lightBackgroundCrossOpacityValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->widthSliderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->opacitySliderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->colorSelected((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 9: _t->setCrossColorOnDarkBackground((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 10: _t->setCrossColorOnLightBackground((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 11: _t->toolbarPositionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->toolbarOrientationVertical((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->toolbarOrientationHorizontal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->systemOSKCheckBoxToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->adjustScreens((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WBPreferencesController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_WBPreferencesController.data,
    qt_meta_data_WBPreferencesController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBPreferencesController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBPreferencesController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBPreferencesController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WBPreferencesController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
