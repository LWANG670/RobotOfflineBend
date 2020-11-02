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
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
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
    QTreeWidget *treeWidget;
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
        verticalLayout->setContentsMargins(0, 0, 0, 0);
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
        treeWidget = new QTreeWidget(widget);
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(12);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setTextAlignment(0, Qt::AlignCenter);
        __qtreewidgetitem->setFont(0, font);
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));

        verticalLayout_3->addWidget(treeWidget);

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
        pushButton = new QPushButton(widget_3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_2->addWidget(pushButton);

        splitter->addWidget(widget_3);

        verticalLayout->addWidget(splitter);


        retranslateUi(Dispaly);

        QMetaObject::connectSlotsByName(Dispaly);
    } // setupUi

    void retranslateUi(QWidget *Dispaly)
    {
        Dispaly->setWindowTitle(QCoreApplication::translate("Dispaly", "Dispaly", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("Dispaly", "\345\215\225\345\205\203\345\210\227\350\241\250", nullptr));
        pushButton->setText(QCoreApplication::translate("Dispaly", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dispaly: public Ui_Dispaly {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPALY_H
