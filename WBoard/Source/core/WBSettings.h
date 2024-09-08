#ifndef WBSETTINGS_H_
#define WBSETTINGS_H_

#include <QtCore>
#include <QtWidgets>
#include <QtNetwork>

#include "WB.h"
#include "WBSetting.h"

class WBSettings : public QObject
{
    Q_OBJECT

    public:
        static WBSettings* settings();
        static void destroy();

    private:
        WBSettings(QObject *parent = 0);
        virtual ~WBSettings();
        void cleanNonPersistentSettings();

    public:
        QStringList* supportedKeyboardSizes;
        void InitKeyboardPaletteKeyBtnSizes();
        void ValidateKeyboardPaletteKeyBtnSize();
        void closing();
        void save();

        int penWidthIndex();

        qreal currentPenWidth();

        int penColorIndex();
        QColor currentPenColor();
        QColor penColor(bool onDarkBackground);
        QList<QColor> penColors(bool onDarkBackground);

        // Marker related
        int markerWidthIndex();
        qreal currentMarkerWidth();
        int markerColorIndex();
        QColor currentMarkerColor();
        QColor markerColor(bool onDarkBackground);
        QList<QColor> markerColors(bool onDarkBackground);

        // Eraser related
        int eraserWidthIndex();
        qreal eraserFineWidth();
        qreal eraserMediumWidth();
        qreal eraserStrongWidth();
        qreal currentEraserWidth();

        // Background related
        bool isDarkBackground();
        WBPageBackground pageBackground();
        void setDarkBackground(bool isDarkBackground);
        void setPageBackground(WBPageBackground background);

        // Stylus palette related
        bool isStylusPaletteVisible();

        // Text related
        QString fontFamily();
        void setFontFamily(const QString &family);
        int fontPixelSize();
        void setFontPixelSize(int pixelSize);
        int fontPointSize();
        void setFontPointSize(int pointSize);
        bool isBoldFont();
        void setBoldFont(bool bold);
        bool isItalicFont();
        void setItalicFont(bool italic);

        void setPassword(const QString& id, const QString& password);
        QString password(const QString& id);
        void removePassword(const QString& id);

        QString proxyUsername();
        void setProxyUsername(const QString& username);
        QString proxyPassword();
        void setProxyPassword(const QString& password);

        QString communityUsername();
        void setCommunityUsername(const QString& username);
        QString communityPassword();
        void setCommunityPassword(const QString& password);
        bool getCommunityDataPersistence(){return communityCredentialsPersistence->get().toBool();}
        void setCommunityPersistence(const bool persistence);

        int libraryIconSize();
        void setLibraryIconsize(const int& size);

        void init();

        //user directories
        static QString userDataDirectory();
        static QString userDocumentDirectory();
        static QString userFavoriteListFilePath();
        static QString userTrashDirPath();
        static QString userImageDirectory();
        static QString userVideoDirectory();
        static QString userAudioDirectory();
        static QString userSearchDirectory();
        static QString userAnimationDirectory();
        static QString userInteractiveDirectory();
        static QString userInteractiveFavoritesDirectory();
        static QString userPodcastRecordingDirectory();

        QString userGipLibraryDirectory();

        //application directory
        QString applicationShapeLibraryDirectory();
        QString applicationImageLibraryDirectory();
        QString applicationApplicationsLibraryDirectory();
        QString applicationInteractivesDirectory();
        QString applicationCustomizationDirectory();
        QString applicationCustomFontDirectory();
        QString applicationAudiosLibraryDirectory();
        QString applicationVideosLibraryDirectory();
        QString applicationAnimationsLibraryDirectory();
        QString applicationStartupHintsDirectory();

        QNetworkProxy* httpProxy();

        static int pointerDiameter;
        static int boardMargin;

        static QColor paletteColor;
        static QColor opaquePaletteColor;

        static QColor documentViewLightColor;

        static QBrush eraserBrushDarkBackground;
        static QBrush eraserBrushLightBackground;

        static QPen eraserPenDarkBackground;
        static QPen eraserPenLightBackground;

        static QColor markerCircleBrushColorDarkBackground;
        static QColor markerCircleBrushColorLightBackground;

        static QColor markerCirclePenColorDarkBackground;
        static QColor markerCirclePenColorLightBackground;

        static QColor penCircleBrushColorDarkBackground;
        static QColor penCircleBrushColorLightBackground;

        static QColor penCirclePenColorDarkBackground;
        static QColor penCirclePenColorLightBackground;

        static QColor documentSizeMarkColorDarkBackground;
        static QColor documentSizeMarkColorLightBackground;

        // Background grid
        static int crossSize;
        static int defaultCrossSize;
        static int minCrossSize;
        static int maxCrossSize;

