#ifndef WBDOCUMENTCONTROLLER_H_
#define WBDOCUMENTCONTROLLER_H_

/*WBDocumentController: 主要负责对文档的全面管理和控制。包含多个公共槽函数，用于响应各种用户操作，如创建新文档、刷新日期列、重新排序文档、创建新文档组、删除选中项等。
设置视图、工具栏、调色板等，并进行一些相关的检查和获取操作，如检查是否可以打开文档、获取选中的文档代理等。处理一些内部的操作和响应，如文档缩放滑块值改变、选择元素类型改变、导出文档等。*/

#include <QtWidgets>
#include "document/WBDocumentContainer.h"
#include "core/WBApplicationController.h"
#include "core/WBApplication.h"
#include "document/WBSortFilterProxyModel.h"

namespace Ui
{
    class documents;
}

#include "gui/WBMessageWindow.h"

class WBGraphicsScene;
class QDialog;
class WBDocumentProxy;
class WBBoardController;
class WBThumbnailsScene;
class WBDocumentGroupTreeItem;
class WBDocumentProxyTreeItem;
class WBMainWindow;
class WBDocumentToolsPalette;

class WBDocumentReplaceDialog : public QDialog
{
    Q_OBJECT

public:
    WBDocumentReplaceDialog(const QString &pIncommingName, const QStringList &pFileList, QWidget *parent = 0, Qt::WindowFlags pFlags = 0);
    void setRegexp(const QRegExp pRegExp);
    bool validString(const QString &pStr);
    void setFileNameAndList(const QString &fileName, const QStringList &pLst);
    QString  labelTextWithName(const QString &documentName) const;
    QString lineEditText() const {return mLineEdit->text();}

signals:
    void createNewFolder(QString str);
    void closeDialog();

private slots:
    void accept();
    void reject();

    void reactOnTextChanged(const QString &pStr);

private:
    QLineEdit *mLineEdit;
    QRegExpValidator *mValidator;
    QStringList mFileNameList;
    QString mIncommingName;
    QPushButton *acceptButton;
    const QString acceptText;
    const QString replaceText;
    const QString cancelText;
    QLabel *mLabelText;
};

class WBDocumentTreeNode
{
public:
    friend class WBDocumentTreeModel;

    enum Type {
        Catalog = 0
        , Document
    };

    WBDocumentTreeNode(Type pType, const QString &pName, const QString &pDisplayName = QString(), WBDocumentProxy *pProxy = 0);
    WBDocumentTreeNode() : mType(Catalog), mParent(0), mProxy(0) {;}
    ~WBDocumentTreeNode();

    QList<WBDocumentTreeNode*> children() const {return mChildren;}
    WBDocumentTreeNode *parentNode() {return mParent;}
    Type nodeType() const {return mType;}
    QString nodeName() const {return mName;}
    QString displayName() const {return mDisplayName;}
    void setNodeName(const QString &str) {mName = str; mDisplayName = str;}
    void addChild(WBDocumentTreeNode *pChild);
    void insertChild(int pIndex, WBDocumentTreeNode *pChild);
    void moveChild(WBDocumentTreeNode *child, int index, WBDocumentTreeNode *newParent);
    void removeChild(int index);
    WBDocumentProxy *proxyData() const {return mProxy;}
    bool isRoot() {return !mParent;}
    bool isTopLevel()
    {
        if (mParent)
        {
            return !mParent->mParent;
        }
        else
			return false;
    }
    WBDocumentTreeNode *clone();
    QString dirPathInHierarchy();

    bool findNode(WBDocumentTreeNode *node);
    WBDocumentTreeNode *nextSibling();
    WBDocumentTreeNode *previousSibling();

private:
    Type mType;
    QString mName;
    QString mDisplayName;
    WBDocumentTreeNode *mParent;
    QList<WBDocumentTreeNode*> mChildren;
    QPointer<WBDocumentProxy> mProxy;
};
Q_DECLARE_METATYPE(WBDocumentTreeNode*)

class WBDocumentTreeModel : public QAbstractItemModel {
    Q_OBJECT

public:
    enum eAncestors {
        aMyDocuments
        , aUntitledDocuments
        , aModel
        , aTrash
    };

    enum eCopyMode {
        aReference
        , aContentCopy
    };

    enum eAddItemMode {
        aEnd = 0         
        , aDetectPosition 
    };

    enum eDocumentData{
        DataNode = Qt::UserRole +1,
        CreationDate,
        UpdateDate
    };

    WBDocumentTreeModel(QObject *parent = 0);
    ~WBDocumentTreeModel();

    QModelIndex index(int row, int column, const QModelIndex &parent) const;
    QModelIndex parent(const QModelIndex &child) const;

    int rowCount(const QModelIndex &parent) const;
    int columnCount(const QModelIndex &parent) const;
    QVariant data(const QModelIndex &index, int role) const;
    bool setData(const QModelIndex &index, const QVariant &value, int role);
    Qt::ItemFlags flags ( const QModelIndex & index ) const;
    Qt::DropActions supportedDropActions() const {return Qt::MoveAction | Qt::CopyAction;}
    QStringList mimeTypes() const;
    QMimeData *mimeData (const QModelIndexList &indexes) const;
    bool dropMimeData(const QMimeData *data, Qt::DropAction action, int row, int column, const QModelIndex &parent);
    bool removeRows(int row, int count, const QModelIndex &parent);

