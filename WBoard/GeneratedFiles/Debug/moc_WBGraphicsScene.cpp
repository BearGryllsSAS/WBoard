/****************************************************************************
** Meta object code from reading C++ file 'WBGraphicsScene.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/domain/WBGraphicsScene.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBGraphicsScene.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WBZLayerController_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBZLayerController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBZLayerController_t qt_meta_stringdata_WBZLayerController = {
    {
QT_MOC_LITERAL(0, 0, 18) // "WBZLayerController"

    },
    "WBZLayerController"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBZLayerController[] = {

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

void WBZLayerController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject WBZLayerController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_WBZLayerController.data,
    qt_meta_data_WBZLayerController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBZLayerController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBZLayerController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBZLayerController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WBZLayerController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_WBGraphicsScene_t {
    QByteArrayData data[42];
    char stringdata0[588];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBGraphicsScene_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBGraphicsScene_t qt_meta_stringdata_WBGraphicsScene = {
    {
QT_MOC_LITERAL(0, 0, 15), // "WBGraphicsScene"
QT_MOC_LITERAL(1, 16, 20), // "updateSelectionFrame"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 27), // "updateSelectionFrameWrapper"
QT_MOC_LITERAL(4, 66, 10), // "initStroke"
QT_MOC_LITERAL(5, 77, 8), // "hideTool"
QT_MOC_LITERAL(6, 86, 13), // "setBackground"
QT_MOC_LITERAL(7, 100, 7), // "pIsDark"
QT_MOC_LITERAL(8, 108, 16), // "WBPageBackground"
QT_MOC_LITERAL(9, 125, 11), // "pBackground"
QT_MOC_LITERAL(10, 137, 23), // "setBackgroundZoomFactor"
QT_MOC_LITERAL(11, 161, 4), // "zoom"
QT_MOC_LITERAL(12, 166, 21), // "setBackgroundGridSize"
QT_MOC_LITERAL(13, 188, 5), // "pSize"
QT_MOC_LITERAL(14, 194, 14), // "setDrawingMode"
QT_MOC_LITERAL(15, 209, 12), // "bModeDesktop"
QT_MOC_LITERAL(16, 222, 16), // "deselectAllItems"
QT_MOC_LITERAL(17, 239, 9), // "addPixmap"
QT_MOC_LITERAL(18, 249, 21), // "WBGraphicsPixmapItem*"
QT_MOC_LITERAL(19, 271, 7), // "pPixmap"
QT_MOC_LITERAL(20, 279, 14), // "QGraphicsItem*"
QT_MOC_LITERAL(21, 294, 10), // "replaceFor"
QT_MOC_LITERAL(22, 305, 4), // "pPos"
QT_MOC_LITERAL(23, 310, 11), // "scaleFactor"
QT_MOC_LITERAL(24, 322, 13), // "pUseAnimation"
QT_MOC_LITERAL(25, 336, 23), // "useProxyForDocumentPath"
QT_MOC_LITERAL(26, 360, 20), // "textUndoCommandAdded"
QT_MOC_LITERAL(27, 381, 19), // "WBGraphicsTextItem*"
QT_MOC_LITERAL(28, 401, 8), // "textItem"
QT_MOC_LITERAL(29, 410, 13), // "setToolCursor"
QT_MOC_LITERAL(30, 424, 4), // "tool"
QT_MOC_LITERAL(31, 429, 26), // "selectionChangedProcessing"
QT_MOC_LITERAL(32, 456, 13), // "moveMagnifier"
QT_MOC_LITERAL(33, 470, 6), // "newPos"
QT_MOC_LITERAL(34, 477, 9), // "forceGrab"
QT_MOC_LITERAL(35, 487, 14), // "closeMagnifier"
QT_MOC_LITERAL(36, 502, 15), // "zoomInMagnifier"
QT_MOC_LITERAL(37, 518, 16), // "zoomOutMagnifier"
QT_MOC_LITERAL(38, 535, 19), // "changeMagnifierMode"
QT_MOC_LITERAL(39, 555, 4), // "mode"
QT_MOC_LITERAL(40, 560, 16), // "resizedMagnifier"
QT_MOC_LITERAL(41, 577, 10) // "newPercent"

    },
    "WBGraphicsScene\0updateSelectionFrame\0"
    "\0updateSelectionFrameWrapper\0initStroke\0"
    "hideTool\0setBackground\0pIsDark\0"
    "WBPageBackground\0pBackground\0"
    "setBackgroundZoomFactor\0zoom\0"
    "setBackgroundGridSize\0pSize\0setDrawingMode\0"
    "bModeDesktop\0deselectAllItems\0addPixmap\0"
    "WBGraphicsPixmapItem*\0pPixmap\0"
    "QGraphicsItem*\0replaceFor\0pPos\0"
    "scaleFactor\0pUseAnimation\0"
    "useProxyForDocumentPath\0textUndoCommandAdded\0"
    "WBGraphicsTextItem*\0textItem\0setToolCursor\0"
    "tool\0selectionChangedProcessing\0"
    "moveMagnifier\0newPos\0forceGrab\0"
    "closeMagnifier\0zoomInMagnifier\0"
    "zoomOutMagnifier\0changeMagnifierMode\0"
    "mode\0resizedMagnifier\0newPercent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBGraphicsScene[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  139,    2, 0x0a /* Public */,
       3,    1,  140,    2, 0x0a /* Public */,
       4,    0,  143,    2, 0x0a /* Public */,
       5,    0,  144,    2, 0x0a /* Public */,
       6,    2,  145,    2, 0x0a /* Public */,
      10,    1,  150,    2, 0x0a /* Public */,
      12,    1,  153,    2, 0x0a /* Public */,
      14,    1,  156,    2, 0x0a /* Public */,
      16,    0,  159,    2, 0x0a /* Public */,
      17,    6,  160,    2, 0x0a /* Public */,
      17,    5,  173,    2, 0x2a /* Public | MethodCloned */,
      17,    4,  184,    2, 0x2a /* Public | MethodCloned */,
      17,    3,  193,    2, 0x2a /* Public | MethodCloned */,
      17,    2,  200,    2, 0x2a /* Public | MethodCloned */,
      26,    1,  205,    2, 0x0a /* Public */,
      29,    1,  208,    2, 0x0a /* Public */,
      31,    0,  211,    2, 0x0a /* Public */,
      32,    0,  212,    2, 0x0a /* Public */,
      32,    2,  213,    2, 0x0a /* Public */,
      32,    1,  218,    2, 0x2a /* Public | MethodCloned */,
      35,    0,  221,    2, 0x0a /* Public */,
      36,    0,  222,    2, 0x0a /* Public */,
      37,    0,  223,    2, 0x0a /* Public */,
      38,    1,  224,    2, 0x0a /* Public */,
      40,    1,  227,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 8,    7,    9,
    QMetaType::Void, QMetaType::QReal,   11,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void,
    0x80000000 | 18, QMetaType::QPixmap, 0x80000000 | 20, QMetaType::QPointF, QMetaType::QReal, QMetaType::Bool, QMetaType::Bool,   19,   21,   22,   23,   24,   25,
    0x80000000 | 18, QMetaType::QPixmap, 0x80000000 | 20, QMetaType::QPointF, QMetaType::QReal, QMetaType::Bool,   19,   21,   22,   23,   24,
    0x80000000 | 18, QMetaType::QPixmap, 0x80000000 | 20, QMetaType::QPointF, QMetaType::QReal,   19,   21,   22,   23,
    0x80000000 | 18, QMetaType::QPixmap, 0x80000000 | 20, QMetaType::QPointF,   19,   21,   22,
    0x80000000 | 18, QMetaType::QPixmap, 0x80000000 | 20,   19,   21,
    QMetaType::Void, 0x80000000 | 27,   28,
    QMetaType::Void, QMetaType::Int,   30,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint, QMetaType::Bool,   33,   34,
    QMetaType::Void, QMetaType::QPoint,   33,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   39,
    QMetaType::Void, QMetaType::QReal,   41,

       0        // eod
};