        static int colorPaletteSize;
        static int objectFrameWidth;

        static QString documentGroupName;
        static QString documentName;
        static QString documentSize;
        static QString documentIdentifer;
        static QString documentVersion;
        static QString documentUpdatedAt;
        static QString documentPageCount;

        static QString documentDate;

        static QString trashedDocumentGroupNamePrefix;

        static QString currentFileVersion;

        static QString uniboardDocumentNamespaceUri;
        static QString uniboardApplicationNamespaceUri;

        static QString undoCommandTransactionName;

        static const int maxThumbnailWidth;
        static const int defaultThumbnailWidth;
        static const int defaultSortKind;
        static const int defaultSortOrder;
        static const int defaultSplitterLeftSize;
        static const int defaultSplitterRightSize;
        static const int defaultLibraryIconSize;

        static const int defaultImageWidth;
        static const int defaultShapeWidth;
        static const int defaultWidgetIconWidth;
        static const int defaultVideoWidth;
        static const int defaultGipWidth;
        static const int defaultSoundWidth;

        static const int thumbnailSpacing;
        static const int longClickInterval;

        static const qreal minScreenRatio;

        static QStringList bitmapFileExtensions;
        static QStringList vectoFileExtensions;
        static QStringList imageFileExtensions;
        static QStringList widgetFileExtensions;
        static QStringList interactiveContentFileExtensions;

        static QColor treeViewBackgroundColor;

        static int objectInControlViewMargin;

        static QString appPingMessage;

        WBSetting* productWebUrl;

        QString softwareHomeUrl;

        WBSetting* appToolBarPositionedAtTop;
        WBSetting* appToolBarDisplayText;
        WBSetting* appEnableAutomaticSoftwareUpdates;
        WBSetting* appSoftwareUpdateURL;
        WBSetting* appHideCheckForSoftwareUpdate;
        WBSetting* appHideSwapDisplayScreens;
        WBSetting* appToolBarOrientationVertical;
        WBSetting* appPreferredLanguage;

        WBSetting* appIsInSoftwareUpdateProcess;

        WBSetting* appLastSessionDocumentUUID;
        WBSetting* appLastSessionPageIndex;

        WBSetting* appUseMultiscreen;

        WBSetting* appStartupHintsEnabled;

        WBSetting* appLookForOpenSankoreInstall;

        WBSetting* boardPenFineWidth;
        WBSetting* boardPenMediumWidth;
        WBSetting* boardPenStrongWidth;

        WBSetting* boardMarkerFineWidth;
        WBSetting* boardMarkerMediumWidth;
        WBSetting* boardMarkerStrongWidth;

        WBSetting* boardPenPressureSensitive;
        WBSetting* boardMarkerPressureSensitive;

        WBSetting* boardUseHighResTabletEvent;

        WBSetting* boardInterpolatePenStrokes;
        WBSetting* boardSimplifyPenStrokes;
        WBSetting* boardSimplifyPenStrokesThresholdAngle;
        WBSetting* boardSimplifyPenStrokesThresholdWidthDifference;
        WBSetting* boardInterpolateMarkerStrokes;
        WBSetting* boardSimplifyMarkerStrokes;

        WBSetting* boardKeyboardPaletteKeyBtnSize;

        WBSetting* appStartMode;

        WBSetting* featureSliderPosition;

        WBSetting* boardCrossColorDarkBackground;
        WBSetting* boardCrossColorLightBackground;

        WBColorListSetting* boardGridLightBackgroundColors;
        WBColorListSetting* boardGridDarkBackgroundColors;

        WBColorListSetting* boardPenLightBackgroundColors;
        WBColorListSetting* boardPenLightBackgroundSelectedColors;

        WBColorListSetting* boardPenDarkBackgroundColors;
        WBColorListSetting* boardPenDarkBackgroundSelectedColors;

        WBSetting* boardMarkerAlpha;

        WBColorListSetting* boardMarkerLightBackgroundColors;
        WBColorListSetting* boardMarkerLightBackgroundSelectedColors;

        WBColorListSetting* boardMarkerDarkBackgroundColors;
        WBColorListSetting* boardMarkerDarkBackgroundSelectedColors;

        WBSetting* showEraserPreviewCircle;
        WBSetting* showMarkerPreviewCircle;
        WBSetting* showPenPreviewCircle;
        WBSetting* penPreviewFromSize;

        WBSetting* webUseExternalBrowser;
        WBSetting* webShowPageImmediatelyOnMirroredScreen;

        WBSetting* webHomePage;
        WBSetting* webBookmarksPage;
        WBSetting* webAddBookmarkUrl;
        WBSetting* webShowAddBookmarkButton;

        WBSetting* pageCacheSize;

        WBSetting* boardZoomFactor;

