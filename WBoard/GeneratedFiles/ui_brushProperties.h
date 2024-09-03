/********************************************************************************
** Form generated from reading UI file 'brushProperties.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BRUSHPROPERTIES_H
#define UI_BRUSHPROPERTIES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include "gui/WBCircleFrame.h"
#include "gui/WBColorPicker.h"

QT_BEGIN_NAMESPACE

class Ui_brushProperties
{
public:
    QGridLayout *gridLayout;
    QFrame *pressureFrame;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *pressureSensitiveCheckBox;
    QSpacerItem *seSpacer;
    QFrame *opacityFrame;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *wSpacer_2;
    QLabel *opacityLabel;
    QSlider *opacitySlider;
    QSpacerItem *eSpacer_2;
    QFrame *colorFrame;
    QVBoxLayout *verticalLayout;
    QFrame *lightBackgroundFrame;
    QHBoxLayout *lightBackgroundLayout;
    QLabel *lightBackgroundLabel;
    QSpacerItem *horizontalSpacer;
    WBColorPicker *lightBackgroundColorPicker0;
    QSpacerItem *horizontalSpacer_3;
    QFrame *darkBackgroundFrame;
    QHBoxLayout *darkBackgroundLayout;
    QLabel *darkBackgroundLabel;
    QSpacerItem *horizontalSpacer_2;
    WBColorPicker *darkBackgroundColorPicker0;
    QGroupBox *lineWidthGroupBox;
    QGridLayout *gridLayout_2;
    QSpacerItem *wSpacer;
    QSpacerItem *eSpacer;
    QSlider *fineSlider;
    QLabel *mediumLabel;
    QSlider *mediumSlider;
    QLabel *strongLabel;
    QSlider *strongSlider;
    WBCircleFrame *fineDisplayFrame;
    WBCircleFrame *mediumDisplayFrame;
    WBCircleFrame *strongDisplayFrame;
    QLabel *fineLabel;
    QSpacerItem *cSpacer;
    QFrame *circleFrame;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *circleCheckBox;
    QSpinBox *circleSpinBox;
    QLabel *pxlabel;
    QSpacerItem *cspacerright;

    void setupUi(QFrame *brushProperties)
    {
        if (brushProperties->objectName().isEmpty())
            brushProperties->setObjectName(QString::fromUtf8("brushProperties"));
        brushProperties->resize(605, 808);
        brushProperties->setFrameShape(QFrame::NoFrame);
        brushProperties->setFrameShadow(QFrame::Plain);
        gridLayout = new QGridLayout(brushProperties);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pressureFrame = new QFrame(brushProperties);
        pressureFrame->setObjectName(QString::fromUtf8("pressureFrame"));
        pressureFrame->setFrameShape(QFrame::NoFrame);
        pressureFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(pressureFrame);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        pressureSensitiveCheckBox = new QCheckBox(pressureFrame);
        pressureSensitiveCheckBox->setObjectName(QString::fromUtf8("pressureSensitiveCheckBox"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pressureSensitiveCheckBox->sizePolicy().hasHeightForWidth());
        pressureSensitiveCheckBox->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(pressureSensitiveCheckBox);

        seSpacer = new QSpacerItem(198, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(seSpacer);


        gridLayout->addWidget(pressureFrame, 6, 1, 1, 4);

        opacityFrame = new QFrame(brushProperties);
        opacityFrame->setObjectName(QString::fromUtf8("opacityFrame"));
        opacityFrame->setFrameShape(QFrame::NoFrame);
        opacityFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(opacityFrame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        wSpacer_2 = new QSpacerItem(154, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(wSpacer_2);

        opacityLabel = new QLabel(opacityFrame);
        opacityLabel->setObjectName(QString::fromUtf8("opacityLabel"));

        horizontalLayout->addWidget(opacityLabel);

        opacitySlider = new QSlider(opacityFrame);
        opacitySlider->setObjectName(QString::fromUtf8("opacitySlider"));
        opacitySlider->setMinimum(20);
        opacitySlider->setMaximum(100);
        opacitySlider->setValue(50);
        opacitySlider->setOrientation(Qt::Horizontal);
        opacitySlider->setTickPosition(QSlider::TicksAbove);
        opacitySlider->setTickInterval(20);

        horizontalLayout->addWidget(opacitySlider);

        eSpacer_2 = new QSpacerItem(156, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(eSpacer_2);


        gridLayout->addWidget(opacityFrame, 2, 1, 1, 4);

        colorFrame = new QFrame(brushProperties);
        colorFrame->setObjectName(QString::fromUtf8("colorFrame"));
        colorFrame->setLayoutDirection(Qt::LeftToRight);
        colorFrame->setFrameShape(QFrame::NoFrame);
        colorFrame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(colorFrame);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lightBackgroundFrame = new QFrame(colorFrame);
        lightBackgroundFrame->setObjectName(QString::fromUtf8("lightBackgroundFrame"));
        lightBackgroundFrame->setFrameShape(QFrame::NoFrame);
        lightBackgroundFrame->setFrameShadow(QFrame::Raised);
        lightBackgroundLayout = new QHBoxLayout(lightBackgroundFrame);
        lightBackgroundLayout->setObjectName(QString::fromUtf8("lightBackgroundLayout"));
        lightBackgroundLabel = new QLabel(lightBackgroundFrame);
        lightBackgroundLabel->setObjectName(QString::fromUtf8("lightBackgroundLabel"));

        lightBackgroundLayout->addWidget(lightBackgroundLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        lightBackgroundLayout->addItem(horizontalSpacer);

        lightBackgroundColorPicker0 = new WBColorPicker(lightBackgroundFrame);
        lightBackgroundColorPicker0->setObjectName(QString::fromUtf8("lightBackgroundColorPicker0"));
        lightBackgroundColorPicker0->setMinimumSize(QSize(32, 32));
        lightBackgroundColorPicker0->setFrameShape(QFrame::StyledPanel);
        lightBackgroundColorPicker0->setFrameShadow(QFrame::Raised);

        lightBackgroundLayout->addWidget(lightBackgroundColorPicker0);


        verticalLayout->addWidget(lightBackgroundFrame);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer_3);

        darkBackgroundFrame = new QFrame(colorFrame);
        darkBackgroundFrame->setObjectName(QString::fromUtf8("darkBackgroundFrame"));
        darkBackgroundFrame->setFrameShape(QFrame::NoFrame);
        darkBackgroundFrame->setFrameShadow(QFrame::Raised);
        darkBackgroundLayout = new QHBoxLayout(darkBackgroundFrame);
        darkBackgroundLayout->setObjectName(QString::fromUtf8("darkBackgroundLayout"));
        darkBackgroundLabel = new QLabel(darkBackgroundFrame);
        darkBackgroundLabel->setObjectName(QString::fromUtf8("darkBackgroundLabel"));

        darkBackgroundLayout->addWidget(darkBackgroundLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        darkBackgroundLayout->addItem(horizontalSpacer_2);

        darkBackgroundColorPicker0 = new WBColorPicker(darkBackgroundFrame);
        darkBackgroundColorPicker0->setObjectName(QString::fromUtf8("darkBackgroundColorPicker0"));
        darkBackgroundColorPicker0->setMinimumSize(QSize(32, 32));
        darkBackgroundColorPicker0->setFrameShape(QFrame::StyledPanel);
        darkBackgroundColorPicker0->setFrameShadow(QFrame::Raised);

        darkBackgroundLayout->addWidget(darkBackgroundColorPicker0);


        verticalLayout->addWidget(darkBackgroundFrame);


        gridLayout->addWidget(colorFrame, 1, 1, 1, 4);

        lineWidthGroupBox = new QGroupBox(brushProperties);
        lineWidthGroupBox->setObjectName(QString::fromUtf8("lineWidthGroupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineWidthGroupBox->sizePolicy().hasHeightForWidth());
        lineWidthGroupBox->setSizePolicy(sizePolicy1);
        gridLayout_2 = new QGridLayout(lineWidthGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        wSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(wSpacer, 1, 1, 1, 1);

        eSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(eSpacer, 1, 3, 1, 1);

        fineSlider = new QSlider(lineWidthGroupBox);
        fineSlider->setObjectName(QString::fromUtf8("fineSlider"));
        fineSlider->setMinimum(5);
        fineSlider->setMaximum(500);
        fineSlider->setValue(5);
        fineSlider->setOrientation(Qt::Horizontal);
        fineSlider->setTickPosition(QSlider::TicksAbove);
        fineSlider->setTickInterval(100);

        gridLayout_2->addWidget(fineSlider, 1, 2, 1, 1);

        mediumLabel = new QLabel(lineWidthGroupBox);
        mediumLabel->setObjectName(QString::fromUtf8("mediumLabel"));

        gridLayout_2->addWidget(mediumLabel, 2, 0, 1, 1);

        mediumSlider = new QSlider(lineWidthGroupBox);
        mediumSlider->setObjectName(QString::fromUtf8("mediumSlider"));
        mediumSlider->setMinimum(5);
        mediumSlider->setMaximum(500);
        mediumSlider->setOrientation(Qt::Horizontal);
        mediumSlider->setTickPosition(QSlider::TicksAbove);
        mediumSlider->setTickInterval(100);

        gridLayout_2->addWidget(mediumSlider, 2, 2, 1, 1);

        strongLabel = new QLabel(lineWidthGroupBox);
        strongLabel->setObjectName(QString::fromUtf8("strongLabel"));

        gridLayout_2->addWidget(strongLabel, 3, 0, 1, 1);

        strongSlider = new QSlider(lineWidthGroupBox);
        strongSlider->setObjectName(QString::fromUtf8("strongSlider"));
        strongSlider->setMinimum(5);
        strongSlider->setMaximum(500);
        strongSlider->setOrientation(Qt::Horizontal);
        strongSlider->setTickPosition(QSlider::TicksAbove);
        strongSlider->setTickInterval(100);

        gridLayout_2->addWidget(strongSlider, 3, 2, 1, 1);

        fineDisplayFrame = new WBCircleFrame(lineWidthGroupBox);
        fineDisplayFrame->setObjectName(QString::fromUtf8("fineDisplayFrame"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(60);
        sizePolicy2.setVerticalStretch(60);
        sizePolicy2.setHeightForWidth(fineDisplayFrame->sizePolicy().hasHeightForWidth());
        fineDisplayFrame->setSizePolicy(sizePolicy2);
        fineDisplayFrame->setMinimumSize(QSize(60, 60));
        fineDisplayFrame->setFrameShape(QFrame::StyledPanel);
        fineDisplayFrame->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(fineDisplayFrame, 1, 4, 1, 1);

        mediumDisplayFrame = new WBCircleFrame(lineWidthGroupBox);
        mediumDisplayFrame->setObjectName(QString::fromUtf8("mediumDisplayFrame"));
        sizePolicy2.setHeightForWidth(mediumDisplayFrame->sizePolicy().hasHeightForWidth());
        mediumDisplayFrame->setSizePolicy(sizePolicy2);
        mediumDisplayFrame->setMinimumSize(QSize(60, 60));
        mediumDisplayFrame->setFrameShape(QFrame::StyledPanel);
        mediumDisplayFrame->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(mediumDisplayFrame, 2, 4, 1, 1);

        strongDisplayFrame = new WBCircleFrame(lineWidthGroupBox);
        strongDisplayFrame->setObjectName(QString::fromUtf8("strongDisplayFrame"));
        sizePolicy2.setHeightForWidth(strongDisplayFrame->sizePolicy().hasHeightForWidth());
        strongDisplayFrame->setSizePolicy(sizePolicy2);
        strongDisplayFrame->setMinimumSize(QSize(60, 60));
        strongDisplayFrame->setFrameShape(QFrame::StyledPanel);
        strongDisplayFrame->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(strongDisplayFrame, 3, 4, 1, 1);

        fineLabel = new QLabel(lineWidthGroupBox);
        fineLabel->setObjectName(QString::fromUtf8("fineLabel"));

        gridLayout_2->addWidget(fineLabel, 1, 0, 1, 1);


        gridLayout->addWidget(lineWidthGroupBox, 4, 1, 1, 4);

        cSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(cSpacer, 3, 2, 1, 1);

        circleFrame = new QFrame(brushProperties);
        circleFrame->setObjectName(QString::fromUtf8("circleFrame"));
        circleFrame->setFrameShape(QFrame::NoFrame);
        circleFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(circleFrame);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        circleCheckBox = new QCheckBox(circleFrame);
        circleCheckBox->setObjectName(QString::fromUtf8("circleCheckBox"));
        sizePolicy.setHeightForWidth(circleCheckBox->sizePolicy().hasHeightForWidth());
        circleCheckBox->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(circleCheckBox);

        circleSpinBox = new QSpinBox(circleFrame);
        circleSpinBox->setObjectName(QString::fromUtf8("circleSpinBox"));

        horizontalLayout_5->addWidget(circleSpinBox);

        pxlabel = new QLabel(circleFrame);
        pxlabel->setObjectName(QString::fromUtf8("pxlabel"));

        horizontalLayout_5->addWidget(pxlabel);


        gridLayout->addWidget(circleFrame, 5, 1, 1, 1);

        cspacerright = new QSpacerItem(198, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(cspacerright, 5, 3, 1, 1);


        retranslateUi(brushProperties);

        QMetaObject::connectSlotsByName(brushProperties);
    } // setupUi

    void retranslateUi(QFrame *brushProperties)
    {
        brushProperties->setWindowTitle(QString());
        pressureSensitiveCheckBox->setText(QCoreApplication::translate("brushProperties", "Pen is Pressure Sensitive", nullptr));
        opacityLabel->setText(QCoreApplication::translate("brushProperties", "Opacity", nullptr));
        lightBackgroundLabel->setText(QCoreApplication::translate("brushProperties", "On Light Background", nullptr));
        darkBackgroundLabel->setText(QCoreApplication::translate("brushProperties", "On Dark Background", nullptr));
        lineWidthGroupBox->setTitle(QCoreApplication::translate("brushProperties", "Line Width", nullptr));
        mediumLabel->setText(QCoreApplication::translate("brushProperties", "Medium", nullptr));
        strongLabel->setText(QCoreApplication::translate("brushProperties", "Strong", nullptr));
        fineLabel->setText(QCoreApplication::translate("brushProperties", "Fine", nullptr));
        circleCheckBox->setText(QCoreApplication::translate("brushProperties", "Show preview circle from", nullptr));
        pxlabel->setText(QCoreApplication::translate("brushProperties", "px", nullptr));
    } // retranslateUi

};

namespace Ui {
    class brushProperties: public Ui_brushProperties {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BRUSHPROPERTIES_H
