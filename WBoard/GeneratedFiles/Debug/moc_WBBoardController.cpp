/****************************************************************************
** Meta object code from reading C++ file 'WBBoardController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/board/WBBoardController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBBoardController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WBBoardController_t {
    QByteArrayData data[140];
    char stringdata0[1807];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBBoardController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBBoardController_t qt_meta_stringdata_WBBoardController = {
    {
QT_MOC_LITERAL(0, 0, 17), // "WBBoardController"
QT_MOC_LITERAL(1, 18, 12), // "newPageAdded"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 18), // "activeSceneChanged"
QT_MOC_LITERAL(4, 51, 11), // "zoomChanged"
QT_MOC_LITERAL(5, 63, 11), // "pZoomFactor"
QT_MOC_LITERAL(6, 75, 15), // "penColorChanged"
QT_MOC_LITERAL(7, 91, 22), // "controlViewportChanged"
QT_MOC_LITERAL(8, 114, 17), // "backgroundChanged"
QT_MOC_LITERAL(9, 132, 12), // "cacheEnabled"
QT_MOC_LITERAL(10, 145, 19), // "documentReorganized"
QT_MOC_LITERAL(11, 165, 5), // "index"
QT_MOC_LITERAL(12, 171, 15), // "displayMetadata"
QT_MOC_LITERAL(13, 187, 21), // "QMap<QString,QString>"
QT_MOC_LITERAL(14, 209, 8), // "metadata"
QT_MOC_LITERAL(15, 218, 20), // "pageSelectionChanged"
QT_MOC_LITERAL(16, 239, 25), // "centerOnThumbnailRequired"
QT_MOC_LITERAL(17, 265, 18), // "npapiWidgetCreated"
QT_MOC_LITERAL(18, 284, 3), // "Url"
QT_MOC_LITERAL(19, 288, 19), // "showDocumentsDialog"
QT_MOC_LITERAL(20, 308, 12), // "showKeyboard"
QT_MOC_LITERAL(21, 321, 4), // "show"
QT_MOC_LITERAL(22, 326, 13), // "togglePodcast"
QT_MOC_LITERAL(23, 340, 7), // "checked"
QT_MOC_LITERAL(24, 348, 8), // "blackout"
QT_MOC_LITERAL(25, 357, 8), // "addScene"
QT_MOC_LITERAL(26, 366, 16), // "WBDocumentProxy*"
QT_MOC_LITERAL(27, 383, 5), // "proxy"
QT_MOC_LITERAL(28, 389, 10), // "sceneIndex"
QT_MOC_LITERAL(29, 400, 20), // "replaceActiveIfEmpty"
QT_MOC_LITERAL(30, 421, 16), // "WBGraphicsScene*"
QT_MOC_LITERAL(31, 438, 5), // "scene"
QT_MOC_LITERAL(32, 444, 14), // "duplicateScene"
QT_MOC_LITERAL(33, 459, 10), // "importPage"
QT_MOC_LITERAL(34, 470, 10), // "clearScene"
QT_MOC_LITERAL(35, 481, 15), // "clearSceneItems"
QT_MOC_LITERAL(36, 497, 20), // "clearSceneAnnotation"
QT_MOC_LITERAL(37, 518, 20), // "clearSceneBackground"
QT_MOC_LITERAL(38, 539, 6), // "zoomIn"
QT_MOC_LITERAL(39, 546, 10), // "scenePoint"
QT_MOC_LITERAL(40, 557, 7), // "zoomOut"
QT_MOC_LITERAL(41, 565, 11), // "zoomRestore"
QT_MOC_LITERAL(42, 577, 13), // "centerRestore"
QT_MOC_LITERAL(43, 591, 8), // "centerOn"
QT_MOC_LITERAL(44, 600, 4), // "zoom"
QT_MOC_LITERAL(45, 605, 5), // "ratio"
QT_MOC_LITERAL(46, 611, 10), // "handScroll"
QT_MOC_LITERAL(47, 622, 2), // "dx"
QT_MOC_LITERAL(48, 625, 2), // "dy"
QT_MOC_LITERAL(49, 628, 13), // "previousScene"
QT_MOC_LITERAL(50, 642, 9), // "nextScene"
QT_MOC_LITERAL(51, 652, 10), // "firstScene"
QT_MOC_LITERAL(52, 663, 9), // "lastScene"
QT_MOC_LITERAL(53, 673, 11), // "downloadURL"
QT_MOC_LITERAL(54, 685, 3), // "url"
QT_MOC_LITERAL(55, 689, 16), // "contentSourceUrl"
QT_MOC_LITERAL(56, 706, 4), // "pPos"
QT_MOC_LITERAL(57, 711, 5), // "pSize"
QT_MOC_LITERAL(58, 717, 12), // "isBackground"
QT_MOC_LITERAL(59, 730, 12), // "internalData"
QT_MOC_LITERAL(60, 743, 16), // "downloadFinished"
QT_MOC_LITERAL(61, 760, 7), // "WBItem*"
QT_MOC_LITERAL(62, 768, 8), // "pSuccess"
QT_MOC_LITERAL(63, 777, 9), // "sourceUrl"
QT_MOC_LITERAL(64, 787, 10), // "contentUrl"
QT_MOC_LITERAL(65, 798, 7), // "pHeader"
QT_MOC_LITERAL(66, 806, 5), // "pData"
QT_MOC_LITERAL(67, 812, 16), // "changeBackground"
QT_MOC_LITERAL(68, 829, 6), // "isDark"
QT_MOC_LITERAL(69, 836, 16), // "WBPageBackground"
QT_MOC_LITERAL(70, 853, 14), // "pageBackground"
QT_MOC_LITERAL(71, 868, 13), // "setToolCursor"
QT_MOC_LITERAL(72, 882, 4), // "tool"
QT_MOC_LITERAL(73, 887, 11), // "showMessage"
QT_MOC_LITERAL(74, 899, 7), // "message"
QT_MOC_LITERAL(75, 907, 17), // "showSpinningWheel"
QT_MOC_LITERAL(76, 925, 11), // "hideMessage"
QT_MOC_LITERAL(77, 937, 11), // "setDisabled"
QT_MOC_LITERAL(78, 949, 7), // "disable"
QT_MOC_LITERAL(79, 957, 13), // "setColorIndex"
QT_MOC_LITERAL(80, 971, 11), // "pColorIndex"
QT_MOC_LITERAL(81, 983, 10), // "removeTool"
QT_MOC_LITERAL(82, 994, 13), // "WBToolWidget*"
QT_MOC_LITERAL(83, 1008, 10), // "toolWidget"
QT_MOC_LITERAL(84, 1019, 4), // "hide"
QT_MOC_LITERAL(85, 1024, 15), // "setWidePageSize"
QT_MOC_LITERAL(86, 1040, 18), // "setRegularPageSize"
QT_MOC_LITERAL(87, 1059, 17), // "stylusToolChanged"
QT_MOC_LITERAL(88, 1077, 9), // "grabScene"
QT_MOC_LITERAL(89, 1087, 10), // "pSceneRect"
QT_MOC_LITERAL(90, 1098, 8), // "addVideo"
QT_MOC_LITERAL(91, 1107, 20), // "WBGraphicsMediaItem*"
QT_MOC_LITERAL(92, 1128, 4), // "pUrl"
QT_MOC_LITERAL(93, 1133, 9), // "startPlay"
QT_MOC_LITERAL(94, 1143, 3), // "pos"
QT_MOC_LITERAL(95, 1147, 10), // "bUseSource"
QT_MOC_LITERAL(96, 1158, 8), // "addAudio"
QT_MOC_LITERAL(97, 1167, 12), // "addW3cWidget"
QT_MOC_LITERAL(98, 1180, 21), // "WBGraphicsWidgetItem*"
QT_MOC_LITERAL(99, 1202, 18), // "adjustDisplayViews"
QT_MOC_LITERAL(100, 1221, 3), // "cut"
QT_MOC_LITERAL(101, 1225, 4), // "copy"
QT_MOC_LITERAL(102, 1230, 5), // "paste"
QT_MOC_LITERAL(103, 1236, 15), // "processMimeData"
QT_MOC_LITERAL(104, 1252, 16), // "const QMimeData*"
QT_MOC_LITERAL(105, 1269, 9), // "pMimeData"
QT_MOC_LITERAL(106, 1279, 31), // "moveGraphicsWidgetToControlView"
QT_MOC_LITERAL(107, 1311, 13), // "graphicWidget"
QT_MOC_LITERAL(108, 1325, 21), // "moveToolWidgetToScene"
QT_MOC_LITERAL(109, 1347, 7), // "addItem"
QT_MOC_LITERAL(110, 1355, 16), // "freezeW3CWidgets"
QT_MOC_LITERAL(111, 1372, 6), // "freeze"
QT_MOC_LITERAL(112, 1379, 15), // "freezeW3CWidget"
QT_MOC_LITERAL(113, 1395, 14), // "QGraphicsItem*"
QT_MOC_LITERAL(114, 1410, 4), // "item"
QT_MOC_LITERAL(115, 1415, 11), // "startScript"
QT_MOC_LITERAL(116, 1427, 10), // "stopScript"
QT_MOC_LITERAL(117, 1438, 8), // "saveData"
QT_MOC_LITERAL(118, 1447, 9), // "SaveFlags"
QT_MOC_LITERAL(119, 1457, 3), // "fls"
QT_MOC_LITERAL(120, 1461, 16), // "selectionChanged"
QT_MOC_LITERAL(121, 1478, 19), // "undoRedoStateChange"
QT_MOC_LITERAL(122, 1498, 7), // "canUndo"
QT_MOC_LITERAL(123, 1506, 20), // "documentSceneChanged"
QT_MOC_LITERAL(124, 1527, 6), // "pIndex"
QT_MOC_LITERAL(125, 1534, 15), // "autosaveTimeout"
QT_MOC_LITERAL(126, 1550, 18), // "appMainModeChanged"
QT_MOC_LITERAL(127, 1569, 33), // "WBApplicationController::Main..."
QT_MOC_LITERAL(128, 1603, 23), // "stylusToolDoubleClicked"
QT_MOC_LITERAL(129, 1627, 16), // "boardViewResized"
QT_MOC_LITERAL(130, 1644, 13), // "QResizeEvent*"
QT_MOC_LITERAL(131, 1658, 5), // "event"
QT_MOC_LITERAL(132, 1664, 21), // "documentWillBeDeleted"
QT_MOC_LITERAL(133, 1686, 6), // "pProxy"
QT_MOC_LITERAL(134, 1693, 28), // "updateBackgroundActionsState"
QT_MOC_LITERAL(135, 1722, 19), // "colorPaletteChanged"
QT_MOC_LITERAL(136, 1742, 19), // "libraryDialogClosed"
QT_MOC_LITERAL(137, 1762, 3), // "ret"
QT_MOC_LITERAL(138, 1766, 16), // "lastWindowClosed"
QT_MOC_LITERAL(139, 1783, 23) // "onDownloadModalFinished"

    },
    "WBBoardController\0newPageAdded\0\0"
    "activeSceneChanged\0zoomChanged\0"
    "pZoomFactor\0penColorChanged\0"
    "controlViewportChanged\0backgroundChanged\0"
    "cacheEnabled\0documentReorganized\0index\0"
    "displayMetadata\0QMap<QString,QString>\0"
    "metadata\0pageSelectionChanged\0"
    "centerOnThumbnailRequired\0npapiWidgetCreated\0"
    "Url\0showDocumentsDialog\0showKeyboard\0"
    "show\0togglePodcast\0checked\0blackout\0"
    "addScene\0WBDocumentProxy*\0proxy\0"
    "sceneIndex\0replaceActiveIfEmpty\0"
    "WBGraphicsScene*\0scene\0duplicateScene\0"
    "importPage\0clearScene\0clearSceneItems\0"
    "clearSceneAnnotation\0clearSceneBackground\0"
    "zoomIn\0scenePoint\0zoomOut\0zoomRestore\0"
    "centerRestore\0centerOn\0zoom\0ratio\0"
    "handScroll\0dx\0dy\0previousScene\0nextScene\0"
    "firstScene\0lastScene\0downloadURL\0url\0"
    "contentSourceUrl\0pPos\0pSize\0isBackground\0"
    "internalData\0downloadFinished\0WBItem*\0"
    "pSuccess\0sourceUrl\0contentUrl\0pHeader\0"
    "pData\0changeBackground\0isDark\0"
    "WBPageBackground\0pageBackground\0"
    "setToolCursor\0tool\0showMessage\0message\0"
    "showSpinningWheel\0hideMessage\0setDisabled\0"
    "disable\0setColorIndex\0pColorIndex\0"
    "removeTool\0WBToolWidget*\0toolWidget\0"
    "hide\0setWidePageSize\0setRegularPageSize\0"
    "stylusToolChanged\0grabScene\0pSceneRect\0"
    "addVideo\0WBGraphicsMediaItem*\0pUrl\0"
    "startPlay\0pos\0bUseSource\0addAudio\0"
    "addW3cWidget\0WBGraphicsWidgetItem*\0"
    "adjustDisplayViews\0cut\0copy\0paste\0"
    "processMimeData\0const QMimeData*\0"
    "pMimeData\0moveGraphicsWidgetToControlView\0"
    "graphicWidget\0moveToolWidgetToScene\0"
    "addItem\0freezeW3CWidgets\0freeze\0"
    "freezeW3CWidget\0QGraphicsItem*\0item\0"
    "startScript\0stopScript\0saveData\0"
    "SaveFlags\0fls\0selectionChanged\0"
    "undoRedoStateChange\0canUndo\0"
    "documentSceneChanged\0pIndex\0autosaveTimeout\0"
    "appMainModeChanged\0WBApplicationController::MainMode\0"
    "stylusToolDoubleClicked\0boardViewResized\0"
    "QResizeEvent*\0event\0documentWillBeDeleted\0"
    "pProxy\0updateBackgroundActionsState\0"
    "colorPaletteChanged\0libraryDialogClosed\0"
    "ret\0lastWindowClosed\0onDownloadModalFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBBoardController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      96,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  494,    2, 0x06 /* Public */,
       3,    0,  495,    2, 0x06 /* Public */,
       4,    1,  496,    2, 0x06 /* Public */,
       6,    0,  499,    2, 0x06 /* Public */,
       7,    0,  500,    2, 0x06 /* Public */,
       8,    0,  501,    2, 0x06 /* Public */,
       9,    0,  502,    2, 0x06 /* Public */,
      10,    1,  503,    2, 0x06 /* Public */,
      12,    1,  506,    2, 0x06 /* Public */,
      15,    1,  509,    2, 0x06 /* Public */,
      16,    1,  512,    2, 0x06 /* Public */,
      17,    1,  515,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      19,    0,  518,    2, 0x0a /* Public */,
      20,    1,  519,    2, 0x0a /* Public */,
      22,    1,  522,    2, 0x0a /* Public */,
      24,    0,  525,    2, 0x0a /* Public */,
      25,    0,  526,    2, 0x0a /* Public */,
      25,    3,  527,    2, 0x0a /* Public */,
      25,    2,  534,    2, 0x2a /* Public | MethodCloned */,
      25,    2,  539,    2, 0x0a /* Public */,
      25,    1,  544,    2, 0x2a /* Public | MethodCloned */,
      32,    0,  547,    2, 0x0a /* Public */,
      33,    0,  548,    2, 0x0a /* Public */,
      34,    0,  549,    2, 0x0a /* Public */,
      35,    0,  550,    2, 0x0a /* Public */,
      36,    0,  551,    2, 0x0a /* Public */,
      37,    0,  552,    2, 0x0a /* Public */,
      38,    1,  553,    2, 0x0a /* Public */,
      38,    0,  556,    2, 0x2a /* Public | MethodCloned */,
      40,    1,  557,    2, 0x0a /* Public */,
      40,    0,  560,    2, 0x2a /* Public | MethodCloned */,
      41,    0,  561,    2, 0x0a /* Public */,
      42,    0,  562,    2, 0x0a /* Public */,
      43,    1,  563,    2, 0x0a /* Public */,
      43,    0,  566,    2, 0x2a /* Public | MethodCloned */,
      44,    2,  567,    2, 0x0a /* Public */,
      46,    2,  572,    2, 0x0a /* Public */,
      49,    0,  577,    2, 0x0a /* Public */,
      50,    0,  578,    2, 0x0a /* Public */,
      51,    0,  579,    2, 0x0a /* Public */,
      52,    0,  580,    2, 0x0a /* Public */,
      53,    6,  581,    2, 0x0a /* Public */,
      53,    5,  594,    2, 0x2a /* Public | MethodCloned */,
      53,    4,  605,    2, 0x2a /* Public | MethodCloned */,
      53,    3,  614,    2, 0x2a /* Public | MethodCloned */,
      53,    2,  621,    2, 0x2a /* Public | MethodCloned */,
      53,    1,  626,    2, 0x2a /* Public | MethodCloned */,
      60,    9,  629,    2, 0x0a /* Public */,
      60,    8,  648,    2, 0x2a /* Public | MethodCloned */,
      60,    7,  665,    2, 0x2a /* Public | MethodCloned */,
      67,    2,  680,    2, 0x0a /* Public */,
      71,    1,  685,    2, 0x0a /* Public */,
      73,    2,  688,    2, 0x0a /* Public */,
      73,    1,  693,    2, 0x2a /* Public | MethodCloned */,
      76,    0,  696,    2, 0x0a /* Public */,
      77,    1,  697,    2, 0x0a /* Public */,
      79,    1,  700,    2, 0x0a /* Public */,
      81,    1,  703,    2, 0x0a /* Public */,
      84,    0,  706,    2, 0x0a /* Public */,
      21,    0,  707,    2, 0x0a /* Public */,
      85,    1,  708,    2, 0x0a /* Public */,
      86,    1,  711,    2, 0x0a /* Public */,
      87,    1,  714,    2, 0x0a /* Public */,
      88,    1,  717,    2, 0x0a /* Public */,
      90,    4,  720,    2, 0x0a /* Public */,
      90,    3,  729,    2, 0x2a /* Public | MethodCloned */,
      96,    4,  736,    2, 0x0a /* Public */,
      96,    3,  745,    2, 0x2a /* Public | MethodCloned */,
      97,    2,  752,    2, 0x0a /* Public */,
      99,    0,  757,    2, 0x0a /* Public */,
     100,    0,  758,    2, 0x0a /* Public */,
     101,    0,  759,    2, 0x0a /* Public */,
     102,    0,  760,    2, 0x0a /* Public */,
     103,    2,  761,    2, 0x0a /* Public */,
     106,    1,  766,    2, 0x0a /* Public */,
     108,    1,  769,    2, 0x0a /* Public */,
     109,    0,  772,    2, 0x0a /* Public */,
     110,    1,  773,    2, 0x0a /* Public */,
     112,    2,  776,    2, 0x0a /* Public */,
     115,    0,  781,    2, 0x0a /* Public */,
     116,    0,  782,    2, 0x0a /* Public */,
     117,    1,  783,    2, 0x0a /* Public */,
     117,    0,  786,    2, 0x2a /* Public | MethodCloned */,
     120,    0,  787,    2, 0x09 /* Protected */,
     121,    1,  788,    2, 0x09 /* Protected */,
     123,    2,  791,    2, 0x09 /* Protected */,
     125,    0,  796,    2, 0x08 /* Private */,
     126,    1,  797,    2, 0x08 /* Private */,
     128,    1,  800,    2, 0x08 /* Private */,
     129,    1,  803,    2, 0x08 /* Private */,
     132,    1,  806,    2, 0x08 /* Private */,
     134,    2,  809,    2, 0x08 /* Private */,
     135,    0,  814,    2, 0x08 /* Private */,
     136,    1,  815,    2, 0x08 /* Private */,
     138,    0,  818,    2, 0x08 /* Private */,
     139,    0,  819,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::QString,   18,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 26, QMetaType::Int, QMetaType::Bool,   27,   28,   29,
    QMetaType::Void, 0x80000000 | 26, QMetaType::Int,   27,   28,
    QMetaType::Void, 0x80000000 | 30, QMetaType::Bool,   31,   29,
    QMetaType::Void, 0x80000000 | 30,   31,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPointF,   39,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPointF,   39,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPointF,   39,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal, QMetaType::QPointF,   45,   39,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal,   47,   48,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl, QMetaType::QString, QMetaType::QPointF, QMetaType::QSize, QMetaType::Bool, QMetaType::Bool,   54,   55,   56,   57,   58,   59,
    QMetaType::Void, QMetaType::QUrl, QMetaType::QString, QMetaType::QPointF, QMetaType::QSize, QMetaType::Bool,   54,   55,   56,   57,   58,
    QMetaType::Void, QMetaType::QUrl, QMetaType::QString, QMetaType::QPointF, QMetaType::QSize,   54,   55,   56,   57,
    QMetaType::Void, QMetaType::QUrl, QMetaType::QString, QMetaType::QPointF,   54,   55,   56,
    QMetaType::Void, QMetaType::QUrl, QMetaType::QString,   54,   55,
    QMetaType::Void, QMetaType::QUrl,   54,
    0x80000000 | 61, QMetaType::Bool, QMetaType::QUrl, QMetaType::QUrl, QMetaType::QString, QMetaType::QByteArray, QMetaType::QPointF, QMetaType::QSize, QMetaType::Bool, QMetaType::Bool,   62,   63,   64,   65,   66,   56,   57,   58,   59,
    0x80000000 | 61, QMetaType::Bool, QMetaType::QUrl, QMetaType::QUrl, QMetaType::QString, QMetaType::QByteArray, QMetaType::QPointF, QMetaType::QSize, QMetaType::Bool,   62,   63,   64,   65,   66,   56,   57,   58,
    0x80000000 | 61, QMetaType::Bool, QMetaType::QUrl, QMetaType::QUrl, QMetaType::QString, QMetaType::QByteArray, QMetaType::QPointF, QMetaType::QSize,   62,   63,   64,   65,   66,   56,   57,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 69,   68,   70,
    QMetaType::Void, QMetaType::Int,   72,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   74,   75,
    QMetaType::Void, QMetaType::QString,   74,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   78,
    QMetaType::Void, QMetaType::Int,   80,
    QMetaType::Void, 0x80000000 | 82,   83,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, QMetaType::Int,   72,
    QMetaType::Void, QMetaType::QRectF,   89,
    0x80000000 | 91, QMetaType::QUrl, QMetaType::Bool, QMetaType::QPointF, QMetaType::Bool,   92,   93,   94,   95,
    0x80000000 | 91, QMetaType::QUrl, QMetaType::Bool, QMetaType::QPointF,   92,   93,   94,
    0x80000000 | 91, QMetaType::QUrl, QMetaType::Bool, QMetaType::QPointF, QMetaType::Bool,   92,   93,   94,   95,
    0x80000000 | 91, QMetaType::QUrl, QMetaType::Bool, QMetaType::QPointF,   92,   93,   94,
    0x80000000 | 98, QMetaType::QUrl, QMetaType::QPointF,   92,   94,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 104, QMetaType::QPointF,  105,   56,
    QMetaType::Void, 0x80000000 | 98,  107,
    QMetaType::Void, 0x80000000 | 82,   83,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  111,
    QMetaType::Void, 0x80000000 | 113, QMetaType::Bool,  114,  111,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 118,  119,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  122,
    QMetaType::Void, 0x80000000 | 26, QMetaType::Int,   27,  124,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 127,    2,
    QMetaType::Void, QMetaType::Int,   72,
    QMetaType::Void, 0x80000000 | 130,  131,
    QMetaType::Void, 0x80000000 | 26,  133,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 69,   68,   70,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  137,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WBBoardController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBBoardController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newPageAdded(); break;
        case 1: _t->activeSceneChanged(); break;
        case 2: _t->zoomChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 3: _t->penColorChanged(); break;
        case 4: _t->controlViewportChanged(); break;
        case 5: _t->backgroundChanged(); break;
        case 6: _t->cacheEnabled(); break;
        case 7: _t->documentReorganized((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->displayMetadata((*reinterpret_cast< QMap<QString,QString>(*)>(_a[1]))); break;
        case 9: _t->pageSelectionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->centerOnThumbnailRequired((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->npapiWidgetCreated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->showDocumentsDialog(); break;
        case 13: _t->showKeyboard((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->togglePodcast((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->blackout(); break;
        case 16: _t->addScene(); break;
        case 17: _t->addScene((*reinterpret_cast< WBDocumentProxy*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 18: _t->addScene((*reinterpret_cast< WBDocumentProxy*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 19: _t->addScene((*reinterpret_cast< WBGraphicsScene*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 20: _t->addScene((*reinterpret_cast< WBGraphicsScene*(*)>(_a[1]))); break;
        case 21: _t->duplicateScene(); break;
        case 22: _t->importPage(); break;
        case 23: _t->clearScene(); break;
        case 24: _t->clearSceneItems(); break;
        case 25: _t->clearSceneAnnotation(); break;
        case 26: _t->clearSceneBackground(); break;
        case 27: _t->zoomIn((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 28: _t->zoomIn(); break;
        case 29: _t->zoomOut((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 30: _t->zoomOut(); break;
        case 31: _t->zoomRestore(); break;
        case 32: _t->centerRestore(); break;
        case 33: _t->centerOn((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 34: _t->centerOn(); break;
        case 35: _t->zoom((*reinterpret_cast< const qreal(*)>(_a[1])),(*reinterpret_cast< QPointF(*)>(_a[2]))); break;
        case 36: _t->handScroll((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 37: _t->previousScene(); break;
        case 38: _t->nextScene(); break;
        case 39: _t->firstScene(); break;
        case 40: _t->lastScene(); break;
        case 41: _t->downloadURL((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< const QPointF(*)>(_a[3])),(*reinterpret_cast< const QSize(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6]))); break;
        case 42: _t->downloadURL((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< const QPointF(*)>(_a[3])),(*reinterpret_cast< const QSize(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 43: _t->downloadURL((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< const QPointF(*)>(_a[3])),(*reinterpret_cast< const QSize(*)>(_a[4]))); break;
        case 44: _t->downloadURL((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< const QPointF(*)>(_a[3]))); break;
        case 45: _t->downloadURL((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 46: _t->downloadURL((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 47: { WBItem* _r = _t->downloadFinished((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QUrl(*)>(_a[2])),(*reinterpret_cast< QUrl(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QByteArray(*)>(_a[5])),(*reinterpret_cast< QPointF(*)>(_a[6])),(*reinterpret_cast< QSize(*)>(_a[7])),(*reinterpret_cast< bool(*)>(_a[8])),(*reinterpret_cast< bool(*)>(_a[9])));
            if (_a[0]) *reinterpret_cast< WBItem**>(_a[0]) = std::move(_r); }  break;
        case 48: { WBItem* _r = _t->downloadFinished((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QUrl(*)>(_a[2])),(*reinterpret_cast< QUrl(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QByteArray(*)>(_a[5])),(*reinterpret_cast< QPointF(*)>(_a[6])),(*reinterpret_cast< QSize(*)>(_a[7])),(*reinterpret_cast< bool(*)>(_a[8])));
            if (_a[0]) *reinterpret_cast< WBItem**>(_a[0]) = std::move(_r); }  break;
        case 49: { WBItem* _r = _t->downloadFinished((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QUrl(*)>(_a[2])),(*reinterpret_cast< QUrl(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QByteArray(*)>(_a[5])),(*reinterpret_cast< QPointF(*)>(_a[6])),(*reinterpret_cast< QSize(*)>(_a[7])));
            if (_a[0]) *reinterpret_cast< WBItem**>(_a[0]) = std::move(_r); }  break;
        case 50: _t->changeBackground((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< WBPageBackground(*)>(_a[2]))); break;
        case 51: _t->setToolCursor((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 52: _t->showMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 53: _t->showMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 54: _t->hideMessage(); break;
        case 55: _t->setDisabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 56: _t->setColorIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 57: _t->removeTool((*reinterpret_cast< WBToolWidget*(*)>(_a[1]))); break;
        case 58: _t->hide(); break;
        case 59: _t->show(); break;
        case 60: _t->setWidePageSize((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 61: _t->setRegularPageSize((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 62: _t->stylusToolChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 63: _t->grabScene((*reinterpret_cast< const QRectF(*)>(_a[1]))); break;
        case 64: { WBGraphicsMediaItem* _r = _t->addVideo((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QPointF(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< WBGraphicsMediaItem**>(_a[0]) = std::move(_r); }  break;
        case 65: { WBGraphicsMediaItem* _r = _t->addVideo((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QPointF(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< WBGraphicsMediaItem**>(_a[0]) = std::move(_r); }  break;
        case 66: { WBGraphicsMediaItem* _r = _t->addAudio((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QPointF(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< WBGraphicsMediaItem**>(_a[0]) = std::move(_r); }  break;
        case 67: { WBGraphicsMediaItem* _r = _t->addAudio((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QPointF(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< WBGraphicsMediaItem**>(_a[0]) = std::move(_r); }  break;
        case 68: { WBGraphicsWidgetItem* _r = _t->addW3cWidget((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< WBGraphicsWidgetItem**>(_a[0]) = std::move(_r); }  break;
        case 69: _t->adjustDisplayViews(); break;
        case 70: _t->cut(); break;
        case 71: _t->copy(); break;
        case 72: _t->paste(); break;
        case 73: _t->processMimeData((*reinterpret_cast< const QMimeData*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 74: _t->moveGraphicsWidgetToControlView((*reinterpret_cast< WBGraphicsWidgetItem*(*)>(_a[1]))); break;
        case 75: _t->moveToolWidgetToScene((*reinterpret_cast< WBToolWidget*(*)>(_a[1]))); break;
        case 76: _t->addItem(); break;
        case 77: _t->freezeW3CWidgets((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 78: _t->freezeW3CWidget((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 79: _t->startScript(); break;
        case 80: _t->stopScript(); break;
        case 81: _t->saveData((*reinterpret_cast< SaveFlags(*)>(_a[1]))); break;
        case 82: _t->saveData(); break;
        case 83: _t->selectionChanged(); break;
        case 84: _t->undoRedoStateChange((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 85: _t->documentSceneChanged((*reinterpret_cast< WBDocumentProxy*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 86: _t->autosaveTimeout(); break;
        case 87: _t->appMainModeChanged((*reinterpret_cast< WBApplicationController::MainMode(*)>(_a[1]))); break;
        case 88: _t->stylusToolDoubleClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 89: _t->boardViewResized((*reinterpret_cast< QResizeEvent*(*)>(_a[1]))); break;
        case 90: _t->documentWillBeDeleted((*reinterpret_cast< WBDocumentProxy*(*)>(_a[1]))); break;
        case 91: _t->updateBackgroundActionsState((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< WBPageBackground(*)>(_a[2]))); break;
        case 92: _t->colorPaletteChanged(); break;
        case 93: _t->libraryDialogClosed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 94: _t->lastWindowClosed(); break;
        case 95: _t->onDownloadModalFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WBDocumentProxy* >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WBDocumentProxy* >(); break;
            }
            break;
        case 78:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGraphicsItem* >(); break;
            }
            break;
        case 85:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WBDocumentProxy* >(); break;
            }
            break;
        case 90:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WBDocumentProxy* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WBBoardController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBBoardController::newPageAdded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WBBoardController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBBoardController::activeSceneChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WBBoardController::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBBoardController::zoomChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (WBBoardController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBBoardController::penColorChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (WBBoardController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBBoardController::controlViewportChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (WBBoardController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBBoardController::backgroundChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (WBBoardController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBBoardController::cacheEnabled)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (WBBoardController::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBBoardController::documentReorganized)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (WBBoardController::*)(QMap<QString,QString> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBBoardController::displayMetadata)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (WBBoardController::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBBoardController::pageSelectionChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (WBBoardController::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBBoardController::centerOnThumbnailRequired)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (WBBoardController::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBBoardController::npapiWidgetCreated)) {
                *result = 11;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WBBoardController::staticMetaObject = { {
    QMetaObject::SuperData::link<WBDocumentContainer::staticMetaObject>(),
    qt_meta_stringdata_WBBoardController.data,
    qt_meta_data_WBBoardController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBBoardController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBBoardController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBBoardController.stringdata0))
        return static_cast<void*>(this);
    return WBDocumentContainer::qt_metacast(_clname);
}

int WBBoardController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WBDocumentContainer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 96)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 96;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 96)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 96;
    }
    return _id;
}

// SIGNAL 0
void WBBoardController::newPageAdded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WBBoardController::activeSceneChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void WBBoardController::zoomChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WBBoardController::penColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void WBBoardController::controlViewportChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void WBBoardController::backgroundChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void WBBoardController::cacheEnabled()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void WBBoardController::documentReorganized(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void WBBoardController::displayMetadata(QMap<QString,QString> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void WBBoardController::pageSelectionChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void WBBoardController::centerOnThumbnailRequired(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void WBBoardController::npapiWidgetCreated(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