        WBSetting* mirroringRefreshRateInFps;

        WBSetting* lastImportFilePath;
        WBSetting* lastImportFolderPath;

        WBSetting* lastExportFilePath;
        WBSetting* lastExportDirPath;

        WBSetting* lastImportToLibraryPath;

        WBSetting* lastPicturePath;
        WBSetting* lastWidgetPath;
        WBSetting* lastVideoPath;

        WBSetting* appOnlineUserName;

        WBSetting* boardShowToolsPalette;

        QMap<DocumentSizeRatio::Enum, QSize> documentSizes;

        WBSetting* svgViewBoxMargin;
        WBSetting* pdfMargin;
        WBSetting* pdfPageFormat;
        WBSetting* pdfResolution;

        WBSetting* podcastFramesPerSecond;
        WBSetting* podcastVideoSize;
        WBSetting* podcastWindowsMediaBitsPerSecond;
        WBSetting* podcastAudioRecordingDevice;
        WBSetting* podcastQuickTimeQuality;

        WBSetting* favoritesNativeToolUris;

        WBSetting* documentThumbnailWidth;
        WBSetting* documentSortKind;
        WBSetting* documentSortOrder;
        WBSetting* documentSplitterLeftSize;
        WBSetting* documentSplitterRightSize;
        WBSetting* imageThumbnailWidth;
        WBSetting* videoThumbnailWidth;
        WBSetting* shapeThumbnailWidth;
        WBSetting* gipThumbnailWidth;
        WBSetting* soundThumbnailWidth;

        WBSetting* libraryShowDetailsForLocalItems;

        WBSetting* rightLibPaletteBoardModeWidth;
        WBSetting* rightLibPaletteBoardModeIsCollapsed;
        WBSetting* rightLibPaletteDesktopModeWidth;
        WBSetting* rightLibPaletteDesktopModeIsCollapsed;
        WBSetting* leftLibPaletteBoardModeWidth;
        WBSetting* leftLibPaletteBoardModeIsCollapsed;
        WBSetting* leftLibPaletteDesktopModeWidth;
        WBSetting* leftLibPaletteDesktopModeIsCollapsed;

        WBSetting* communityUser;
        WBSetting* communityPsw;
        WBSetting* communityCredentialsPersistence;

        WBSetting* pageSize;

        WBSetting* KeyboardLocale;
        WBSetting* swapControlAndDisplayScreens;

        WBSetting* angleTolerance;
        WBSetting* historyLimit;

        WBSetting* libIconSize;

        WBSetting* useSystemOnScreenKeyboard;

        WBSetting* showDateColumnOnAlphabeticalSort;

        WBSetting* emptyTrashForOlderDocuments;
        WBSetting* emptyTrashDaysValue;

        WBSetting* magnifierDrawingMode;
        WBSetting* autoSaveInterval;

    public slots:
        void setPenWidthIndex(int index);
        void setPenColorIndex(int index);

        void setMarkerWidthIndex(int index);
        void setMarkerColorIndex(int index);

        void setEraserWidthIndex(int index);
        void setEraserFineWidth(qreal width);
        void setEraserMediumWidth(qreal width);
        void setEraserStrongWidth(qreal width);

         void setStylusPaletteVisible(bool visible);

        void setPenPressureSensitive(bool sensitive);
        void setPenPreviewCircle(bool sensitive);
        void setPenPreviewFromSize(int size);
        void setMarkerPressureSensitive(bool sensitive);

        QVariant value ( const QString & key, const QVariant & defaultValue = QVariant() );
        void setValue (const QString & key,const QVariant & value);

        void colorChanged() { emit colorContextChanged(); }

    signals:
        void colorContextChanged();

    private:
        QSettings* mAppSettings;
        QSettings* mUserSettings;

        QHash<QString, QVariant> mSettingsQueue;

        static const int sDefaultFontPixelSize;
        static const char *sDefaultFontFamily;

        static QSettings* getAppSettings();

        static QPointer<QSettings> sAppSettings;
        static QPointer<WBSettings> sSingleton;

        static bool checkDirectory(QString& dirPath);
        static QString replaceWildcard(QString& path);

        void removeSetting(const QString& setting);
        void checkNewSettings();

};

#endif /* WBSETTINGS_H_ */