    bool containsDocuments(const QModelIndex& index);

    QModelIndex indexForNode(WBDocumentTreeNode *pNode) const;
    QPersistentModelIndex persistentIndexForNode(WBDocumentTreeNode *pNode);
//    bool insertRow(int row, const QModelIndex &parent);

    QPersistentModelIndex copyIndexToNewParent(const QModelIndex &source, const QModelIndex &newParent, eCopyMode pMode = aReference);

    void copyIndexToNewParent(const QModelIndexList &list, const QModelIndex &newParent, eCopyMode pMode);

    void moveIndex(const QModelIndex &what, const QModelIndex &destination);
    WBDocumentTreeNode *currentNode() const {return mCurrentNode;} //work around for sorting model.
    void setCurrentNode(WBDocumentTreeNode *pNode) {mCurrentNode = pNode;}
    QModelIndex currentIndex() {return indexForNode(mCurrentNode);} //index representing a current document
    QModelIndex indexForProxy(WBDocumentProxy *pSearch) const;
    void setCurrentDocument(WBDocumentProxy *pDocument);
    void setRootNode(WBDocumentTreeNode *pRoot);
    WBDocumentTreeNode *rootNode() const {return mRootNode;}
    WBDocumentProxy *proxyForIndex(const QModelIndex &pIndex) const;
    QString virtualDirForIndex(const QModelIndex &pIndex) const;
    QString virtualPathForIndex(const QModelIndex &pIndex) const;
    QStringList nodeNameList(const QModelIndex &pIndex) const;
    bool newNodeAllowed(const QModelIndex &pSelectedIndex)  const;
    QModelIndex goTo(const QString &dir);
    bool inTrash(const QModelIndex &index) const;
    bool inUntitledDocuments(const QModelIndex &index) const;
    bool isCatalog(const QModelIndex &index) const {return nodeFromIndex(index)->nodeType() == WBDocumentTreeNode::Catalog;}
    bool isDocument(const QModelIndex &index) const {return nodeFromIndex(index)->nodeType() == WBDocumentTreeNode::Document;}
    bool isToplevel(const QModelIndex &index) const {return nodeFromIndex(index) ? nodeFromIndex(index)->isTopLevel() : false;}
    bool isConstant(const QModelIndex &index) const {return isToplevel(index) || (index == mUntitledDocuments);}
    bool isOkToRename(const QModelIndex &index) const {return flags(index) & Qt::ItemIsEditable;}
    WBDocumentProxy *proxyData(const QModelIndex &index) const {return nodeFromIndex(index)->proxyData();}
    void addDocument(WBDocumentProxy *pProxyData, const QModelIndex &pParent = QModelIndex());
    void addNewDocument(WBDocumentProxy *pProxyData, const QModelIndex &pParent = QModelIndex());
    QModelIndex addCatalog(const QString &pName, const QModelIndex &pParent);
    QList<WBDocumentProxy*> newDocuments() {return mNewDocuments;}
    void markDocumentAsNew(WBDocumentProxy *pDoc) {if (indexForProxy(pDoc).isValid()) mNewDocuments << pDoc;}
    void setNewName(const QModelIndex &index, const QString &newName);
    QString adjustNameForParentIndex(const QString &pName, const QModelIndex &pIndex);

    QPersistentModelIndex myDocumentsIndex() const {return mMyDocuments;}
    QPersistentModelIndex trashIndex() const {return mTrash;}
    QPersistentModelIndex untitledDocumentsIndex() const {return mMyDocuments;}
    WBDocumentTreeNode *nodeFromIndex(const QModelIndex &pIndex) const;
    static bool nodeLessThan(const WBDocumentTreeNode *firstIndex, const WBDocumentTreeNode *secondIndex);
    void setHighLighted(const QModelIndex &newHighLighted) {mHighLighted = newHighLighted;}
    QModelIndex highLighted() {return mHighLighted;}

    bool ascendingOrder() const{ return mAscendingOrder; }
    QDateTime findNodeDate(WBDocumentTreeNode *node, QString type) const;
    bool inMyDocuments(const QModelIndex &index) const;
    void moveIndexes(const QModelIndexList &source, const QModelIndex &destination);
    bool isDescendantOf(const QModelIndex &pPossibleDescendant, const QModelIndex &pPossibleAncestor) const;

signals:
    void indexChanged(const QModelIndex &newIndex, const QModelIndex &oldIndex);
    void currentIndexMoved(const QModelIndex &newIndex, const QModelIndex &previous); 

private:
    WBDocumentTreeNode *mRootNode;
    WBDocumentTreeNode *mCurrentNode;

    WBDocumentTreeNode *findProxy(WBDocumentProxy *pSearch, WBDocumentTreeNode *pParent) const;
    QModelIndex pIndexForNode(const QModelIndex &parent, WBDocumentTreeNode *pNode) const;
    QModelIndex addNode(WBDocumentTreeNode *pFreeNode, const QModelIndex &pParent, eAddItemMode pMode = aDetectPosition);
    int positionForParent(WBDocumentTreeNode *pFreeNode, WBDocumentTreeNode *pParentNode);
    void fixNodeName(const QModelIndex &source, const QModelIndex &dest);
    void updateIndexNameBindings(WBDocumentTreeNode *nd);
    QPersistentModelIndex mRoot;
    QPersistentModelIndex mMyDocuments;
    QPersistentModelIndex mTrash;
    QPersistentModelIndex mUntitledDocuments;
    QList<WBDocumentProxy*> mNewDocuments;
    QModelIndex mHighLighted;

