/****************************************************************************
** Meta object code from reading C++ file 'WBDownloadManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/core/WBDownloadManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBDownloadManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WBDownloadHttpFile_t {
    QByteArrayData data[20];
    char stringdata0[227];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBDownloadHttpFile_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBDownloadHttpFile_t qt_meta_stringdata_WBDownloadHttpFile = {
    {
QT_MOC_LITERAL(0, 0, 18), // "WBDownloadHttpFile"
QT_MOC_LITERAL(1, 19, 16), // "downloadProgress"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 2), // "id"
QT_MOC_LITERAL(4, 40, 7), // "current"
QT_MOC_LITERAL(5, 48, 5), // "total"
QT_MOC_LITERAL(6, 54, 16), // "downloadFinished"
QT_MOC_LITERAL(7, 71, 8), // "pSuccess"
QT_MOC_LITERAL(8, 80, 9), // "sourceUrl"
QT_MOC_LITERAL(9, 90, 10), // "contentUrl"
QT_MOC_LITERAL(10, 101, 18), // "pContentTypeHeader"
QT_MOC_LITERAL(11, 120, 5), // "pData"
QT_MOC_LITERAL(12, 126, 4), // "pPos"
QT_MOC_LITERAL(13, 131, 5), // "pSize"
QT_MOC_LITERAL(14, 137, 12), // "isBackground"
QT_MOC_LITERAL(15, 150, 13), // "downloadError"
QT_MOC_LITERAL(16, 164, 18), // "onDownloadFinished"
QT_MOC_LITERAL(17, 183, 18), // "onDownloadProgress"
QT_MOC_LITERAL(18, 202, 13), // "bytesReceived"
QT_MOC_LITERAL(19, 216, 10) // "bytesTotal"

    },
    "WBDownloadHttpFile\0downloadProgress\0"
    "\0id\0current\0total\0downloadFinished\0"
    "pSuccess\0sourceUrl\0contentUrl\0"
    "pContentTypeHeader\0pData\0pPos\0pSize\0"
    "isBackground\0downloadError\0"
    "onDownloadFinished\0onDownloadProgress\0"
    "bytesReceived\0bytesTotal"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBDownloadHttpFile[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   39,    2, 0x06 /* Public */,
       6,    9,   46,    2, 0x06 /* Public */,
      15,    1,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    7,   68,    2, 0x08 /* Private */,
      17,    2,   83,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::LongLong, QMetaType::LongLong,    3,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool, QMetaType::QUrl, QMetaType::QUrl, QMetaType::QString, QMetaType::QByteArray, QMetaType::QPointF, QMetaType::QSize, QMetaType::Bool,    3,    7,    8,    9,   10,   11,   12,   13,   14,
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::QUrl, QMetaType::QString, QMetaType::QByteArray, QMetaType::QPointF, QMetaType::QSize, QMetaType::Bool,    7,    8,   10,   11,   12,   13,   14,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   18,   19,

       0        // eod
};

void WBDownloadHttpFile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBDownloadHttpFile *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->downloadProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3]))); break;
        case 1: _t->downloadFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QUrl(*)>(_a[3])),(*reinterpret_cast< QUrl(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QByteArray(*)>(_a[6])),(*reinterpret_cast< QPointF(*)>(_a[7])),(*reinterpret_cast< QSize(*)>(_a[8])),(*reinterpret_cast< bool(*)>(_a[9]))); break;
        case 2: _t->downloadError((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onDownloadFinished((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QUrl(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QByteArray(*)>(_a[4])),(*reinterpret_cast< QPointF(*)>(_a[5])),(*reinterpret_cast< QSize(*)>(_a[6])),(*reinterpret_cast< bool(*)>(_a[7]))); break;
        case 4: _t->onDownloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WBDownloadHttpFile::*)(int , qint64 , qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBDownloadHttpFile::downloadProgress)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WBDownloadHttpFile::*)(int , bool , QUrl , QUrl , QString , QByteArray , QPointF , QSize , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBDownloadHttpFile::downloadFinished)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WBDownloadHttpFile::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBDownloadHttpFile::downloadError)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WBDownloadHttpFile::staticMetaObject = { {
    QMetaObject::SuperData::link<WBHttpGet::staticMetaObject>(),
    qt_meta_stringdata_WBDownloadHttpFile.data,
    qt_meta_data_WBDownloadHttpFile,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBDownloadHttpFile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBDownloadHttpFile::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBDownloadHttpFile.stringdata0))
        return static_cast<void*>(this);
    return WBHttpGet::qt_metacast(_clname);
}

