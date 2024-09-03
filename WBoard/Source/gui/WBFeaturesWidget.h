#ifndef WBFEATURESWIDGET_H
#define WBFEATURESWIDGET_H

#include <QWidget>
#include <QListView>
#include <QGraphicsView>
#include <QAbstractListModel>
#include <QPixmap>
#include <QVBoxLayout>
#include <QSlider>
#include <QUrl>
#include <QStyledItemDelegate>
#include <QLocale>
#include <QGraphicsLinearLayout>
#include <QStackedWidget>
#include <QDropEvent>
#include <QPushButton>
#include <QProgressBar>
#include <QLabel>
#include <QTreeWidget>

#include "WBDockPaletteWidget.h"
#include "core/WBSettings.h"
#include "board/WBFeaturesController.h"
#include "api/WBWidgetUniboardAPI.h"
#include "WBFeaturesActionBar.h"
#include "WBRubberBand.h"
#include <QtWebEngine>
#include <QWebEngineView>
#include <QWebEngineSettings>

#define THUMBNAIL_WIDTH 400
#define ID_LISTVIEW 0
#define ID_PROPERTIES 1
#define ID_WEBVIEW 2

class WBListModel;

class WBFeaturesModel;
class WBFeaturesItemDelegate;
class WBFeaturesPathItemDelegate;
class WBFeaturesProxyModel;
class WBFeaturesSearchProxyModel;
class WBFeaturesPathProxyModel;
class WBFeaturesPathViewer;
class WBFeatureProperties;
class WBFeatureItemButton;
class WBFeaturesListView;
class WBFeaturesWebView;
class WBFeaturesNavigatorWidget;
class WBFeaturesMimeData;
class WBFeaturesCentralWidget;
class WBFeaturesNewFolderDialog;
class WBFeaturesProgressBar;

// WBFeaturesWidget：继承自 `WBDockPaletteWidget` ，包含了与功能控制器、视图、布局、操作栏等相关的成员变量。
// 定义了一些信号和私有槽函数，用于处理各种操作和交互事件，如文件加载、元素选择、搜索等。
// WBFeaturesWidget 类是一个功能全面的面板小部件，用于管理和显示各种功能。
// 它支持多种操作，包括文件预览、搜索、添加到收藏夹、从收藏夹移除、删除等。
// 通过这些方法和成员变量，WBFeaturesWidget 提供了一个灵活且功能强大的面板，适用于复杂的功能管理需求。
class WBFeaturesWidget : public WBDockPaletteWidget
{
    Q_OBJECT
public:
    // 初始化 WBFeaturesWidget，设置父对象并初始化内部数据结构。
    WBFeaturesWidget(QWidget* parent=0, const char* name="WBFeaturesWidget");
    virtual ~WBFeaturesWidget();

    // 确定小部件在特定模式下是否可见。该方法在 eWBDockPaletteWidget_BOARD 和 eWBDockPaletteWidget_DESKTOP 模式下返回 true。
    bool visibleInMode(eWBDockPaletteWidgetMode mode)
    {
        return mode == eWBDockPaletteWidget_BOARD
            || mode == eWBDockPaletteWidget_DESKTOP;
    }
    // 返回控制器指针。
    WBFeaturesController * getFeaturesController() const { return controller; }
    // 导入一张图像，并可选设置文件名。
    void importImage(const QImage &image, const QString &fileName = QString());

    static const int minThumbnailSize = 20;                     // 缩略图的最小尺寸。
    static const int maxThumbnailSize = 100;                    // 缩略图的最大尺寸。
    static const int defaultThumbnailSize = 40;                 // 缩略图的默认尺寸。

