/********************************************************************************
** Form generated from reading UI file 'documents.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCUMENTS_H
#define UI_DOCUMENTS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "document/WBDocumentController.h"
#include "gui/WBDocumentThumbnailWidget.h"

QT_BEGIN_NAMESPACE

class Ui_documents
{
public:
    QGridLayout *gridLayout;
    QWidget *topWidget;
    QHBoxLayout *horizontalLayout;
    QSplitter *splitter;
    QWidget *topLeftWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *sortKind;
    QSpacerItem *horizontalSpacer;
    QToolButton *sortOrder;
    QSpacerItem *horizontalSpacer_2;
    WBDocumentTreeView *documentTreeView;
    QFrame *topRightFrame;
    QVBoxLayout *verticalLayout_3;
    WBDocumentThumbnailWidget *thumbnailWidget;
    QWidget *bottomRightFrame;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer2;
    QSlider *documentZoomSlider;
    QSpacerItem *horizontalSpacer1;

    void setupUi(QWidget *documents)
    {
        if (documents->objectName().isEmpty())
            documents->setObjectName(QString::fromUtf8("documents"));
        documents->setEnabled(true);
        documents->resize(796, 646);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(documents->sizePolicy().hasHeightForWidth());
        documents->setSizePolicy(sizePolicy);
        documents->setContextMenuPolicy(Qt::DefaultContextMenu);
        documents->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(documents);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        topWidget = new QWidget(documents);
        topWidget->setObjectName(QString::fromUtf8("topWidget"));
        horizontalLayout = new QHBoxLayout(topWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        splitter = new QSplitter(topWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setMinimumSize(QSize(400, 0));
        splitter->setOrientation(Qt::Horizontal);
        splitter->setOpaqueResize(true);
        splitter->setHandleWidth(6);
        splitter->setChildrenCollapsible(false);
        topLeftWidget = new QWidget(splitter);
        topLeftWidget->setObjectName(QString::fromUtf8("topLeftWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(topLeftWidget->sizePolicy().hasHeightForWidth());
        topLeftWidget->setSizePolicy(sizePolicy1);
        verticalLayout_2 = new QVBoxLayout(topLeftWidget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetMinimumSize);
        sortKind = new QComboBox(topLeftWidget);
        sortKind->addItem(QString());
        sortKind->addItem(QString());
        sortKind->addItem(QString());
        sortKind->setObjectName(QString::fromUtf8("sortKind"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(4);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(sortKind->sizePolicy().hasHeightForWidth());
        sortKind->setSizePolicy(sizePolicy2);
        sortKind->setMaximumSize(QSize(200, 16777215));
        sortKind->setStyleSheet(QString::fromUtf8(""));
        sortKind->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);
        sortKind->setMinimumContentsLength(0);

        horizontalLayout_3->addWidget(sortKind);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        sortOrder = new QToolButton(topLeftWidget);
        sortOrder->setObjectName(QString::fromUtf8("sortOrder"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(sortOrder->sizePolicy().hasHeightForWidth());
        sortOrder->setSizePolicy(sizePolicy3);
        sortOrder->setStyleSheet(QString::fromUtf8("QToolButton { border-style:none; border-width: 0px;margin-left:2px;margin-right:2px}"));
        sortOrder->setText(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/asc.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/images/desc.png"), QSize(), QIcon::Normal, QIcon::On);
        sortOrder->setIcon(icon);
        sortOrder->setCheckable(true);

        horizontalLayout_3->addWidget(sortOrder);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_3);

        documentTreeView = new WBDocumentTreeView(topLeftWidget);
        documentTreeView->setObjectName(QString::fromUtf8("documentTreeView"));
        documentTreeView->setMinimumSize(QSize(0, 0));
        documentTreeView->setMaximumSize(QSize(16777215, 16777215));
        documentTreeView->setFrameShape(QFrame::NoFrame);
        documentTreeView->setFrameShadow(QFrame::Plain);
        documentTreeView->setAutoScroll(true);
        documentTreeView->setAutoScrollMargin(65);
        documentTreeView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        documentTreeView->setSelectionBehavior(QAbstractItemView::SelectRows);
        documentTreeView->setVerticalScrollMode(QAbstractItemView::ScrollPerItem);
        documentTreeView->setAnimated(true);
        documentTreeView->setHeaderHidden(true);
        documentTreeView->header()->setVisible(false);

        verticalLayout_2->addWidget(documentTreeView);

        splitter->addWidget(topLeftWidget);
        topRightFrame = new QFrame(splitter);
        topRightFrame->setObjectName(QString::fromUtf8("topRightFrame"));
        topRightFrame->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_3 = new QVBoxLayout(topRightFrame);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        thumbnailWidget = new WBDocumentThumbnailWidget(topRightFrame);
        thumbnailWidget->setObjectName(QString::fromUtf8("thumbnailWidget"));
        thumbnailWidget->setContextMenuPolicy(Qt::NoContextMenu);
        thumbnailWidget->setStyleSheet(QString::fromUtf8(""));
        thumbnailWidget->setFrameShape(QFrame::NoFrame);
        thumbnailWidget->setFrameShadow(QFrame::Plain);
        thumbnailWidget->setLineWidth(1);
        thumbnailWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        thumbnailWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        thumbnailWidget->setDragMode(QGraphicsView::NoDrag);

        verticalLayout_3->addWidget(thumbnailWidget);

        bottomRightFrame = new QWidget(topRightFrame);
        bottomRightFrame->setObjectName(QString::fromUtf8("bottomRightFrame"));
        horizontalLayout_2 = new QHBoxLayout(bottomRightFrame);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer2 = new QSpacerItem(300, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer2);

        documentZoomSlider = new QSlider(bottomRightFrame);
        documentZoomSlider->setObjectName(QString::fromUtf8("documentZoomSlider"));
        sizePolicy3.setHeightForWidth(documentZoomSlider->sizePolicy().hasHeightForWidth());
        documentZoomSlider->setSizePolicy(sizePolicy3);
        documentZoomSlider->setMinimumSize(QSize(150, 0));
        documentZoomSlider->setStyleSheet(QString::fromUtf8(""));
        documentZoomSlider->setMinimum(50);
        documentZoomSlider->setMaximum(500);
        documentZoomSlider->setSingleStep(10);
        documentZoomSlider->setValue(150);
        documentZoomSlider->setOrientation(Qt::Horizontal);
        documentZoomSlider->setInvertedAppearance(false);
        documentZoomSlider->setInvertedControls(false);

        horizontalLayout_2->addWidget(documentZoomSlider);

        horizontalSpacer1 = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer1);


        verticalLayout_3->addWidget(bottomRightFrame);

        splitter->addWidget(topRightFrame);

        horizontalLayout->addWidget(splitter);


        gridLayout->addWidget(topWidget, 0, 0, 1, 1);


        retranslateUi(documents);

        QMetaObject::connectSlotsByName(documents);
    } // setupUi

    void retranslateUi(QWidget *documents)
    {
        documents->setWindowTitle(QCoreApplication::translate("documents", "WBoard Documents", nullptr));
        sortKind->setItemText(0, QCoreApplication::translate("documents", "Creation date", nullptr));
        sortKind->setItemText(1, QCoreApplication::translate("documents", "Update date", nullptr));
        sortKind->setItemText(2, QCoreApplication::translate("documents", "Alphabetical order", nullptr));

#if QT_CONFIG(tooltip)
        sortOrder->setToolTip(QCoreApplication::translate("documents", "Sort Order", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class documents: public Ui_documents {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCUMENTS_H