    bool mAscendingOrder;

    QDateTime findCatalogUpdatedDate(WBDocumentTreeNode *node) const;
    QDateTime findCatalogCreationDate(WBDocumentTreeNode *node) const;
};

class WBDocumentTreeMimeData : public QMimeData
{
    Q_OBJECT

    public:
        QList<QModelIndex> indexes() const {return mIndexes;}
        void setIndexes (const QList<QModelIndex> &pIndexes) {mIndexes = pIndexes;}

    private:
        QList<QModelIndex> mIndexes;
};

class WBDocumentTreeView : public QTreeView
{
    Q_OBJECT

public:
    WBDocumentTreeView (QWidget *parent = 0);

    QModelIndex mapIndexToSource(const QModelIndex &index);
    QModelIndexList mapIndexesToSource(const QModelIndexList &indexes);

public slots:
    void setSelectedAndExpanded(const QModelIndex &pIndex, bool pExpand = true, bool pEdit = false);
    void onModelIndexChanged(const QModelIndex &pNewIndex, const QModelIndex &pOldIndex);
    void hSliderRangeChanged(int min, int max);

protected:
    void dragEnterEvent(QDragEnterEvent *event);
    void dragLeaveEvent(QDragLeaveEvent *event);
    void dragMoveEvent(QDragMoveEvent *event);
    void dropEvent(QDropEvent *event);
    void paintEvent(QPaintEvent *event);

    WBDocumentTreeModel *fullModel() {return qobject_cast<WBDocumentTreeModel*>(model());}
    void rowsAboutToBeRemoved(const QModelIndex &parent, int start, int end);

private:
    bool isAcceptable(const QModelIndex &dragIndex, const QModelIndex &atIndex);
    Qt::DropAction acceptableAction(const QModelIndex &dragIndex, const QModelIndex &atIndex);
    void updateIndexEnvirons(const QModelIndex &index);
};

class WBDocumentTreeItemDelegate : public QStyledItemDelegate
{
    Q_OBJECT

public:
    WBDocumentTreeItemDelegate(QObject *parent = 0);

private slots:
    void commitAndCloseEditor();
    void processChangedText(const QString &str) const;
    bool validateString(const QString &str) const;

protected:
    QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const;
    void setEditorData(QWidget *editor, const QModelIndex &index) const;
    void setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const;
    void paint(QPainter * painter, const QStyleOptionViewItem & option, const QModelIndex &index) const;

private:
    mutable QStringList mExistingFileNames;
};

// 这段代码实现了一个名为 WBDocumentController 的类，它继承自 WBDocumentContainer，并且使用了Qt框架的一些特性（例如 Q_OBJECT 宏、信号和槽机制）。
// WBDocumentController 类实现了一个文档控制器，负责管理文档的创建、编辑、删除、排序等操作，与界面元素和用户交互进行了紧密的集成。
// 它使用了Qt框架提供的信号和槽机制以及界面部件，是一个典型的桌面应用程序中文档管理模块的实现。
class WBDocumentController : public WBDocumentContainer
{
    Q_OBJECT

public:
    // 定义了不同的删除方式，如移到回收站、完全删除等。
    enum DeletionType {
        MoveToTrash = 0
        , CompleteDelete
        , EmptyFolder
        , EmptyTrash
        , DeletePage
        , NoDeletion
    };

    // 定义了最后选择的元素类型，可以是文件夹、文档或页面。
    enum LastSelectedElementType
    {
        None = 0, Folder, Document, Page
    };

    // 定义了排序顺序（升序或降序）
    enum SortOrder
    {
        ASC = 0,
        DESC
    };

    // 定义了排序类型（创建日期、更新日期、字母顺序）。
    enum SortKind
    {
        CreationDate,
        UpdateDate,
        Alphabetical
    };

    WBDocumentController(WBMainWindow* mainWindow);
    virtual ~WBDocumentController();


    // controlView(), mainWidget(), focusChanged() 等方法用于管理界面控件和焦点状态。
    void closing();
    QWidget* controlView();
    WBDocumentProxyTreeItem* findDocument(WBDocumentProxy* proxy);
    bool addFileToDocument(WBDocumentProxy* document);
    void deletePages(QList<QGraphicsItem*> itemsToDelete);
    int getSelectedItemIndex();

    bool pageCanBeMovedUp(int page);
    bool pageCanBeMovedDown(int page);
    bool pageCanBeDuplicated(int page);
    bool pageCanBeDeleted(int page);
    QString documentTrashGroupName(){ return mDocumentTrashGroupName;}
    QString defaultDocumentGroupName(){ return mDefaultDocumentGroupName;}

    void setDocument(WBDocumentProxy *document, bool forceReload = false);
    QModelIndex firstSelectedTreeIndex();
    WBDocumentProxy *firstSelectedTreeProxy();
    inline DeletionType deletionTypeForSelection(LastSelectedElementType pTypeSelection
                                                    , const QModelIndex &selectedIndex
                                                    , WBDocumentTreeModel *docModel) const;
    bool firstAndOnlySceneSelected() const;
    QWidget *mainWidget() const {return mDocumentWidget;}

