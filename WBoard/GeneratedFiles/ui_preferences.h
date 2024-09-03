/********************************************************************************
** Form generated from reading UI file 'preferences.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFERENCES_H
#define UI_PREFERENCES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "gui/WBColorPicker.h"

QT_BEGIN_NAMESPACE

class Ui_preferencesDialog
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *defaultSettingsButton;
    QSpacerItem *bottomHSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *closeButton;
    QLabel *versionLabel;
    QTabWidget *mainTabWidget;
    QWidget *displayTab;
    QGridLayout *gridLayout_3;
    QGroupBox *multiDisplayGroupBox;
    QGridLayout *gridLayout_2;
    QSpacerItem *mirroringRSpacer;
    QSpacerItem *mirroringLSpacer;
    QCheckBox *swapControlAndDisplayScreensCheckBox;
    QCheckBox *displayBrowserPageCheckBox;
    QCheckBox *swapDisplayScreensCheckBox;
    QSpacerItem *modeSpacer;
    QGroupBox *modeGroupBox;
    QGridLayout *gridLayout_15;
    QSpacerItem *horizontalSpacer_5;
    QGridLayout *gridLayout_16;
    QLabel *modeLabel;
    QComboBox *startModeComboBox;
    QSpacerItem *horizontalSpacer_6;
    QGroupBox *stylusPaletteGroupBox;
    QGridLayout *gridLayout_14;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout_5;
    QRadioButton *horizontalChoice;
    QRadioButton *verticalChoice;
    QSpacerItem *verticalSpacer_5;
    QGroupBox *keyboardGroupBox;
    QGridLayout *gridLayout_13;
    QGridLayout *oskGridLayout;
    QComboBox *keyboardPaletteKeyButtonSize;
    QLabel *keyboardPaletteKeyButtonSize_Label;
    QCheckBox *useSystemOSKCheckBox;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QGroupBox *toolbarGroupBox;
    QGridLayout *gridLayout_9;
    QGridLayout *gridLayout_10;
    QRadioButton *toolbarAtTopRadioButton;
    QRadioButton *toolbarAtBottomRadioButton;
    QSpacerItem *verticalSpacer;
    QSpacerItem *toolbarLSpacer;
    QSpacerItem *toolbarRSpacer;
    QCheckBox *toolbarDisplayTextCheckBox;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *keyboardSpacer;
    QSpacerItem *toolbarSpacer;
    QGroupBox *documentsGroupBox;
    QGridLayout *gridLayout_19;
    QGridLayout *gridLayout_18;
    QCheckBox *showDateColumnOnAlphabeticalSort;
    QCheckBox *emptyTrashForOlderDocuments;
    QSpinBox *emptyTrashDaysValue;
    QLabel *emptyTrashDaysLabel;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *horizontalSpacer_10;
    QWidget *gridTab;
    QGridLayout *gridLayout_17;
    QFrame *gridFrame;
    QGridLayout *gridLayout_11;
    QFrame *crossColorLightBackgroundFrame;
    QHBoxLayout *crossColorLightBackgroundLayout;
    QLabel *crossColorLightBackgroundLabel;
    QSpacerItem *horizontalSpacer_7;
    WBColorPicker *crossColorLightBackgroundColorPicker;
    QFrame *darkBackgroundOpacityFrame;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *wSpacer_2;
    QLabel *darkBackgroundOpacityLabel;
    QSlider *darkBackgroundOpacitySlider;
    QSpacerItem *eSpacer_2;
    QFrame *crossColorDarkBackgroundFrame;
    QHBoxLayout *crossColorDarkBackgroundLayout;
    QLabel *crossColorDarkBackgroundLabel;
    QSpacerItem *horizontalSpacer_8;
    WBColorPicker *crossColorDarkBackgroundColorPicker;
    QFrame *lightBackgroundOpacityFrame;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *wSpacer_3;
    QLabel *lightBackgroundOpacityLabel;
    QSlider *lightBackgroundOpacitySlider;
    QSpacerItem *eSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QWidget *penTab;
    QGridLayout *gridLayout_4;
    QFrame *penFrame;
    QWidget *markerTab;
    QVBoxLayout *verticalLayout;
    QFrame *markerFrame;
    QWidget *networkTab;
    QGridLayout *gridLayout_6;
    QGroupBox *internetGroupBox;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_8;
    QCheckBox *useExternalBrowserCheckBox;
    QGridLayout *gridLayout_12;
    QLineEdit *webHomePage;
    QLabel *labelHomePage;
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *proxyUsername;
    QLabel *label_3;
    QLineEdit *proxyPassword;
    QSpacerItem *internetLSpacer;
    QSpacerItem *verticalSpacer_2;
    QWidget *aboutTab;
    QVBoxLayout *verticalLayout_2;
    QTextBrowser *copyrightTextBrowser;
    QGroupBox *softwareUpdateGroupBox;
    QCheckBox *checkSoftwareUpdateAtLaunchCheckBox;
    QGroupBox *sankoreImporterGroupBox;
    QCheckBox *checkOpenSankoreAtStartup;

    void setupUi(QDialog *preferencesDialog)
    {
        if (preferencesDialog->objectName().isEmpty())
            preferencesDialog->setObjectName(QString::fromUtf8("preferencesDialog"));
        preferencesDialog->resize(825, 767);
        gridLayout = new QGridLayout(preferencesDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame = new QFrame(preferencesDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        defaultSettingsButton = new QPushButton(frame);
        defaultSettingsButton->setObjectName(QString::fromUtf8("defaultSettingsButton"));

        horizontalLayout_2->addWidget(defaultSettingsButton);

        bottomHSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(bottomHSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        closeButton = new QPushButton(frame);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));

        horizontalLayout->addWidget(closeButton);


        horizontalLayout_2->addLayout(horizontalLayout);


        gridLayout->addWidget(frame, 4, 0, 1, 1);

        versionLabel = new QLabel(preferencesDialog);
        versionLabel->setObjectName(QString::fromUtf8("versionLabel"));

        gridLayout->addWidget(versionLabel, 0, 0, 1, 1);

        mainTabWidget = new QTabWidget(preferencesDialog);
        mainTabWidget->setObjectName(QString::fromUtf8("mainTabWidget"));
        displayTab = new QWidget();
        displayTab->setObjectName(QString::fromUtf8("displayTab"));
        gridLayout_3 = new QGridLayout(displayTab);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        multiDisplayGroupBox = new QGroupBox(displayTab);
        multiDisplayGroupBox->setObjectName(QString::fromUtf8("multiDisplayGroupBox"));
        gridLayout_2 = new QGridLayout(multiDisplayGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mirroringRSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(mirroringRSpacer, 1, 3, 1, 1);

        mirroringLSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_2->addItem(mirroringLSpacer, 1, 0, 1, 1);

        swapControlAndDisplayScreensCheckBox = new QCheckBox(multiDisplayGroupBox);
        swapControlAndDisplayScreensCheckBox->setObjectName(QString::fromUtf8("swapControlAndDisplayScreensCheckBox"));

        gridLayout_2->addWidget(swapControlAndDisplayScreensCheckBox, 2, 2, 1, 1);

        displayBrowserPageCheckBox = new QCheckBox(multiDisplayGroupBox);
        displayBrowserPageCheckBox->setObjectName(QString::fromUtf8("displayBrowserPageCheckBox"));

        gridLayout_2->addWidget(displayBrowserPageCheckBox, 1, 2, 1, 1);

        swapDisplayScreensCheckBox = new QCheckBox(multiDisplayGroupBox);
        swapDisplayScreensCheckBox->setObjectName(QString::fromUtf8("swapDisplayScreensCheckBox"));

        gridLayout_2->addWidget(swapDisplayScreensCheckBox, 2, 3, 1, 1);


        gridLayout_3->addWidget(multiDisplayGroupBox, 2, 0, 1, 1);

        modeSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(modeSpacer, 14, 0, 1, 1);

        modeGroupBox = new QGroupBox(displayTab);
        modeGroupBox->setObjectName(QString::fromUtf8("modeGroupBox"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(modeGroupBox->sizePolicy().hasHeightForWidth());
        modeGroupBox->setSizePolicy(sizePolicy);
        gridLayout_15 = new QGridLayout(modeGroupBox);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_15->addItem(horizontalSpacer_5, 0, 0, 1, 1);

        gridLayout_16 = new QGridLayout();
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        modeLabel = new QLabel(modeGroupBox);
        modeLabel->setObjectName(QString::fromUtf8("modeLabel"));

        gridLayout_16->addWidget(modeLabel, 0, 0, 1, 1);

        startModeComboBox = new QComboBox(modeGroupBox);
        startModeComboBox->addItem(QString());
        startModeComboBox->addItem(QString());
        startModeComboBox->setObjectName(QString::fromUtf8("startModeComboBox"));

        gridLayout_16->addWidget(startModeComboBox, 0, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_16->addItem(horizontalSpacer_6, 0, 2, 1, 1);


        gridLayout_15->addLayout(gridLayout_16, 0, 1, 2, 1);


        gridLayout_3->addWidget(modeGroupBox, 15, 0, 1, 1);

        stylusPaletteGroupBox = new QGroupBox(displayTab);
        stylusPaletteGroupBox->setObjectName(QString::fromUtf8("stylusPaletteGroupBox"));
        stylusPaletteGroupBox->setMinimumSize(QSize(0, 0));
        gridLayout_14 = new QGridLayout(stylusPaletteGroupBox);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        gridLayout_14->setContentsMargins(12, -1, -1, -1);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_14->addItem(horizontalSpacer_4, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_14->addItem(horizontalSpacer_3, 0, 2, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalChoice = new QRadioButton(stylusPaletteGroupBox);
        horizontalChoice->setObjectName(QString::fromUtf8("horizontalChoice"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(horizontalChoice->sizePolicy().hasHeightForWidth());
        horizontalChoice->setSizePolicy(sizePolicy1);
        horizontalChoice->setMinimumSize(QSize(0, 0));
        horizontalChoice->setChecked(false);

        gridLayout_5->addWidget(horizontalChoice, 0, 0, 1, 1);

        verticalChoice = new QRadioButton(stylusPaletteGroupBox);
        verticalChoice->setObjectName(QString::fromUtf8("verticalChoice"));
        verticalChoice->setChecked(true);

        gridLayout_5->addWidget(verticalChoice, 1, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_5, 2, 0, 1, 1);


        gridLayout_14->addLayout(gridLayout_5, 0, 1, 1, 1);


        gridLayout_3->addWidget(stylusPaletteGroupBox, 4, 0, 2, 1);

        keyboardGroupBox = new QGroupBox(displayTab);
        keyboardGroupBox->setObjectName(QString::fromUtf8("keyboardGroupBox"));
        sizePolicy.setHeightForWidth(keyboardGroupBox->sizePolicy().hasHeightForWidth());
        keyboardGroupBox->setSizePolicy(sizePolicy);
        gridLayout_13 = new QGridLayout(keyboardGroupBox);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        oskGridLayout = new QGridLayout();
        oskGridLayout->setObjectName(QString::fromUtf8("oskGridLayout"));
        keyboardPaletteKeyButtonSize = new QComboBox(keyboardGroupBox);
        keyboardPaletteKeyButtonSize->setObjectName(QString::fromUtf8("keyboardPaletteKeyButtonSize"));

        oskGridLayout->addWidget(keyboardPaletteKeyButtonSize, 3, 1, 1, 1);

        keyboardPaletteKeyButtonSize_Label = new QLabel(keyboardGroupBox);
        keyboardPaletteKeyButtonSize_Label->setObjectName(QString::fromUtf8("keyboardPaletteKeyButtonSize_Label"));

        oskGridLayout->addWidget(keyboardPaletteKeyButtonSize_Label, 3, 0, 1, 1);

        useSystemOSKCheckBox = new QCheckBox(keyboardGroupBox);
        useSystemOSKCheckBox->setObjectName(QString::fromUtf8("useSystemOSKCheckBox"));

        oskGridLayout->addWidget(useSystemOSKCheckBox, 2, 0, 1, 1);


        gridLayout_13->addLayout(oskGridLayout, 0, 1, 1, 2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_13->addItem(horizontalSpacer, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_13->addItem(horizontalSpacer_2, 0, 3, 1, 1);


        gridLayout_3->addWidget(keyboardGroupBox, 13, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_3, 7, 0, 1, 1);

        toolbarGroupBox = new QGroupBox(displayTab);
        toolbarGroupBox->setObjectName(QString::fromUtf8("toolbarGroupBox"));
        sizePolicy.setHeightForWidth(toolbarGroupBox->sizePolicy().hasHeightForWidth());
        toolbarGroupBox->setSizePolicy(sizePolicy);
        gridLayout_9 = new QGridLayout(toolbarGroupBox);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        toolbarAtTopRadioButton = new QRadioButton(toolbarGroupBox);
        toolbarAtTopRadioButton->setObjectName(QString::fromUtf8("toolbarAtTopRadioButton"));

        gridLayout_10->addWidget(toolbarAtTopRadioButton, 0, 0, 1, 1);

        toolbarAtBottomRadioButton = new QRadioButton(toolbarGroupBox);
        toolbarAtBottomRadioButton->setObjectName(QString::fromUtf8("toolbarAtBottomRadioButton"));

        gridLayout_10->addWidget(toolbarAtBottomRadioButton, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_10->addItem(verticalSpacer, 2, 0, 1, 1);


        gridLayout_9->addLayout(gridLayout_10, 0, 1, 1, 1);

        toolbarLSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_9->addItem(toolbarLSpacer, 0, 0, 1, 1);

        toolbarRSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(toolbarRSpacer, 0, 2, 1, 1);

        toolbarDisplayTextCheckBox = new QCheckBox(toolbarGroupBox);
        toolbarDisplayTextCheckBox->setObjectName(QString::fromUtf8("toolbarDisplayTextCheckBox"));

        gridLayout_9->addWidget(toolbarDisplayTextCheckBox, 1, 1, 1, 1);


        gridLayout_3->addWidget(toolbarGroupBox, 8, 0, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_7, 17, 0, 1, 1);

        keyboardSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(keyboardSpacer, 9, 0, 1, 1);

        toolbarSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(toolbarSpacer, 3, 0, 1, 1);

        documentsGroupBox = new QGroupBox(displayTab);
        documentsGroupBox->setObjectName(QString::fromUtf8("documentsGroupBox"));
        sizePolicy.setHeightForWidth(documentsGroupBox->sizePolicy().hasHeightForWidth());
        documentsGroupBox->setSizePolicy(sizePolicy);
        gridLayout_19 = new QGridLayout(documentsGroupBox);
        gridLayout_19->setObjectName(QString::fromUtf8("gridLayout_19"));
        gridLayout_18 = new QGridLayout();
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        showDateColumnOnAlphabeticalSort = new QCheckBox(documentsGroupBox);
        showDateColumnOnAlphabeticalSort->setObjectName(QString::fromUtf8("showDateColumnOnAlphabeticalSort"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(showDateColumnOnAlphabeticalSort->sizePolicy().hasHeightForWidth());
        showDateColumnOnAlphabeticalSort->setSizePolicy(sizePolicy2);

        gridLayout_18->addWidget(showDateColumnOnAlphabeticalSort, 0, 1, 1, 1);

        emptyTrashForOlderDocuments = new QCheckBox(documentsGroupBox);
        emptyTrashForOlderDocuments->setObjectName(QString::fromUtf8("emptyTrashForOlderDocuments"));

        gridLayout_18->addWidget(emptyTrashForOlderDocuments, 3, 1, 1, 1);

        emptyTrashDaysValue = new QSpinBox(documentsGroupBox);
        emptyTrashDaysValue->setObjectName(QString::fromUtf8("emptyTrashDaysValue"));

        gridLayout_18->addWidget(emptyTrashDaysValue, 3, 2, 1, 1);

        emptyTrashDaysLabel = new QLabel(documentsGroupBox);
        emptyTrashDaysLabel->setObjectName(QString::fromUtf8("emptyTrashDaysLabel"));

        gridLayout_18->addWidget(emptyTrashDaysLabel, 3, 3, 1, 1);


        gridLayout_19->addLayout(gridLayout_18, 0, 1, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_19->addItem(horizontalSpacer_9, 0, 0, 2, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_19->addItem(horizontalSpacer_10, 0, 2, 1, 1);


        gridLayout_3->addWidget(documentsGroupBox, 16, 0, 1, 1);

        mainTabWidget->addTab(displayTab, QString());
        gridTab = new QWidget();
        gridTab->setObjectName(QString::fromUtf8("gridTab"));
        gridLayout_17 = new QGridLayout(gridTab);
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        gridFrame = new QFrame(gridTab);
        gridFrame->setObjectName(QString::fromUtf8("gridFrame"));
        gridFrame->setEnabled(true);
        gridFrame->setFrameShape(QFrame::NoFrame);
        gridFrame->setFrameShadow(QFrame::Raised);
        gridLayout_11 = new QGridLayout(gridFrame);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        crossColorLightBackgroundFrame = new QFrame(gridFrame);
        crossColorLightBackgroundFrame->setObjectName(QString::fromUtf8("crossColorLightBackgroundFrame"));
        crossColorLightBackgroundFrame->setFrameShape(QFrame::NoFrame);
        crossColorLightBackgroundFrame->setFrameShadow(QFrame::Raised);
        crossColorLightBackgroundLayout = new QHBoxLayout(crossColorLightBackgroundFrame);
        crossColorLightBackgroundLayout->setObjectName(QString::fromUtf8("crossColorLightBackgroundLayout"));
        crossColorLightBackgroundLabel = new QLabel(crossColorLightBackgroundFrame);
        crossColorLightBackgroundLabel->setObjectName(QString::fromUtf8("crossColorLightBackgroundLabel"));

        crossColorLightBackgroundLayout->addWidget(crossColorLightBackgroundLabel);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        crossColorLightBackgroundLayout->addItem(horizontalSpacer_7);

        crossColorLightBackgroundColorPicker = new WBColorPicker(crossColorLightBackgroundFrame);
        crossColorLightBackgroundColorPicker->setObjectName(QString::fromUtf8("crossColorLightBackgroundColorPicker"));
        crossColorLightBackgroundColorPicker->setMinimumSize(QSize(32, 32));
        crossColorLightBackgroundColorPicker->setFrameShape(QFrame::StyledPanel);
        crossColorLightBackgroundColorPicker->setFrameShadow(QFrame::Raised);

        crossColorLightBackgroundLayout->addWidget(crossColorLightBackgroundColorPicker);


        gridLayout_11->addWidget(crossColorLightBackgroundFrame, 2, 0, 1, 1);

        darkBackgroundOpacityFrame = new QFrame(gridFrame);
        darkBackgroundOpacityFrame->setObjectName(QString::fromUtf8("darkBackgroundOpacityFrame"));
        darkBackgroundOpacityFrame->setFrameShape(QFrame::NoFrame);
        darkBackgroundOpacityFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_8 = new QHBoxLayout(darkBackgroundOpacityFrame);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        wSpacer_2 = new QSpacerItem(154, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(wSpacer_2);

        darkBackgroundOpacityLabel = new QLabel(darkBackgroundOpacityFrame);
        darkBackgroundOpacityLabel->setObjectName(QString::fromUtf8("darkBackgroundOpacityLabel"));

        horizontalLayout_8->addWidget(darkBackgroundOpacityLabel);

        darkBackgroundOpacitySlider = new QSlider(darkBackgroundOpacityFrame);
        darkBackgroundOpacitySlider->setObjectName(QString::fromUtf8("darkBackgroundOpacitySlider"));
        darkBackgroundOpacitySlider->setMinimum(20);
        darkBackgroundOpacitySlider->setMaximum(100);
        darkBackgroundOpacitySlider->setValue(50);
        darkBackgroundOpacitySlider->setOrientation(Qt::Horizontal);
        darkBackgroundOpacitySlider->setTickPosition(QSlider::TicksAbove);
        darkBackgroundOpacitySlider->setTickInterval(20);

        horizontalLayout_8->addWidget(darkBackgroundOpacitySlider);

        eSpacer_2 = new QSpacerItem(156, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(eSpacer_2);


        gridLayout_11->addWidget(darkBackgroundOpacityFrame, 5, 0, 1, 1);

        crossColorDarkBackgroundFrame = new QFrame(gridFrame);
        crossColorDarkBackgroundFrame->setObjectName(QString::fromUtf8("crossColorDarkBackgroundFrame"));
        crossColorDarkBackgroundFrame->setFrameShape(QFrame::NoFrame);
        crossColorDarkBackgroundFrame->setFrameShadow(QFrame::Raised);
        crossColorDarkBackgroundLayout = new QHBoxLayout(crossColorDarkBackgroundFrame);
        crossColorDarkBackgroundLayout->setObjectName(QString::fromUtf8("crossColorDarkBackgroundLayout"));
        crossColorDarkBackgroundLabel = new QLabel(crossColorDarkBackgroundFrame);
        crossColorDarkBackgroundLabel->setObjectName(QString::fromUtf8("crossColorDarkBackgroundLabel"));

        crossColorDarkBackgroundLayout->addWidget(crossColorDarkBackgroundLabel);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        crossColorDarkBackgroundLayout->addItem(horizontalSpacer_8);

        crossColorDarkBackgroundColorPicker = new WBColorPicker(crossColorDarkBackgroundFrame);
        crossColorDarkBackgroundColorPicker->setObjectName(QString::fromUtf8("crossColorDarkBackgroundColorPicker"));
        crossColorDarkBackgroundColorPicker->setMinimumSize(QSize(32, 32));
        crossColorDarkBackgroundColorPicker->setFrameShape(QFrame::StyledPanel);
        crossColorDarkBackgroundColorPicker->setFrameShadow(QFrame::Raised);

        crossColorDarkBackgroundLayout->addWidget(crossColorDarkBackgroundColorPicker);


        gridLayout_11->addWidget(crossColorDarkBackgroundFrame, 4, 0, 1, 1);

        lightBackgroundOpacityFrame = new QFrame(gridFrame);
        lightBackgroundOpacityFrame->setObjectName(QString::fromUtf8("lightBackgroundOpacityFrame"));
        lightBackgroundOpacityFrame->setFrameShape(QFrame::NoFrame);
        lightBackgroundOpacityFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_10 = new QHBoxLayout(lightBackgroundOpacityFrame);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        wSpacer_3 = new QSpacerItem(154, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(wSpacer_3);

        lightBackgroundOpacityLabel = new QLabel(lightBackgroundOpacityFrame);
        lightBackgroundOpacityLabel->setObjectName(QString::fromUtf8("lightBackgroundOpacityLabel"));

        horizontalLayout_10->addWidget(lightBackgroundOpacityLabel);

        lightBackgroundOpacitySlider = new QSlider(lightBackgroundOpacityFrame);
        lightBackgroundOpacitySlider->setObjectName(QString::fromUtf8("lightBackgroundOpacitySlider"));
        lightBackgroundOpacitySlider->setMinimum(20);
        lightBackgroundOpacitySlider->setMaximum(100);
        lightBackgroundOpacitySlider->setValue(50);
        lightBackgroundOpacitySlider->setOrientation(Qt::Horizontal);
        lightBackgroundOpacitySlider->setTickPosition(QSlider::TicksAbove);
        lightBackgroundOpacitySlider->setTickInterval(20);

        horizontalLayout_10->addWidget(lightBackgroundOpacitySlider);

        eSpacer_3 = new QSpacerItem(156, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(eSpacer_3);


        gridLayout_11->addWidget(lightBackgroundOpacityFrame, 3, 0, 1, 1);


        gridLayout_17->addWidget(gridFrame, 0, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 342, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_17->addItem(verticalSpacer_4, 1, 0, 1, 1);

        mainTabWidget->addTab(gridTab, QString());
        penTab = new QWidget();
        penTab->setObjectName(QString::fromUtf8("penTab"));
        gridLayout_4 = new QGridLayout(penTab);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        penFrame = new QFrame(penTab);
        penFrame->setObjectName(QString::fromUtf8("penFrame"));
        penFrame->setFrameShape(QFrame::NoFrame);
        penFrame->setFrameShadow(QFrame::Raised);

        gridLayout_4->addWidget(penFrame, 0, 0, 1, 2);

        mainTabWidget->addTab(penTab, QString());
        markerTab = new QWidget();
        markerTab->setObjectName(QString::fromUtf8("markerTab"));
        verticalLayout = new QVBoxLayout(markerTab);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        markerFrame = new QFrame(markerTab);
        markerFrame->setObjectName(QString::fromUtf8("markerFrame"));
        markerFrame->setFrameShape(QFrame::NoFrame);
        markerFrame->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(markerFrame);

        mainTabWidget->addTab(markerTab, QString());
        networkTab = new QWidget();
        networkTab->setObjectName(QString::fromUtf8("networkTab"));
        gridLayout_6 = new QGridLayout(networkTab);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        internetGroupBox = new QGroupBox(networkTab);
        internetGroupBox->setObjectName(QString::fromUtf8("internetGroupBox"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(internetGroupBox->sizePolicy().hasHeightForWidth());
        internetGroupBox->setSizePolicy(sizePolicy3);
        gridLayout_7 = new QGridLayout(internetGroupBox);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        useExternalBrowserCheckBox = new QCheckBox(internetGroupBox);
        useExternalBrowserCheckBox->setObjectName(QString::fromUtf8("useExternalBrowserCheckBox"));

        gridLayout_8->addWidget(useExternalBrowserCheckBox, 0, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout_8, 0, 1, 1, 1);

        gridLayout_12 = new QGridLayout();
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        webHomePage = new QLineEdit(internetGroupBox);
        webHomePage->setObjectName(QString::fromUtf8("webHomePage"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(webHomePage->sizePolicy().hasHeightForWidth());
        webHomePage->setSizePolicy(sizePolicy4);

        gridLayout_12->addWidget(webHomePage, 0, 1, 1, 1);

        labelHomePage = new QLabel(internetGroupBox);
        labelHomePage->setObjectName(QString::fromUtf8("labelHomePage"));

        gridLayout_12->addWidget(labelHomePage, 0, 0, 1, 1);

        label = new QLabel(internetGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_12->addWidget(label, 1, 0, 1, 1);

        widget = new QWidget(internetGroupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_5 = new QHBoxLayout(widget);
        horizontalLayout_5->setSpacing(5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        proxyUsername = new QLineEdit(widget);
        proxyUsername->setObjectName(QString::fromUtf8("proxyUsername"));

        horizontalLayout_5->addWidget(proxyUsername);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_5->addWidget(label_3);

        proxyPassword = new QLineEdit(widget);
        proxyPassword->setObjectName(QString::fromUtf8("proxyPassword"));
        proxyPassword->setEchoMode(QLineEdit::Password);

        horizontalLayout_5->addWidget(proxyPassword);


        gridLayout_12->addWidget(widget, 1, 1, 1, 1);


        gridLayout_7->addLayout(gridLayout_12, 3, 1, 1, 1);

        internetLSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_7->addItem(internetLSpacer, 0, 0, 1, 1);


        gridLayout_6->addWidget(internetGroupBox, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_2, 2, 0, 1, 1);

        mainTabWidget->addTab(networkTab, QString());
        aboutTab = new QWidget();
        aboutTab->setObjectName(QString::fromUtf8("aboutTab"));
        aboutTab->setEnabled(true);
        verticalLayout_2 = new QVBoxLayout(aboutTab);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        copyrightTextBrowser = new QTextBrowser(aboutTab);
        copyrightTextBrowser->setObjectName(QString::fromUtf8("copyrightTextBrowser"));
        copyrightTextBrowser->setHtml(QString::fromUtf8("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:10pt;\">WBoard 1.0.0</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:"
                        "0px;\"><span style=\" font-family:'Cantarell'; font-size:10pt;\">WBoard is copyright \302\251 2020. All rights reserved.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell'; font-size:10pt;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:10pt;\">emails: 574226409@qq.com</span></p></td></tr></table></body></html>"));
        copyrightTextBrowser->setOpenExternalLinks(true);

        verticalLayout_2->addWidget(copyrightTextBrowser);

        softwareUpdateGroupBox = new QGroupBox(aboutTab);
        softwareUpdateGroupBox->setObjectName(QString::fromUtf8("softwareUpdateGroupBox"));
        softwareUpdateGroupBox->setMinimumSize(QSize(0, 70));
        softwareUpdateGroupBox->setMaximumSize(QSize(16777215, 70));
        checkSoftwareUpdateAtLaunchCheckBox = new QCheckBox(softwareUpdateGroupBox);
        checkSoftwareUpdateAtLaunchCheckBox->setObjectName(QString::fromUtf8("checkSoftwareUpdateAtLaunchCheckBox"));
        checkSoftwareUpdateAtLaunchCheckBox->setEnabled(true);
        checkSoftwareUpdateAtLaunchCheckBox->setGeometry(QRect(10, 30, 551, 21));
        checkSoftwareUpdateAtLaunchCheckBox->setChecked(true);

        verticalLayout_2->addWidget(softwareUpdateGroupBox);

        sankoreImporterGroupBox = new QGroupBox(aboutTab);
        sankoreImporterGroupBox->setObjectName(QString::fromUtf8("sankoreImporterGroupBox"));
        sankoreImporterGroupBox->setMinimumSize(QSize(0, 70));
        sankoreImporterGroupBox->setMaximumSize(QSize(16777215, 70));
        checkOpenSankoreAtStartup = new QCheckBox(sankoreImporterGroupBox);
        checkOpenSankoreAtStartup->setObjectName(QString::fromUtf8("checkOpenSankoreAtStartup"));
        checkOpenSankoreAtStartup->setEnabled(true);
        checkOpenSankoreAtStartup->setGeometry(QRect(10, 30, 551, 21));
        checkOpenSankoreAtStartup->setChecked(true);

        verticalLayout_2->addWidget(sankoreImporterGroupBox);

        mainTabWidget->addTab(aboutTab, QString());

        gridLayout->addWidget(mainTabWidget, 1, 0, 1, 1);

        QWidget::setTabOrder(useExternalBrowserCheckBox, displayBrowserPageCheckBox);
        QWidget::setTabOrder(displayBrowserPageCheckBox, toolbarAtTopRadioButton);
        QWidget::setTabOrder(toolbarAtTopRadioButton, toolbarAtBottomRadioButton);
        QWidget::setTabOrder(toolbarAtBottomRadioButton, defaultSettingsButton);
        QWidget::setTabOrder(defaultSettingsButton, closeButton);

        retranslateUi(preferencesDialog);

        closeButton->setDefault(true);
        mainTabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(preferencesDialog);
    } // setupUi

    void retranslateUi(QDialog *preferencesDialog)
    {
        preferencesDialog->setWindowTitle(QCoreApplication::translate("preferencesDialog", "Preferences", nullptr));
        defaultSettingsButton->setText(QCoreApplication::translate("preferencesDialog", "Default Settings", nullptr));
        closeButton->setText(QCoreApplication::translate("preferencesDialog", "Close", nullptr));
        versionLabel->setText(QCoreApplication::translate("preferencesDialog", "version : \342\200\246", nullptr));
        multiDisplayGroupBox->setTitle(QCoreApplication::translate("preferencesDialog", "Multi display", nullptr));
        swapControlAndDisplayScreensCheckBox->setText(QCoreApplication::translate("preferencesDialog", "Swap control display and view display", nullptr));
        displayBrowserPageCheckBox->setText(QCoreApplication::translate("preferencesDialog", "Show internal web page content on secondary screen or projector", nullptr));
        swapDisplayScreensCheckBox->setText(QCoreApplication::translate("preferencesDialog", "Swap first and second view displays", nullptr));
        modeGroupBox->setTitle(QCoreApplication::translate("preferencesDialog", "Mode", nullptr));
        modeLabel->setText(QCoreApplication::translate("preferencesDialog", "Mode to start in:", nullptr));
        startModeComboBox->setItemText(0, QCoreApplication::translate("preferencesDialog", "Board", nullptr));
        startModeComboBox->setItemText(1, QCoreApplication::translate("preferencesDialog", "Desktop", nullptr));

        stylusPaletteGroupBox->setTitle(QCoreApplication::translate("preferencesDialog", "Stylus Palette", nullptr));
        horizontalChoice->setText(QCoreApplication::translate("preferencesDialog", "Horizontal", nullptr));
        verticalChoice->setText(QCoreApplication::translate("preferencesDialog", "Vertical", nullptr));
        keyboardGroupBox->setTitle(QCoreApplication::translate("preferencesDialog", "Virtual Keyboard", nullptr));
        keyboardPaletteKeyButtonSize_Label->setText(QCoreApplication::translate("preferencesDialog", "Built-in virtual keyboard button size:", nullptr));
        useSystemOSKCheckBox->setText(QCoreApplication::translate("preferencesDialog", "Use system keyboard (recommended)", nullptr));
        toolbarGroupBox->setTitle(QCoreApplication::translate("preferencesDialog", "Toolbar", nullptr));
        toolbarAtTopRadioButton->setText(QCoreApplication::translate("preferencesDialog", "Positioned at the Top (recommended for tablets)", nullptr));
        toolbarAtBottomRadioButton->setText(QCoreApplication::translate("preferencesDialog", "Positioned at the Bottom (recommended for white boards)", nullptr));
        toolbarDisplayTextCheckBox->setText(QCoreApplication::translate("preferencesDialog", "Display Text Under Button", nullptr));
        documentsGroupBox->setTitle(QCoreApplication::translate("preferencesDialog", "Documents Mode", nullptr));
        showDateColumnOnAlphabeticalSort->setText(QCoreApplication::translate("preferencesDialog", "Display date column on alphabetical sort", nullptr));
        emptyTrashForOlderDocuments->setText(QCoreApplication::translate("preferencesDialog", "Empty trash for documents older than", nullptr));
        emptyTrashDaysLabel->setText(QCoreApplication::translate("preferencesDialog", "days", nullptr));
        mainTabWidget->setTabText(mainTabWidget->indexOf(displayTab), QCoreApplication::translate("preferencesDialog", "Display", nullptr));
        crossColorLightBackgroundLabel->setText(QCoreApplication::translate("preferencesDialog", "On Light Background", nullptr));
        darkBackgroundOpacityLabel->setText(QCoreApplication::translate("preferencesDialog", "Opacity", nullptr));
        crossColorDarkBackgroundLabel->setText(QCoreApplication::translate("preferencesDialog", "On Dark Background", nullptr));
        lightBackgroundOpacityLabel->setText(QCoreApplication::translate("preferencesDialog", "Opacity", nullptr));
        mainTabWidget->setTabText(mainTabWidget->indexOf(gridTab), QCoreApplication::translate("preferencesDialog", "Grid", nullptr));
        mainTabWidget->setTabText(mainTabWidget->indexOf(penTab), QCoreApplication::translate("preferencesDialog", "Pen", nullptr));
        mainTabWidget->setTabText(mainTabWidget->indexOf(markerTab), QCoreApplication::translate("preferencesDialog", "Marker", nullptr));
        internetGroupBox->setTitle(QCoreApplication::translate("preferencesDialog", "Internet", nullptr));
        useExternalBrowserCheckBox->setText(QCoreApplication::translate("preferencesDialog", "Show Page with External Browser", nullptr));
        labelHomePage->setText(QCoreApplication::translate("preferencesDialog", "Home Page:", nullptr));
        label->setText(QCoreApplication::translate("preferencesDialog", "Proxy User:", nullptr));
        label_3->setText(QCoreApplication::translate("preferencesDialog", "Pass:", nullptr));
        mainTabWidget->setTabText(mainTabWidget->indexOf(networkTab), QCoreApplication::translate("preferencesDialog", "Network", nullptr));
        softwareUpdateGroupBox->setTitle(QCoreApplication::translate("preferencesDialog", "Software Update", nullptr));
        checkSoftwareUpdateAtLaunchCheckBox->setText(QCoreApplication::translate("preferencesDialog", "Check software update at launch", nullptr));
        sankoreImporterGroupBox->setTitle(QCoreApplication::translate("preferencesDialog", "Open-Sankor\303\251 Importer", nullptr));
        checkOpenSankoreAtStartup->setText(QCoreApplication::translate("preferencesDialog", "Check if Open-Sankor\303\251 data could be imported at launch", nullptr));
        mainTabWidget->setTabText(mainTabWidget->indexOf(aboutTab), QCoreApplication::translate("preferencesDialog", "About", nullptr));
    } // retranslateUi

};

namespace Ui {
    class preferencesDialog: public Ui_preferencesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCES_H
