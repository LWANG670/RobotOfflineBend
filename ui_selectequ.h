/********************************************************************************
** Form generated from reading UI file 'selectequ.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTEQU_H
#define UI_SELECTEQU_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SelectEqu
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_choose;
    QVBoxLayout *verticalLayout_3;
    QToolButton *btnMachine;
    QToolButton *btnRobot;
    QToolButton *btnCenter;
    QToolButton *btnFlip;
    QToolButton *btnUp;
    QToolButton *btnDown;
    QWidget *widget_2;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_10;
    QLabel *labTitle;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labType;
    QLineEdit *lineName;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnSelect;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labXpos;
    QLineEdit *lineXpos;
    QHBoxLayout *horizontalLayout_6;
    QLabel *labYpos;
    QLineEdit *lineYpos;
    QHBoxLayout *horizontalLayout_7;
    QLabel *labZangle;
    QLineEdit *lineZangle;
    QLabel *labShow;

    void setupUi(QWidget *SelectEqu)
    {
        if (SelectEqu->objectName().isEmpty())
            SelectEqu->setObjectName(QString::fromUtf8("SelectEqu"));
        SelectEqu->resize(1103, 532);
        horizontalLayout = new QHBoxLayout(SelectEqu);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(SelectEqu);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(2, 2, 2, 2);
        widget_choose = new QWidget(widget);
        widget_choose->setObjectName(QString::fromUtf8("widget_choose"));
        widget_choose->setLayoutDirection(Qt::LeftToRight);
        widget_choose->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_3 = new QVBoxLayout(widget_choose);
        verticalLayout_3->setSpacing(20);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout_3->setContentsMargins(5, 0, 5, 0);
        btnMachine = new QToolButton(widget_choose);
        btnMachine->setObjectName(QString::fromUtf8("btnMachine"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnMachine->sizePolicy().hasHeightForWidth());
        btnMachine->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        btnMachine->setFont(font);
        btnMachine->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 255, 231);border: 1px solid;border-radius: 20px;\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/Machine.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnMachine->setIcon(icon);
        btnMachine->setIconSize(QSize(60, 60));
        btnMachine->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout_3->addWidget(btnMachine);

        btnRobot = new QToolButton(widget_choose);
        btnRobot->setObjectName(QString::fromUtf8("btnRobot"));
        sizePolicy.setHeightForWidth(btnRobot->sizePolicy().hasHeightForWidth());
        btnRobot->setSizePolicy(sizePolicy);
        btnRobot->setFont(font);
        btnRobot->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 255, 231);border: 1px solid;border-radius: 20px;\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/Robot.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnRobot->setIcon(icon1);
        btnRobot->setIconSize(QSize(60, 60));
        btnRobot->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout_3->addWidget(btnRobot);

        btnCenter = new QToolButton(widget_choose);
        btnCenter->setObjectName(QString::fromUtf8("btnCenter"));
        sizePolicy.setHeightForWidth(btnCenter->sizePolicy().hasHeightForWidth());
        btnCenter->setSizePolicy(sizePolicy);
        btnCenter->setFont(font);
        btnCenter->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 255, 231);border: 1px solid;border-radius: 20px;\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/Center.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnCenter->setIcon(icon2);
        btnCenter->setIconSize(QSize(60, 60));
        btnCenter->setPopupMode(QToolButton::DelayedPopup);
        btnCenter->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout_3->addWidget(btnCenter);

        btnFlip = new QToolButton(widget_choose);
        btnFlip->setObjectName(QString::fromUtf8("btnFlip"));
        sizePolicy.setHeightForWidth(btnFlip->sizePolicy().hasHeightForWidth());
        btnFlip->setSizePolicy(sizePolicy);
        btnFlip->setFont(font);
        btnFlip->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 255, 231);border: 1px solid;border-radius: 20px;\n"
""));
        btnFlip->setIcon(icon);
        btnFlip->setIconSize(QSize(60, 60));
        btnFlip->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout_3->addWidget(btnFlip);

        btnUp = new QToolButton(widget_choose);
        btnUp->setObjectName(QString::fromUtf8("btnUp"));
        sizePolicy.setHeightForWidth(btnUp->sizePolicy().hasHeightForWidth());
        btnUp->setSizePolicy(sizePolicy);
        btnUp->setFont(font);
        btnUp->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 255, 231);border: 1px solid;border-radius: 20px;\n"
""));
        btnUp->setIcon(icon);
        btnUp->setIconSize(QSize(60, 60));
        btnUp->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout_3->addWidget(btnUp);

        btnDown = new QToolButton(widget_choose);
        btnDown->setObjectName(QString::fromUtf8("btnDown"));
        sizePolicy.setHeightForWidth(btnDown->sizePolicy().hasHeightForWidth());
        btnDown->setSizePolicy(sizePolicy);
        btnDown->setFont(font);
        btnDown->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 255, 231);border: 1px solid;border-radius: 20px;\n"
""));
        btnDown->setIcon(icon);
        btnDown->setIconSize(QSize(60, 60));
        btnDown->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout_3->addWidget(btnDown);

        widget_2 = new QWidget(widget_choose);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));

        verticalLayout_3->addWidget(widget_2);

        verticalLayout_3->setStretch(0, 1);
        verticalLayout_3->setStretch(1, 1);
        verticalLayout_3->setStretch(2, 1);
        verticalLayout_3->setStretch(3, 1);
        verticalLayout_3->setStretch(4, 1);
        verticalLayout_3->setStretch(5, 1);
        verticalLayout_3->setStretch(6, 2);

        horizontalLayout_2->addWidget(widget_choose);

        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setStyleSheet(QString::fromUtf8("background-color: rgb(179, 179, 179);"));
        verticalLayout = new QVBoxLayout(widget_3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));

        horizontalLayout_2->addWidget(widget_3);

        widget_4 = new QWidget(widget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        verticalLayout_2 = new QVBoxLayout(widget_4);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget_5 = new QWidget(widget_4);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);"));
        verticalLayout_4 = new QVBoxLayout(widget_5);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(4, -1, 4, -1);
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        labTitle = new QLabel(widget_5);
        labTitle->setObjectName(QString::fromUtf8("labTitle"));
        sizePolicy.setHeightForWidth(labTitle->sizePolicy().hasHeightForWidth());
        labTitle->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(18);
        labTitle->setFont(font1);
        labTitle->setAlignment(Qt::AlignCenter);

        horizontalLayout_10->addWidget(labTitle);


        verticalLayout_4->addLayout(horizontalLayout_10);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        labType = new QLabel(widget_5);
        labType->setObjectName(QString::fromUtf8("labType"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font2.setPointSize(12);
        labType->setFont(font2);

        horizontalLayout_3->addWidget(labType);

        lineName = new QLineEdit(widget_5);
        lineName->setObjectName(QString::fromUtf8("lineName"));
        lineName->setFont(font2);

        horizontalLayout_3->addWidget(lineName);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        btnSelect = new QPushButton(widget_5);
        btnSelect->setObjectName(QString::fromUtf8("btnSelect"));
        btnSelect->setFont(font2);
        btnSelect->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 255, 231);border: 1px solid;border-radius: 20px;\n"
""));

        horizontalLayout_4->addWidget(btnSelect);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 1);

        verticalLayout_4->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        labXpos = new QLabel(widget_5);
        labXpos->setObjectName(QString::fromUtf8("labXpos"));
        labXpos->setFont(font2);

        horizontalLayout_5->addWidget(labXpos);

        lineXpos = new QLineEdit(widget_5);
        lineXpos->setObjectName(QString::fromUtf8("lineXpos"));
        lineXpos->setFont(font2);

        horizontalLayout_5->addWidget(lineXpos);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        labYpos = new QLabel(widget_5);
        labYpos->setObjectName(QString::fromUtf8("labYpos"));
        labYpos->setFont(font2);

        horizontalLayout_6->addWidget(labYpos);

        lineYpos = new QLineEdit(widget_5);
        lineYpos->setObjectName(QString::fromUtf8("lineYpos"));
        lineYpos->setFont(font2);

        horizontalLayout_6->addWidget(lineYpos);


        verticalLayout_4->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        labZangle = new QLabel(widget_5);
        labZangle->setObjectName(QString::fromUtf8("labZangle"));
        labZangle->setFont(font2);

        horizontalLayout_7->addWidget(labZangle);

        lineZangle = new QLineEdit(widget_5);
        lineZangle->setObjectName(QString::fromUtf8("lineZangle"));
        lineZangle->setFont(font2);

        horizontalLayout_7->addWidget(lineZangle);


        verticalLayout_4->addLayout(horizontalLayout_7);

        verticalLayout_4->setStretch(0, 1);
        verticalLayout_4->setStretch(1, 1);
        verticalLayout_4->setStretch(2, 1);
        verticalLayout_4->setStretch(3, 1);
        verticalLayout_4->setStretch(4, 1);
        verticalLayout_4->setStretch(5, 1);

        verticalLayout_2->addWidget(widget_5);

        labShow = new QLabel(widget_4);
        labShow->setObjectName(QString::fromUtf8("labShow"));
        labShow->setLayoutDirection(Qt::LeftToRight);
        labShow->setStyleSheet(QString::fromUtf8("background-color: rgb(212, 212, 212);"));
        labShow->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(labShow);

        verticalLayout_2->setStretch(0, 2);
        verticalLayout_2->setStretch(1, 1);

        horizontalLayout_2->addWidget(widget_4);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 4);
        horizontalLayout_2->setStretch(2, 1);

        horizontalLayout->addWidget(widget);


        retranslateUi(SelectEqu);

        QMetaObject::connectSlotsByName(SelectEqu);
    } // setupUi

    void retranslateUi(QWidget *SelectEqu)
    {
        SelectEqu->setWindowTitle(QCoreApplication::translate("SelectEqu", "Form", nullptr));
        btnMachine->setText(QCoreApplication::translate("SelectEqu", "\346\212\230\345\274\257\346\234\272", nullptr));
        btnRobot->setText(QCoreApplication::translate("SelectEqu", "\346\234\272\345\231\250\344\272\272", nullptr));
        btnCenter->setText(QCoreApplication::translate("SelectEqu", "\345\257\271\344\270\255\345\217\260", nullptr));
        btnFlip->setText(QCoreApplication::translate("SelectEqu", "\347\277\273\351\235\242\346\236\266", nullptr));
        btnUp->setText(QCoreApplication::translate("SelectEqu", "\344\270\212\346\226\231\345\217\260", nullptr));
        btnDown->setText(QCoreApplication::translate("SelectEqu", "\344\270\213\346\226\231\345\217\260", nullptr));
        labTitle->setText(QCoreApplication::translate("SelectEqu", "XXX\351\200\211\345\217\226", nullptr));
        labType->setText(QCoreApplication::translate("SelectEqu", "\345\236\213\345\217\267\357\274\232", nullptr));
        btnSelect->setText(QCoreApplication::translate("SelectEqu", "\346\225\260\346\215\256\345\272\223\351\200\211\345\217\226", nullptr));
        labXpos->setText(QCoreApplication::translate("SelectEqu", "X\350\275\264\345\235\220\346\240\207\357\274\232", nullptr));
        labYpos->setText(QCoreApplication::translate("SelectEqu", "Y\350\275\264\345\235\220\346\240\207\357\274\232", nullptr));
        labZangle->setText(QCoreApplication::translate("SelectEqu", "Z\350\275\264\346\227\213\350\275\254\357\274\232", nullptr));
        labShow->setText(QCoreApplication::translate("SelectEqu", "showwidget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SelectEqu: public Ui_SelectEqu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTEQU_H