    static const char *objNamePathList;                         // 路径列表对象名称。
    static const char *objNameFeatureList;                      // 功能列表对象名称。

public:
    int scrollbarHorisontalPadding() const { return 10;}        // 返回水平滚动条填充值。
    int scrollbarVerticalIndent() const { return 0;}            // 返回垂直滚动条缩进值。

signals:
    void sendFileNameList(const QStringList lst);               // 当需要发送文件名列表时发出此信号。

private slots:
    // 处理预览加载事件。
    void onPreviewLoaded(int id, bool pSuccess, QUrl sourceUrl, QUrl originalUrl, QString pContentTypeHeader, QByteArray pData, QPointF pPos, QSize pSize, bool isBackground);
    void currentSelected( const QModelIndex & );                                                // 处理当前选择事件。
    void searchStarted( const QString & );                                                      // 处理搜索开始事件。
    void createNewFolder();                                                                     // 创建新文件夹。
    void deleteElements( const WBFeaturesMimeData * );                                          // 删除元素。
    void addToFavorite( const WBFeaturesMimeData  *);                                           // 添加元素到收藏夹。
    void removeFromFavorite( const WBFeaturesMimeData * );                                      // 从收藏夹中移除元素。
    void onDisplayMetadata( QMap<QString,QString> );                                            // 显示元数据。
    void onAddDownloadedFileToLibrary(bool, QUrl, QString, QByteArray, QString pTitle);         // 将下载的文件添加到库中。
    void addElementsToFavorite();                                                               // 添加元素到收藏夹。
    void removeElementsFromFavorite();                                                          // 从收藏夹中移除元素。
    void deleteSelectedElements();                                                              // 删除选定的元素。
    void rescanModel();                                                                         // 重新扫描模型。
    void lockIt(bool pLock);                                                                    // 锁定或解锁。

private:
    void switchToListView();                                    // 切换到列表视图。
    void switchToProperties();                                  // 切换到属性视图。
    void switchToWebView();                                     // 切换到网页视图。

private:
    WBFeaturesController *controller;                           // 功能面板的控制器对象。
    WBFeaturesListView *pathListView;                           // 路径列表视图对象。
    QVBoxLayout *layout;                                        // 垂直布局对象。
    WBFeaturesActionBar *mActionBar;                            // 动作栏对象。
    WBDownloadHttpFile* imageGatherer;                          // 图像收集器对象。
    WBFeaturesCentralWidget *centralWidget;                     // 中央小部件对象。
};

class WBFeaturesMimeData : public QMimeData
{
    Q_OBJECT

public:
    virtual QStringList formats() const;
    QList<WBFeature> features() const {return mFeatures;}
    void setFeatures(const QList<WBFeature> &fList) {mFeatures = fList;}

private:
    QList<WBFeature> mFeatures;
};

class WBFeaturesListView : public QListView
{
    Q_OBJECT

public:
    WBFeaturesListView( QWidget* parent=0, const char* name="WBFeaturesListView" );
    virtual ~WBFeaturesListView() {;}

protected:
    virtual void dragEnterEvent( QDragEnterEvent *event );
    virtual void dropEvent( QDropEvent *event );
    virtual void dragMoveEvent( QDragMoveEvent *event );

private slots:
    void thumbnailSizeChanged(int);

};

class WBFeaturesNavigatorWidget: public QWidget
{
    Q_OBJECT

public:
    WBFeaturesNavigatorWidget(QWidget *parent, const char* name = "");
    WBFeaturesListView *listView() {return mListView;}
    void setSliderPosition(int pValue);

private:
    WBFeaturesListView *mListView;
    QSlider *mListSlider;

};

class WBFeaturesCentralWidget : public QWidget
{
  Q_OBJECT

public:
    enum StackElement{
        MainList = 0,
        FeaturePropertiesList,
        FeaturesWebView
    };

    enum AddWidget {
        NewFolderDialog = 0,
        ProgressBarWidget
    };

    enum AddWidgetState {
        NonModal = 0,
        Modal
    };

    WBFeaturesCentralWidget(QWidget *parent = 0);
    void setSliderPosition(int pValue) {mNavigator->setSliderPosition(pValue);}

    WBFeaturesListView *listView() {return mNavigator->listView();}
    void showElement(const WBFeature &feature, StackElement pView);
    void switchTo(StackElement pView);
    void setPropertiesPixmap(const QPixmap &pix);
    void setPropertiesThumbnail(const QPixmap &pix);
    StackElement currentView() const {return static_cast<StackElement>(mStackedWidget->currentIndex());}
    WBFeature getCurElementFromProperties();

    void setLockedExcludingAdditional(bool pLock);

