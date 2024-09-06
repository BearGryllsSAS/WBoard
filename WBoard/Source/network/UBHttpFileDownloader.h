/*
 * Copyright (C) 2015-2018 Département de l'Instruction Publique (DIP-SEM)
 *
 * Copyright (C) 2013 Open Education Foundation
 *
 * Copyright (C) 2010-2013 Groupement d'Intérêt Public pour
 * l'Education Numérique en Afrique (GIP ENA)
 *
 * This file is part of OpenBoard.
 *
 * OpenBoard is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 3 of the License,
 * with a specific linking exception for the OpenSSL project's
 * "OpenSSL" library (or with modified versions of it that use the
 * same license as the "OpenSSL" library).
 *
 * OpenBoard is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with OpenBoard. If not, see <http://www.gnu.org/licenses/>.
 */




#ifndef UBHTTPFILEDOWNLOADER_H_
#define UBHTTPFILEDOWNLOADER_H_

#include <QtCore>
#include <QtNetwork>

class UBHttpFileDownloader : public QObject
{
        Q_OBJECT;

    public:
        UBHttpFileDownloader(QObject *parent = 0);

        virtual ~UBHttpFileDownloader();

        void download(const QList<QUrl>& urls, const QList<QFile*>& files);

    signals:

        void finished(bool success);

    private:

        void downloadNext();

        QList<QUrl> mUrlsToDownload;
        QList<QFile*> mFilesToSave;

        QNetworkReply* mReply;
        QFile* mCurrentFile;
        bool mSuccess;

    private slots:

        void downloadProgress (qint64 bytesReceived, qint64 bytesTotal);

        void error ( QNetworkReply::NetworkError code );

        void finished ();

        void readyRead();

};

#endif /* UBHTTPFILEDOWNLOADER_H_ */

/*

这段代码定义了 `UBHttpFileDownloader` 类，用于处理从网络上下载文件的功能。以下是对每个部分和函数的详细分析：

### 头文件部分

```cpp
#ifndef UBHTTPFILEDOWNLOADER_H_
#define UBHTTPFILEDOWNLOADER_H_

#include <QtCore>
#include <QtNetwork>
```
- **`#ifndef UBHTTPFILEDOWNLOADER_H_`** 和 **`#define UBHTTPFILEDOWNLOADER_H_`**：防止头文件被多次包含。
- **`#include <QtCore>`** 和 **`#include <QtNetwork>`**：包含 Qt 的核心和网络模块的头文件。

### 类声明部分

```cpp
class UBHttpFileDownloader : public QObject
{
        Q_OBJECT;
```
- **`UBHttpFileDownloader`**：继承自 `QObject`，用于实现文件下载功能。
- **`Q_OBJECT`**：使类支持 Qt 的信号和槽机制。

### 构造函数和析构函数

```cpp
    public:
        UBHttpFileDownloader(QObject *parent = 0);
        virtual ~UBHttpFileDownloader();
```
- **`UBHttpFileDownloader(QObject *parent = 0)`**：构造函数，初始化 `UBHttpFileDownloader` 实例。`parent` 参数指定父对象。
- **`virtual ~UBHttpFileDownloader()`**：析构函数，用于清理资源。

### 公共方法

```cpp
        void download(const QList<QUrl>& urls, const QList<QFile*>& files);
```
- **`download(const QList<QUrl>& urls, const QList<QFile*>& files)`**：启动下载过程，接受 URL 列表和对应的文件列表进行下载。

### 信号

```cpp
    signals:
        void finished(bool success);
```
- **`finished(bool success)`**：下载完成时发射的信号，表示下载是否成功。

### 私有方法

```cpp
    private:
        void downloadNext();
```
- **`downloadNext()`**：处理下一个文件下载任务，确保文件按顺序下载。

### 私有成员变量

```cpp
        QList<QUrl> mUrlsToDownload;
        QList<QFile*> mFilesToSave;

        QNetworkReply* mReply;
        QFile* mCurrentFile;
        bool mSuccess;
```
- **`mUrlsToDownload`**：待下载的 URL 列表。
- **`mFilesToSave`**：用于保存下载内容的文件列表。
- **`mReply`**：当前的 `QNetworkReply` 对象，用于处理网络响应。
- **`mCurrentFile`**：当前正在下载的文件。
- **`mSuccess`**：标记下载是否成功。

### 私有槽

```cpp
    private slots:
        void downloadProgress (qint64 bytesReceived, qint64 bytesTotal);
        void error ( QNetworkReply::NetworkError code );
        void finished ();
        void readyRead();
```
- **`downloadProgress(qint64 bytesReceived, qint64 bytesTotal)`**：下载进度更新的槽函数，接收已接收字节数和总字节数。
- **`error(QNetworkReply::NetworkError code)`**：处理下载过程中出现的错误的槽函数。
- **`finished()`**：下载完成的槽函数，处理下载完成后的操作。
- **`readyRead()`**：处理接收到的数据准备读取的槽函数。

### 总结

`UBHttpFileDownloader` 类用于从网络上下载多个文件。它维护一个待下载 URL 和文件的列表，逐一下载每个文件。
它使用 Qt 的网络功能来处理 HTTP 请求，能够处理下载进度、错误和数据读取事件，并在下载完成后发出信号通知结果。

*/