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

��δ��붨���������� `WBSetting` �� `WBColorListSetting`���������ڴ���Ӧ�ó����е����á���������Ĺ��ܺ���ƿ��԰�������ʹ洢��ͬ���͵�����������Ƕ�ÿ�������ͳ�Ա��������ϸ������

### `WBSetting` ��

#### 1. **���캯������������**

- **`WBSetting(WBSettings* parent = 0);`**
  - Ĭ�Ϲ��캯��������һ�� `WBSettings` �����ָ����Ϊ������������ṩ������Ĭ��Ϊ `0`���� `nullptr`����

- **`WBSetting(WBSettings* owner, const QString& pDomain, const QString& pKey, const QVariant& pDefaultValue);`**
  - ���캯��������һ�� `WBSettings` �����ָ�루���õ�ӵ���ߣ���һ������`pDomain`����һ������`pKey`�����Լ�һ��Ĭ��ֵ��`pDefaultValue`�������ڳ�ʼ������������򡢼���Ĭ��ֵ��

- **`virtual ~WBSetting();`**
  - ������������ȷ�����������п�����ȷ���ͷ���Դ��

#### 2. **������Ա����**

- **`virtual void set(const QVariant& pValue);`**
  - ���õ�ǰ�������ֵ��`QVariant` �� Qt �����ڴ洢�����������͵�ͨ���������ú������ܻᱻ��������д��ʵ�־���������߼���

- **`virtual QVariant get();`**
  - ��ȡ��ǰ�������ֵ������������ `QVariant`���ú���Ҳ���ܻᱻ��������д��ʵ�־���Ļ�ȡ�߼���

- **`virtual QVariant reset();`**
  - �����������ֵ��Ĭ��ֵ������������ `QVariant`����ʾ���ú��ֵ���ú���ͨ���ᱻ��������д����ȷ�����õ���ȷ��Ĭ��ֵ��

- **`virtual QString domain() const`**
  - ��ȡ�����������`domain`��������������֯�ͷ��������

- **`virtual QString key() const`**
  - ��ȡ������ļ���`key`����������Ψһ��ʶ�����

- **`virtual QString path() const`**
  - ��ȡ�������·����`path`����·��ͨ����ʾ�����������·����㼶��

- **`virtual QVariant defaultValue() const`**
  - ��ȡ�������Ĭ��ֵ��`defaultValue`����

#### 3. **�����ۺ���**

- **`void setBool(bool pValue);`**
  - ���ò���ֵ��ר�òۺ�����

- **`void setString(const QString& pValue);`**
  - �����ַ���ֵ��ר�òۺ�����

- **`void setInt(int pValue);`**
  - ��������ֵ��ר�òۺ�����

#### 4. **�ź�**

- **`void changed(QVariant newValue);`**
  - ���������ֵ�����仯ʱ���� `changed` �źţ������µ�ֵ��`newValue`����Ϊ������

#### 5. **������Ա����**

- **`WBSettings* mOwner;`**
  - �������ӵ���ߣ�ͨ����һ�� `WBSettings` ����

- **`QString mDomain;`**
  - �����������

- **`QString mKey;`**
  - ������ļ���

- **`QString mPath;`**
  - �������·����

- **`QVariant mDefaultValue;`**
  - �������Ĭ��ֵ��

### `WBColorListSetting` ��

`WBColorListSetting` ��̳��� `WBSetting`������չ�����ڹ�����ɫ�б����õĹ��ܡ�

#### 1. **���캯������������**

- **`WBColorListSetting(WBSettings* parent = 0);`**
  - Ĭ�Ϲ��캯��������һ�� `WBSettings` �����ָ����Ϊ������

- **`WBColorListSetting(WBSettings* owner, const QString& pDomain, const QString& pKey, const QVariant& pDefaultValue, qreal pAlpha = 1.0);`**
  - ���캯�������˸��������򡢼���Ĭ��ֵ��������һ�� `qreal` ���͵�͸���ȣ�`pAlpha`��������������ɫ�б��͸���ȡ�

- **`virtual ~WBColorListSetting();`**
  - �����������������ͷ���Դ��

#### 2. **������Ա����**

- **`virtual QVariant reset();`**
  - ������ɫ�б�Ĭ��ֵ������������ܻᱻ��д����ȷ����ɫ�б�ָ������ʼ״̬��

- **`QList<QColor> colors() const;`**
  - ��ȡ��ǰ����ɫ�б����������� `QList<QColor>`���� `QColor` ������б�

- **`void setColor(int pIndex, const QColor& color);`**
  - ������ɫ�б���ָ��������`pIndex`������ɫ��`color` ���µ���ɫֵ��

- **`void setAlpha(qreal pAlpha);`**
  - ������ɫ�б��͸���ȡ�`pAlpha` ��͸����ֵ����Χͨ���� 0.0����ȫ͸������ 1.0����ȫ��͸����֮�䡣

#### 3. **������Ա����**

- **`QList<QColor> mColors;`**
  - �洢��ɫ�б�ĳ�Ա������

- **`qreal mAlpha;`**
  - �洢��ɫ�б��͸����ֵ��

### �ܽ�

- **`WBSetting`** ���ṩ��һ��ͨ�õĽӿ�������ͬ���͵�������������á���ȡ������ֵ���Լ�������ֵ���ַ������������������͵����á�
- **`WBColorListSetting`** ����չ�� `WBSetting`���ṩ�˶���ķ�����������ɫ�б��͸�������á��������������Ҫ����ʹ洢�����ɫ���õ������

��Щ������ּ��ʹ������Ĺ������ģ�黯�����Ա���Ӧ�ó��������ɹ���������͵����á�

*/