    QStackedWidget *mStackedWidget;
    WBFeaturesNavigatorWidget *mNavigator;
    WBFeatureProperties *mFeatureProperties;
    WBFeaturesWebView *webView;

    QStackedWidget *mAdditionalDataContainer;

signals:
    void lockMainWidget(bool pLock);
    void createNewFolderSignal(QString pStr);
    void sendFileNameList(const QStringList lst);

//    progressbar widget related signals
    void maxFilesCountEvaluated(int pValue);
    void increaseStatusBarValue();
    void scanCategory(const QString &);
    void scanPath(const QString &);

public slots:
    void showAdditionalData(AddWidget pWidgetType, AddWidgetState pState = NonModal);

private slots:
    void createNewFolderSlot(QString pStr);
    void hideAdditionalData();

    void scanStarted();
    void scanFinished();
};

class WBFeaturesNewFolderDialog : public QWidget
{
    Q_OBJECT

public:
    WBFeaturesNewFolderDialog(QWidget *parent = 0);
    void setRegexp(const QRegExp pRegExp);
    bool validString(const QString &pStr);

signals:
    void createNewFolder(QString str);
    void closeDialog();

private slots:
    void accept();
    void reject();
    void setFileNameList(const QStringList &pLst);
    void reactOnTextChanged(const QString &pStr);

private:
    QLineEdit *mLineEdit;
    QRegExpValidator *mValidator;
    QStringList mFileNameList;
    QPushButton *acceptButton;
    const QString acceptText;
    const QString cancelText;
    const QString labelText;
};

class WBFeaturesProgressInfo: public QWidget {
    Q_OBJECT

public:
    WBFeaturesProgressInfo(QWidget *parent = 0);

private slots:
    void setCommmonInfoText(const QString &str);
    void setDetailedInfoText(const QString &str);
    void setProgressMin(int pValue);
    void setProgressMax(int pValue);
    void increaseProgressValue();
    void sendFeature(WBFeature pFeature);

private:
    QProgressBar *mProgressBar;
    QLabel *mCommonInfoLabel;
    QLabel *mDetailedInfoLabel;
};

class WBFeaturesWebView : public QWidget
{
    Q_OBJECT
public:
    WBFeaturesWebView(QWidget* parent = 0, const char* name = "WBFeaturesWebView");
    virtual ~WBFeaturesWebView();

    void showElement(const WBFeature &elem);

private slots:
    void onLoadFinished(bool ok);
    void javaScriptWindowObjectCleared();

private:
    QWebEngineView* mpView;
    QWebEngineSettings* mpWebSettings;
    QVBoxLayout* mpLayout;
    WBWidgetUniboardAPI* mpSankoreAPI;
};

class WBFeatureProperties : public QWidget
{
    Q_OBJECT
public:
    WBFeatureProperties(QWidget* parent=0, const char* name="WBFeatureProperties");
    ~WBFeatureProperties();

    void showElement(const WBFeature &elem);
    WBFeature getCurrentElement() const;
    void setOrigPixmap(const QPixmap &pix);
    void setThumbnail(const QPixmap &pix);

protected:
    void resizeEvent(QResizeEvent *event);
    void showEvent(QShowEvent *event);

private slots:
    void onAddToPage();
    void onAddToLib();
    void onSetAsBackground();
    //void onBack();

private:
    void populateMetadata();
    void adaptSize();

    QVBoxLayout* mpLayout;
    QHBoxLayout* mpButtonLayout;
    WBFeatureItemButton *mpAddPageButton;
    WBFeatureItemButton *mpAddToLibButton;
    WBFeatureItemButton *mpSetAsBackgroundButton;
    QLabel* mpObjInfoLabel;
    QTreeWidget* mpObjInfos;
    QLabel* mpThumbnail;
    QPixmap* mpOrigPixmap;
    int maxThumbHeight;
    WBFeature *mpElement;
    QTreeWidgetItem* mpItem;
};

class WBFeatureItemButton : public QPushButton
{
public:
    WBFeatureItemButton(QWidget* parent=0, const char* name="WBFeatureItemButton");
    ~WBFeatureItemButton();
};

