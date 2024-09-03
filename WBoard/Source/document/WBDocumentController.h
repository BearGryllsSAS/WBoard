#ifndef WBDOCUMENTCONTROLLER_H_
#define WBDOCUMENTCONTROLLER_H_

/*WBDocumentController: ��Ҫ������ĵ���ȫ�����Ϳ��ơ�������������ۺ�����������Ӧ�����û��������紴�����ĵ���ˢ�������С����������ĵ����������ĵ��顢ɾ��ѡ����ȡ�
������ͼ������������ɫ��ȣ�������һЩ��صļ��ͻ�ȡ�����������Ƿ���Դ��ĵ�����ȡѡ�е��ĵ�����ȡ�����һЩ�ڲ��Ĳ�������Ӧ�����ĵ����Ż���ֵ�ı䡢ѡ��Ԫ�����͸ı䡢�����ĵ��ȡ�*/

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

// ��δ���ʵ����һ����Ϊ WBDocumentController ���࣬���̳��� WBDocumentContainer������ʹ����Qt��ܵ�һЩ���ԣ����� Q_OBJECT �ꡢ�źźͲۻ��ƣ���
// WBDocumentController ��ʵ����һ���ĵ�����������������ĵ��Ĵ������༭��ɾ��������Ȳ����������Ԫ�غ��û����������˽��ܵļ��ɡ�
// ��ʹ����Qt����ṩ���źźͲۻ����Լ����沿������һ�����͵�����Ӧ�ó������ĵ�����ģ���ʵ�֡�
class WBDocumentController : public WBDocumentContainer
{
    Q_OBJECT

public:
    // �����˲�ͬ��ɾ����ʽ�����Ƶ�����վ����ȫɾ���ȡ�
    enum DeletionType {
        MoveToTrash = 0
        , CompleteDelete
        , EmptyFolder
        , EmptyTrash
        , DeletePage
        , NoDeletion
    };

    // ���������ѡ���Ԫ�����ͣ��������ļ��С��ĵ���ҳ�档
    enum LastSelectedElementType
    {
        None = 0, Folder, Document, Page
    };

    // ����������˳���������
    enum SortOrder
    {
        ASC = 0,
        DESC
    };

    // �������������ͣ��������ڡ��������ڡ���ĸ˳�򣩡�
    enum SortKind
    {
        CreationDate,
        UpdateDate,
        Alphabetical
    };

    WBDocumentController(WBMainWindow* mainWindow);
    virtual ~WBDocumentController();


    // controlView(), mainWidget(), focusChanged() �ȷ������ڹ������ؼ��ͽ���״̬��
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

    // moveToTrash(), deleteDocumentsInFolderOlderThan(), deleteEmptyFolders() �ȷ��������ĵ����ƶ��������䡢ɾ���Ͼ��ĵ���ɾ�����ļ��еȲ�����
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
    // �ź� exportDone(), reorderDocumentsRequested() �Ͷ�Ӧ�Ĳۺ������ڴ�������ɺ����������ĵ�������
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
    // mParentWidget, mBoardController, mMainWindow �ȣ��洢���������صĿؼ��Ϳ�������
    // mDocumentUI, mDocumentWidget��������ص�UIԪ�غ���Ҫ���ĵ����ڡ�
    // mMessageWindow����Ϣ���ڵ�ָ�롣
    // mToolsPalette����������ָ�롣
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

