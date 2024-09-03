/********************************************************************************
** Form generated from reading UI file 'downloads.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOWNLOADS_H
#define UI_DOWNLOADS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include "WBEditTableView.h"

QT_BEGIN_NAMESPACE

class Ui_DownloadDialog
{
public:
    QGridLayout *gridLayout;
    WBEditTableView *downloadsView;
    QHBoxLayout *horizontalLayout;
    QPushButton *cleanupButton;
    QSpacerItem *spacerItem;
    QLabel *itemCount;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *DownloadDialog)
    {
        if (DownloadDialog->objectName().isEmpty())
            DownloadDialog->setObjectName(QString::fromUtf8("DownloadDialog"));
        DownloadDialog->resize(332, 252);
        gridLayout = new QGridLayout(DownloadDialog);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        downloadsView = new WBEditTableView(DownloadDialog);
        downloadsView->setObjectName(QString::fromUtf8("downloadsView"));

        gridLayout->addWidget(downloadsView, 0, 0, 1, 3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        cleanupButton = new QPushButton(DownloadDialog);
        cleanupButton->setObjectName(QString::fromUtf8("cleanupButton"));
        cleanupButton->setEnabled(false);

        horizontalLayout->addWidget(cleanupButton);

        spacerItem = new QSpacerItem(58, 24, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(spacerItem);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        itemCount = new QLabel(DownloadDialog);
        itemCount->setObjectName(QString::fromUtf8("itemCount"));

        gridLayout->addWidget(itemCount, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(148, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 2, 1, 1);


        retranslateUi(DownloadDialog);

        QMetaObject::connectSlotsByName(DownloadDialog);
    } // setupUi

    void retranslateUi(QDialog *DownloadDialog)
    {
        DownloadDialog->setWindowTitle(QCoreApplication::translate("DownloadDialog", "Downloads", nullptr));
        cleanupButton->setText(QCoreApplication::translate("DownloadDialog", "Clean Up", nullptr));
        itemCount->setText(QCoreApplication::translate("DownloadDialog", "0 Items", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DownloadDialog: public Ui_DownloadDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOWNLOADS_H
