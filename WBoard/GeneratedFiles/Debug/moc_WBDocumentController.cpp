/****************************************************************************
** Meta object code from reading C++ file 'WBDocumentController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/document/WBDocumentController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBDocumentController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WBDocumentReplaceDialog_t {
    QByteArrayData data[9];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBDocumentReplaceDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBDocumentReplaceDialog_t qt_meta_stringdata_WBDocumentReplaceDialog = {
    {
QT_MOC_LITERAL(0, 0, 23), // "WBDocumentReplaceDialog"
QT_MOC_LITERAL(1, 24, 15), // "createNewFolder"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 3), // "str"
QT_MOC_LITERAL(4, 45, 11), // "closeDialog"
QT_MOC_LITERAL(5, 57, 6), // "accept"
QT_MOC_LITERAL(6, 64, 6), // "reject"
QT_MOC_LITERAL(7, 71, 18), // "reactOnTextChanged"
QT_MOC_LITERAL(8, 90, 4) // "pStr"

    },
    "WBDocumentReplaceDialog\0createNewFolder\0"
    "\0str\0closeDialog\0accept\0reject\0"
    "reactOnTextChanged\0pStr"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBDocumentReplaceDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    0,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   43,    2, 0x08 /* Private */,
       6,    0,   44,    2, 0x08 /* Private */,
       7,    1,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,

       0        // eod
};

void WBDocumentReplaceDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBDocumentReplaceDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->createNewFolder((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->closeDialog(); break;
        case 2: _t->accept(); break;
        case 3: _t->reject(); break;
        case 4: _t->reactOnTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WBDocumentReplaceDialog::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBDocumentReplaceDialog::createNewFolder)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WBDocumentReplaceDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBDocumentReplaceDialog::closeDialog)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WBDocumentReplaceDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_WBDocumentReplaceDialog.data,
    qt_meta_data_WBDocumentReplaceDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBDocumentReplaceDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBDocumentReplaceDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBDocumentReplaceDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int WBDocumentReplaceDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void WBDocumentReplaceDialog::createNewFolder(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WBDocumentReplaceDialog::closeDialog()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_WBDocumentTreeModel_t {
    QByteArrayData data[8];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBDocumentTreeModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBDocumentTreeModel_t qt_meta_stringdata_WBDocumentTreeModel = {
    {
QT_MOC_LITERAL(0, 0, 19), // "WBDocumentTreeModel"
QT_MOC_LITERAL(1, 20, 12), // "indexChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 46, 8), // "newIndex"
QT_MOC_LITERAL(5, 55, 8), // "oldIndex"
QT_MOC_LITERAL(6, 64, 17), // "currentIndexMoved"
QT_MOC_LITERAL(7, 82, 8) // "previous"

    },
    "WBDocumentTreeModel\0indexChanged\0\0"
    "QModelIndex\0newIndex\0oldIndex\0"
    "currentIndexMoved\0previous"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBDocumentTreeModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,
       6,    2,   29,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    7,

       0        // eod
};

void WBDocumentTreeModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBDocumentTreeModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->indexChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 1: _t->currentIndexMoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WBDocumentTreeModel::*)(const QModelIndex & , const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBDocumentTreeModel::indexChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WBDocumentTreeModel::*)(const QModelIndex & , const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBDocumentTreeModel::currentIndexMoved)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WBDocumentTreeModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractItemModel::staticMetaObject>(),
    qt_meta_stringdata_WBDocumentTreeModel.data,
    qt_meta_data_WBDocumentTreeModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBDocumentTreeModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBDocumentTreeModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBDocumentTreeModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int WBDocumentTreeModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void WBDocumentTreeModel::indexChanged(const QModelIndex & _t1, const QModelIndex & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WBDocumentTreeModel::currentIndexMoved(const QModelIndex & _t1, const QModelIndex & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_WBDocumentTreeMimeData_t {
    QByteArrayData data[1];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBDocumentTreeMimeData_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBDocumentTreeMimeData_t qt_meta_stringdata_WBDocumentTreeMimeData = {
    {
QT_MOC_LITERAL(0, 0, 22) // "WBDocumentTreeMimeData"

    },
    "WBDocumentTreeMimeData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBDocumentTreeMimeData[] = {

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

void WBDocumentTreeMimeData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject WBDocumentTreeMimeData::staticMetaObject = { {
    QMetaObject::SuperData::link<QMimeData::staticMetaObject>(),
    qt_meta_stringdata_WBDocumentTreeMimeData.data,
    qt_meta_data_WBDocumentTreeMimeData,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBDocumentTreeMimeData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBDocumentTreeMimeData::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBDocumentTreeMimeData.stringdata0))
        return static_cast<void*>(this);
    return QMimeData::qt_metacast(_clname);
}

int WBDocumentTreeMimeData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMimeData::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_WBDocumentTreeView_t {
    QByteArrayData data[13];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBDocumentTreeView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBDocumentTreeView_t qt_meta_stringdata_WBDocumentTreeView = {
    {
QT_MOC_LITERAL(0, 0, 18), // "WBDocumentTreeView"
QT_MOC_LITERAL(1, 19, 22), // "setSelectedAndExpanded"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 55, 6), // "pIndex"
QT_MOC_LITERAL(5, 62, 7), // "pExpand"
QT_MOC_LITERAL(6, 70, 5), // "pEdit"
QT_MOC_LITERAL(7, 76, 19), // "onModelIndexChanged"
QT_MOC_LITERAL(8, 96, 9), // "pNewIndex"
QT_MOC_LITERAL(9, 106, 9), // "pOldIndex"
QT_MOC_LITERAL(10, 116, 19), // "hSliderRangeChanged"
QT_MOC_LITERAL(11, 136, 3), // "min"
QT_MOC_LITERAL(12, 140, 3) // "max"

    },
    "WBDocumentTreeView\0setSelectedAndExpanded\0"
    "\0QModelIndex\0pIndex\0pExpand\0pEdit\0"
    "onModelIndexChanged\0pNewIndex\0pOldIndex\0"
    "hSliderRangeChanged\0min\0max"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBDocumentTreeView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   39,    2, 0x0a /* Public */,
       1,    2,   46,    2, 0x2a /* Public | MethodCloned */,
       1,    1,   51,    2, 0x2a /* Public | MethodCloned */,
       7,    2,   54,    2, 0x0a /* Public */,
      10,    2,   59,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool, QMetaType::Bool,    4,    5,    6,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    5,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    8,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   11,   12,

       0        // eod
};

void WBDocumentTreeView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBDocumentTreeView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setSelectedAndExpanded((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 1: _t->setSelectedAndExpanded((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->setSelectedAndExpanded((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->onModelIndexChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 4: _t->hSliderRangeChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WBDocumentTreeView::staticMetaObject = { {
    QMetaObject::SuperData::link<QTreeView::staticMetaObject>(),
    qt_meta_stringdata_WBDocumentTreeView.data,
    qt_meta_data_WBDocumentTreeView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBDocumentTreeView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBDocumentTreeView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBDocumentTreeView.stringdata0))
        return static_cast<void*>(this);
    return QTreeView::qt_metacast(_clname);
}

int WBDocumentTreeView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_WBDocumentTreeItemDelegate_t {
    QByteArrayData data[6];
    char stringdata0[87];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBDocumentTreeItemDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBDocumentTreeItemDelegate_t qt_meta_stringdata_WBDocumentTreeItemDelegate = {
    {
QT_MOC_LITERAL(0, 0, 26), // "WBDocumentTreeItemDelegate"
QT_MOC_LITERAL(1, 27, 20), // "commitAndCloseEditor"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 18), // "processChangedText"
QT_MOC_LITERAL(4, 68, 3), // "str"
QT_MOC_LITERAL(5, 72, 14) // "validateString"

    },
    "WBDocumentTreeItemDelegate\0"
    "commitAndCloseEditor\0\0processChangedText\0"
    "str\0validateString"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBDocumentTreeItemDelegate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    1,   30,    2, 0x08 /* Private */,
       5,    1,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Bool, QMetaType::QString,    4,

       0        // eod
};

void WBDocumentTreeItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBDocumentTreeItemDelegate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->commitAndCloseEditor(); break;
        case 1: _t->processChangedText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: { bool _r = _t->validateString((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WBDocumentTreeItemDelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<QStyledItemDelegate::staticMetaObject>(),
    qt_meta_stringdata_WBDocumentTreeItemDelegate.data,
    qt_meta_data_WBDocumentTreeItemDelegate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBDocumentTreeItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBDocumentTreeItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBDocumentTreeItemDelegate.stringdata0))
        return static_cast<void*>(this);
    return QStyledItemDelegate::qt_metacast(_clname);
}

int WBDocumentTreeItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_WBDocumentController_t {
    QByteArrayData data[89];
    char stringdata0[1306];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBDocumentController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBDocumentController_t qt_meta_stringdata_WBDocumentController = {
    {
QT_MOC_LITERAL(0, 0, 20), // "WBDocumentController"
QT_MOC_LITERAL(1, 21, 10), // "exportDone"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 25), // "reorderDocumentsRequested"
QT_MOC_LITERAL(4, 59, 17), // "createNewDocument"
QT_MOC_LITERAL(5, 77, 18), // "refreshDateColumns"
QT_MOC_LITERAL(6, 96, 16), // "reorderDocuments"
QT_MOC_LITERAL(7, 113, 33), // "createNewDocumentInUntitledFo..."
QT_MOC_LITERAL(8, 147, 22), // "createNewDocumentGroup"
QT_MOC_LITERAL(9, 170, 18), // "deleteSelectedItem"
QT_MOC_LITERAL(10, 189, 16), // "deleteSingleItem"
QT_MOC_LITERAL(11, 206, 11), // "QModelIndex"
QT_MOC_LITERAL(12, 218, 5), // "index"
QT_MOC_LITERAL(13, 224, 20), // "WBDocumentTreeModel*"
QT_MOC_LITERAL(14, 245, 8), // "docModel"
QT_MOC_LITERAL(15, 254, 19), // "deleteMultipleItems"
QT_MOC_LITERAL(16, 274, 15), // "QModelIndexList"
QT_MOC_LITERAL(17, 290, 7), // "indexes"
QT_MOC_LITERAL(18, 298, 11), // "emptyFolder"
QT_MOC_LITERAL(19, 310, 12), // "DeletionType"
QT_MOC_LITERAL(20, 323, 13), // "pDeletionType"
QT_MOC_LITERAL(21, 337, 28), // "deleteIndexAndAssociatedData"
QT_MOC_LITERAL(22, 366, 6), // "pIndex"
QT_MOC_LITERAL(23, 373, 18), // "renameSelectedItem"
QT_MOC_LITERAL(24, 392, 16), // "openSelectedItem"
QT_MOC_LITERAL(25, 409, 21), // "duplicateSelectedItem"
QT_MOC_LITERAL(26, 431, 10), // "importFile"
QT_MOC_LITERAL(27, 442, 16), // "moveSceneToIndex"
QT_MOC_LITERAL(28, 459, 16), // "WBDocumentProxy*"
QT_MOC_LITERAL(29, 476, 5), // "proxy"
QT_MOC_LITERAL(30, 482, 6), // "source"
QT_MOC_LITERAL(31, 489, 6), // "target"
QT_MOC_LITERAL(32, 496, 14), // "selectDocument"
QT_MOC_LITERAL(33, 511, 20), // "setAsCurrentDocument"
QT_MOC_LITERAL(34, 532, 8), // "onImport"
QT_MOC_LITERAL(35, 541, 8), // "editMode"
QT_MOC_LITERAL(36, 550, 4), // "show"
QT_MOC_LITERAL(37, 555, 4), // "hide"
QT_MOC_LITERAL(38, 560, 11), // "showMessage"
QT_MOC_LITERAL(39, 572, 7), // "message"
QT_MOC_LITERAL(40, 580, 17), // "showSpinningWheel"
QT_MOC_LITERAL(41, 598, 11), // "hideMessage"
QT_MOC_LITERAL(42, 610, 26), // "toggleDocumentToolsPalette"
QT_MOC_LITERAL(43, 637, 3), // "cut"
QT_MOC_LITERAL(44, 641, 4), // "copy"
QT_MOC_LITERAL(45, 646, 5), // "paste"
QT_MOC_LITERAL(46, 652, 12), // "focusChanged"
QT_MOC_LITERAL(47, 665, 8), // "QWidget*"
QT_MOC_LITERAL(48, 674, 3), // "old"
QT_MOC_LITERAL(49, 678, 7), // "current"
QT_MOC_LITERAL(50, 686, 13), // "updateActions"
QT_MOC_LITERAL(51, 700, 22), // "updateExportSubActions"
QT_MOC_LITERAL(52, 723, 13), // "selectedIndex"
QT_MOC_LITERAL(53, 737, 17), // "currentIndexMoved"
QT_MOC_LITERAL(54, 755, 8), // "newIndex"
QT_MOC_LITERAL(55, 764, 13), // "PreviousIndex"
QT_MOC_LITERAL(56, 778, 17), // "onSortKindChanged"
QT_MOC_LITERAL(57, 796, 18), // "onSortOrderChanged"
QT_MOC_LITERAL(58, 815, 5), // "order"
QT_MOC_LITERAL(59, 821, 15), // "onSplitterMoved"
QT_MOC_LITERAL(60, 837, 4), // "size"
QT_MOC_LITERAL(61, 842, 11), // "collapseAll"
QT_MOC_LITERAL(62, 854, 9), // "expandAll"
QT_MOC_LITERAL(63, 864, 24), // "TreeViewSelectionChanged"
QT_MOC_LITERAL(64, 889, 8), // "previous"
QT_MOC_LITERAL(65, 898, 14), // "QItemSelection"
QT_MOC_LITERAL(66, 913, 8), // "selected"
QT_MOC_LITERAL(67, 922, 10), // "deselected"
QT_MOC_LITERAL(68, 933, 30), // "documentZoomSliderValueChanged"
QT_MOC_LITERAL(69, 964, 5), // "value"
QT_MOC_LITERAL(70, 970, 20), // "itemSelectionChanged"
QT_MOC_LITERAL(71, 991, 23), // "LastSelectedElementType"
QT_MOC_LITERAL(72, 1015, 12), // "newSelection"
QT_MOC_LITERAL(73, 1028, 14), // "exportDocument"
QT_MOC_LITERAL(74, 1043, 17), // "exportDocumentSet"
QT_MOC_LITERAL(75, 1061, 20), // "thumbnailViewResized"
QT_MOC_LITERAL(76, 1082, 20), // "pageSelectionChanged"
QT_MOC_LITERAL(77, 1103, 20), // "documentSceneChanged"
QT_MOC_LITERAL(78, 1124, 11), // "pSceneIndex"
QT_MOC_LITERAL(79, 1136, 26), // "thumbnailPageDoubleClicked"
QT_MOC_LITERAL(80, 1163, 14), // "QGraphicsItem*"
QT_MOC_LITERAL(81, 1178, 4), // "item"
QT_MOC_LITERAL(82, 1183, 11), // "pageClicked"
QT_MOC_LITERAL(83, 1195, 13), // "addToDocument"
QT_MOC_LITERAL(84, 1209, 17), // "addFolderOfImages"
QT_MOC_LITERAL(85, 1227, 17), // "addFileToDocument"
QT_MOC_LITERAL(86, 1245, 9), // "addImages"
QT_MOC_LITERAL(87, 1255, 29), // "refreshDocumentThumbnailsView"
QT_MOC_LITERAL(88, 1285, 20) // "WBDocumentContainer*"

    },
    "WBDocumentController\0exportDone\0\0"
    "reorderDocumentsRequested\0createNewDocument\0"
    "refreshDateColumns\0reorderDocuments\0"
    "createNewDocumentInUntitledFolder\0"
    "createNewDocumentGroup\0deleteSelectedItem\0"
    "deleteSingleItem\0QModelIndex\0index\0"
    "WBDocumentTreeModel*\0docModel\0"
    "deleteMultipleItems\0QModelIndexList\0"
    "indexes\0emptyFolder\0DeletionType\0"
    "pDeletionType\0deleteIndexAndAssociatedData\0"
    "pIndex\0renameSelectedItem\0openSelectedItem\0"
    "duplicateSelectedItem\0importFile\0"
    "moveSceneToIndex\0WBDocumentProxy*\0"
    "proxy\0source\0target\0selectDocument\0"
    "setAsCurrentDocument\0onImport\0editMode\0"
    "show\0hide\0showMessage\0message\0"
    "showSpinningWheel\0hideMessage\0"
    "toggleDocumentToolsPalette\0cut\0copy\0"
    "paste\0focusChanged\0QWidget*\0old\0current\0"
    "updateActions\0updateExportSubActions\0"
    "selectedIndex\0currentIndexMoved\0"
    "newIndex\0PreviousIndex\0onSortKindChanged\0"
    "onSortOrderChanged\0order\0onSplitterMoved\0"
    "size\0collapseAll\0expandAll\0"
    "TreeViewSelectionChanged\0previous\0"
    "QItemSelection\0selected\0deselected\0"
    "documentZoomSliderValueChanged\0value\0"
    "itemSelectionChanged\0LastSelectedElementType\0"
    "newSelection\0exportDocument\0"
    "exportDocumentSet\0thumbnailViewResized\0"
    "pageSelectionChanged\0documentSceneChanged\0"
    "pSceneIndex\0thumbnailPageDoubleClicked\0"
    "QGraphicsItem*\0item\0pageClicked\0"
    "addToDocument\0addFolderOfImages\0"
    "addFileToDocument\0addImages\0"
    "refreshDocumentThumbnailsView\0"
    "WBDocumentContainer*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBDocumentController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      56,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  294,    2, 0x06 /* Public */,
       3,    0,  295,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,  296,    2, 0x0a /* Public */,
       5,    0,  297,    2, 0x0a /* Public */,
       6,    0,  298,    2, 0x0a /* Public */,
       7,    0,  299,    2, 0x0a /* Public */,
       8,    0,  300,    2, 0x0a /* Public */,
       9,    0,  301,    2, 0x0a /* Public */,
      10,    2,  302,    2, 0x0a /* Public */,
      15,    2,  307,    2, 0x0a /* Public */,
      18,    2,  312,    2, 0x0a /* Public */,
      18,    1,  317,    2, 0x2a /* Public | MethodCloned */,
      21,    1,  320,    2, 0x0a /* Public */,
      23,    0,  323,    2, 0x0a /* Public */,
      24,    0,  324,    2, 0x0a /* Public */,
      25,    0,  325,    2, 0x0a /* Public */,
      26,    0,  326,    2, 0x0a /* Public */,
      27,    3,  327,    2, 0x0a /* Public */,
      32,    4,  334,    2, 0x0a /* Public */,
      32,    3,  343,    2, 0x2a /* Public | MethodCloned */,
      32,    2,  350,    2, 0x2a /* Public | MethodCloned */,
      32,    1,  355,    2, 0x2a /* Public | MethodCloned */,
      36,    0,  358,    2, 0x0a /* Public */,
      37,    0,  359,    2, 0x0a /* Public */,
      38,    2,  360,    2, 0x0a /* Public */,
      38,    1,  365,    2, 0x2a /* Public | MethodCloned */,
      41,    0,  368,    2, 0x0a /* Public */,
      42,    0,  369,    2, 0x0a /* Public */,
      43,    0,  370,    2, 0x0a /* Public */,
      44,    0,  371,    2, 0x0a /* Public */,
      45,    0,  372,    2, 0x0a /* Public */,
      46,    2,  373,    2, 0x0a /* Public */,
      50,    0,  378,    2, 0x0a /* Public */,
      51,    1,  379,    2, 0x0a /* Public */,
      53,    2,  382,    2, 0x0a /* Public */,
      56,    1,  387,    2, 0x0a /* Public */,
      57,    1,  390,    2, 0x0a /* Public */,
      59,    2,  393,    2, 0x0a /* Public */,
      61,    0,  398,    2, 0x0a /* Public */,
      62,    0,  399,    2, 0x0a /* Public */,
      63,    2,  400,    2, 0x0a /* Public */,
      63,    2,  405,    2, 0x0a /* Public */,
      68,    1,  410,    2, 0x08 /* Private */,
      70,    1,  413,    2, 0x08 /* Private */,
      73,    0,  416,    2, 0x08 /* Private */,
      74,    0,  417,    2, 0x08 /* Private */,
      75,    0,  418,    2, 0x08 /* Private */,
      76,    0,  419,    2, 0x08 /* Private */,
      77,    2,  420,    2, 0x08 /* Private */,
      79,    2,  425,    2, 0x08 /* Private */,
      82,    2,  430,    2, 0x08 /* Private */,
      83,    0,  435,    2, 0x08 /* Private */,
      84,    0,  436,    2, 0x08 /* Private */,
      85,    0,  437,    2, 0x08 /* Private */,
      86,    0,  438,    2, 0x08 /* Private */,
      87,    1,  439,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 13,   12,   14,
    QMetaType::Void, 0x80000000 | 16, 0x80000000 | 13,   17,   14,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 19,   12,   20,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 28, QMetaType::Int, QMetaType::Int,   29,   30,   31,
    QMetaType::Void, 0x80000000 | 28, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   29,   33,   34,   35,
    QMetaType::Void, 0x80000000 | 28, QMetaType::Bool, QMetaType::Bool,   29,   33,   34,
    QMetaType::Void, 0x80000000 | 28, QMetaType::Bool,   29,   33,
    QMetaType::Void, 0x80000000 | 28,   29,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   39,   40,
    QMetaType::Void, QMetaType::QString,   39,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 47, 0x80000000 | 47,   48,   49,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   52,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 11,   54,   55,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Bool,   58,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   60,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 11,   49,   64,
    QMetaType::Void, 0x80000000 | 65, 0x80000000 | 65,   66,   67,
    QMetaType::Void, QMetaType::Int,   69,
    QMetaType::Void, 0x80000000 | 71,   72,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 28, QMetaType::Int,   29,   78,
    QMetaType::Void, 0x80000000 | 80, QMetaType::Int,   81,   12,
    QMetaType::Void, 0x80000000 | 80, QMetaType::Int,   81,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 88,   30,

       0        // eod
};

void WBDocumentController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBDocumentController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->exportDone(); break;
        case 1: _t->reorderDocumentsRequested(); break;
        case 2: _t->createNewDocument(); break;
        case 3: _t->refreshDateColumns(); break;
        case 4: _t->reorderDocuments(); break;
        case 5: _t->createNewDocumentInUntitledFolder(); break;
        case 6: _t->createNewDocumentGroup(); break;
        case 7: _t->deleteSelectedItem(); break;
        case 8: _t->deleteSingleItem((*reinterpret_cast< QModelIndex(*)>(_a[1])),(*reinterpret_cast< WBDocumentTreeModel*(*)>(_a[2]))); break;
        case 9: _t->deleteMultipleItems((*reinterpret_cast< QModelIndexList(*)>(_a[1])),(*reinterpret_cast< WBDocumentTreeModel*(*)>(_a[2]))); break;
        case 10: _t->emptyFolder((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< DeletionType(*)>(_a[2]))); break;
        case 11: _t->emptyFolder((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 12: _t->deleteIndexAndAssociatedData((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 13: _t->renameSelectedItem(); break;
        case 14: _t->openSelectedItem(); break;
        case 15: _t->duplicateSelectedItem(); break;
        case 16: _t->importFile(); break;
        case 17: _t->moveSceneToIndex((*reinterpret_cast< WBDocumentProxy*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 18: _t->selectDocument((*reinterpret_cast< WBDocumentProxy*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const bool(*)>(_a[3])),(*reinterpret_cast< const bool(*)>(_a[4]))); break;
        case 19: _t->selectDocument((*reinterpret_cast< WBDocumentProxy*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const bool(*)>(_a[3]))); break;
        case 20: _t->selectDocument((*reinterpret_cast< WBDocumentProxy*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 21: _t->selectDocument((*reinterpret_cast< WBDocumentProxy*(*)>(_a[1]))); break;
        case 22: _t->show(); break;
        case 23: _t->hide(); break;
        case 24: _t->showMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 25: _t->showMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 26: _t->hideMessage(); break;
        case 27: _t->toggleDocumentToolsPalette(); break;
        case 28: _t->cut(); break;
        case 29: _t->copy(); break;
        case 30: _t->paste(); break;
        case 31: _t->focusChanged((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 32: _t->updateActions(); break;
        case 33: _t->updateExportSubActions((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 34: _t->currentIndexMoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 35: _t->onSortKindChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 36: _t->onSortOrderChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 37: _t->onSplitterMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 38: _t->collapseAll(); break;
        case 39: _t->expandAll(); break;
        case 40: _t->TreeViewSelectionChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 41: _t->TreeViewSelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 42: _t->documentZoomSliderValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 43: _t->itemSelectionChanged((*reinterpret_cast< LastSelectedElementType(*)>(_a[1]))); break;
        case 44: _t->exportDocument(); break;
        case 45: _t->exportDocumentSet(); break;
        case 46: _t->thumbnailViewResized(); break;
        case 47: _t->pageSelectionChanged(); break;
        case 48: _t->documentSceneChanged((*reinterpret_cast< WBDocumentProxy*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 49: _t->thumbnailPageDoubleClicked((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 50: _t->pageClicked((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 51: _t->addToDocument(); break;
        case 52: _t->addFolderOfImages(); break;
        case 53: _t->addFileToDocument(); break;
        case 54: _t->addImages(); break;
        case 55: _t->refreshDocumentThumbnailsView((*reinterpret_cast< WBDocumentContainer*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WBDocumentTreeModel* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QModelIndexList >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WBDocumentTreeModel* >(); break;
            }
            break;
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
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WBDocumentProxy* >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WBDocumentProxy* >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WBDocumentProxy* >(); break;
            }
            break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 41:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QItemSelection >(); break;
            }
            break;
        case 48:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WBDocumentProxy* >(); break;
            }
            break;
        case 49:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGraphicsItem* >(); break;
            }
            break;
        case 50:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGraphicsItem* >(); break;
            }
            break;
        case 55:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WBDocumentContainer* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WBDocumentController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBDocumentController::exportDone)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WBDocumentController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBDocumentController::reorderDocumentsRequested)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WBDocumentController::staticMetaObject = { {
    QMetaObject::SuperData::link<WBDocumentContainer::staticMetaObject>(),
    qt_meta_stringdata_WBDocumentController.data,
    qt_meta_data_WBDocumentController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBDocumentController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBDocumentController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBDocumentController.stringdata0))
        return static_cast<void*>(this);
    return WBDocumentContainer::qt_metacast(_clname);
}

int WBDocumentController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WBDocumentContainer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 56)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 56;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 56)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 56;
    }
    return _id;
}

// SIGNAL 0
void WBDocumentController::exportDone()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WBDocumentController::reorderDocumentsRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
