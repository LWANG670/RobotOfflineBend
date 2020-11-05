/********************************************************************************
** Form generated from reading UI file 'Dispaly.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPALY_H
#define UI_DISPALY_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dispaly
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QSplitter *splitter_2;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_5;
    QWidget *horizontalWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *labFileName;
    QToolButton *btnRefresh;
    QTreeWidget *treeWidget;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_4;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QWidget *widget_2;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton;

    void setupUi(QWidget *Dispaly)
    {
        if (Dispaly->objectName().isEmpty())
            Dispaly->setObjectName(QString::fromUtf8("Dispaly"));
        Dispaly->resize(1056, 810);
        Dispaly->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(Dispaly);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(4, 0, 4, 2);
        splitter = new QSplitter(Dispaly);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setFrameShape(QFrame::Panel);
        splitter->setFrameShadow(QFrame::Sunken);
        splitter->setOrientation(Qt::Horizontal);
        splitter->setHandleWidth(2);
        widget = new QWidget(splitter);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        splitter_2 = new QSplitter(widget);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        widget_4 = new QWidget(splitter_2);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_5 = new QVBoxLayout(widget_4);
        verticalLayout_5->setSpacing(2);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalWidget = new QWidget(widget_4);
        horizontalWidget->setObjectName(QString::fromUtf8("horizontalWidget"));
        horizontalWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(129, 163, 255);\n"
"border-width:1px;\n"
"border-color: rgb(0, 0, 0);"));
        horizontalLayout = new QHBoxLayout(horizontalWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        labFileName = new QLabel(horizontalWidget);
        labFileName->setObjectName(QString::fromUtf8("labFileName"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        labFileName->setFont(font);
        labFileName->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(labFileName);

        btnRefresh = new QToolButton(horizontalWidget);
        btnRefresh->setObjectName(QString::fromUtf8("btnRefresh"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/refresh.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnRefresh->setIcon(icon);
        btnRefresh->setIconSize(QSize(16, 16));

        horizontalLayout->addWidget(btnRefresh);


        verticalLayout_5->addWidget(horizontalWidget);

        treeWidget = new QTreeWidget(widget_4);
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(12);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setTextAlignment(0, Qt::AlignCenter);
        __qtreewidgetitem->setFont(0, font1);
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setStyleSheet(QString::fromUtf8("border-color: rgb(131, 255, 235);\n"
"border-width:3px;"));
        treeWidget->header()->setVisible(true);

        verticalLayout_5->addWidget(treeWidget);

        splitter_2->addWidget(widget_4);
        groupBox = new QGroupBox(splitter_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setCheckable(false);
        verticalLayout_4 = new QVBoxLayout(groupBox);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, -1, 0, 4);
        stackedWidget = new QStackedWidget(groupBox);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);

        verticalLayout_4->addWidget(stackedWidget);

        splitter_2->addWidget(groupBox);

        verticalLayout_3->addWidget(splitter_2);

        splitter->addWidget(widget);
        widget_2 = new QWidget(splitter);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        splitter->addWidget(widget_2);
        widget_3 = new QWidget(splitter);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setStyleSheet(QString::fromUtf8("background-color: rgb(140, 140, 140);"));
        verticalLayout_2 = new QVBoxLayout(widget_3);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget_3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_2->addWidget(pushButton);

        splitter->addWidget(widget_3);

        verticalLayout->addWidget(splitter);


        retranslateUi(Dispaly);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Dispaly);
    } // setupUi

    void retranslateUi(QWidget *Dispaly)
    {
        Dispaly->setWindowTitle(QCoreApplication::translate("Dispaly", "Dispaly", nullptr));
        labFileName->setText(QCoreApplication::translate("Dispaly", "\344\277\241\346\201\257", nullptr));
        btnRefresh->setText(QString());
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("Dispaly", "\345\215\225\345\205\203\345\210\227\350\241\250", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Dispaly", "\350\257\246\347\273\206\344\277\241\346\201\257", nullptr));
        pushButton->setText(QCoreApplication::translate("Dispaly", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dispaly: public Ui_Dispaly {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPALY_H