    // moveToTrash(), deleteDocumentsInFolderOlderThan(), deleteEmptyFolders() 等方法处理文档的移动到垃圾箱、删除老旧文档和删除空文件夹等操作。
    void moveToTrash(QModelIndex &index, WBDocumentTreeModel* docModel);

    void deleteDocumentsInFolderOlderThan(const QModelIndex &index, const int days);
    void deleteEmptyFolders(const QModelIndex &index);

    QModelIndex mapIndexToSource(const QModelIndex &index);
    QModelIndexList mapIndexesToSource(const QModelIndexList &indexes);

    void sortDocuments(int kind, int order);

    void moveIndexesToTrash(const QModelIndexList &list, WBDocumentTreeModel *docModel);
    QModelIndex findPreviousSiblingNotSelected(const QModelIndex &index, QItemSelectionModel *selectionModel);
    QModelIndex findNextSiblingNotSelected(const QModelIndex &index, QItemSelectionModel *selectionModel);
    bool parentIsSelected(const QModelIndex& child, QItemSelectionModel *selectionModel);

signals:
    // 信号 exportDone(), reorderDocumentsRequested() 和对应的槽函数用于处理导出完成和重新排序文档的请求。
    void exportDone();
    void reorderDocumentsRequested();

public slots:
    void createNewDocument();
    void refreshDateColumns();
    void reorderDocuments();
    void createNewDocumentInUntitledFolder();

    void createNewDocumentGroup();
    void deleteSelectedItem();
    void deleteSingleItem(QModelIndex index, WBDocumentTreeModel *docModel);
    void deleteMultipleItems(QModelIndexList indexes, WBDocumentTreeModel *docModel);
    void emptyFolder(const QModelIndex &index, DeletionType pDeletionType = MoveToTrash);
    void deleteIndexAndAssociatedData(const QModelIndex &pIndex);
    void renameSelectedItem();
    void openSelectedItem();
    void duplicateSelectedItem();
    void importFile();
    void moveSceneToIndex(WBDocumentProxy* proxy, int source, int target);
    void selectDocument(WBDocumentProxy* proxy, bool setAsCurrentDocument = true, const bool onImport = false, const bool editMode = false);
    void show();
    void hide();
    void showMessage(const QString& message, bool showSpinningWheel = false);
    void hideMessage();
    void toggleDocumentToolsPalette();
    void cut();
    void copy();
    void paste();
    void focusChanged(QWidget *old, QWidget *current);
    void updateActions();
    void updateExportSubActions(const QModelIndex &selectedIndex);
    void currentIndexMoved(const QModelIndex &newIndex, const QModelIndex &PreviousIndex);

    void onSortKindChanged(int index);
    void onSortOrderChanged(bool order);
    void onSplitterMoved(int size, int index);
    void collapseAll();
    void expandAll();

protected:
    virtual void setupViews();
    virtual void setupToolbar();
    void setupPalettes();
    bool isOKToOpenDocument(WBDocumentProxy* proxy);
    WBDocumentProxy* selectedDocumentProxy();
    QList<WBDocumentProxy*> selectedProxies();
    QModelIndexList selectedTreeIndexes();
    WBDocumentProxyTreeItem* selectedDocumentProxyTreeItem();
    WBDocumentGroupTreeItem* selectedDocumentGroupTreeItem();
    QStringList allGroupNames();
	void moveDocumentToTrash(WBDocumentGroupTreeItem* groupTi, WBDocumentProxyTreeItem *proxyTi);
	void moveFolderToTrash(WBDocumentGroupTreeItem* groupTi);
    LastSelectedElementType mSelectionType;

private:
    // mParentWidget, mBoardController, mMainWindow 等：存储了与界面相关的控件和控制器。
    // mDocumentUI, mDocumentWidget：界面相关的UI元素和主要的文档窗口。
    // mMessageWindow：消息窗口的指针。
    // mToolsPalette：工具面板的指针。
    QWidget *mParentWidget;
    WBBoardController *mBoardController;
    Ui::documents* mDocumentUI;
    WBMainWindow* mMainWindow;
    QWidget *mDocumentWidget;
    QPointer<WBMessageWindow> mMessageWindow;
    QAction* mAddFolderOfImagesAction;
    QAction* mAddFileToDocumentAction;
    QAction* mAddImagesAction;
    bool mIsClosing;
    WBDocumentToolsPalette *mToolsPalette;
    bool mToolsPalettePositionned;

    // mDocumentTrashGroupName, mDefaultDocumentGroupName：文档垃圾桶组名称和默认文档组名称。
    QString mDocumentTrashGroupName;
    QString mDefaultDocumentGroupName;

    bool mCurrentIndexMoved;

    WBSortFilterProxyModel *mSortFilterProxyModel;

public slots:
    void TreeViewSelectionChanged(const QModelIndex &current, const QModelIndex &previous);
    void TreeViewSelectionChanged(const QItemSelection &selected, const QItemSelection &deselected);

private slots:
    void documentZoomSliderValueChanged (int value);
    void itemSelectionChanged(LastSelectedElementType newSelection);
    void exportDocument();
    void exportDocumentSet();

    void thumbnailViewResized();
    void pageSelectionChanged();

    void documentSceneChanged(WBDocumentProxy* proxy, int pSceneIndex);

    void thumbnailPageDoubleClicked(QGraphicsItem* item, int index);
    void pageClicked(QGraphicsItem* item, int index);
    void addToDocument();

