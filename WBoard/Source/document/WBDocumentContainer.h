#ifndef WBDOCUMENTCONTAINER_H_
#define WBDOCUMENTCONTAINER_H_

/*WBDocumentContainer：主要用于管理文档相关的操作和数据。包含了对文档缩略图的一系列操作方法，如初始化、更新、添加、删除、插入等。通知其他组件关于文档的设置、页面的更新、缩略图的操作等情况。*/

#include <QtWidgets>
#include "WBDocumentProxy.h"

// 这段代码定义了一个名为 WBDocumentContainer 的类，它是一个继承自 QObject 的对象，用于管理文档相关的操作和信号。
// WBDocumentContainer 类实现了对文档对象的管理和操作，包括设置文档、操作文档页、管理缩略图等功能。
// 它通过信号与其他组件进行通信，允许外部组件在文档状态变化时作出响应。
// 这种设计使得文档管理模块能够独立地处理文档操作，并与用户界面或其他逻辑模块进行良好的交互和协作。
class WBDocumentContainer : public QObject
{
    Q_OBJECT

    public:
        WBDocumentContainer(QObject * parent = 0);
        virtual ~WBDocumentContainer();

        void setDocument(WBDocumentProxy* document, bool forceReload = false);                  // 设置当前的文档对象，并根据 forceReload 参数决定是否强制重新加载。
        void pureSetDocument(WBDocumentProxy *document) {mCurrentDocument = document;}          // 仅设置当前文档对象，不进行其他操作。

        WBDocumentProxy* selectedDocument(){return mCurrentDocument;}                           // 返回当前选中的文档对象。
        int pageCount(){return mCurrentDocument->pageCount();}                                  // 返回当前文档的页数。
        const QPixmap* pageAt(int index)                                                        // 根据索引返回文档页的缩略图，如果索引超出范围则返回 NULL。
        {
            if (index < mDocumentThumbs.size())
                return mDocumentThumbs[index];
            else
            {
                return NULL;
            }
        }

        // 这两个静态方法可能用于转换页面索引和场景索引之间的关系，具体实现未在代码中显示。
        static int pageFromSceneIndex(int sceneIndex);
        static int sceneIndexFromPage(int sceneIndex);

        // 这些方法包括对文档页的复制、移动、删除、初始化、添加、更新和重新加载缩略图等操作。
        void duplicatePages(QList<int>& pageIndexes);
        bool movePageToIndex(int source, int target);
        void deletePages(QList<int>& pageIndexes);
        void clearThumbPage();
        void initThumbPage();
        void addPage(int index);
        void addPixmapAt(const QPixmap *pix, int index);
        void updatePage(int index);
        void addEmptyThumbPage();
        void reloadThumbnails();

        void insertThumbPage(int index);

    private:
        WBDocumentProxy* mCurrentDocument;                                          // 当前管理的文档对象，类型为 WBDocumentProxy*。
        QList<const QPixmap*>  mDocumentThumbs;                                     // 保存文档缩略图的列表，每个元素是 QPixmap 指针。

    protected:
        void deleteThumbPage(int index);                                            // 删除指定索引的缩略图。
        void updateThumbPage(int index);                                            // 更新指定索引的缩略图。
            
    signals:
        // 这些信号用于通知其他对象关于文档设置、页面更新、缩略图操作等情况，提供了与界面和其他逻辑组件之间的通信机制。
        void documentSet(WBDocumentProxy* document);
        void documentPageUpdated(int index);

        void initThumbnailsRequired(WBDocumentContainer* source);
        void addThumbnailRequired(WBDocumentContainer* source, int index);
        void removeThumbnailRequired(int index);
        void moveThumbnailRequired(int from, int to);
        void updateThumbnailsRequired();

        void documentThumbnailsUpdated(WBDocumentContainer* source);
};

#endif /* WBDOCUMENTPROXY_H_ */

/*

这段代码定义了一个 `WBDocumentContainer` 类，用于管理文档的相关操作和数据。下面是每个函数的详细解释：

1. **构造函数和析构函数**:
   - `WBDocumentContainer(QObject *parent = 0);`: 构造函数，用于初始化类的实例。
   - `virtual ~WBDocumentContainer();`: 析构函数，用于清理资源。

2. **文档设置**:
   - `void setDocument(WBDocumentProxy* document, bool forceReload = false);`: 设置当前的文档对象。`forceReload` 参数决定是否强制重新加载文档。
   - `void pureSetDocument(WBDocumentProxy *document)`: 仅设置当前文档对象，不进行其他操作。

3. **获取当前文档信息**:
   - `WBDocumentProxy* selectedDocument()`: 返回当前选中的文档对象。
   - `int pageCount()`: 返回当前文档的页数。
   - `const QPixmap* pageAt(int index)`: 根据索引返回文档页的缩略图。如果索引超出范围，返回 `NULL`。

4. **页面和场景索引转换**:
   - `static int pageFromSceneIndex(int sceneIndex);`: 将场景索引转换为页面索引。
   - `static int sceneIndexFromPage(int sceneIndex);`: 将页面索引转换为场景索引。

5. **页面操作**:
   - `void duplicatePages(QList<int>& pageIndexes);`: 复制指定页的列表。
   - `bool movePageToIndex(int source, int target);`: 将页面从源索引移动到目标索引。
   - `void deletePages(QList<int>& pageIndexes);`: 删除指定页的列表。
   - `void clearThumbPage();`: 清空缩略图页面。
   - `void initThumbPage();`: 初始化缩略图页面。
   - `void addPage(int index);`: 在指定索引处添加一个页面。
   - `void addPixmapAt(const QPixmap *pix, int index);`: 在指定索引处添加一个 `QPixmap` 缩略图。
   - `void updatePage(int index);`: 更新指定索引处的页面。
   - `void addEmptyThumbPage();`: 添加一个空的缩略图页面。
   - `void reloadThumbnails();`: 重新加载所有缩略图。
   - `void insertThumbPage(int index);`: 在指定索引处插入一个缩略图页面。

6. **私有成员函数**:
   - `void deleteThumbPage(int index);`: 删除指定索引的缩略图。
   - `void updateThumbPage(int index);`: 更新指定索引的缩略图。

7. **信号**:
   - `void documentSet(WBDocumentProxy* document);`: 文档设置的通知信号。
   - `void documentPageUpdated(int index);`: 文档页面更新的通知信号。
   - `void initThumbnailsRequired(WBDocumentContainer* source);`: 需要初始化缩略图的通知信号。
   - `void addThumbnailRequired(WBDocumentContainer* source, int index);`: 需要添加缩略图的通知信号。
   - `void removeThumbnailRequired(int index);`: 需要移除缩略图的通知信号。
   - `void moveThumbnailRequired(int from, int to);`: 需要移动缩略图的通知信号。
   - `void updateThumbnailsRequired();`: 需要更新缩略图的通知信号。
   - `void documentThumbnailsUpdated(WBDocumentContainer* source);`: 文档缩略图更新的通知信号。

该类通过信号和槽机制与其他组件进行通信，确保在文档操作时，相关界面和逻辑模块可以及时响应。

*/