int WBDownloadHttpFile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WBHttpGet::qt_metacall(_c, _id, _a);
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
void WBDownloadHttpFile::downloadProgress(int _t1, qint64 _t2, qint64 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WBDownloadHttpFile::downloadFinished(int _t1, bool _t2, QUrl _t3, QUrl _t4, QString _t5, QByteArray _t6, QPointF _t7, QSize _t8, bool _t9)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t8))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t9))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WBDownloadHttpFile::downloadError(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_WBAsyncLocalFileDownloader_t {
    QByteArrayData data[15];
    char stringdata0[158];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBAsyncLocalFileDownloader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBAsyncLocalFileDownloader_t qt_meta_stringdata_WBAsyncLocalFileDownloader = {
    {
QT_MOC_LITERAL(0, 0, 26), // "WBAsyncLocalFileDownloader"
QT_MOC_LITERAL(1, 27, 8), // "finished"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 6), // "srcUrl"
QT_MOC_LITERAL(4, 44, 6), // "resUrl"
QT_MOC_LITERAL(5, 51, 24), // "signal_asyncCopyFinished"
QT_MOC_LITERAL(6, 76, 2), // "id"
QT_MOC_LITERAL(7, 79, 8), // "pSuccess"
QT_MOC_LITERAL(8, 88, 9), // "sourceUrl"
QT_MOC_LITERAL(9, 98, 10), // "contentUrl"
QT_MOC_LITERAL(10, 109, 18), // "pContentTypeHeader"
QT_MOC_LITERAL(11, 128, 5), // "pData"
QT_MOC_LITERAL(12, 134, 4), // "pPos"
QT_MOC_LITERAL(13, 139, 5), // "pSize"
QT_MOC_LITERAL(14, 145, 12) // "isBackground"

    },
    "WBAsyncLocalFileDownloader\0finished\0"
    "\0srcUrl\0resUrl\0signal_asyncCopyFinished\0"
    "id\0pSuccess\0sourceUrl\0contentUrl\0"
    "pContentTypeHeader\0pData\0pPos\0pSize\0"
    "isBackground"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBAsyncLocalFileDownloader[] = {

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
       5,    9,   29,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool, QMetaType::QUrl, QMetaType::QUrl, QMetaType::QString, QMetaType::QByteArray, QMetaType::QPointF, QMetaType::QSize, QMetaType::Bool,    6,    7,    8,    9,   10,   11,   12,   13,   14,

       0        // eod
};

void WBAsyncLocalFileDownloader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBAsyncLocalFileDownloader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->signal_asyncCopyFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QUrl(*)>(_a[3])),(*reinterpret_cast< QUrl(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QByteArray(*)>(_a[6])),(*reinterpret_cast< QPointF(*)>(_a[7])),(*reinterpret_cast< QSize(*)>(_a[8])),(*reinterpret_cast< bool(*)>(_a[9]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WBAsyncLocalFileDownloader::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBAsyncLocalFileDownloader::finished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WBAsyncLocalFileDownloader::*)(int , bool , QUrl , QUrl , QString , QByteArray , QPointF , QSize , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBAsyncLocalFileDownloader::signal_asyncCopyFinished)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WBAsyncLocalFileDownloader::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_WBAsyncLocalFileDownloader.data,
    qt_meta_data_WBAsyncLocalFileDownloader,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBAsyncLocalFileDownloader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBAsyncLocalFileDownloader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBAsyncLocalFileDownloader.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int WBAsyncLocalFileDownloader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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
void WBAsyncLocalFileDownloader::finished(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WBAsyncLocalFileDownloader::signal_asyncCopyFinished(int _t1, bool _t2, QUrl _t3, QUrl _t4, QString _t5, QByteArray _t6, QPointF _t7, QSize _t8, bool _t9)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t8))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t9))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_WBDownloadManager_t {
    QByteArrayData data[29];
    char stringdata0[394];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WBDownloadManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WBDownloadManager_t qt_meta_stringdata_WBDownloadManager = {
    {
QT_MOC_LITERAL(0, 0, 17), // "WBDownloadManager"
QT_MOC_LITERAL(1, 18, 19), // "fileAddedToDownload"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 15), // "downloadUpdated"
QT_MOC_LITERAL(4, 55, 2), // "id"
QT_MOC_LITERAL(5, 58, 4), // "crnt"
QT_MOC_LITERAL(6, 63, 5), // "total"
QT_MOC_LITERAL(7, 69, 16), // "downloadFinished"
QT_MOC_LITERAL(8, 86, 8), // "pSuccess"
QT_MOC_LITERAL(9, 95, 9), // "sourceUrl"
QT_MOC_LITERAL(10, 105, 18), // "pContentTypeHeader"
QT_MOC_LITERAL(11, 124, 5), // "pData"
QT_MOC_LITERAL(12, 130, 17), // "sDownloadFileDesc"
QT_MOC_LITERAL(13, 148, 4), // "desc"
QT_MOC_LITERAL(14, 153, 21), // "downloadModalFinished"
QT_MOC_LITERAL(15, 175, 24), // "addDownloadedFileToBoard"
QT_MOC_LITERAL(16, 200, 10), // "contentUrl"
QT_MOC_LITERAL(17, 211, 4), // "pPos"
QT_MOC_LITERAL(18, 216, 5), // "pSize"
QT_MOC_LITERAL(19, 222, 12), // "isBackground"
QT_MOC_LITERAL(20, 235, 26), // "addDownloadedFileToLibrary"
QT_MOC_LITERAL(21, 262, 6), // "pTitle"
QT_MOC_LITERAL(22, 269, 18), // "cancelAllDownloads"
QT_MOC_LITERAL(23, 288, 20), // "allDownloadsFinished"
QT_MOC_LITERAL(24, 309, 21), // "onUpdateDownloadLists"
QT_MOC_LITERAL(25, 331, 18), // "onDownloadProgress"
QT_MOC_LITERAL(26, 350, 8), // "received"
QT_MOC_LITERAL(27, 359, 18), // "onDownloadFinished"
QT_MOC_LITERAL(28, 378, 15) // "onDownloadError"

    },
    "WBDownloadManager\0fileAddedToDownload\0"
    "\0downloadUpdated\0id\0crnt\0total\0"
    "downloadFinished\0pSuccess\0sourceUrl\0"
    "pContentTypeHeader\0pData\0sDownloadFileDesc\0"
    "desc\0downloadModalFinished\0"
    "addDownloadedFileToBoard\0contentUrl\0"
    "pPos\0pSize\0isBackground\0"
    "addDownloadedFileToLibrary\0pTitle\0"
    "cancelAllDownloads\0allDownloadsFinished\0"
    "onUpdateDownloadLists\0onDownloadProgress\0"
    "received\0onDownloadFinished\0onDownloadError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBDownloadManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,
       3,    3,   85,    2, 0x06 /* Public */,
       7,    1,   92,    2, 0x06 /* Public */,
       7,    5,   95,    2, 0x06 /* Public */,
       7,    3,  106,    2, 0x06 /* Public */,
      14,    0,  113,    2, 0x06 /* Public */,
      15,    8,  114,    2, 0x06 /* Public */,
      20,    5,  131,    2, 0x06 /* Public */,
      22,    0,  142,    2, 0x06 /* Public */,
      23,    0,  143,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      24,    0,  144,    2, 0x08 /* Private */,
      25,    3,  145,    2, 0x08 /* Private */,
      27,    9,  152,    2, 0x08 /* Private */,
      28,    1,  171,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::LongLong, QMetaType::LongLong,    4,    5,    6,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::QUrl, QMetaType::QString, QMetaType::QByteArray,    8,    4,    9,   10,   11,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 12, QMetaType::QByteArray,    8,   13,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::QUrl, QMetaType::QUrl, QMetaType::QString, QMetaType::QByteArray, QMetaType::QPointF, QMetaType::QSize, QMetaType::Bool,    8,    9,   16,   10,   11,   17,   18,   19,
    QMetaType::Void, QMetaType::Bool, QMetaType::QUrl, QMetaType::QString, QMetaType::QByteArray, QMetaType::QString,    8,    9,   10,   11,   21,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::LongLong, QMetaType::LongLong,    4,   26,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool, QMetaType::QUrl, QMetaType::QUrl, QMetaType::QString, QMetaType::QByteArray, QMetaType::QPointF, QMetaType::QSize, QMetaType::Bool,    4,    8,    9,   16,   10,   11,   17,   18,   19,
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

void WBDownloadManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WBDownloadManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fileAddedToDownload(); break;
        case 1: _t->downloadUpdated((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3]))); break;
        case 2: _t->downloadFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->downloadFinished((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QUrl(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QByteArray(*)>(_a[5]))); break;
        case 4: _t->downloadFinished((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< sDownloadFileDesc(*)>(_a[2])),(*reinterpret_cast< QByteArray(*)>(_a[3]))); break;
        case 5: _t->downloadModalFinished(); break;
        case 6: _t->addDownloadedFileToBoard((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QUrl(*)>(_a[2])),(*reinterpret_cast< QUrl(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QByteArray(*)>(_a[5])),(*reinterpret_cast< QPointF(*)>(_a[6])),(*reinterpret_cast< QSize(*)>(_a[7])),(*reinterpret_cast< bool(*)>(_a[8]))); break;
        case 7: _t->addDownloadedFileToLibrary((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QUrl(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QByteArray(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5]))); break;
        case 8: _t->cancelAllDownloads(); break;
        case 9: _t->allDownloadsFinished(); break;
        case 10: _t->onUpdateDownloadLists(); break;
        case 11: _t->onDownloadProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3]))); break;
        case 12: _t->onDownloadFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QUrl(*)>(_a[3])),(*reinterpret_cast< QUrl(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QByteArray(*)>(_a[6])),(*reinterpret_cast< QPointF(*)>(_a[7])),(*reinterpret_cast< QSize(*)>(_a[8])),(*reinterpret_cast< bool(*)>(_a[9]))); break;
        case 13: _t->onDownloadError((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WBDownloadManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBDownloadManager::fileAddedToDownload)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WBDownloadManager::*)(int , qint64 , qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBDownloadManager::downloadUpdated)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WBDownloadManager::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBDownloadManager::downloadFinished)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (WBDownloadManager::*)(bool , int , QUrl , QString , QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBDownloadManager::downloadFinished)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (WBDownloadManager::*)(bool , sDownloadFileDesc , QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBDownloadManager::downloadFinished)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (WBDownloadManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBDownloadManager::downloadModalFinished)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (WBDownloadManager::*)(bool , QUrl , QUrl , QString , QByteArray , QPointF , QSize , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBDownloadManager::addDownloadedFileToBoard)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (WBDownloadManager::*)(bool , QUrl , QString , QByteArray , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBDownloadManager::addDownloadedFileToLibrary)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (WBDownloadManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBDownloadManager::cancelAllDownloads)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (WBDownloadManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WBDownloadManager::allDownloadsFinished)) {
                *result = 9;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WBDownloadManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_WBDownloadManager.data,
    qt_meta_data_WBDownloadManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WBDownloadManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBDownloadManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WBDownloadManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WBDownloadManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void WBDownloadManager::fileAddedToDownload()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WBDownloadManager::downloadUpdated(int _t1, qint64 _t2, qint64 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WBDownloadManager::downloadFinished(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WBDownloadManager::downloadFinished(bool _t1, int _t2, QUrl _t3, QString _t4, QByteArray _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void WBDownloadManager::downloadFinished(bool _t1, sDownloadFileDesc _t2, QByteArray _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void WBDownloadManager::downloadModalFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void WBDownloadManager::addDownloadedFileToBoard(bool _t1, QUrl _t2, QUrl _t3, QString _t4, QByteArray _t5, QPointF _t6, QSize _t7, bool _t8)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t8))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void WBDownloadManager::addDownloadedFileToLibrary(bool _t1, QUrl _t2, QString _t3, QByteArray _t4, QString _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void WBDownloadManager::cancelAllDownloads()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void WBDownloadManager::allDownloadsFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
