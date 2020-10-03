/********************************************************************************
** Form generated from reading UI file 'BendFileReader.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BENDFILEREADER_H
#define UI_BENDFILEREADER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BendFileReader
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *showlabel;
    QLabel *filepath;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_choose;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btn_sure;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btn_cancle;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QDialog *BendFileReader)
    {
        if (BendFileReader->objectName().isEmpty())
            BendFileReader->setObjectName(QString::fromUtf8("BendFileReader"));
        BendFileReader->resize(800, 600);
        verticalLayout = new QVBoxLayout(BendFileReader);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        showlabel = new QLabel(BendFileReader);
        showlabel->setObjectName(QString::fromUtf8("showlabel"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(showlabel->sizePolicy().hasHeightForWidth());
        showlabel->setSizePolicy(sizePolicy);
        showlabel->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 233, 225);"));
        showlabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(showlabel);

        filepath = new QLabel(BendFileReader);
        filepath->setObjectName(QString::fromUtf8("filepath"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(14);
        filepath->setFont(font);
        filepath->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(filepath);

        widget = new QWidget(BendFileReader);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_choose = new QPushButton(widget);
        btn_choose->setObjectName(QString::fromUtf8("btn_choose"));
        sizePolicy.setHeightForWidth(btn_choose->sizePolicy().hasHeightForWidth());
        btn_choose->setSizePolicy(sizePolicy);
        btn_choose->setFont(font);

        horizontalLayout->addWidget(btn_choose);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        btn_sure = new QPushButton(widget);
        btn_sure->setObjectName(QString::fromUtf8("btn_sure"));
        sizePolicy.setHeightForWidth(btn_sure->sizePolicy().hasHeightForWidth());
        btn_sure->setSizePolicy(sizePolicy);
        btn_sure->setFont(font);

        horizontalLayout->addWidget(btn_sure);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        btn_cancle = new QPushButton(widget);
        btn_cancle->setObjectName(QString::fromUtf8("btn_cancle"));
        sizePolicy.setHeightForWidth(btn_cancle->sizePolicy().hasHeightForWidth());
        btn_cancle->setSizePolicy(sizePolicy);
        btn_cancle->setFont(font);

        horizontalLayout->addWidget(btn_cancle);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 2);
        horizontalLayout->setStretch(2, 1);
        horizontalLayout->setStretch(3, 2);
        horizontalLayout->setStretch(4, 1);
        horizontalLayout->setStretch(5, 2);
        horizontalLayout->setStretch(6, 1);

        verticalLayout->addWidget(widget);

        verticalLayout->setStretch(0, 6);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);

        retranslateUi(BendFileReader);
        QObject::connect(btn_cancle, SIGNAL(clicked()), BendFileReader, SLOT(close()));
        QObject::connect(btn_sure, SIGNAL(clicked()), BendFileReader, SLOT(accept()));

        QMetaObject::connectSlotsByName(BendFileReader);
    } // setupUi

    void retranslateUi(QDialog *BendFileReader)
    {
        BendFileReader->setWindowTitle(QCoreApplication::translate("BendFileReader", "BendFileReader", nullptr));
        showlabel->setText(QString());
        filepath->setText(QCoreApplication::translate("BendFileReader", "TextLabel", nullptr));
        btn_choose->setText(QCoreApplication::translate("BendFileReader", "\351\200\211\345\217\226\351\233\266\344\273\266", nullptr));
        btn_sure->setText(QCoreApplication::translate("BendFileReader", "\345\257\274\345\205\245\351\233\266\344\273\266", nullptr));
        btn_cancle->setText(QCoreApplication::translate("BendFileReader", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BendFileReader: public Ui_BendFileReader {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BENDFILEREADER_H
