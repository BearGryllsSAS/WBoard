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

// WBFeaturesWidget���̳��� `WBDockPaletteWidget` ���������빦�ܿ���������ͼ�����֡�����������صĳ�Ա������
// ������һЩ�źź�˽�вۺ��������ڴ�����ֲ����ͽ����¼������ļ����ء�Ԫ��ѡ�������ȡ�
// WBFeaturesWidget ����һ������ȫ������С���������ڹ������ʾ���ֹ��ܡ�
// ��֧�ֶ��ֲ����������ļ�Ԥ������������ӵ��ղؼС����ղؼ��Ƴ���ɾ���ȡ�
// ͨ����Щ�����ͳ�Ա������WBFeaturesWidget �ṩ��һ������ҹ���ǿ�����壬�����ڸ��ӵĹ��ܹ�������
class WBFeaturesWidget : public WBDockPaletteWidget
{
    Q_OBJECT
public:
    // ��ʼ�� WBFeaturesWidget�����ø����󲢳�ʼ���ڲ����ݽṹ��
    WBFeaturesWidget(QWidget* parent=0, const char* name="WBFeaturesWidget");
    virtual ~WBFeaturesWidget();

    // ȷ��С�������ض�ģʽ���Ƿ�ɼ����÷����� eWBDockPaletteWidget_BOARD �� eWBDockPaletteWidget_DESKTOP ģʽ�·��� true��
    bool visibleInMode(eWBDockPaletteWidgetMode mode)
    {
        return mode == eWBDockPaletteWidget_BOARD
            || mode == eWBDockPaletteWidget_DESKTOP;
    }
    // ���ؿ�����ָ�롣
    WBFeaturesController * getFeaturesController() const { return controller; }
    // ����һ��ͼ�񣬲���ѡ�����ļ�����
    void importImage(const QImage &image, const QString &fileName = QString());

    static const int minThumbnailSize = 20;                     // ����ͼ����С�ߴ硣
    static const int maxThumbnailSize = 100;                    // ����ͼ�����ߴ硣
    static const int defaultThumbnailSize = 40;                 // ����ͼ��Ĭ�ϳߴ硣

    static const char *objNamePathList;                         // ·���б�������ơ�
    static const char *objNameFeatureList;                      // �����б�������ơ�

public:
    int scrollbarHorisontalPadding() const { return 10;}        // ����ˮƽ���������ֵ��
    int scrollbarVerticalIndent() const { return 0;}            // ���ش�ֱ����������ֵ��

signals:
    void sendFileNameList(const QStringList lst);               // ����Ҫ�����ļ����б�ʱ�������źš�

private slots:
    // ����Ԥ�������¼���
    void onPreviewLoaded(int id, bool pSuccess, QUrl sourceUrl, QUrl originalUrl, QString pContentTypeHeader, QByteArray pData, QPointF pPos, QSize pSize, bool isBackground);
    void currentSelected( const QModelIndex & );                                                // ����ǰѡ���¼���
    void searchStarted( const QString & );                                                      // ����������ʼ�¼���
    void createNewFolder();                                                                     // �������ļ��С�
    void deleteElements( const WBFeaturesMimeData * );                                          // ɾ��Ԫ�ء�
    void addToFavorite( const WBFeaturesMimeData  *);                                           // ���Ԫ�ص��ղؼС�
    void removeFromFavorite( const WBFeaturesMimeData * );                                      // ���ղؼ����Ƴ�Ԫ�ء�
    void onDisplayMetadata( QMap<QString,QString> );                                            // ��ʾԪ���ݡ�
    void onAddDownloadedFileToLibrary(bool, QUrl, QString, QByteArray, QString pTitle);         // �����ص��ļ���ӵ����С�
    void addElementsToFavorite();                                                               // ���Ԫ�ص��ղؼС�
    void removeElementsFromFavorite();                                                          // ���ղؼ����Ƴ�Ԫ�ء�
    void deleteSelectedElements();                                                              // ɾ��ѡ����Ԫ�ء�
    void rescanModel();                                                                         // ����ɨ��ģ�͡�
    void lockIt(bool pLock);                                                                    // �����������

private:
    void switchToListView();                                    // �л����б���ͼ��
    void switchToProperties();                                  // �л���������ͼ��
    void switchToWebView();                                     // �л�����ҳ��ͼ��

private:
    WBFeaturesController *controller;                           // �������Ŀ���������
    WBFeaturesListView *pathListView;                           // ·���б���ͼ����
    QVBoxLayout *layout;                                        // ��ֱ���ֶ���
    WBFeaturesActionBar *mActionBar;                            // ����������
    WBDownloadHttpFile* imageGatherer;                          // ͼ���ռ�������
    WBFeaturesCentralWidget *centralWidget;                     // ����С��������
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
