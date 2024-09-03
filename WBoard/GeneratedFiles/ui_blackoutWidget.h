/********************************************************************************
** Form generated from reading UI file 'blackoutWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BLACKOUTWIDGET_H
#define UI_BLACKOUTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BlackoutWidget
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QToolButton *iconButton;
    QSpacerItem *verticalSpacer_2;
    QLabel *labelClickToReturn;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *BlackoutWidget)
    {
        if (BlackoutWidget->objectName().isEmpty())
            BlackoutWidget->setObjectName(QString::fromUtf8("BlackoutWidget"));
        BlackoutWidget->resize(723, 838);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        BlackoutWidget->setPalette(palette);
        gridLayout = new QGridLayout(BlackoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        iconButton = new QToolButton(BlackoutWidget);
        iconButton->setObjectName(QString::fromUtf8("iconButton"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(iconButton->sizePolicy().hasHeightForWidth());
        iconButton->setSizePolicy(sizePolicy);
        iconButton->setMinimumSize(QSize(512, 512));
        iconButton->setMaximumSize(QSize(512, 512));
        iconButton->setStyleSheet(QString::fromUtf8("background: url(:/images/bigOpenBoard.png); border: none;"));
        iconButton->setText(QString::fromUtf8(""));

        gridLayout->addWidget(iconButton, 1, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 1, 1, 1);

        labelClickToReturn = new QLabel(BlackoutWidget);
        labelClickToReturn->setObjectName(QString::fromUtf8("labelClickToReturn"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelClickToReturn->sizePolicy().hasHeightForWidth());
        labelClickToReturn->setSizePolicy(sizePolicy1);
        QPalette palette1;
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        QBrush brush2(QColor(113, 113, 113, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        labelClickToReturn->setPalette(palette1);
        QFont font;
        font.setPointSize(20);
        labelClickToReturn->setFont(font);
        labelClickToReturn->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelClickToReturn, 3, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);


        retranslateUi(BlackoutWidget);

        QMetaObject::connectSlotsByName(BlackoutWidget);
    } // setupUi

    void retranslateUi(QWidget *BlackoutWidget)
    {
        labelClickToReturn->setText(QCoreApplication::translate("BlackoutWidget", "Click to Return to Application", nullptr));
        (void)BlackoutWidget;
    } // retranslateUi

};

namespace Ui {
    class BlackoutWidget: public Ui_BlackoutWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLACKOUTWIDGET_H