/*

这段代码定义了两个类 `WBSetting` 和 `WBColorListSetting`，它们用于处理应用程序中的设置。这两个类的功能和设计可以帮助管理和存储不同类型的设置项。以下是对每个函数和成员变量的详细分析：

### `WBSetting` 类

#### 1. **构造函数和析构函数**

- **`WBSetting(WBSettings* parent = 0);`**
  - 默认构造函数，接受一个 `WBSettings` 对象的指针作为父对象。如果不提供父对象，默认为 `0`（即 `nullptr`）。

- **`WBSetting(WBSettings* owner, const QString& pDomain, const QString& pKey, const QVariant& pDefaultValue);`**
  - 构造函数，接受一个 `WBSettings` 对象的指针（设置的拥有者），一个领域（`pDomain`），一个键（`pKey`），以及一个默认值（`pDefaultValue`）。用于初始化设置项的领域、键和默认值。

- **`virtual ~WBSetting();`**
  - 虚析构函数，确保在派生类中可以正确地释放资源。

#### 2. **公共成员函数**

- **`virtual void set(const QVariant& pValue);`**
  - 设置当前设置项的值。`QVariant` 是 Qt 中用于存储各种数据类型的通用容器。该函数可能会被派生类重写以实现具体的设置逻辑。

- **`virtual QVariant get();`**
  - 获取当前设置项的值。返回类型是 `QVariant`。该函数也可能会被派生类重写以实现具体的获取逻辑。

- **`virtual QVariant reset();`**
  - 重置设置项的值到默认值。返回类型是 `QVariant`，表示重置后的值。该函数通常会被派生类重写，以确保重置到正确的默认值。

- **`virtual QString domain() const`**
  - 获取设置项的领域（`domain`）。领域用于组织和分类设置项。

- **`virtual QString key() const`**
  - 获取设置项的键（`key`）。键用于唯一标识设置项。

- **`virtual QString path() const`**
  - 获取设置项的路径（`path`）。路径通常表示设置项的完整路径或层级。

- **`virtual QVariant defaultValue() const`**
  - 获取设置项的默认值（`defaultValue`）。

#### 3. **公共槽函数**

- **`void setBool(bool pValue);`**
  - 设置布尔值的专用槽函数。

- **`void setString(const QString& pValue);`**
  - 设置字符串值的专用槽函数。

- **`void setInt(int pValue);`**
  - 设置整数值的专用槽函数。

#### 4. **信号**

- **`void changed(QVariant newValue);`**
  - 当设置项的值发生变化时发出 `changed` 信号，传递新的值（`newValue`）作为参数。

#### 5. **保护成员变量**

- **`WBSettings* mOwner;`**
  - 设置项的拥有者，通常是一个 `WBSettings` 对象。

- **`QString mDomain;`**
  - 设置项的领域。

- **`QString mKey;`**
  - 设置项的键。

- **`QString mPath;`**
  - 设置项的路径。

- **`QVariant mDefaultValue;`**
  - 设置项的默认值。

### `WBColorListSetting` 类

`WBColorListSetting` 类继承自 `WBSetting`，并扩展了用于管理颜色列表设置的功能。

#### 1. **构造函数和析构函数**

- **`WBColorListSetting(WBSettings* parent = 0);`**
  - 默认构造函数，接受一个 `WBSettings` 对象的指针作为父对象。

- **`WBColorListSetting(WBSettings* owner, const QString& pDomain, const QString& pKey, const QVariant& pDefaultValue, qreal pAlpha = 1.0);`**
  - 构造函数，除了父对象、领域、键和默认值，还接受一个 `qreal` 类型的透明度（`pAlpha`），用于设置颜色列表的透明度。

- **`virtual ~WBColorListSetting();`**
  - 虚析构函数，用于释放资源。

#### 2. **公共成员函数**

- **`virtual QVariant reset();`**
  - 重置颜色列表到默认值。这个函数可能会被重写，以确保颜色列表恢复到其初始状态。

- **`QList<QColor> colors() const;`**
  - 获取当前的颜色列表。返回类型是 `QList<QColor>`，即 `QColor` 对象的列表。

- **`void setColor(int pIndex, const QColor& color);`**
  - 设置颜色列表中指定索引（`pIndex`）的颜色。`color` 是新的颜色值。

- **`void setAlpha(qreal pAlpha);`**
  - 设置颜色列表的透明度。`pAlpha` 是透明度值，范围通常在 0.0（完全透明）到 1.0（完全不透明）之间。

#### 3. **保护成员变量**

- **`QList<QColor> mColors;`**
  - 存储颜色列表的成员变量。

- **`qreal mAlpha;`**
  - 存储颜色列表的透明度值。

### 总结

- **`WBSetting`** 类提供了一个通用的接口来管理不同类型的设置项，包括设置、获取、重置值，以及处理布尔值、字符串和整数等数据类型的设置。
- **`WBColorListSetting`** 类扩展了 `WBSetting`，提供了额外的方法来处理颜色列表和透明度设置。这个类适用于需要管理和存储多个颜色设置的情况。

这些类的设计旨在使设置项的管理更加模块化和灵活，以便在应用程序中轻松管理各种类型的配置。

*/