class WBFeaturesModel : public QAbstractListModel
{
    Q_OBJECT

signals:
    void dataRestructured();

public:
    WBFeaturesModel(QList<WBFeature> *pFeaturesList, QObject *parent = 0) : QAbstractListModel(parent), featuresList(pFeaturesList) {;}
    virtual ~WBFeaturesModel(){;}

    void deleteFavoriteItem( const QString &path );
    void deleteItem( const QString &path );
    void deleteItem(const WBFeature &feature);

    QVariant data( const QModelIndex &index, int role = Qt::DisplayRole ) const;
    QMimeData *mimeData( const QModelIndexList &indexes ) const;
    QStringList mimeTypes() const;
    int rowCount( const QModelIndex &parent ) const;
    Qt::ItemFlags flags( const QModelIndex &index ) const;
    bool dropMimeData(const QMimeData *mimeData, Qt::DropAction action, int row, int column, const QModelIndex &parent);
    bool removeRows(int row, int count, const QModelIndex &parent = QModelIndex());
    bool removeRow(int row, const QModelIndex &parent = QModelIndex());
    //bool insertRows(int row, int count, const QModelIndex &parent = QModelIndex());
    //bool insertRow(int row, const QModelIndex &parent = QModelIndex());

    void moveData(const WBFeature &source, const WBFeature &destination, Qt::DropAction action, bool deleteManualy = false);
    Qt::DropActions supportedDropActions() const { return Qt::MoveAction | Qt::CopyAction; }
    Qt::DropActions supportedDragActions() const { return Qt::MoveAction | Qt::CopyAction; }

//    void setFeaturesList(QList <WBFeature> *flist ) { featuresList = flist; }

public slots:
    void addItem( const WBFeature &item );

private:
    QList <WBFeature> *featuresList;
};

class WBFeaturesProxyModel : public QSortFilterProxyModel
{
    Q_OBJECT
public:
    WBFeaturesProxyModel(QObject *parent = 0) : QSortFilterProxyModel(parent) {;}
    virtual ~WBFeaturesProxyModel() {}
protected:
    virtual bool filterAcceptsRow ( int sourceRow, const QModelIndex & sourceParent ) const;
};

class WBFeaturesSearchProxyModel : public QSortFilterProxyModel
{
    Q_OBJECT
public:
    WBFeaturesSearchProxyModel(QObject *parent = 0) : QSortFilterProxyModel(parent), mFilterPrefix() {;}
    virtual ~WBFeaturesSearchProxyModel() {}
    void setFilterPrefix(const QString &newPrefix) {mFilterPrefix = newPrefix;}
protected:
    virtual bool filterAcceptsRow ( int sourceRow, const QModelIndex & sourceParent ) const;
private:
    QString mFilterPrefix;
};

class WBFeaturesPathProxyModel : public QSortFilterProxyModel
{
    Q_OBJECT
public:
    WBFeaturesPathProxyModel(QObject *parent = 0) : QSortFilterProxyModel(parent) {;}
    virtual ~WBFeaturesPathProxyModel() {}
    void setPath( const QString &p ) { path = p; }
protected:
    virtual bool filterAcceptsRow ( int sourceRow, const QModelIndex & sourceParent ) const;
private:
    QString path;
};

class WBFeaturesItemDelegate : public QStyledItemDelegate
{
    Q_OBJECT
public:
    WBFeaturesItemDelegate(QObject *parent = 0, const QListView *lw = 0) : QStyledItemDelegate(parent) { listView = lw; }
    ~WBFeaturesItemDelegate() {}
    //WBFeaturesItemDelegate(const QListView *lw = 0) { listView = lw; };
    //void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const;
    //QSize sizeHint(const QStyleOptionViewItem &option, const QModelIndex &index) const;
    virtual QString    displayText ( const QVariant & value, const QLocale & locale ) const;
private:
    const QListView *listView;
};

class WBFeaturesPathItemDelegate : public QStyledItemDelegate
{
    Q_OBJECT
public:
    WBFeaturesPathItemDelegate(QObject *parent = 0);
    ~WBFeaturesPathItemDelegate();
    virtual QString    displayText ( const QVariant & value, const QLocale & locale ) const;
    void paint( QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const;
private:
    QPixmap *arrowPixmap;
};

#endif // WBFEATURESWIDGET_H