    void addFolderOfImages();
    void addFileToDocument();
    void addImages();
    void refreshDocumentThumbnailsView(WBDocumentContainer* source);
};

#endif /* WBDOCUMENTCONTROLLER_H_ */

/*

这段代码定义了一个名为 `WBDocumentController` 的类，它继承自 `WBDocumentContainer`。该类主要负责文档的控制和管理，包括文档的创建、删除、排序和界面更新等。以下是对每个函数和成员的详细解释：

### 枚举类型

1. **`DeletionType`**:
   ```cpp
   enum DeletionType {
       MoveToTrash = 0, CompleteDelete, EmptyFolder, EmptyTrash, DeletePage, NoDeletion
   };
   ```
   - `MoveToTrash`: 将文档或文件夹移动到回收站。
   - `CompleteDelete`: 完全删除文档或文件夹。
   - `EmptyFolder`: 清空文件夹。
   - `EmptyTrash`: 清空回收站。
   - `DeletePage`: 删除单个页面。
   - `NoDeletion`: 不进行删除操作。

2. **`LastSelectedElementType`**:
   ```cpp
   enum LastSelectedElementType { None = 0, Folder, Document, Page };
   ```
   - `None`: 没有选中的元素。
   - `Folder`: 选中的元素是文件夹。
   - `Document`: 选中的元素是文档。
   - `Page`: 选中的元素是页面。

3. **`SortOrder`**:
   ```cpp
   enum SortOrder { ASC = 0, DESC };
   ```
   - `ASC`: 升序排序。
   - `DESC`: 降序排序。

4. **`SortKind`**:
   ```cpp
   enum SortKind { CreationDate, UpdateDate, Alphabetical };
   ```
   - `CreationDate`: 按创建日期排序。
   - `UpdateDate`: 按更新时间排序。
   - `Alphabetical`: 按字母顺序排序。

### 构造函数和析构函数

- **构造函数**:
  ```cpp
  WBDocumentController(WBMainWindow* mainWindow);
  ```
  初始化 `WBDocumentController` 实例，`mainWindow` 是主窗口的指针。

- **析构函数**:
  ```cpp
  virtual ~WBDocumentController();
  ```
  清理资源。

### 公共成员函数

- **`closing()`**:
  ```cpp
  void closing();
  ```
  处理关闭操作，可能用于保存状态或清理资源。

- **`controlView()`**:
  ```cpp
  QWidget* controlView();
  ```
  返回用于控制的视图部件。

- **`findDocument(WBDocumentProxy* proxy)`**:
  ```cpp
  WBDocumentProxyTreeItem* findDocument(WBDocumentProxy* proxy);
  ```
  根据 `WBDocumentProxy` 对象查找对应的文档树项。

- **`addFileToDocument(WBDocumentProxy* document)`**:
  ```cpp
  bool addFileToDocument(WBDocumentProxy* document);
  ```
  向指定文档中添加文件，返回操作是否成功。

- **`deletePages(QList<QGraphicsItem*> itemsToDelete)`**:
  ```cpp
  void deletePages(QList<QGraphicsItem*> itemsToDelete);
  ```
  删除页面，`itemsToDelete` 是要删除的图形项列表。

- **`getSelectedItemIndex()`**:
  ```cpp
  int getSelectedItemIndex();
  ```
  获取选中项的索引。

- **`pageCanBeMovedUp(int page)`**:
  ```cpp
  bool pageCanBeMovedUp(int page);
  ```
  判断指定页面是否可以向上移动。

- **`pageCanBeMovedDown(int page)`**:
  ```cpp
  bool pageCanBeMovedDown(int page);
  ```
  判断指定页面是否可以向下移动。

- **`pageCanBeDuplicated(int page)`**:
  ```cpp
  bool pageCanBeDuplicated(int page);
  ```
  判断指定页面是否可以被复制。

- **`pageCanBeDeleted(int page)`**:
  ```cpp
  bool pageCanBeDeleted(int page);
  ```
  判断指定页面是否可以被删除。

- **`documentTrashGroupName()`**:
  ```cpp
  QString documentTrashGroupName() { return mDocumentTrashGroupName; }
  ```
  返回文档垃圾桶组的名称。

- **`defaultDocumentGroupName()`**:
  ```cpp
  QString defaultDocumentGroupName() { return mDefaultDocumentGroupName; }
  ```
  返回默认文档组的名称。

- **`setDocument(WBDocumentProxy *document, bool forceReload = false)`**:
  ```cpp
  void setDocument(WBDocumentProxy *document, bool forceReload = false);
  ```
  设置当前文档对象，可以选择是否强制重新加载。

- **`firstSelectedTreeIndex()`**:
  ```cpp
  QModelIndex firstSelectedTreeIndex();
  ```
  返回第一个选中的树形索引。

- **`firstSelectedTreeProxy()`**:
  ```cpp
  WBDocumentProxy *firstSelectedTreeProxy();
  ```
  返回第一个选中的文档代理对象。

- **`deletionTypeForSelection(LastSelectedElementType pTypeSelection, const QModelIndex &selectedIndex, WBDocumentTreeModel *docModel) const`**:
  ```cpp
  inline DeletionType deletionTypeForSelection(LastSelectedElementType pTypeSelection, const QModelIndex &selectedIndex, WBDocumentTreeModel *docModel) const;
  ```
  根据选择的元素类型和模型索引确定删除类型。

- **`firstAndOnlySceneSelected() const`**:
  ```cpp
  bool firstAndOnlySceneSelected() const;
  ```
  判断是否选择了第一个且唯一的场景。

- **`mainWidget() const`**:
  ```cpp
  QWidget *mainWidget() const { return mDocumentWidget; }
  ```
  返回主文档窗口部件。

- **`moveToTrash(QModelIndex &index, WBDocumentTreeModel* docModel)`**:
  ```cpp
  void moveToTrash(QModelIndex &index, WBDocumentTreeModel* docModel);
  ```
  将文档或文件夹移动到回收站。

- **`deleteDocumentsInFolderOlderThan(const QModelIndex &index, const int days)`**:
  ```cpp
  void deleteDocumentsInFolderOlderThan(const QModelIndex &index, const int days);
  ```
  删除文件夹中超过指定天数的文档。

- **`deleteEmptyFolders(const QModelIndex &index)`**:
  ```cpp
  void deleteEmptyFolders(const QModelIndex &index);
  ```
  删除空文件夹。

- **`mapIndexToSource(const QModelIndex &index)`**:
  ```cpp
  QModelIndex mapIndexToSource(const QModelIndex &index);
  ```
  将树形索引映射到源模型索引。

- **`mapIndexesToSource(const QModelIndexList &indexes)`**:
  ```cpp
  QModelIndexList mapIndexesToSource(const QModelIndexList &indexes);
  ```
  将索引列表映射到源模型索引列表。

- **`sortDocuments(int kind, int order)`**:
  ```cpp
  void sortDocuments(int kind, int order);
  ```
  对文档进行排序，`kind` 指定排序类型（如创建日期），`order` 指定排序顺序（升序或降序）。

- **`moveIndexesToTrash(const QModelIndexList &list, WBDocumentTreeModel *docModel)`**:
  ```cpp
  void moveIndexesToTrash(const QModelIndexList &list, WBDocumentTreeModel *docModel);
  ```
  将指定的索引列表移动到回收站。

- **`findPreviousSiblingNotSelected(const QModelIndex &index, QItemSelectionModel *selectionModel)`**:
  ```cpp
  QModelIndex findPreviousSiblingNotSelected(const QModelIndex &index, QItemSelectionModel *selectionModel);
  ```
  查找指定索引的前一个未选择的兄弟项。

- **`findNextSiblingNotSelected(const QModelIndex &index, QItemSelectionModel *selectionModel)`**:
  ```cpp
  QModelIndex findNextSiblingNotSelected(const QModelIndex &index, QItemSelectionModel *selectionModel);
  ```
  查找指定索引的下一个未选择的兄弟项。

- **`parentIsSelected(const QModelIndex& child, QItemSelectionModel *selectionModel)`**:
  ```cpp
  bool parentIsSelected(const QModelIndex& child, QItemSelectionModel *selectionModel);
  ```
  判断指定子项的父项是否被选中。

### 信号

- **`exportDone()`**:
  ```cpp
  void exportDone();
  ```
  导出操作完成的信号。

- **`reorderDocumentsRequested()`**:
  ```cpp
  void reorderDocumentsRequested();
  ```
  请求重新排序文档的信号。

### 公共槽函数

- **`createNewDocument()`**:
  ```cpp
  void createNewDocument();
  ```
  创建新文档。

- **`refreshDateColumns()`**:
  ```cpp
  void refreshDateColumns();
  ```
  刷新日期列。

- **`reorderDocuments()`**:
  ```cpp
  void reorderDocuments();
  ```
  重新排序文档。

- **`createNewDocumentInUntitledFolder()`**:
  ```cpp
  void createNewDocumentInUntitledFolder();
  ```
  在未命名文件夹中

创建新文档。

- **`createNewDocumentGroup()`**:
  ```cpp
  void createNewDocumentGroup();
  ```
  创建新的文档组。

- **`deleteSelectedItem()`**:
  ```cpp
  void deleteSelectedItem();
  ```
  删除选中的项。

- **`deleteSingleItem(QModelIndex index, WBDocumentTreeModel *docModel)`**:
  ```cpp
  void deleteSingleItem(QModelIndex index, WBDocumentTreeModel *docModel);
  ```
  删除单个项。

- **`deleteMultipleItems(QModelIndexList indexes, WBDocumentTreeModel *docModel)`**:
  ```cpp
  void deleteMultipleItems(QModelIndexList indexes, WBDocumentTreeModel *docModel);
  ```
  删除多个项。

- **`emptyFolder(const QModelIndex &index, DeletionType pDeletionType = MoveToTrash)`**:
  ```cpp
  void emptyFolder(const QModelIndex &index, DeletionType pDeletionType = MoveToTrash);
  ```
  清空文件夹，根据 `pDeletionType` 指定删除类型。

- **`deleteIndexAndAssociatedData(const QModelIndex &pIndex)`**:
  ```cpp
  void deleteIndexAndAssociatedData(const QModelIndex &pIndex);
  ```
  删除指定索引及其相关数据。

- **`renameSelectedItem()`**:
  ```cpp
  void renameSelectedItem();
  ```
  重命名选中的项。

- **`openSelectedItem()`**:
  ```cpp
  void openSelectedItem();
  ```
  打开选中的项。

- **`duplicateSelectedItem()`**:
  ```cpp
  void duplicateSelectedItem();
  ```
  复制选中的项。

- **`importFile()`**:
  ```cpp
  void importFile();
  ```
  导入文件。

- **`moveSceneToIndex(WBDocumentProxy* proxy, int source, int target)`**:
  ```cpp
  void moveSceneToIndex(WBDocumentProxy* proxy, int source, int target);
  ```
  将场景从源位置移动到目标位置。

- **`selectDocument(WBDocumentProxy* proxy, bool setAsCurrentDocument = true, const bool onImport = false, const bool editMode = false)`**:
  ```cpp
  void selectDocument(WBDocumentProxy* proxy, bool setAsCurrentDocument = true, const bool onImport = false, const bool editMode = false);
  ```
  选择文档，可以设置为当前文档，并支持导入和编辑模式。

- **`show()`**:
  ```cpp
  void show();
  ```
  显示界面。

- **`hide()`**:
  ```cpp
  void hide();
  ```
  隐藏界面。

- **`showMessage(const QString& message, bool showSpinningWheel = false)`**:
  ```cpp
  void showMessage(const QString& message, bool showSpinningWheel = false);
  ```
  显示消息，可以选择是否显示旋转轮。

- **`hideMessage()`**:
  ```cpp
  void hideMessage();
  ```
  隐藏消息。

- **`toggleDocumentToolsPalette()`**:
  ```cpp
  void toggleDocumentToolsPalette();
  ```
  切换文档工具面板的显示状态。

- **`cut()`**:
  ```cpp
  void cut();
  ```
  剪切操作。

- **`copy()`**:
  ```cpp
  void copy();
  ```
  复制操作。

- **`paste()`**:
  ```cpp
  void paste();
  ```
  粘贴操作。

- **`focusChanged(QWidget *old, QWidget *current)`**:
  ```cpp
  void focusChanged(QWidget *old, QWidget *current);
  ```
  处理焦点变化事件。

- **`updateActions()`**:
  ```cpp
  void updateActions();
  ```
  更新操作的状态。

- **`updateExportSubActions(const QModelIndex &selectedIndex)`**:
  ```cpp
  void updateExportSubActions(const QModelIndex &selectedIndex);
  ```
  更新导出子操作的状态。

- **`currentIndexMoved(const QModelIndex &newIndex, const QModelIndex &PreviousIndex)`**:
  ```cpp
  void currentIndexMoved(const QModelIndex &newIndex, const QModelIndex &PreviousIndex);
  ```
  处理当前索引移动事件。

- **`onSortKindChanged(int index)`**:
  ```cpp
  void onSortKindChanged(int index);
  ```
  处理排序类型更改事件。

- **`onSortOrderChanged(bool order)`**:
  ```cpp
  void onSortOrderChanged(bool order);
  ```
  处理排序顺序更改事件。

- **`onSplitterMoved(int size, int index)`**:
  ```cpp
  void onSplitterMoved(int size, int index);
  ```
  处理分隔条移动事件。

- **`collapseAll()`**:
  ```cpp
  void collapseAll();
  ```
  收起所有节点。

- **`expandAll()`**:
  ```cpp
  void expandAll();
  ```
  展开所有节点。

### 受保护的成员函数

- **`setupViews()`**:
  ```cpp
  virtual void setupViews();
  ```
  设置视图的初始化。

- **`setupToolbar()`**:
  ```cpp
  virtual void setupToolbar();
  ```
  设置工具栏的初始化。

- **`setupPalettes()`**:
  ```cpp
  void setupPalettes();
  ```
  设置工具面板的初始化。

- **`isOKToOpenDocument(WBDocumentProxy* proxy)`**:
  ```cpp
  bool isOKToOpenDocument(WBDocumentProxy* proxy);
  ```
  判断是否可以打开指定文档。

- **`selectedDocumentProxy()`**:
  ```cpp
  WBDocumentProxy* selectedDocumentProxy();
  ```
  获取选中的文档代理对象。

- **`selectedProxies()`**:
  ```cpp
  QList<WBDocumentProxy*> selectedProxies();
  ```
  获取选中的文档代理对象列表。

- **`selectedTreeIndexes()`**:
  ```cpp
  QModelIndexList selectedTreeIndexes();
  ```
  获取选中的树形索引列表。

- **`selectedDocumentProxyTreeItem()`**:
  ```cpp
  WBDocumentProxyTreeItem* selectedDocumentProxyTreeItem();
  ```
  获取选中的文档代理树项。

- **`selectedDocumentGroupTreeItem()`**:
  ```cpp
  WBDocumentGroupTreeItem* selectedDocumentGroupTreeItem();
  ```
  获取选中的文档组树项。

- **`allGroupNames()`**:
  ```cpp
  QStringList allGroupNames();
  ```
  获取所有组的名称。

- **`moveDocumentToTrash(WBDocumentGroupTreeItem* groupTi, WBDocumentProxyTreeItem *proxyTi)`**:
  ```cpp
  void moveDocumentToTrash(WBDocumentGroupTreeItem* groupTi, WBDocumentProxyTreeItem *proxyTi);
  ```
  将文档移动到垃圾桶。

- **`moveFolderToTrash(WBDocumentGroupTreeItem* groupTi)`**:
  ```cpp
  void moveFolderToTrash(WBDocumentGroupTreeItem* groupTi);
  ```
  将文件夹移动到垃圾桶。

### 私有成员变量

- **`mParentWidget`**:
  ```cpp
  QWidget *mParentWidget;
  ```
  父部件。

- **`mBoardController`**:
  ```cpp
  WBBoardController *mBoardController;
  ```
  板控件控制器。

- **`mDocumentUI`**:
  ```cpp
  Ui::documents* mDocumentUI;
  ```
  文档界面的 UI 元素。

- **`mMainWindow`**:
  ```cpp
  WBMainWindow* mMainWindow;
  ```
  主窗口的指针。

- **`mDocumentWidget`**:
  ```cpp
  QWidget *mDocumentWidget;
  ```
  文档窗口部件。

- **`mMessageWindow`**:
  ```cpp
  QPointer<WBMessageWindow> mMessageWindow;
  ```
  消息窗口的指针（使用 `QPointer` 确保对象销毁时指针为 `nullptr`）。

- **`mAddFolderOfImagesAction`**:
  ```cpp
  QAction* mAddFolderOfImagesAction;
  ```
  添加图片文件夹的操作。

- **`mAddFileToDocumentAction`**:
  ```cpp
  QAction* mAddFileToDocumentAction;
  ```
  向文档中添加文件的操作。

- **`mAddImagesAction`**:
  ```cpp
  QAction* mAddImagesAction;
  ```
  添加图片的操作。

- **`mIsClosing`**:
  ```cpp
  bool mIsClosing;
  ```
  标记是否正在关闭。

- **`mToolsPalette`**:
  ```cpp
  WBDocumentToolsPalette *mToolsPalette;
  ```
  工具面板的指针。

- **`mToolsPalettePositionned`**:
  ```cpp
  bool mToolsPalettePositionned;
  ```
  工具面板是否已经放置标记。

- **`mDocumentTrashGroupName`**:
  ```cpp
  QString mDocumentTrashGroupName;
  ```
  文档垃圾桶组的名称。

- **`mDefaultDocumentGroupName`**:
  ```cpp
  QString

 mDefaultDocumentGroupName;
  ```
  默认文档组的名称。

- **`mCurrentIndexMoved`**:
  ```cpp
  bool mCurrentIndexMoved;
  ```
  当前索引是否已经移动标记。

- **`mSortFilterProxyModel`**:
  ```cpp
  WBSortFilterProxyModel *mSortFilterProxyModel;
  ```
  排序和过滤代理模型的指针。

### 公共槽函数（继续）

- **`TreeViewSelectionChanged(const QModelIndex &current, const QModelIndex &previous)`**:
  ```cpp
  void TreeViewSelectionChanged(const QModelIndex &current, const QModelIndex &previous);
  ```
  处理树视图选择变化事件。

- **`TreeViewSelectionChanged(const QItemSelection &selected, const QItemSelection &deselected)`**:
  ```cpp
  void TreeViewSelectionChanged(const QItemSelection &selected, const QItemSelection &deselected);
  ```
  处理树视图选择变化事件（使用选择和取消选择项）。

### 私有槽函数

- **`documentZoomSliderValueChanged(int value)`**:
  ```cpp
  void documentZoomSliderValueChanged(int value);
  ```
  处理文档缩放滑块值变化事件。

- **`itemSelectionChanged(LastSelectedElementType newSelection)`**:
  ```cpp
  void itemSelectionChanged(LastSelectedElementType newSelection);
  ```
  处理项选择变化事件。

- **`exportDocument()`**:
  ```cpp
  void exportDocument();
  ```
  导出文档操作。

- **`exportDocumentSet()`**:
  ```cpp
  void exportDocumentSet();
  ```
  导出文档集合操作。

- **`thumbnailViewResized()`**:
  ```cpp
  void thumbnailViewResized();
  ```
  处理缩略图视图大小变化事件。

- **`pageSelectionChanged()`**:
  ```cpp
  void pageSelectionChanged();
  ```
  处理页面选择变化事件。

- **`documentSceneChanged(WBDocumentProxy* proxy, int pSceneIndex)`**:
  ```cpp
  void documentSceneChanged(WBDocumentProxy* proxy, int pSceneIndex);
  ```
  处理文档场景变化事件。

- **`thumbnailPageDoubleClicked(QGraphicsItem* item, int index)`**:
  ```cpp
  void thumbnailPageDoubleClicked(QGraphicsItem* item, int index);
  ```
  处理缩略图页面双击事件。

- **`pageClicked(QGraphicsItem* item, int index)`**:
  ```cpp
  void pageClicked(QGraphicsItem* item, int index);
  ```
  处理页面点击事件。

- **`addToDocument()`**:
  ```cpp
  void addToDocument();
  ```
  将内容添加到文档中。

- **`addFolderOfImages()`**:
  ```cpp
  void addFolderOfImages();
  ```
  添加图片文件夹。

- **`addFileToDocument()`**:
  ```cpp
  void addFileToDocument();
  ```
  向文档中添加文件。

- **`addImages()`**:
  ```cpp
  void addImages();
  ```
  添加图片。

- **`refreshDocumentThumbnailsView(WBDocumentContainer* source)`**:
  ```cpp
  void refreshDocumentThumbnailsView(WBDocumentContainer* source);
  ```
  刷新文档缩略图视图。

### 总结

`WBDocumentController` 类的目的是管理文档和文档相关的操作，包括创建、删除、排序、导入导出等功能。它还负责更新和管理用户界面元素，并处理用户的交互操作。

*/