void WBGraphicsScene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBGraphicsScene *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateSelectionFrame(); break;
        case 1: _t->updateSelectionFrameWrapper((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->initStroke(); break;
        case 3: _t->hideTool(); break;
        case 4: _t->setBackground((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< WBPageBackground(*)>(_a[2]))); break;
        case 5: _t->setBackgroundZoomFactor((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 6: _t->setBackgroundGridSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setDrawingMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->deselectAllItems(); break;
        case 9: { WBGraphicsPixmapItem* _r = _t->addPixmap((*reinterpret_cast< const QPixmap(*)>(_a[1])),(*reinterpret_cast< QGraphicsItem*(*)>(_a[2])),(*reinterpret_cast< const QPointF(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< WBGraphicsPixmapItem**>(_a[0]) = std::move(_r); }  break;
        case 10: { WBGraphicsPixmapItem* _r = _t->addPixmap((*reinterpret_cast< const QPixmap(*)>(_a[1])),(*reinterpret_cast< QGraphicsItem*(*)>(_a[2])),(*reinterpret_cast< const QPointF(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< WBGraphicsPixmapItem**>(_a[0]) = std::move(_r); }  break;
        case 11: { WBGraphicsPixmapItem* _r = _t->addPixmap((*reinterpret_cast< const QPixmap(*)>(_a[1])),(*reinterpret_cast< QGraphicsItem*(*)>(_a[2])),(*reinterpret_cast< const QPointF(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< WBGraphicsPixmapItem**>(_a[0]) = std::move(_r); }  break;
        case 12: { WBGraphicsPixmapItem* _r = _t->addPixmap((*reinterpret_cast< const QPixmap(*)>(_a[1])),(*reinterpret_cast< QGraphicsItem*(*)>(_a[2])),(*reinterpret_cast< const QPointF(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< WBGraphicsPixmapItem**>(_a[0]) = std::move(_r); }  break;
        case 13: { WBGraphicsPixmapItem* _r = _t->addPixmap((*reinterpret_cast< const QPixmap(*)>(_a[1])),(*reinterpret_cast< QGraphicsItem*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< WBGraphicsPixmapItem**>(_a[0]) = std::move(_r); }  break;
        case 14: _t->textUndoCommandAdded((*reinterpret_cast< WBGraphicsTextItem*(*)>(_a[1]))); break;
        case 15: _t->setToolCursor((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->selectionChangedProcessing(); break;
        case 17: _t->moveMagnifier(); break;
        case 18: _t->moveMagnifier((*reinterpret_cast< QPoint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 19: _t->moveMagnifier((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 20: _t->closeMagnifier(); break;
        case 21: _t->zoomInMagnifier(); break;
        case 22: _t->zoomOutMagnifier(); break;
        case 23: _t->changeMagnifierMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->resizedMagnifier((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGraphicsItem* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGraphicsItem* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGraphicsItem* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGraphicsItem* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGraphicsItem* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WBGraphicsScene::staticMetaObject = { {
    QMetaObject::SuperData::link<WBCoreGraphicsScene::staticMetaObject>(),
    qt_meta_stringdata_WBGraphicsScene.data,
    qt_meta_data_WBGraphicsScene,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBGraphicsScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBGraphicsScene::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBGraphicsScene.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "WBItem"))
        return static_cast< WBItem*>(this);
    return WBCoreGraphicsScene::qt_metacast(_clname);
}

int WBGraphicsScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WBCoreGraphicsScene::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
