/********************************************************************************
** Form generated from reading UI file 'mainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionStylus;
    QAction *actionBackgrounds;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionBack;
    QAction *actionForward;
    QAction *actionDocument;
    QAction *actionWeb;
    QAction *actionLineSmall;
    QAction *actionLineMedium;
    QAction *actionLineLarge;
    QAction *actionQuit;
    QAction *actionEraserSmall;
    QAction *actionEraserMedium;
    QAction *actionEraserLarge;
    QAction *actionColor0;
    QAction *actionColor1;
    QAction *actionColor2;
    QAction *actionColor3;
    QAction *actionColor4;
    QAction *actionWebBack;
    QAction *actionWebForward;
    QAction *actionWebReload;
    QAction *actionHome;
    QAction *actionBookmarks;
    QAction *actionAddBookmark;
    QAction *actionBoard;
    QAction *actionErase;
    QAction *actionPreferences;
    QAction *actionLibrary;
    QAction *actionMenu;
    QAction *actionDesktop;
    QAction *actionWebBigger;
    QAction *actionWebSmaller;
    QAction *actionNewFolder;
    QAction *actionNewDocument;
    QAction *actionImport;
    QAction *actionExport;
    QAction *actionOpen;
    QAction *actionDuplicate;
    QAction *actionDelete;
    QAction *actionAddToWorkingDocument;
    QAction *actionDocumentAdd;
    QAction *actionRename;
    QAction *actionDocumentTools;
    QAction *actionWebTools;
    QAction *actionMultiScreen;
    QAction *actionWidePageSize;
    QAction *actionRegularPageSize;
    QAction *actionCustomPageSize;
    QAction *actionStopLoading;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionSleep;
    QAction *actionVirtualKeyboard;
    QAction *actionPlainLightBackground;
    QAction *actionCrossedLightBackground;
    QAction *actionRuledLightBackground;
    QAction *actionPlainDarkBackground;
    QAction *actionCrossedDarkBackground;
    QAction *actionRuledDarkBackground;
    QAction *actionPodcast;
    QAction *actionPodcastRecord;
    QAction *actionEraseItems;
    QAction *actionEraseAnnotations;
    QAction *actionClearPage;
    QAction *actionAdd;
    QAction *actionPen;
    QAction *actionEraser;
    QAction *actionMarker;
    QAction *actionSelector;
    QAction *actionHand;
    QAction *actionZoomIn;
    QAction *actionZoomOut;
    QAction *actionPointer;
    QAction *actionLine;
    QAction *actionText;
    QAction *actionCapture;
    QAction *actionAddItemToCurrentPage;
    QAction *actionAddItemToNewPage;
    QAction *actionAddItemToLibrary;
    QAction *actionPages;
    QAction *actionNewPage;
    QAction *actionDuplicatePage;
    QAction *actionImportPage;
    QAction *actionPodcastPause;
    QAction *actionPodcastConfig;
    QAction *actionWebTrap;
    QAction *actionWebCustomCapture;
    QAction *actionWebWindowCapture;
    QAction *actionWebOEmbed;
    QAction *actionWebShowHideOnDisplay;
    QAction *actionEraseDesktopAnnotations;
    QAction *actionEduMedia;
    QAction *actionCheckUpdate;
    QAction *actionHideApplication;
    QAction *actionPlay;
    QAction *actionEraseBackground;
    QAction *actionOpenTutorial;
    QAction *actionDefaultGridSize;
    QWidget *centralwidget;
    QToolBar *boardToolBar;
    QToolBar *webToolBar;
    QToolBar *documentToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1342, 199);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/WBoard.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setIconSize(QSize(32, 32));
        MainWindow->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        actionStylus = new QAction(MainWindow);
        actionStylus->setObjectName(QString::fromUtf8("actionStylus"));
        actionStylus->setCheckable(true);
        actionStylus->setChecked(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/toolbar/stylus.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStylus->setIcon(icon1);
        actionBackgrounds = new QAction(MainWindow);
        actionBackgrounds->setObjectName(QString::fromUtf8("actionBackgrounds"));
        actionBackgrounds->setCheckable(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/toolbar/background.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBackgrounds->setIcon(icon2);
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/toolbar/undoOn.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon3);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/toolbar/redoOn.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon4);
        actionBack = new QAction(MainWindow);
        actionBack->setObjectName(QString::fromUtf8("actionBack"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/toolbar/previousPageOn.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBack->setIcon(icon5);
        actionForward = new QAction(MainWindow);
        actionForward->setObjectName(QString::fromUtf8("actionForward"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/toolbar/nextPageOn.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionForward->setIcon(icon6);
        actionDocument = new QAction(MainWindow);
        actionDocument->setObjectName(QString::fromUtf8("actionDocument"));
        actionDocument->setCheckable(false);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/toolbar/documents.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDocument->setIcon(icon7);
        actionWeb = new QAction(MainWindow);
        actionWeb->setObjectName(QString::fromUtf8("actionWeb"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/toolbar/web.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWeb->setIcon(icon8);
        actionLineSmall = new QAction(MainWindow);
        actionLineSmall->setObjectName(QString::fromUtf8("actionLineSmall"));
        actionLineSmall->setCheckable(true);
        actionLineSmall->setChecked(true);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/toolbar/smallPen.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLineSmall->setIcon(icon9);
        actionLineMedium = new QAction(MainWindow);
        actionLineMedium->setObjectName(QString::fromUtf8("actionLineMedium"));
        actionLineMedium->setCheckable(true);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/toolbar/mediumPen.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLineMedium->setIcon(icon10);
        actionLineLarge = new QAction(MainWindow);
        actionLineLarge->setObjectName(QString::fromUtf8("actionLineLarge"));
        actionLineLarge->setCheckable(true);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/toolbar/largePen.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLineLarge->setIcon(icon11);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/toolbar/quitOn.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon12);
        actionQuit->setShortcutContext(Qt::WindowShortcut);
        actionQuit->setMenuRole(QAction::NoRole);
        actionEraserSmall = new QAction(MainWindow);
        actionEraserSmall->setObjectName(QString::fromUtf8("actionEraserSmall"));
        actionEraserSmall->setCheckable(true);
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/toolbar/smallEraser.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEraserSmall->setIcon(icon13);
        actionEraserMedium = new QAction(MainWindow);
        actionEraserMedium->setObjectName(QString::fromUtf8("actionEraserMedium"));
        actionEraserMedium->setCheckable(true);
        actionEraserMedium->setChecked(true);
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/images/toolbar/mediumEraser.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEraserMedium->setIcon(icon14);
        actionEraserLarge = new QAction(MainWindow);
        actionEraserLarge->setObjectName(QString::fromUtf8("actionEraserLarge"));
        actionEraserLarge->setCheckable(true);
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/images/toolbar/largeEraser.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEraserLarge->setIcon(icon15);
        actionColor0 = new QAction(MainWindow);
        actionColor0->setObjectName(QString::fromUtf8("actionColor0"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/images/toolbar/color.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionColor0->setIcon(icon16);
        actionColor1 = new QAction(MainWindow);
        actionColor1->setObjectName(QString::fromUtf8("actionColor1"));
        actionColor1->setIcon(icon16);
        actionColor2 = new QAction(MainWindow);
        actionColor2->setObjectName(QString::fromUtf8("actionColor2"));
        actionColor2->setIcon(icon16);
        actionColor3 = new QAction(MainWindow);
        actionColor3->setObjectName(QString::fromUtf8("actionColor3"));
        actionColor3->setIcon(icon16);
        actionColor4 = new QAction(MainWindow);
        actionColor4->setObjectName(QString::fromUtf8("actionColor4"));
        actionColor4->setIcon(icon16);
        actionWebBack = new QAction(MainWindow);
        actionWebBack->setObjectName(QString::fromUtf8("actionWebBack"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/images/toolbar/previous.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWebBack->setIcon(icon17);
        actionWebForward = new QAction(MainWindow);
        actionWebForward->setObjectName(QString::fromUtf8("actionWebForward"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/images/toolbar/next.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWebForward->setIcon(icon18);
        actionWebReload = new QAction(MainWindow);
        actionWebReload->setObjectName(QString::fromUtf8("actionWebReload"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/images/toolbar/reload.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWebReload->setIcon(icon19);
        actionHome = new QAction(MainWindow);
        actionHome->setObjectName(QString::fromUtf8("actionHome"));
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/images/toolbar/home.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHome->setIcon(icon20);
        actionBookmarks = new QAction(MainWindow);
        actionBookmarks->setObjectName(QString::fromUtf8("actionBookmarks"));
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/images/toolbar/bookmarks.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBookmarks->setIcon(icon21);
        actionAddBookmark = new QAction(MainWindow);
        actionAddBookmark->setObjectName(QString::fromUtf8("actionAddBookmark"));
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/images/toolbar/addBookmark.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAddBookmark->setIcon(icon22);
        actionBoard = new QAction(MainWindow);
        actionBoard->setObjectName(QString::fromUtf8("actionBoard"));
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/images/toolbar/board.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBoard->setIcon(icon23);
        actionErase = new QAction(MainWindow);
        actionErase->setObjectName(QString::fromUtf8("actionErase"));
        actionErase->setCheckable(true);
        QIcon icon24;
        icon24.addFile(QString::fromUtf8(":/images/toolbar/clearPage.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionErase->setIcon(icon24);
        actionPreferences = new QAction(MainWindow);
        actionPreferences->setObjectName(QString::fromUtf8("actionPreferences"));
        QIcon icon25;
        icon25.addFile(QString::fromUtf8(":/images/toolbar/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPreferences->setIcon(icon25);
        actionLibrary = new QAction(MainWindow);
        actionLibrary->setObjectName(QString::fromUtf8("actionLibrary"));
        actionLibrary->setCheckable(true);
        QIcon icon26;
        icon26.addFile(QString::fromUtf8(":/images/toolbar/library.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLibrary->setIcon(icon26);
        actionMenu = new QAction(MainWindow);
        actionMenu->setObjectName(QString::fromUtf8("actionMenu"));
        QIcon icon27;
        icon27.addFile(QString::fromUtf8(":/images/toolbar/menu.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMenu->setIcon(icon27);
        actionDesktop = new QAction(MainWindow);
        actionDesktop->setObjectName(QString::fromUtf8("actionDesktop"));
        QIcon icon28;
        icon28.addFile(QString::fromUtf8(":/images/toolbar/display.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDesktop->setIcon(icon28);
        actionWebBigger = new QAction(MainWindow);
        actionWebBigger->setObjectName(QString::fromUtf8("actionWebBigger"));
        QIcon icon29;
        icon29.addFile(QString::fromUtf8(":/images/stylusPalette/zoomInOn.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWebBigger->setIcon(icon29);
        actionWebSmaller = new QAction(MainWindow);
        actionWebSmaller->setObjectName(QString::fromUtf8("actionWebSmaller"));
        QIcon icon30;
        icon30.addFile(QString::fromUtf8(":/images/stylusPalette/zoomOutOn.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWebSmaller->setIcon(icon30);
        actionNewFolder = new QAction(MainWindow);
        actionNewFolder->setObjectName(QString::fromUtf8("actionNewFolder"));
        QIcon icon31;
        icon31.addFile(QString::fromUtf8(":/images/toolbar/newFolder.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNewFolder->setIcon(icon31);
        actionNewDocument = new QAction(MainWindow);
        actionNewDocument->setObjectName(QString::fromUtf8("actionNewDocument"));
        QIcon icon32;
        icon32.addFile(QString::fromUtf8(":/images/toolbar/newDocument.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNewDocument->setIcon(icon32);
        actionImport = new QAction(MainWindow);
        actionImport->setObjectName(QString::fromUtf8("actionImport"));
        QIcon icon33;
        icon33.addFile(QString::fromUtf8(":/images/toolbar/import.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionImport->setIcon(icon33);
        actionExport = new QAction(MainWindow);
        actionExport->setObjectName(QString::fromUtf8("actionExport"));
        QIcon icon34;
        icon34.addFile(QString::fromUtf8(":/images/toolbar/export.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExport->setIcon(icon34);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon35;
        icon35.addFile(QString::fromUtf8(":/images/toolbar/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon35);
        actionDuplicate = new QAction(MainWindow);
        actionDuplicate->setObjectName(QString::fromUtf8("actionDuplicate"));
        QIcon icon36;
        icon36.addFile(QString::fromUtf8(":/images/toolbar/duplicate.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDuplicate->setIcon(icon36);
        actionDelete = new QAction(MainWindow);
        actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
        QIcon icon37;
        icon37.addFile(QString::fromUtf8(":/images/toolbar/deleteDocument.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelete->setIcon(icon37);
        actionAddToWorkingDocument = new QAction(MainWindow);
        actionAddToWorkingDocument->setObjectName(QString::fromUtf8("actionAddToWorkingDocument"));
        QIcon icon38;
        icon38.addFile(QString::fromUtf8(":/images/toolbar/addToWorkingDoc.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAddToWorkingDocument->setIcon(icon38);
        actionDocumentAdd = new QAction(MainWindow);
        actionDocumentAdd->setObjectName(QString::fromUtf8("actionDocumentAdd"));
        QIcon icon39;
        icon39.addFile(QString::fromUtf8(":/images/toolbar/addToPage.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDocumentAdd->setIcon(icon39);
        actionRename = new QAction(MainWindow);
        actionRename->setObjectName(QString::fromUtf8("actionRename"));
        QIcon icon40;
        icon40.addFile(QString::fromUtf8(":/images/toolbar/rename.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRename->setIcon(icon40);
        actionRename->setMenuRole(QAction::TextHeuristicRole);
        actionDocumentTools = new QAction(MainWindow);
        actionDocumentTools->setObjectName(QString::fromUtf8("actionDocumentTools"));
        QIcon icon41;
        icon41.addFile(QString::fromUtf8(":/images/toolbar/tools.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDocumentTools->setIcon(icon41);
        actionWebTools = new QAction(MainWindow);
        actionWebTools->setObjectName(QString::fromUtf8("actionWebTools"));
        actionWebTools->setCheckable(true);
        actionWebTools->setIcon(icon41);
        actionMultiScreen = new QAction(MainWindow);
        actionMultiScreen->setObjectName(QString::fromUtf8("actionMultiScreen"));
        actionMultiScreen->setCheckable(true);
        actionMultiScreen->setChecked(true);
        actionMultiScreen->setIcon(icon28);
        actionWidePageSize = new QAction(MainWindow);
        actionWidePageSize->setObjectName(QString::fromUtf8("actionWidePageSize"));
        actionWidePageSize->setCheckable(true);
        actionWidePageSize->setIcon(icon39);
        actionWidePageSize->setIconVisibleInMenu(false);
        actionRegularPageSize = new QAction(MainWindow);
        actionRegularPageSize->setObjectName(QString::fromUtf8("actionRegularPageSize"));
        actionRegularPageSize->setCheckable(true);
        actionRegularPageSize->setIcon(icon39);
        actionRegularPageSize->setIconVisibleInMenu(false);
        actionCustomPageSize = new QAction(MainWindow);
        actionCustomPageSize->setObjectName(QString::fromUtf8("actionCustomPageSize"));
        actionCustomPageSize->setCheckable(true);
        actionCustomPageSize->setEnabled(false);
        actionCustomPageSize->setIcon(icon39);
        actionCustomPageSize->setIconVisibleInMenu(false);
        actionStopLoading = new QAction(MainWindow);
        actionStopLoading->setObjectName(QString::fromUtf8("actionStopLoading"));
        actionStopLoading->setIcon(icon37);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        QIcon icon42;
        icon42.addFile(QString::fromUtf8(":/images/toolbar/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon42);
        actionCut->setShortcutContext(Qt::ApplicationShortcut);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        QIcon icon43;
        icon43.addFile(QString::fromUtf8(":/images/toolbar/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon43);
        actionCopy->setShortcutContext(Qt::ApplicationShortcut);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        QIcon icon44;
        icon44.addFile(QString::fromUtf8(":/images/toolbar/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon44);
        actionPaste->setShortcutContext(Qt::ApplicationShortcut);
        actionPaste->setMenuRole(QAction::TextHeuristicRole);
        actionSleep = new QAction(MainWindow);
        actionSleep->setObjectName(QString::fromUtf8("actionSleep"));
        QIcon icon45;
        icon45.addFile(QString::fromUtf8(":/images/extraPalette/blackout.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon45.addFile(QString::fromUtf8(":/images/extraPalette/blackoutOn.png"), QSize(), QIcon::Normal, QIcon::On);
        actionSleep->setIcon(icon45);
        actionVirtualKeyboard = new QAction(MainWindow);
        actionVirtualKeyboard->setObjectName(QString::fromUtf8("actionVirtualKeyboard"));
        actionVirtualKeyboard->setCheckable(true);
        QIcon icon46;
        icon46.addFile(QString::fromUtf8(":/images/extraPalette/keyboard.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon46.addFile(QString::fromUtf8(":/images/extraPalette/keyboardOn.png"), QSize(), QIcon::Normal, QIcon::On);
        actionVirtualKeyboard->setIcon(icon46);
        actionPlainLightBackground = new QAction(MainWindow);
        actionPlainLightBackground->setObjectName(QString::fromUtf8("actionPlainLightBackground"));
        actionPlainLightBackground->setCheckable(true);
        QIcon icon47;
        icon47.addFile(QString::fromUtf8(":/images/backgroundPalette/background1.svg"), QSize(), QIcon::Normal, QIcon::Off);
        icon47.addFile(QString::fromUtf8(":/images/backgroundPalette/background1On.svg"), QSize(), QIcon::Normal, QIcon::On);
        actionPlainLightBackground->setIcon(icon47);
        actionCrossedLightBackground = new QAction(MainWindow);
        actionCrossedLightBackground->setObjectName(QString::fromUtf8("actionCrossedLightBackground"));
        actionCrossedLightBackground->setCheckable(true);
        QIcon icon48;
        icon48.addFile(QString::fromUtf8(":/images/backgroundPalette/background2.svg"), QSize(), QIcon::Normal, QIcon::Off);
        icon48.addFile(QString::fromUtf8(":/images/backgroundPalette/background2On.svg"), QSize(), QIcon::Normal, QIcon::On);
        actionCrossedLightBackground->setIcon(icon48);
        actionRuledLightBackground = new QAction(MainWindow);
        actionRuledLightBackground->setObjectName(QString::fromUtf8("actionRuledLightBackground"));
        actionRuledLightBackground->setCheckable(true);
        QIcon icon49;
        icon49.addFile(QString::fromUtf8(":/images/backgroundPalette/background5.svg"), QSize(), QIcon::Normal, QIcon::Off);
        icon49.addFile(QString::fromUtf8(":/images/backgroundPalette/background5On.svg"), QSize(), QIcon::Normal, QIcon::On);
        actionRuledLightBackground->setIcon(icon49);
        actionPlainDarkBackground = new QAction(MainWindow);
        actionPlainDarkBackground->setObjectName(QString::fromUtf8("actionPlainDarkBackground"));
        actionPlainDarkBackground->setCheckable(true);
        QIcon icon50;
        icon50.addFile(QString::fromUtf8(":/images/backgroundPalette/background3.svg"), QSize(), QIcon::Normal, QIcon::Off);
        icon50.addFile(QString::fromUtf8(":/images/backgroundPalette/background3On.svg"), QSize(), QIcon::Normal, QIcon::On);
        actionPlainDarkBackground->setIcon(icon50);
        actionCrossedDarkBackground = new QAction(MainWindow);
        actionCrossedDarkBackground->setObjectName(QString::fromUtf8("actionCrossedDarkBackground"));
        actionCrossedDarkBackground->setCheckable(true);
        QIcon icon51;
        icon51.addFile(QString::fromUtf8(":/images/backgroundPalette/background4.svg"), QSize(), QIcon::Normal, QIcon::Off);
        icon51.addFile(QString::fromUtf8(":/images/backgroundPalette/background4On.svg"), QSize(), QIcon::Normal, QIcon::On);
        actionCrossedDarkBackground->setIcon(icon51);
        actionRuledDarkBackground = new QAction(MainWindow);
        actionRuledDarkBackground->setObjectName(QString::fromUtf8("actionRuledDarkBackground"));
        actionRuledDarkBackground->setCheckable(true);
        QIcon icon52;
        icon52.addFile(QString::fromUtf8(":/images/backgroundPalette/background6.svg"), QSize(), QIcon::Normal, QIcon::Off);
        icon52.addFile(QString::fromUtf8(":/images/backgroundPalette/background6On.svg"), QSize(), QIcon::Normal, QIcon::On);
        actionRuledDarkBackground->setIcon(icon52);
        actionPodcast = new QAction(MainWindow);
        actionPodcast->setObjectName(QString::fromUtf8("actionPodcast"));
        actionPodcast->setCheckable(true);
        QIcon icon53;
        icon53.addFile(QString::fromUtf8(":/images/toolbar/record.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPodcast->setIcon(icon53);
        actionPodcastRecord = new QAction(MainWindow);
        actionPodcastRecord->setObjectName(QString::fromUtf8("actionPodcastRecord"));
        actionPodcastRecord->setCheckable(true);
        QIcon icon54;
        icon54.addFile(QString::fromUtf8(":/images/toolbar/record.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon54.addFile(QString::fromUtf8(":/images/toolbar/stop.png"), QSize(), QIcon::Normal, QIcon::On);
        actionPodcastRecord->setIcon(icon54);
        actionEraseItems = new QAction(MainWindow);
        actionEraseItems->setObjectName(QString::fromUtf8("actionEraseItems"));
        QIcon icon55;
        icon55.addFile(QString::fromUtf8(":/images/erasePalette/eraseItem.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionEraseItems->setIcon(icon55);
        actionEraseAnnotations = new QAction(MainWindow);
        actionEraseAnnotations->setObjectName(QString::fromUtf8("actionEraseAnnotations"));
        QIcon icon56;
        icon56.addFile(QString::fromUtf8(":/images/erasePalette/eraseAnnotation.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionEraseAnnotations->setIcon(icon56);
        actionClearPage = new QAction(MainWindow);
        actionClearPage->setObjectName(QString::fromUtf8("actionClearPage"));
        QIcon icon57;
        icon57.addFile(QString::fromUtf8(":/images/erasePalette/eraseAll.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionClearPage->setIcon(icon57);
        actionAdd = new QAction(MainWindow);
        actionAdd->setObjectName(QString::fromUtf8("actionAdd"));
        actionAdd->setIcon(icon39);
        actionPen = new QAction(MainWindow);
        actionPen->setObjectName(QString::fromUtf8("actionPen"));
        actionPen->setCheckable(true);
        actionPen->setChecked(true);
        QIcon icon58;
        icon58.addFile(QString::fromUtf8(":/images/stylusPalette/pen.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon58.addFile(QString::fromUtf8(":/images/stylusPalette/penOn.png"), QSize(), QIcon::Normal, QIcon::On);
        actionPen->setIcon(icon58);
        actionEraser = new QAction(MainWindow);
        actionEraser->setObjectName(QString::fromUtf8("actionEraser"));
        actionEraser->setCheckable(true);
        QIcon icon59;
        icon59.addFile(QString::fromUtf8(":/images/stylusPalette/eraser.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon59.addFile(QString::fromUtf8(":/images/stylusPalette/eraserOn.png"), QSize(), QIcon::Normal, QIcon::On);
        actionEraser->setIcon(icon59);
        actionMarker = new QAction(MainWindow);
        actionMarker->setObjectName(QString::fromUtf8("actionMarker"));
        actionMarker->setCheckable(true);
        QIcon icon60;
        icon60.addFile(QString::fromUtf8(":/images/stylusPalette/marker.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon60.addFile(QString::fromUtf8(":/images/stylusPalette/markerOn.png"), QSize(), QIcon::Normal, QIcon::On);
        actionMarker->setIcon(icon60);
        actionSelector = new QAction(MainWindow);
        actionSelector->setObjectName(QString::fromUtf8("actionSelector"));
        actionSelector->setCheckable(true);
        QIcon icon61;
        icon61.addFile(QString::fromUtf8(":/images/stylusPalette/arrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon61.addFile(QString::fromUtf8(":/images/stylusPalette/arrowOn.png"), QSize(), QIcon::Normal, QIcon::On);
        actionSelector->setIcon(icon61);
        actionHand = new QAction(MainWindow);
        actionHand->setObjectName(QString::fromUtf8("actionHand"));
        actionHand->setCheckable(true);
        QIcon icon62;
        icon62.addFile(QString::fromUtf8(":/images/stylusPalette/hand.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon62.addFile(QString::fromUtf8(":/images/stylusPalette/handOn.png"), QSize(), QIcon::Normal, QIcon::On);
        actionHand->setIcon(icon62);
        actionZoomIn = new QAction(MainWindow);
        actionZoomIn->setObjectName(QString::fromUtf8("actionZoomIn"));
        actionZoomIn->setCheckable(true);
        QIcon icon63;
        icon63.addFile(QString::fromUtf8(":/images/stylusPalette/zoomIn.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon63.addFile(QString::fromUtf8(":/images/stylusPalette/zoomInOn.png"), QSize(), QIcon::Normal, QIcon::On);
        actionZoomIn->setIcon(icon63);
        actionZoomOut = new QAction(MainWindow);
        actionZoomOut->setObjectName(QString::fromUtf8("actionZoomOut"));
        actionZoomOut->setCheckable(true);
        QIcon icon64;
        icon64.addFile(QString::fromUtf8(":/images/stylusPalette/zoomOut.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon64.addFile(QString::fromUtf8(":/images/stylusPalette/zoomOutOn.png"), QSize(), QIcon::Normal, QIcon::On);
        actionZoomOut->setIcon(icon64);
        actionPointer = new QAction(MainWindow);
        actionPointer->setObjectName(QString::fromUtf8("actionPointer"));
        actionPointer->setCheckable(true);
        QIcon icon65;
        icon65.addFile(QString::fromUtf8(":/images/stylusPalette/laser.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon65.addFile(QString::fromUtf8(":/images/stylusPalette/laserOn.png"), QSize(), QIcon::Normal, QIcon::On);
        actionPointer->setIcon(icon65);
        actionLine = new QAction(MainWindow);
        actionLine->setObjectName(QString::fromUtf8("actionLine"));
        actionLine->setCheckable(true);
        QIcon icon66;
        icon66.addFile(QString::fromUtf8(":/images/stylusPalette/line.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon66.addFile(QString::fromUtf8(":/images/stylusPalette/lineOn.png"), QSize(), QIcon::Normal, QIcon::On);
        actionLine->setIcon(icon66);
        actionText = new QAction(MainWindow);
        actionText->setObjectName(QString::fromUtf8("actionText"));
        actionText->setCheckable(true);
        QIcon icon67;
        icon67.addFile(QString::fromUtf8(":/images/stylusPalette/text.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon67.addFile(QString::fromUtf8(":/images/stylusPalette/textOn.png"), QSize(), QIcon::Normal, QIcon::On);
        actionText->setIcon(icon67);
        actionCapture = new QAction(MainWindow);
        actionCapture->setObjectName(QString::fromUtf8("actionCapture"));
        actionCapture->setCheckable(true);
        QIcon icon68;
        icon68.addFile(QString::fromUtf8(":/images/stylusPalette/captureArea.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon68.addFile(QString::fromUtf8(":/images/stylusPalette/captureAreaOn.png"), QSize(), QIcon::Normal, QIcon::On);
        actionCapture->setIcon(icon68);
        actionAddItemToCurrentPage = new QAction(MainWindow);
        actionAddItemToCurrentPage->setObjectName(QString::fromUtf8("actionAddItemToCurrentPage"));
        QIcon icon69;
        icon69.addFile(QString::fromUtf8(":/images/addItemToCurrentPage.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionAddItemToCurrentPage->setIcon(icon69);
        actionAddItemToNewPage = new QAction(MainWindow);
        actionAddItemToNewPage->setObjectName(QString::fromUtf8("actionAddItemToNewPage"));
        QIcon icon70;
        icon70.addFile(QString::fromUtf8(":/images/addItemToNewPage.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionAddItemToNewPage->setIcon(icon70);
        actionAddItemToLibrary = new QAction(MainWindow);
        actionAddItemToLibrary->setObjectName(QString::fromUtf8("actionAddItemToLibrary"));
        QIcon icon71;
        icon71.addFile(QString::fromUtf8(":/images/addItemToLibrary.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionAddItemToLibrary->setIcon(icon71);
        actionPages = new QAction(MainWindow);
        actionPages->setObjectName(QString::fromUtf8("actionPages"));
        actionPages->setCheckable(false);
        actionPages->setIcon(icon32);
        actionNewPage = new QAction(MainWindow);
        actionNewPage->setObjectName(QString::fromUtf8("actionNewPage"));
        actionNewPage->setIcon(icon69);
        actionDuplicatePage = new QAction(MainWindow);
        actionDuplicatePage->setObjectName(QString::fromUtf8("actionDuplicatePage"));
        actionDuplicatePage->setIcon(icon70);
        actionImportPage = new QAction(MainWindow);
        actionImportPage->setObjectName(QString::fromUtf8("actionImportPage"));
        actionImportPage->setIcon(icon71);
        actionPodcastPause = new QAction(MainWindow);
        actionPodcastPause->setObjectName(QString::fromUtf8("actionPodcastPause"));
        actionPodcastPause->setCheckable(true);
        actionPodcastPause->setEnabled(false);
        QIcon icon72;
        icon72.addFile(QString::fromUtf8(":/images/toolbar/pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPodcastPause->setIcon(icon72);
        actionPodcastConfig = new QAction(MainWindow);
        actionPodcastConfig->setObjectName(QString::fromUtf8("actionPodcastConfig"));
        actionPodcastConfig->setIcon(icon25);
        actionWebTrap = new QAction(MainWindow);
        actionWebTrap->setObjectName(QString::fromUtf8("actionWebTrap"));
        actionWebTrap->setCheckable(true);
        QIcon icon73;
        icon73.addFile(QString::fromUtf8(":/images/extraPalette/webTrap.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon73.addFile(QString::fromUtf8(":/images/extraPalette/webTrapEnabled.png"), QSize(), QIcon::Normal, QIcon::On);
        actionWebTrap->setIcon(icon73);
        actionWebCustomCapture = new QAction(MainWindow);
        actionWebCustomCapture->setObjectName(QString::fromUtf8("actionWebCustomCapture"));
        QIcon icon74;
        icon74.addFile(QString::fromUtf8(":/images/toolbar/captureArea.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWebCustomCapture->setIcon(icon74);
        actionWebWindowCapture = new QAction(MainWindow);
        actionWebWindowCapture->setObjectName(QString::fromUtf8("actionWebWindowCapture"));
        QIcon icon75;
        icon75.addFile(QString::fromUtf8(":/images/toolbar/captureWindow.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWebWindowCapture->setIcon(icon75);
        actionWebOEmbed = new QAction(MainWindow);
        actionWebOEmbed->setObjectName(QString::fromUtf8("actionWebOEmbed"));
        actionWebOEmbed->setEnabled(false);
        QIcon icon76;
        icon76.addFile(QString::fromUtf8(":/images/extraPalette/oEmbed.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWebOEmbed->setIcon(icon76);
        actionWebShowHideOnDisplay = new QAction(MainWindow);
        actionWebShowHideOnDisplay->setObjectName(QString::fromUtf8("actionWebShowHideOnDisplay"));
        actionWebShowHideOnDisplay->setCheckable(true);
        QIcon icon77;
        icon77.addFile(QString::fromUtf8(":/images/toolbar/eyeClosed.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon77.addFile(QString::fromUtf8(":/images/toolbar/eyeOpened.png"), QSize(), QIcon::Normal, QIcon::On);
        actionWebShowHideOnDisplay->setIcon(icon77);
        actionWebShowHideOnDisplay->setAutoRepeat(false);
        actionWebShowHideOnDisplay->setMenuRole(QAction::TextHeuristicRole);
        actionEraseDesktopAnnotations = new QAction(MainWindow);
        actionEraseDesktopAnnotations->setObjectName(QString::fromUtf8("actionEraseDesktopAnnotations"));
        actionEraseDesktopAnnotations->setIcon(icon56);
        actionEduMedia = new QAction(MainWindow);
        actionEduMedia->setObjectName(QString::fromUtf8("actionEduMedia"));
        QIcon icon78;
        icon78.addFile(QString::fromUtf8(":/images/toolbar/addToolToLibrary.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEduMedia->setIcon(icon78);
        actionCheckUpdate = new QAction(MainWindow);
        actionCheckUpdate->setObjectName(QString::fromUtf8("actionCheckUpdate"));
        QIcon icon79;
        icon79.addFile(QString::fromUtf8(":/images/toolbar/updates.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCheckUpdate->setIcon(icon79);
        actionHideApplication = new QAction(MainWindow);
        actionHideApplication->setObjectName(QString::fromUtf8("actionHideApplication"));
        QIcon icon80;
        icon80.addFile(QString::fromUtf8(":/images/toolbar/hide.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHideApplication->setIcon(icon80);
        actionPlay = new QAction(MainWindow);
        actionPlay->setObjectName(QString::fromUtf8("actionPlay"));
        actionPlay->setCheckable(true);
        QIcon icon81;
        icon81.addFile(QString::fromUtf8(":/images/stylusPalette/handPlay.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon81.addFile(QString::fromUtf8(":/images/stylusPalette/handPlayOn.png"), QSize(), QIcon::Normal, QIcon::On);
        actionPlay->setIcon(icon81);
        actionEraseBackground = new QAction(MainWindow);
        actionEraseBackground->setObjectName(QString::fromUtf8("actionEraseBackground"));
        QIcon icon82;
        icon82.addFile(QString::fromUtf8(":/images/erasePalette/eraseBackground.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionEraseBackground->setIcon(icon82);
        actionOpenTutorial = new QAction(MainWindow);
        actionOpenTutorial->setObjectName(QString::fromUtf8("actionOpenTutorial"));
        QIcon icon83;
        icon83.addFile(QString::fromUtf8(":/images/toolbar/tutorial.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpenTutorial->setIcon(icon83);
        actionDefaultGridSize = new QAction(MainWindow);
        actionDefaultGridSize->setObjectName(QString::fromUtf8("actionDefaultGridSize"));
        QIcon icon84;
        icon84.addFile(QString::fromUtf8(":/images/backgroundPalette/resetDefaultGridSize.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionDefaultGridSize->setIcon(icon84);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        MainWindow->setCentralWidget(centralwidget);
        boardToolBar = new QToolBar(MainWindow);
        boardToolBar->setObjectName(QString::fromUtf8("boardToolBar"));
        boardToolBar->setContextMenuPolicy(Qt::PreventContextMenu);
        boardToolBar->setMovable(false);
        boardToolBar->setAllowedAreas(Qt::BottomToolBarArea|Qt::TopToolBarArea);
        boardToolBar->setIconSize(QSize(48, 32));
        boardToolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, boardToolBar);
        webToolBar = new QToolBar(MainWindow);
        webToolBar->setObjectName(QString::fromUtf8("webToolBar"));
        webToolBar->setContextMenuPolicy(Qt::PreventContextMenu);
        webToolBar->setMovable(false);
        webToolBar->setAllowedAreas(Qt::BottomToolBarArea|Qt::TopToolBarArea);
        webToolBar->setIconSize(QSize(48, 32));
        webToolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, webToolBar);
        MainWindow->insertToolBarBreak(webToolBar);
        documentToolBar = new QToolBar(MainWindow);
        documentToolBar->setObjectName(QString::fromUtf8("documentToolBar"));
        documentToolBar->setContextMenuPolicy(Qt::PreventContextMenu);
        documentToolBar->setMovable(false);
        documentToolBar->setAllowedAreas(Qt::BottomToolBarArea|Qt::TopToolBarArea);
        documentToolBar->setIconSize(QSize(48, 32));
        documentToolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, documentToolBar);
        MainWindow->insertToolBarBreak(documentToolBar);

        boardToolBar->addAction(actionStylus);
        boardToolBar->addAction(actionBackgrounds);
        boardToolBar->addSeparator();
        boardToolBar->addAction(actionUndo);
        boardToolBar->addAction(actionRedo);
        boardToolBar->addSeparator();
        boardToolBar->addAction(actionPages);
        boardToolBar->addAction(actionBack);
        boardToolBar->addAction(actionForward);
        boardToolBar->addSeparator();
        boardToolBar->addAction(actionErase);
        boardToolBar->addAction(actionBoard);
        boardToolBar->addAction(actionWeb);
        boardToolBar->addAction(actionDocument);
        boardToolBar->addAction(actionDesktop);
        boardToolBar->addAction(actionMenu);
        webToolBar->addAction(actionWebTools);
        webToolBar->addSeparator();
        webToolBar->addAction(actionWebBack);
        webToolBar->addAction(actionWebForward);
        webToolBar->addAction(actionWebReload);
        webToolBar->addAction(actionStopLoading);
        webToolBar->addAction(actionHome);
        webToolBar->addSeparator();
        webToolBar->addAction(actionWebBigger);
        webToolBar->addAction(actionWebSmaller);
        webToolBar->addSeparator();
        webToolBar->addAction(actionBoard);
        webToolBar->addAction(actionWeb);
        webToolBar->addAction(actionDocument);
        webToolBar->addAction(actionDesktop);
        webToolBar->addAction(actionMenu);
        documentToolBar->addAction(actionVirtualKeyboard);
        documentToolBar->addSeparator();
        documentToolBar->addAction(actionNewDocument);
        documentToolBar->addAction(actionNewFolder);
        documentToolBar->addSeparator();
        documentToolBar->addAction(actionImport);
        documentToolBar->addAction(actionExport);
        documentToolBar->addAction(actionRename);
        documentToolBar->addSeparator();
        documentToolBar->addAction(actionDuplicate);
        documentToolBar->addAction(actionDelete);
        documentToolBar->addSeparator();
        documentToolBar->addAction(actionOpen);
        documentToolBar->addAction(actionAddToWorkingDocument);
        documentToolBar->addAction(actionDocumentAdd);
        documentToolBar->addAction(actionBoard);
        documentToolBar->addAction(actionWeb);
        documentToolBar->addAction(actionDocument);
        documentToolBar->addAction(actionDesktop);
        documentToolBar->addAction(actionMenu);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "WBoard", nullptr));
        actionStylus->setText(QCoreApplication::translate("MainWindow", "Stylus", nullptr));
        actionStylus->setIconText(QCoreApplication::translate("MainWindow", "Stylus", nullptr));
#if QT_CONFIG(shortcut)
        actionStylus->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+T", nullptr));
#endif // QT_CONFIG(shortcut)
        actionBackgrounds->setText(QCoreApplication::translate("MainWindow", "Backgrounds", nullptr));
#if QT_CONFIG(tooltip)
        actionBackgrounds->setToolTip(QCoreApplication::translate("MainWindow", "Change Background", nullptr));
#endif // QT_CONFIG(tooltip)
        actionUndo->setText(QCoreApplication::translate("MainWindow", "Undo", nullptr));
#if QT_CONFIG(shortcut)
        actionUndo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRedo->setText(QCoreApplication::translate("MainWindow", "Redo", nullptr));
#if QT_CONFIG(shortcut)
        actionRedo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Y", nullptr));
#endif // QT_CONFIG(shortcut)
        actionBack->setText(QCoreApplication::translate("MainWindow", "Previous", nullptr));
#if QT_CONFIG(tooltip)
        actionBack->setToolTip(QCoreApplication::translate("MainWindow", "Previous Page", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionBack->setShortcut(QCoreApplication::translate("MainWindow", "PgUp", nullptr));
#endif // QT_CONFIG(shortcut)
        actionForward->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
#if QT_CONFIG(tooltip)
        actionForward->setToolTip(QCoreApplication::translate("MainWindow", "Next Page", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionForward->setShortcut(QCoreApplication::translate("MainWindow", "PgDown", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDocument->setText(QCoreApplication::translate("MainWindow", "Documents", nullptr));
#if QT_CONFIG(tooltip)
        actionDocument->setToolTip(QCoreApplication::translate("MainWindow", "Manage Documents", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionDocument->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+D", nullptr));
#endif // QT_CONFIG(shortcut)
        actionWeb->setText(QCoreApplication::translate("MainWindow", "Web", nullptr));
#if QT_CONFIG(tooltip)
        actionWeb->setToolTip(QCoreApplication::translate("MainWindow", "Web Browsing", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionWeb->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+W", nullptr));
#endif // QT_CONFIG(shortcut)
        actionLineSmall->setText(QCoreApplication::translate("MainWindow", "Line", nullptr));
#if QT_CONFIG(tooltip)
        actionLineSmall->setToolTip(QCoreApplication::translate("MainWindow", "Small Line", nullptr));
#endif // QT_CONFIG(tooltip)
        actionLineMedium->setText(QCoreApplication::translate("MainWindow", "Line", nullptr));
#if QT_CONFIG(tooltip)
        actionLineMedium->setToolTip(QCoreApplication::translate("MainWindow", "Medium Line", nullptr));
#endif // QT_CONFIG(tooltip)
        actionLineLarge->setText(QCoreApplication::translate("MainWindow", "Line", nullptr));
#if QT_CONFIG(tooltip)
        actionLineLarge->setToolTip(QCoreApplication::translate("MainWindow", "Large Line", nullptr));
#endif // QT_CONFIG(tooltip)
        actionQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
#if QT_CONFIG(tooltip)
        actionQuit->setToolTip(QCoreApplication::translate("MainWindow", "Quit WBoard", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEraserSmall->setText(QCoreApplication::translate("MainWindow", "Eraser", nullptr));
#if QT_CONFIG(tooltip)
        actionEraserSmall->setToolTip(QCoreApplication::translate("MainWindow", "Smalle Eraser", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEraserMedium->setText(QCoreApplication::translate("MainWindow", "Eraser", nullptr));
#if QT_CONFIG(tooltip)
        actionEraserMedium->setToolTip(QCoreApplication::translate("MainWindow", "Medium Eraser", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEraserLarge->setText(QCoreApplication::translate("MainWindow", "Eraser", nullptr));
#if QT_CONFIG(tooltip)
        actionEraserLarge->setToolTip(QCoreApplication::translate("MainWindow", "Large Eraser", nullptr));
#endif // QT_CONFIG(tooltip)
        actionColor0->setText(QCoreApplication::translate("MainWindow", "Color", nullptr));
#if QT_CONFIG(tooltip)
        actionColor0->setToolTip(QCoreApplication::translate("MainWindow", "Color", nullptr));
#endif // QT_CONFIG(tooltip)
        actionColor1->setText(QCoreApplication::translate("MainWindow", "Color", nullptr));
        actionColor2->setText(QCoreApplication::translate("MainWindow", "Color", nullptr));
        actionColor3->setText(QCoreApplication::translate("MainWindow", "Color", nullptr));
        actionColor4->setText(QCoreApplication::translate("MainWindow", "Color", nullptr));
        actionWebBack->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
#if QT_CONFIG(tooltip)
        actionWebBack->setToolTip(QCoreApplication::translate("MainWindow", "Previous Page", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionWebBack->setShortcut(QCoreApplication::translate("MainWindow", "Left", nullptr));
#endif // QT_CONFIG(shortcut)
        actionWebForward->setText(QCoreApplication::translate("MainWindow", "Forward", nullptr));
#if QT_CONFIG(tooltip)
        actionWebForward->setToolTip(QCoreApplication::translate("MainWindow", "Next Page", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionWebForward->setShortcut(QCoreApplication::translate("MainWindow", "Right", nullptr));
#endif // QT_CONFIG(shortcut)
        actionWebReload->setText(QCoreApplication::translate("MainWindow", "Reload", nullptr));
#if QT_CONFIG(tooltip)
        actionWebReload->setToolTip(QCoreApplication::translate("MainWindow", "Reload Current Page", nullptr));
#endif // QT_CONFIG(tooltip)
        actionHome->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
#if QT_CONFIG(tooltip)
        actionHome->setToolTip(QCoreApplication::translate("MainWindow", "Load Home Page", nullptr));
#endif // QT_CONFIG(tooltip)
        actionBookmarks->setText(QCoreApplication::translate("MainWindow", "Bookmarks", nullptr));
#if QT_CONFIG(tooltip)
        actionBookmarks->setToolTip(QCoreApplication::translate("MainWindow", "Show Bookmarks", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAddBookmark->setText(QCoreApplication::translate("MainWindow", "Bookmark", nullptr));
#if QT_CONFIG(tooltip)
        actionAddBookmark->setToolTip(QCoreApplication::translate("MainWindow", "Add Bookmark", nullptr));
#endif // QT_CONFIG(tooltip)
        actionBoard->setText(QCoreApplication::translate("MainWindow", "Board", nullptr));
#if QT_CONFIG(tooltip)
        actionBoard->setToolTip(QCoreApplication::translate("MainWindow", "Display Board", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionBoard->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+B", nullptr));
#endif // QT_CONFIG(shortcut)
        actionErase->setText(QCoreApplication::translate("MainWindow", "Erase", nullptr));
#if QT_CONFIG(tooltip)
        actionErase->setToolTip(QCoreApplication::translate("MainWindow", "Erase Content", nullptr));
#endif // QT_CONFIG(tooltip)
        actionPreferences->setText(QCoreApplication::translate("MainWindow", "Preferences", nullptr));
#if QT_CONFIG(tooltip)
        actionPreferences->setToolTip(QCoreApplication::translate("MainWindow", "Display Preferences", nullptr));
#endif // QT_CONFIG(tooltip)
        actionLibrary->setText(QCoreApplication::translate("MainWindow", "Library", nullptr));
#if QT_CONFIG(tooltip)
        actionLibrary->setToolTip(QCoreApplication::translate("MainWindow", "Show Library", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionLibrary->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+L", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMenu->setText(QCoreApplication::translate("MainWindow", "WBoard", nullptr));
#if QT_CONFIG(tooltip)
        actionMenu->setToolTip(QCoreApplication::translate("MainWindow", "WBoard", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDesktop->setText(QCoreApplication::translate("MainWindow", "Show Desktop", nullptr));
#if QT_CONFIG(tooltip)
        actionDesktop->setToolTip(QCoreApplication::translate("MainWindow", "Show Computer Desktop", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionDesktop->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+H", nullptr));
#endif // QT_CONFIG(shortcut)
        actionWebBigger->setText(QCoreApplication::translate("MainWindow", "Bigger", nullptr));
#if QT_CONFIG(tooltip)
        actionWebBigger->setToolTip(QCoreApplication::translate("MainWindow", "Zoom In", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionWebBigger->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl++", nullptr));
#endif // QT_CONFIG(shortcut)
        actionWebSmaller->setText(QCoreApplication::translate("MainWindow", "Smaller", nullptr));
#if QT_CONFIG(tooltip)
        actionWebSmaller->setToolTip(QCoreApplication::translate("MainWindow", "Zoom Out", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionWebSmaller->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+-", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNewFolder->setText(QCoreApplication::translate("MainWindow", "New Folder", nullptr));
#if QT_CONFIG(tooltip)
        actionNewFolder->setToolTip(QCoreApplication::translate("MainWindow", "Create a New Folder", nullptr));
#endif // QT_CONFIG(tooltip)
        actionNewDocument->setText(QCoreApplication::translate("MainWindow", "New Document", nullptr));
#if QT_CONFIG(tooltip)
        actionNewDocument->setToolTip(QCoreApplication::translate("MainWindow", "Create a New Document", nullptr));
#endif // QT_CONFIG(tooltip)
        actionImport->setText(QCoreApplication::translate("MainWindow", "Import", nullptr));
#if QT_CONFIG(tooltip)
        actionImport->setToolTip(QCoreApplication::translate("MainWindow", "Import a Document", nullptr));
#endif // QT_CONFIG(tooltip)
        actionExport->setText(QCoreApplication::translate("MainWindow", "Export", nullptr));
#if QT_CONFIG(tooltip)
        actionExport->setToolTip(QCoreApplication::translate("MainWindow", "Export a Document", nullptr));
#endif // QT_CONFIG(tooltip)
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open in Board", nullptr));
#if QT_CONFIG(tooltip)
        actionOpen->setToolTip(QCoreApplication::translate("MainWindow", "Open Page in Board", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDuplicate->setText(QCoreApplication::translate("MainWindow", "Duplicate", nullptr));
#if QT_CONFIG(tooltip)
        actionDuplicate->setToolTip(QCoreApplication::translate("MainWindow", "Duplicate Selected Content", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDelete->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
#if QT_CONFIG(tooltip)
        actionDelete->setToolTip(QCoreApplication::translate("MainWindow", "Delete Selected Content", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionDelete->setShortcut(QCoreApplication::translate("MainWindow", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAddToWorkingDocument->setText(QCoreApplication::translate("MainWindow", "Add to Working Document", nullptr));
#if QT_CONFIG(tooltip)
        actionAddToWorkingDocument->setToolTip(QCoreApplication::translate("MainWindow", "Add Selected Content to Open Document", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDocumentAdd->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
#if QT_CONFIG(tooltip)
        actionDocumentAdd->setToolTip(QCoreApplication::translate("MainWindow", "Add Content to Document", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRename->setText(QCoreApplication::translate("MainWindow", "Rename", nullptr));
#if QT_CONFIG(tooltip)
        actionRename->setToolTip(QCoreApplication::translate("MainWindow", "Rename Content", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDocumentTools->setText(QCoreApplication::translate("MainWindow", "Tools", nullptr));
#if QT_CONFIG(tooltip)
        actionDocumentTools->setToolTip(QCoreApplication::translate("MainWindow", "Display Tools", nullptr));
#endif // QT_CONFIG(tooltip)
        actionWebTools->setText(QCoreApplication::translate("MainWindow", "Tools", nullptr));
#if QT_CONFIG(tooltip)
        actionWebTools->setToolTip(QCoreApplication::translate("MainWindow", "Display Tools", nullptr));
#endif // QT_CONFIG(tooltip)
        actionMultiScreen->setText(QCoreApplication::translate("MainWindow", "Multi Screen", nullptr));
        actionWidePageSize->setText(QCoreApplication::translate("MainWindow", "Wide Size (16/9)", nullptr));
        actionWidePageSize->setIconText(QCoreApplication::translate("MainWindow", "Wide Size (16/9)", nullptr));
#if QT_CONFIG(tooltip)
        actionWidePageSize->setToolTip(QCoreApplication::translate("MainWindow", "Use Document Wide Size (16/9)", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRegularPageSize->setText(QCoreApplication::translate("MainWindow", "Regular Size (4/3)", nullptr));
        actionRegularPageSize->setIconText(QCoreApplication::translate("MainWindow", "Regular Size (4/3)", nullptr));
#if QT_CONFIG(tooltip)
        actionRegularPageSize->setToolTip(QCoreApplication::translate("MainWindow", "Use Document Regular Size (4/3)", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCustomPageSize->setText(QCoreApplication::translate("MainWindow", "Custom Size", nullptr));
        actionCustomPageSize->setIconText(QCoreApplication::translate("MainWindow", "Custom Size", nullptr));
#if QT_CONFIG(tooltip)
        actionCustomPageSize->setToolTip(QCoreApplication::translate("MainWindow", "Use Custom Document Size", nullptr));
#endif // QT_CONFIG(tooltip)
        actionStopLoading->setText(QCoreApplication::translate("MainWindow", "Stop Loading", nullptr));
#if QT_CONFIG(tooltip)
        actionStopLoading->setToolTip(QCoreApplication::translate("MainWindow", "Stop Loading Web Page", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCut->setText(QCoreApplication::translate("MainWindow", "Cut", nullptr));
        actionCopy->setText(QCoreApplication::translate("MainWindow", "Copy", nullptr));
        actionPaste->setText(QCoreApplication::translate("MainWindow", "Paste", nullptr));
        actionSleep->setText(QCoreApplication::translate("MainWindow", "Sleep", nullptr));
#if QT_CONFIG(tooltip)
        actionSleep->setToolTip(QCoreApplication::translate("MainWindow", "Put Presentation to Sleep", nullptr));
#endif // QT_CONFIG(tooltip)
        actionVirtualKeyboard->setText(QCoreApplication::translate("MainWindow", "Virtual Keyboard", nullptr));
#if QT_CONFIG(tooltip)
        actionVirtualKeyboard->setToolTip(QCoreApplication::translate("MainWindow", "Display Virtual Keyboard", nullptr));
#endif // QT_CONFIG(tooltip)
        actionPlainLightBackground->setText(QCoreApplication::translate("MainWindow", "Plain Light Background", nullptr));
        actionPlainLightBackground->setIconText(QCoreApplication::translate("MainWindow", "Light", nullptr));
#if QT_CONFIG(tooltip)
        actionPlainLightBackground->setToolTip(QCoreApplication::translate("MainWindow", "Plain Light Background", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCrossedLightBackground->setText(QCoreApplication::translate("MainWindow", "Grid Light Background", nullptr));
        actionCrossedLightBackground->setIconText(QCoreApplication::translate("MainWindow", "Light", nullptr));
#if QT_CONFIG(tooltip)
        actionCrossedLightBackground->setToolTip(QCoreApplication::translate("MainWindow", "Grid Light Background", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRuledLightBackground->setText(QCoreApplication::translate("MainWindow", "Ruled Light Background", nullptr));
        actionRuledLightBackground->setIconText(QCoreApplication::translate("MainWindow", "Light", nullptr));
#if QT_CONFIG(tooltip)
        actionRuledLightBackground->setToolTip(QCoreApplication::translate("MainWindow", "Ruled Light Background", nullptr));
#endif // QT_CONFIG(tooltip)
        actionPlainDarkBackground->setText(QCoreApplication::translate("MainWindow", "Plain Dark Background", nullptr));
        actionPlainDarkBackground->setIconText(QCoreApplication::translate("MainWindow", "Dark", nullptr));
#if QT_CONFIG(tooltip)
        actionPlainDarkBackground->setToolTip(QCoreApplication::translate("MainWindow", "Plain Dark Background", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCrossedDarkBackground->setText(QCoreApplication::translate("MainWindow", "Grid Dark Background", nullptr));
        actionCrossedDarkBackground->setIconText(QCoreApplication::translate("MainWindow", "Dark", nullptr));
#if QT_CONFIG(tooltip)
        actionCrossedDarkBackground->setToolTip(QCoreApplication::translate("MainWindow", "Grid Dark Background", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRuledDarkBackground->setText(QCoreApplication::translate("MainWindow", "Ruled Dark Background", nullptr));
        actionRuledDarkBackground->setIconText(QCoreApplication::translate("MainWindow", "Dark", nullptr));
#if QT_CONFIG(tooltip)
        actionRuledDarkBackground->setToolTip(QCoreApplication::translate("MainWindow", "Ruled Dark Background", nullptr));
#endif // QT_CONFIG(tooltip)
        actionPodcast->setText(QCoreApplication::translate("MainWindow", "Podcast", nullptr));
#if QT_CONFIG(tooltip)
        actionPodcast->setToolTip(QCoreApplication::translate("MainWindow", "Record Presentation to Video", nullptr));
#endif // QT_CONFIG(tooltip)
        actionPodcastRecord->setText(QCoreApplication::translate("MainWindow", "Record", nullptr));
#if QT_CONFIG(tooltip)
        actionPodcastRecord->setToolTip(QCoreApplication::translate("MainWindow", "Start Screen Recording", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEraseItems->setText(QCoreApplication::translate("MainWindow", "Erase Items", nullptr));
#if QT_CONFIG(tooltip)
        actionEraseItems->setToolTip(QCoreApplication::translate("MainWindow", "Erase All Items", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEraseAnnotations->setText(QCoreApplication::translate("MainWindow", "Erase Annotations", nullptr));
#if QT_CONFIG(tooltip)
        actionEraseAnnotations->setToolTip(QCoreApplication::translate("MainWindow", "Erase All Annotations", nullptr));
#endif // QT_CONFIG(tooltip)
        actionClearPage->setText(QCoreApplication::translate("MainWindow", "Clear Page", nullptr));
#if QT_CONFIG(tooltip)
        actionClearPage->setToolTip(QCoreApplication::translate("MainWindow", "Clear All Elements", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAdd->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        actionPen->setText(QCoreApplication::translate("MainWindow", "Pen", nullptr));
#if QT_CONFIG(tooltip)
        actionPen->setToolTip(QCoreApplication::translate("MainWindow", "Annotate Document", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionPen->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        actionEraser->setText(QCoreApplication::translate("MainWindow", "Eraser", nullptr));
#if QT_CONFIG(tooltip)
        actionEraser->setToolTip(QCoreApplication::translate("MainWindow", "Erase Annotation", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionEraser->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+E", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMarker->setText(QCoreApplication::translate("MainWindow", "Marker", nullptr));
#if QT_CONFIG(tooltip)
        actionMarker->setToolTip(QCoreApplication::translate("MainWindow", "Highlight ", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionMarker->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+M", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSelector->setText(QCoreApplication::translate("MainWindow", "Selector", nullptr));
#if QT_CONFIG(tooltip)
        actionSelector->setToolTip(QCoreApplication::translate("MainWindow", "Select And Modify Objects", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSelector->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionHand->setText(QCoreApplication::translate("MainWindow", "Hand", nullptr));
#if QT_CONFIG(tooltip)
        actionHand->setToolTip(QCoreApplication::translate("MainWindow", "Scroll Page", nullptr));
#endif // QT_CONFIG(tooltip)
        actionZoomIn->setText(QCoreApplication::translate("MainWindow", "Zoom In", nullptr));
        actionZoomOut->setText(QCoreApplication::translate("MainWindow", "Zoom Out", nullptr));
        actionPointer->setText(QCoreApplication::translate("MainWindow", "Laser Pointer", nullptr));
#if QT_CONFIG(tooltip)
        actionPointer->setToolTip(QCoreApplication::translate("MainWindow", "Virtual Laser Pointer", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionPointer->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+G", nullptr));
#endif // QT_CONFIG(shortcut)
        actionLine->setText(QCoreApplication::translate("MainWindow", "Line", nullptr));
#if QT_CONFIG(tooltip)
        actionLine->setToolTip(QCoreApplication::translate("MainWindow", "Draw Lines", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionLine->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+J", nullptr));
#endif // QT_CONFIG(shortcut)
        actionText->setText(QCoreApplication::translate("MainWindow", "Text", nullptr));
#if QT_CONFIG(tooltip)
        actionText->setToolTip(QCoreApplication::translate("MainWindow", "Write Text", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionText->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+K", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCapture->setText(QCoreApplication::translate("MainWindow", "Capture", nullptr));
#if QT_CONFIG(tooltip)
        actionCapture->setToolTip(QCoreApplication::translate("MainWindow", "Capture Part of the Screen", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAddItemToCurrentPage->setText(QCoreApplication::translate("MainWindow", "Add To Current Page", nullptr));
        actionAddItemToCurrentPage->setIconText(QCoreApplication::translate("MainWindow", "Add To Current Page", nullptr));
#if QT_CONFIG(tooltip)
        actionAddItemToCurrentPage->setToolTip(QCoreApplication::translate("MainWindow", "Add Item To Current Page", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAddItemToNewPage->setText(QCoreApplication::translate("MainWindow", "Add To New Page", nullptr));
#if QT_CONFIG(tooltip)
        actionAddItemToNewPage->setToolTip(QCoreApplication::translate("MainWindow", "Add Item To New Page", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAddItemToLibrary->setText(QCoreApplication::translate("MainWindow", "Add To Library", nullptr));
#if QT_CONFIG(tooltip)
        actionAddItemToLibrary->setToolTip(QCoreApplication::translate("MainWindow", "Add Item To Library", nullptr));
#endif // QT_CONFIG(tooltip)
        actionPages->setText(QCoreApplication::translate("MainWindow", "Pages", nullptr));
#if QT_CONFIG(tooltip)
        actionPages->setToolTip(QCoreApplication::translate("MainWindow", "Create a New Page", nullptr));
#endif // QT_CONFIG(tooltip)
        actionNewPage->setText(QCoreApplication::translate("MainWindow", "New Page", nullptr));
#if QT_CONFIG(tooltip)
        actionNewPage->setToolTip(QCoreApplication::translate("MainWindow", "Create a New Page", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDuplicatePage->setText(QCoreApplication::translate("MainWindow", "Duplicate Page", nullptr));
#if QT_CONFIG(tooltip)
        actionDuplicatePage->setToolTip(QCoreApplication::translate("MainWindow", "Duplicate the Current Page", nullptr));
#endif // QT_CONFIG(tooltip)
        actionImportPage->setText(QCoreApplication::translate("MainWindow", "Import Page", nullptr));
#if QT_CONFIG(tooltip)
        actionImportPage->setToolTip(QCoreApplication::translate("MainWindow", "Import an External Page", nullptr));
#endif // QT_CONFIG(tooltip)
        actionPodcastPause->setText(QCoreApplication::translate("MainWindow", "Pause", nullptr));
#if QT_CONFIG(tooltip)
        actionPodcastPause->setToolTip(QCoreApplication::translate("MainWindow", "Pause Podcast Recording", nullptr));
#endif // QT_CONFIG(tooltip)
        actionPodcastConfig->setText(QCoreApplication::translate("MainWindow", "Podcast Config", nullptr));
#if QT_CONFIG(tooltip)
        actionPodcastConfig->setToolTip(QCoreApplication::translate("MainWindow", "Configure Podcast Recording", nullptr));
#endif // QT_CONFIG(tooltip)
        actionWebTrap->setText(QCoreApplication::translate("MainWindow", "Web Trap", nullptr));
#if QT_CONFIG(tooltip)
        actionWebTrap->setToolTip(QCoreApplication::translate("MainWindow", "Trap Web Content", nullptr));
#endif // QT_CONFIG(tooltip)
        actionWebCustomCapture->setText(QCoreApplication::translate("MainWindow", "Custom Capture", nullptr));
#if QT_CONFIG(tooltip)
        actionWebCustomCapture->setToolTip(QCoreApplication::translate("MainWindow", "Capture Part of the Screen", nullptr));
#endif // QT_CONFIG(tooltip)
        actionWebWindowCapture->setText(QCoreApplication::translate("MainWindow", "Window Capture", nullptr));
#if QT_CONFIG(tooltip)
        actionWebWindowCapture->setToolTip(QCoreApplication::translate("MainWindow", "Capture a Window", nullptr));
#endif // QT_CONFIG(tooltip)
        actionWebOEmbed->setText(QCoreApplication::translate("MainWindow", "Embed Web Content", nullptr));
#if QT_CONFIG(tooltip)
        actionWebOEmbed->setToolTip(QCoreApplication::translate("MainWindow", "Capture Embeddable Web Content", nullptr));
#endif // QT_CONFIG(tooltip)
        actionWebShowHideOnDisplay->setText(QCoreApplication::translate("MainWindow", "Show on Display", nullptr));
#if QT_CONFIG(tooltip)
        actionWebShowHideOnDisplay->setToolTip(QCoreApplication::translate("MainWindow", "Show Main Screen on Display Screen", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEraseDesktopAnnotations->setText(QCoreApplication::translate("MainWindow", "Erase Annotations", nullptr));
#if QT_CONFIG(tooltip)
        actionEraseDesktopAnnotations->setToolTip(QCoreApplication::translate("MainWindow", "Erase all Annotations", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEduMedia->setText(QCoreApplication::translate("MainWindow", "eduMedia", nullptr));
#if QT_CONFIG(tooltip)
        actionEduMedia->setToolTip(QCoreApplication::translate("MainWindow", "Import eduMedia simulation", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCheckUpdate->setText(QCoreApplication::translate("MainWindow", "Check Update", nullptr));
        actionHideApplication->setText(QCoreApplication::translate("MainWindow", "Hide WBoard", nullptr));
#if QT_CONFIG(tooltip)
        actionHideApplication->setToolTip(QCoreApplication::translate("MainWindow", "Hide WBoard Application", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionHideApplication->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+H", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPlay->setText(QCoreApplication::translate("MainWindow", "Play", nullptr));
#if QT_CONFIG(tooltip)
        actionPlay->setToolTip(QCoreApplication::translate("MainWindow", "Interact with items", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEraseBackground->setText(QCoreApplication::translate("MainWindow", "Erase Background", nullptr));
#if QT_CONFIG(tooltip)
        actionEraseBackground->setToolTip(QCoreApplication::translate("MainWindow", "Remove the backgound", nullptr));
#endif // QT_CONFIG(tooltip)
        actionOpenTutorial->setText(QCoreApplication::translate("MainWindow", "Open Tutorial", nullptr));
#if QT_CONFIG(tooltip)
        actionOpenTutorial->setToolTip(QCoreApplication::translate("MainWindow", "Open the tutorial web page", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDefaultGridSize->setText(QCoreApplication::translate("MainWindow", "Reset grid size", nullptr));
#if QT_CONFIG(tooltip)
        actionDefaultGridSize->setToolTip(QCoreApplication::translate("MainWindow", "Reset grid size", nullptr));
#endif // QT_CONFIG(tooltip)
        boardToolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "Board", nullptr));
        webToolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "Web", nullptr));
        documentToolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "Documents", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