    // mDocumentTrashGroupName, mDefaultDocumentGroupName���ĵ�����Ͱ�����ƺ�Ĭ���ĵ������ơ�
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

��δ��붨����һ����Ϊ `WBDocumentController` ���࣬���̳��� `WBDocumentContainer`��������Ҫ�����ĵ��Ŀ��ƺ͹��������ĵ��Ĵ�����ɾ��������ͽ�����µȡ������Ƕ�ÿ�������ͳ�Ա����ϸ���ͣ�

### ö������

1. **`DeletionType`**:
   ```cpp
   enum DeletionType {
       MoveToTrash = 0, CompleteDelete, EmptyFolder, EmptyTrash, DeletePage, NoDeletion
   };
   ```
   - `MoveToTrash`: ���ĵ����ļ����ƶ�������վ��
   - `CompleteDelete`: ��ȫɾ���ĵ����ļ��С�
   - `EmptyFolder`: ����ļ��С�
   - `EmptyTrash`: ��ջ���վ��
   - `DeletePage`: ɾ������ҳ�档
   - `NoDeletion`: ������ɾ��������

2. **`LastSelectedElementType`**:
   ```cpp
   enum LastSelectedElementType { None = 0, Folder, Document, Page };
   ```
   - `None`: û��ѡ�е�Ԫ�ء�
   - `Folder`: ѡ�е�Ԫ�����ļ��С�
   - `Document`: ѡ�е�Ԫ�����ĵ���
   - `Page`: ѡ�е�Ԫ����ҳ�档

3. **`SortOrder`**:
   ```cpp
   enum SortOrder { ASC = 0, DESC };
   ```
   - `ASC`: ��������
   - `DESC`: ��������

4. **`SortKind`**:
   ```cpp
   enum SortKind { CreationDate, UpdateDate, Alphabetical };
   ```
   - `CreationDate`: ��������������
   - `UpdateDate`: ������ʱ������
   - `Alphabetical`: ����ĸ˳������

### ���캯������������

- **���캯��**:
  ```cpp
  WBDocumentController(WBMainWindow* mainWindow);
  ```
  ��ʼ�� `WBDocumentController` ʵ����`mainWindow` �������ڵ�ָ�롣

- **��������**:
  ```cpp
  virtual ~WBDocumentController();
  ```
  ������Դ��

### ������Ա����

- **`closing()`**:
  ```cpp
  void closing();
  ```
  ����رղ������������ڱ���״̬��������Դ��

- **`controlView()`**:
  ```cpp
  QWidget* controlView();
  ```
  �������ڿ��Ƶ���ͼ������

- **`findDocument(WBDocumentProxy* proxy)`**:
  ```cpp
  WBDocumentProxyTreeItem* findDocument(WBDocumentProxy* proxy);
  ```
  ���� `WBDocumentProxy` ������Ҷ�Ӧ���ĵ����

- **`addFileToDocument(WBDocumentProxy* document)`**:
  ```cpp
  bool addFileToDocument(WBDocumentProxy* document);
  ```
  ��ָ���ĵ�������ļ������ز����Ƿ�ɹ���

- **`deletePages(QList<QGraphicsItem*> itemsToDelete)`**:
  ```cpp
  void deletePages(QList<QGraphicsItem*> itemsToDelete);
  ```
  ɾ��ҳ�棬`itemsToDelete` ��Ҫɾ����ͼ�����б�

- **`getSelectedItemIndex()`**:
  ```cpp
  int getSelectedItemIndex();
  ```
  ��ȡѡ�����������

- **`pageCanBeMovedUp(int page)`**:
  ```cpp
  bool pageCanBeMovedUp(int page);
  ```
  �ж�ָ��ҳ���Ƿ���������ƶ���

- **`pageCanBeMovedDown(int page)`**:
  ```cpp
  bool pageCanBeMovedDown(int page);
  ```
  �ж�ָ��ҳ���Ƿ���������ƶ���

- **`pageCanBeDuplicated(int page)`**:
  ```cpp
  bool pageCanBeDuplicated(int page);
  ```
  �ж�ָ��ҳ���Ƿ���Ա����ơ�

- **`pageCanBeDeleted(int page)`**:
  ```cpp
  bool pageCanBeDeleted(int page);
  ```
  �ж�ָ��ҳ���Ƿ���Ա�ɾ����

- **`documentTrashGroupName()`**:
  ```cpp
  QString documentTrashGroupName() { return mDocumentTrashGroupName; }
  ```
  �����ĵ�����Ͱ������ơ�

- **`defaultDocumentGroupName()`**:
  ```cpp
  QString defaultDocumentGroupName() { return mDefaultDocumentGroupName; }
  ```
  ����Ĭ���ĵ�������ơ�

- **`setDocument(WBDocumentProxy *document, bool forceReload = false)`**:
  ```cpp
  void setDocument(WBDocumentProxy *document, bool forceReload = false);
  ```
  ���õ�ǰ�ĵ����󣬿���ѡ���Ƿ�ǿ�����¼��ء�

- **`firstSelectedTreeIndex()`**:
  ```cpp
  QModelIndex firstSelectedTreeIndex();
  ```
  ���ص�һ��ѡ�е�����������

- **`firstSelectedTreeProxy()`**:
  ```cpp
  WBDocumentProxy *firstSelectedTreeProxy();
  ```
  ���ص�һ��ѡ�е��ĵ��������

- **`deletionTypeForSelection(LastSelectedElementType pTypeSelection, const QModelIndex &selectedIndex, WBDocumentTreeModel *docModel) const`**:
  ```cpp
  inline DeletionType deletionTypeForSelection(LastSelectedElementType pTypeSelection, const QModelIndex &selectedIndex, WBDocumentTreeModel *docModel) const;
  ```
  ����ѡ���Ԫ�����ͺ�ģ������ȷ��ɾ�����͡�

- **`firstAndOnlySceneSelected() const`**:
  ```cpp
  bool firstAndOnlySceneSelected() const;
  ```
  �ж��Ƿ�ѡ���˵�һ����Ψһ�ĳ�����

- **`mainWidget() const`**:
  ```cpp
  QWidget *mainWidget() const { return mDocumentWidget; }
  ```
  �������ĵ����ڲ�����

- **`moveToTrash(QModelIndex &index, WBDocumentTreeModel* docModel)`**:
  ```cpp
  void moveToTrash(QModelIndex &index, WBDocumentTreeModel* docModel);
  ```
  ���ĵ����ļ����ƶ�������վ��

- **`deleteDocumentsInFolderOlderThan(const QModelIndex &index, const int days)`**:
  ```cpp
  void deleteDocumentsInFolderOlderThan(const QModelIndex &index, const int days);
  ```
  ɾ���ļ����г���ָ���������ĵ���

- **`deleteEmptyFolders(const QModelIndex &index)`**:
  ```cpp
  void deleteEmptyFolders(const QModelIndex &index);
  ```
  ɾ�����ļ��С�

- **`mapIndexToSource(const QModelIndex &index)`**:
  ```cpp
  QModelIndex mapIndexToSource(const QModelIndex &index);
  ```
  ����������ӳ�䵽Դģ��������

- **`mapIndexesToSource(const QModelIndexList &indexes)`**:
  ```cpp
  QModelIndexList mapIndexesToSource(const QModelIndexList &indexes);
  ```
  �������б�ӳ�䵽Դģ�������б�

- **`sortDocuments(int kind, int order)`**:
  ```cpp
  void sortDocuments(int kind, int order);
  ```
  ���ĵ���������`kind` ָ���������ͣ��紴�����ڣ���`order` ָ������˳��������򣩡�

- **`moveIndexesToTrash(const QModelIndexList &list, WBDocumentTreeModel *docModel)`**:
  ```cpp
  void moveIndexesToTrash(const QModelIndexList &list, WBDocumentTreeModel *docModel);
  ```
  ��ָ���������б��ƶ�������վ��

- **`findPreviousSiblingNotSelected(const QModelIndex &index, QItemSelectionModel *selectionModel)`**:
  ```cpp
  QModelIndex findPreviousSiblingNotSelected(const QModelIndex &index, QItemSelectionModel *selectionModel);
  ```
  ����ָ��������ǰһ��δѡ����ֵ��

- **`findNextSiblingNotSelected(const QModelIndex &index, QItemSelectionModel *selectionModel)`**:
  ```cpp
  QModelIndex findNextSiblingNotSelected(const QModelIndex &index, QItemSelectionModel *selectionModel);
  ```
  ����ָ����������һ��δѡ����ֵ��

- **`parentIsSelected(const QModelIndex& child, QItemSelectionModel *selectionModel)`**:
  ```cpp
  bool parentIsSelected(const QModelIndex& child, QItemSelectionModel *selectionModel);
  ```
  �ж�ָ������ĸ����Ƿ�ѡ�С�

### �ź�

- **`exportDone()`**:
  ```cpp
  void exportDone();
  ```
  ����������ɵ��źš�

- **`reorderDocumentsRequested()`**:
  ```cpp
  void reorderDocumentsRequested();
  ```
  �������������ĵ����źš�

### �����ۺ���

- **`createNewDocument()`**:
  ```cpp
  void createNewDocument();
  ```
  �������ĵ���

- **`refreshDateColumns()`**:
  ```cpp
  void refreshDateColumns();
  ```
  ˢ�������С�

- **`reorderDocuments()`**:
  ```cpp
  void reorderDocuments();
  ```
  ���������ĵ���

- **`createNewDocumentInUntitledFolder()`**:
  ```cpp
  void createNewDocumentInUntitledFolder();
  ```
  ��δ�����ļ�����

�������ĵ���

- **`createNewDocumentGroup()`**:
  ```cpp
  void createNewDocumentGroup();
  ```
  �����µ��ĵ��顣

- **`deleteSelectedItem()`**:
  ```cpp
  void deleteSelectedItem();
  ```
  ɾ��ѡ�е��

- **`deleteSingleItem(QModelIndex index, WBDocumentTreeModel *docModel)`**:
  ```cpp
  void deleteSingleItem(QModelIndex index, WBDocumentTreeModel *docModel);
  ```
  ɾ�������

- **`deleteMultipleItems(QModelIndexList indexes, WBDocumentTreeModel *docModel)`**:
  ```cpp
  void deleteMultipleItems(QModelIndexList indexes, WBDocumentTreeModel *docModel);
  ```
  ɾ������

- **`emptyFolder(const QModelIndex &index, DeletionType pDeletionType = MoveToTrash)`**:
  ```cpp
  void emptyFolder(const QModelIndex &index, DeletionType pDeletionType = MoveToTrash);
  ```
  ����ļ��У����� `pDeletionType` ָ��ɾ�����͡�

- **`deleteIndexAndAssociatedData(const QModelIndex &pIndex)`**:
  ```cpp
  void deleteIndexAndAssociatedData(const QModelIndex &pIndex);
  ```
  ɾ��ָ����������������ݡ�

- **`renameSelectedItem()`**:
  ```cpp
  void renameSelectedItem();
  ```
  ������ѡ�е��

- **`openSelectedItem()`**:
  ```cpp
  void openSelectedItem();
  ```
  ��ѡ�е��

- **`duplicateSelectedItem()`**:
  ```cpp
  void duplicateSelectedItem();
  ```
  ����ѡ�е��

- **`importFile()`**:
  ```cpp
  void importFile();
  ```
  �����ļ���

- **`moveSceneToIndex(WBDocumentProxy* proxy, int source, int target)`**:
  ```cpp
  void moveSceneToIndex(WBDocumentProxy* proxy, int source, int target);
  ```
  ��������Դλ���ƶ���Ŀ��λ�á�

- **`selectDocument(WBDocumentProxy* proxy, bool setAsCurrentDocument = true, const bool onImport = false, const bool editMode = false)`**:
  ```cpp
  void selectDocument(WBDocumentProxy* proxy, bool setAsCurrentDocument = true, const bool onImport = false, const bool editMode = false);
  ```
  ѡ���ĵ�����������Ϊ��ǰ�ĵ�����֧�ֵ���ͱ༭ģʽ��

- **`show()`**:
  ```cpp
  void show();
  ```
  ��ʾ���档

- **`hide()`**:
  ```cpp
  void hide();
  ```
  ���ؽ��档

- **`showMessage(const QString& message, bool showSpinningWheel = false)`**:
  ```cpp
  void showMessage(const QString& message, bool showSpinningWheel = false);
  ```
  ��ʾ��Ϣ������ѡ���Ƿ���ʾ��ת�֡�

- **`hideMessage()`**:
  ```cpp
  void hideMessage();
  ```
  ������Ϣ��

- **`toggleDocumentToolsPalette()`**:
  ```cpp
  void toggleDocumentToolsPalette();
  ```
  �л��ĵ�����������ʾ״̬��

- **`cut()`**:
  ```cpp
  void cut();
  ```
  ���в�����

- **`copy()`**:
  ```cpp
  void copy();
  ```
  ���Ʋ�����

- **`paste()`**:
  ```cpp
  void paste();
  ```
  ճ��������

- **`focusChanged(QWidget *old, QWidget *current)`**:
  ```cpp
  void focusChanged(QWidget *old, QWidget *current);
  ```
  ������仯�¼���

- **`updateActions()`**:
  ```cpp
  void updateActions();
  ```
  ���²�����״̬��

- **`updateExportSubActions(const QModelIndex &selectedIndex)`**:
  ```cpp
  void updateExportSubActions(const QModelIndex &selectedIndex);
  ```
  ���µ����Ӳ�����״̬��

- **`currentIndexMoved(const QModelIndex &newIndex, const QModelIndex &PreviousIndex)`**:
  ```cpp
  void currentIndexMoved(const QModelIndex &newIndex, const QModelIndex &PreviousIndex);
  ```
  ����ǰ�����ƶ��¼���

- **`onSortKindChanged(int index)`**:
  ```cpp
  void onSortKindChanged(int index);
  ```
  �����������͸����¼���

- **`onSortOrderChanged(bool order)`**:
  ```cpp
  void onSortOrderChanged(bool order);
  ```
  ��������˳������¼���

- **`onSplitterMoved(int size, int index)`**:
  ```cpp
  void onSplitterMoved(int size, int index);
  ```
  ����ָ����ƶ��¼���

- **`collapseAll()`**:
  ```cpp
  void collapseAll();
  ```
  �������нڵ㡣

- **`expandAll()`**:
  ```cpp
  void expandAll();
  ```
  չ�����нڵ㡣

### �ܱ����ĳ�Ա����

- **`setupViews()`**:
  ```cpp
  virtual void setupViews();
  ```
  ������ͼ�ĳ�ʼ����

- **`setupToolbar()`**:
  ```cpp
  virtual void setupToolbar();
  ```
  ���ù������ĳ�ʼ����

- **`setupPalettes()`**:
  ```cpp
  void setupPalettes();
  ```
  ���ù������ĳ�ʼ����

- **`isOKToOpenDocument(WBDocumentProxy* proxy)`**:
  ```cpp
  bool isOKToOpenDocument(WBDocumentProxy* proxy);
  ```
  �ж��Ƿ���Դ�ָ���ĵ���

- **`selectedDocumentProxy()`**:
  ```cpp
  WBDocumentProxy* selectedDocumentProxy();
  ```
  ��ȡѡ�е��ĵ��������

- **`selectedProxies()`**:
  ```cpp
  QList<WBDocumentProxy*> selectedProxies();
  ```
  ��ȡѡ�е��ĵ���������б�

- **`selectedTreeIndexes()`**:
  ```cpp
  QModelIndexList selectedTreeIndexes();
  ```
  ��ȡѡ�е����������б�

- **`selectedDocumentProxyTreeItem()`**:
  ```cpp
  WBDocumentProxyTreeItem* selectedDocumentProxyTreeItem();
  ```
  ��ȡѡ�е��ĵ��������

- **`selectedDocumentGroupTreeItem()`**:
  ```cpp
  WBDocumentGroupTreeItem* selectedDocumentGroupTreeItem();
  ```
  ��ȡѡ�е��ĵ������

- **`allGroupNames()`**:
  ```cpp
  QStringList allGroupNames();
  ```
  ��ȡ����������ơ�

- **`moveDocumentToTrash(WBDocumentGroupTreeItem* groupTi, WBDocumentProxyTreeItem *proxyTi)`**:
  ```cpp
  void moveDocumentToTrash(WBDocumentGroupTreeItem* groupTi, WBDocumentProxyTreeItem *proxyTi);
  ```
  ���ĵ��ƶ�������Ͱ��

- **`moveFolderToTrash(WBDocumentGroupTreeItem* groupTi)`**:
  ```cpp
  void moveFolderToTrash(WBDocumentGroupTreeItem* groupTi);
  ```
  ���ļ����ƶ�������Ͱ��

### ˽�г�Ա����

- **`mParentWidget`**:
  ```cpp
  QWidget *mParentWidget;
  ```
  ��������

- **`mBoardController`**:
  ```cpp
  WBBoardController *mBoardController;
  ```
  ��ؼ���������

- **`mDocumentUI`**:
  ```cpp
  Ui::documents* mDocumentUI;
  ```
  �ĵ������ UI Ԫ�ء�

- **`mMainWindow`**:
  ```cpp
  WBMainWindow* mMainWindow;
  ```
  �����ڵ�ָ�롣

- **`mDocumentWidget`**:
  ```cpp
  QWidget *mDocumentWidget;
  ```
  �ĵ����ڲ�����

- **`mMessageWindow`**:
  ```cpp
  QPointer<WBMessageWindow> mMessageWindow;
  ```
  ��Ϣ���ڵ�ָ�루ʹ�� `QPointer` ȷ����������ʱָ��Ϊ `nullptr`����

- **`mAddFolderOfImagesAction`**:
  ```cpp
  QAction* mAddFolderOfImagesAction;
  ```
  ���ͼƬ�ļ��еĲ�����

- **`mAddFileToDocumentAction`**:
  ```cpp
  QAction* mAddFileToDocumentAction;
  ```
  ���ĵ�������ļ��Ĳ�����

- **`mAddImagesAction`**:
  ```cpp
  QAction* mAddImagesAction;
  ```
  ���ͼƬ�Ĳ�����

- **`mIsClosing`**:
  ```cpp
  bool mIsClosing;
  ```
  ����Ƿ����ڹرա�

- **`mToolsPalette`**:
  ```cpp
  WBDocumentToolsPalette *mToolsPalette;
  ```
  ��������ָ�롣

- **`mToolsPalettePositionned`**:
  ```cpp
  bool mToolsPalettePositionned;
  ```
  ��������Ƿ��Ѿ����ñ�ǡ�

- **`mDocumentTrashGroupName`**:
  ```cpp
  QString mDocumentTrashGroupName;
  ```
  �ĵ�����Ͱ������ơ�

- **`mDefaultDocumentGroupName`**:
  ```cpp
  QString

 mDefaultDocumentGroupName;
  ```
  Ĭ���ĵ�������ơ�

- **`mCurrentIndexMoved`**:
  ```cpp
  bool mCurrentIndexMoved;
  ```
  ��ǰ�����Ƿ��Ѿ��ƶ���ǡ�

- **`mSortFilterProxyModel`**:
  ```cpp
  WBSortFilterProxyModel *mSortFilterProxyModel;
  ```
  ����͹��˴���ģ�͵�ָ�롣

### �����ۺ�����������

- **`TreeViewSelectionChanged(const QModelIndex &current, const QModelIndex &previous)`**:
  ```cpp
  void TreeViewSelectionChanged(const QModelIndex &current, const QModelIndex &previous);
  ```
  ��������ͼѡ��仯�¼���

- **`TreeViewSelectionChanged(const QItemSelection &selected, const QItemSelection &deselected)`**:
  ```cpp
  void TreeViewSelectionChanged(const QItemSelection &selected, const QItemSelection &deselected);
  ```
  ��������ͼѡ��仯�¼���ʹ��ѡ���ȡ��ѡ�����

### ˽�вۺ���

- **`documentZoomSliderValueChanged(int value)`**:
  ```cpp
  void documentZoomSliderValueChanged(int value);
  ```
  �����ĵ����Ż���ֵ�仯�¼���

- **`itemSelectionChanged(LastSelectedElementType newSelection)`**:
  ```cpp
  void itemSelectionChanged(LastSelectedElementType newSelection);
  ```
  ������ѡ��仯�¼���

- **`exportDocument()`**:
  ```cpp
  void exportDocument();
  ```
  �����ĵ�������

- **`exportDocumentSet()`**:
  ```cpp
  void exportDocumentSet();
  ```
  �����ĵ����ϲ�����

- **`thumbnailViewResized()`**:
  ```cpp
  void thumbnailViewResized();
  ```
  ��������ͼ��ͼ��С�仯�¼���

- **`pageSelectionChanged()`**:
  ```cpp
  void pageSelectionChanged();
  ```
  ����ҳ��ѡ��仯�¼���

- **`documentSceneChanged(WBDocumentProxy* proxy, int pSceneIndex)`**:
  ```cpp
  void documentSceneChanged(WBDocumentProxy* proxy, int pSceneIndex);
  ```
  �����ĵ������仯�¼���

- **`thumbnailPageDoubleClicked(QGraphicsItem* item, int index)`**:
  ```cpp
  void thumbnailPageDoubleClicked(QGraphicsItem* item, int index);
  ```
  ��������ͼҳ��˫���¼���

- **`pageClicked(QGraphicsItem* item, int index)`**:
  ```cpp
  void pageClicked(QGraphicsItem* item, int index);
  ```
  ����ҳ�����¼���

- **`addToDocument()`**:
  ```cpp
  void addToDocument();
  ```
  ��������ӵ��ĵ��С�

- **`addFolderOfImages()`**:
  ```cpp
  void addFolderOfImages();
  ```
  ���ͼƬ�ļ��С�

- **`addFileToDocument()`**:
  ```cpp
  void addFileToDocument();
  ```
  ���ĵ�������ļ���

- **`addImages()`**:
  ```cpp
  void addImages();
  ```
  ���ͼƬ��

- **`refreshDocumentThumbnailsView(WBDocumentContainer* source)`**:
  ```cpp
  void refreshDocumentThumbnailsView(WBDocumentContainer* source);
  ```
  ˢ���ĵ�����ͼ��ͼ��

### �ܽ�

`WBDocumentController` ���Ŀ���ǹ����ĵ����ĵ���صĲ���������������ɾ�������򡢵��뵼���ȹ��ܡ�����������º͹����û�����Ԫ�أ��������û��Ľ���������

*/