/****************************************************************************
** Meta object code from reading C++ file 'WBDownloadManager_.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/web/browser/WBDownloadManager_.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBDownloadManager_.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WBDownloadItem_t {
    QByteArrayData data[15];
    char stringdata0[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBDownloadItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBDownloadItem_t qt_meta_stringdata_WBDownloadItem = {
    {
QT_MOC_LITERAL(0, 0, 14), // "WBDownloadItem"
QT_MOC_LITERAL(1, 15, 13), // "statusChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 4), // "stop"
QT_MOC_LITERAL(4, 35, 8), // "tryAgain"
QT_MOC_LITERAL(5, 44, 4), // "open"
QT_MOC_LITERAL(6, 49, 17), // "downloadReadyRead"
QT_MOC_LITERAL(7, 67, 5), // "error"
QT_MOC_LITERAL(8, 73, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(9, 101, 4), // "code"
QT_MOC_LITERAL(10, 106, 16), // "downloadProgress"
QT_MOC_LITERAL(11, 123, 13), // "bytesReceived"
QT_MOC_LITERAL(12, 137, 10), // "bytesTotal"
QT_MOC_LITERAL(13, 148, 15), // "metaDataChanged"
QT_MOC_LITERAL(14, 164, 8) // "finished"

    },
    "WBDownloadItem\0statusChanged\0\0stop\0"
    "tryAgain\0open\0downloadReadyRead\0error\0"
    "QNetworkReply::NetworkError\0code\0"
    "downloadProgress\0bytesReceived\0"
    "bytesTotal\0metaDataChanged\0finished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBDownloadItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    1,   64,    2, 0x08 /* Private */,
      10,    2,   67,    2, 0x08 /* Private */,
      13,    0,   72,    2, 0x08 /* Private */,
      14,    0,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   11,   12,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WBDownloadItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBDownloadItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->statusChanged(); break;
        case 1: _t->stop(); break;
        case 2: _t->tryAgain(); break;
        case 3: _t->open(); break;
        case 4: _t->downloadReadyRead(); break;
        case 5: _t->error((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 6: _t->downloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 7: _t->metaDataChanged(); break;
        case 8: _t->finished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WBDownloadItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBDownloadItem::statusChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WBDownloadItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_WBDownloadItem.data,
    qt_meta_data_WBDownloadItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBDownloadItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBDownloadItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBDownloadItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui_DownloadItem"))
        return static_cast< Ui_DownloadItem*>(this);
    return QWidget::qt_metacast(_clname);
}

int WBDownloadItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void WBDownloadItem::statusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_WBDownloadManager__t {
    QByteArrayData data[20];
    char stringdata0[243];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBDownloadManager__t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBDownloadManager__t qt_meta_stringdata_WBDownloadManager_ = {
    {
QT_MOC_LITERAL(0, 0, 18), // "WBDownloadManager_"
QT_MOC_LITERAL(1, 19, 8), // "download"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 15), // "QNetworkRequest"
QT_MOC_LITERAL(4, 45, 7), // "request"
QT_MOC_LITERAL(5, 53, 15), // "requestFileName"
QT_MOC_LITERAL(6, 69, 3), // "url"
QT_MOC_LITERAL(7, 73, 24), // "handleUnsupportedContent"
QT_MOC_LITERAL(8, 98, 14), // "QNetworkReply*"
QT_MOC_LITERAL(9, 113, 5), // "reply"
QT_MOC_LITERAL(10, 119, 18), // "customDownloadPath"
QT_MOC_LITERAL(11, 138, 7), // "cleanup"
QT_MOC_LITERAL(12, 146, 4), // "save"
QT_MOC_LITERAL(13, 151, 9), // "updateRow"
QT_MOC_LITERAL(14, 161, 24), // "processDownloadedContent"
QT_MOC_LITERAL(15, 186, 12), // "removePolicy"
QT_MOC_LITERAL(16, 199, 12), // "RemovePolicy"
QT_MOC_LITERAL(17, 212, 5), // "Never"
QT_MOC_LITERAL(18, 218, 4), // "Exit"
QT_MOC_LITERAL(19, 223, 19) // "SuccessFullDownload"

    },
    "WBDownloadManager_\0download\0\0"
    "QNetworkRequest\0request\0requestFileName\0"
    "url\0handleUnsupportedContent\0"
    "QNetworkReply*\0reply\0customDownloadPath\0"
    "cleanup\0save\0updateRow\0processDownloadedContent\0"
    "removePolicy\0RemovePolicy\0Never\0Exit\0"
    "SuccessFullDownload"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBDownloadManager_[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       1,  120, // properties
       1,  123, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   74,    2, 0x0a /* Public */,
       1,    1,   79,    2, 0x2a /* Public | MethodCloned */,
       1,    2,   82,    2, 0x0a /* Public */,
       1,    1,   87,    2, 0x2a /* Public | MethodCloned */,
       7,    3,   90,    2, 0x0a /* Public */,
       7,    2,   97,    2, 0x2a /* Public | MethodCloned */,
       7,    1,  102,    2, 0x2a /* Public | MethodCloned */,
      11,    0,  105,    2, 0x0a /* Public */,
      12,    0,  106,    2, 0x08 /* Private */,
      13,    0,  107,    2, 0x08 /* Private */,
      14,    3,  108,    2, 0x08 /* Private */,
      14,    2,  115,    2, 0x28 /* Private | MethodCloned */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    5,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QUrl, QMetaType::Bool,    6,    5,
    QMetaType::Void, QMetaType::QUrl,    6,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Bool, QMetaType::QString,    9,    5,   10,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Bool,    9,    5,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Bool, QMetaType::QString,    9,    5,   10,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Bool,    9,    5,

 // properties: name, type, flags
      15, 0x80000000 | 16, 0x0009510b,

 // enums: name, alias, flags, count, data
      16,   16, 0x0,    3,  128,

 // enum data: key, value
      17, uint(WBDownloadManager_::Never),
      18, uint(WBDownloadManager_::Exit),
      19, uint(WBDownloadManager_::SuccessFullDownload),

       0        // eod
};

void WBDownloadManager_::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBDownloadManager_ *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->download((*reinterpret_cast< const QNetworkRequest(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->download((*reinterpret_cast< const QNetworkRequest(*)>(_a[1]))); break;
        case 2: _t->download((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->download((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 4: _t->handleUnsupportedContent((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 5: _t->handleUnsupportedContent((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->handleUnsupportedContent((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 7: _t->cleanup(); break;
        case 8: _t->save(); break;
        case 9: _t->updateRow(); break;
        case 10: _t->processDownloadedContent((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 11: _t->processDownloadedContent((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkRequest >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkRequest >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<WBDownloadManager_ *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< RemovePolicy*>(_v) = _t->removePolicy(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<WBDownloadManager_ *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRemovePolicy(*reinterpret_cast< RemovePolicy*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject WBDownloadManager_::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_WBDownloadManager_.data,
    qt_meta_data_WBDownloadManager_,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBDownloadManager_::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBDownloadManager_::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBDownloadManager_.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui_DownloadDialog"))
        return static_cast< Ui_DownloadDialog*>(this);
    return QDialog::qt_metacast(_clname);
}

int WBDownloadManager_::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_WBDownloadModel_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBDownloadModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBDownloadModel_t qt_meta_stringdata_WBDownloadModel = {
    {
QT_MOC_LITERAL(0, 0, 15) // "WBDownloadModel"

    },
    "WBDownloadModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBDownloadModel[] = {

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

void WBDownloadModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject WBDownloadModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_WBDownloadModel.data,
    qt_meta_data_WBDownloadModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBDownloadModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBDownloadModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBDownloadModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int WBDownloadModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
