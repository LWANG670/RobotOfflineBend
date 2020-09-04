/********************************************************************************
** Form generated from reading UI file 'selectequ.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTEQU_H
#define UI_SELECTEQU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
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

    void setupUi(QWidget *SelectEqu)
    {
        if (SelectEqu->objectName().isEmpty())
            SelectEqu->setObjectName(QStringLiteral("SelectEqu"));
        SelectEqu->resize(1103, 532);
        horizontalLayout = new QHBoxLayout(SelectEqu);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(SelectEqu);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setStyleSheet(QStringLiteral(""));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(3);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(2, 2, 2, 2);
        widget_choose = new QWidget(widget);
        widget_choose->setObjectName(QStringLiteral("widget_choose"));
        widget_choose->setLayoutDirection(Qt::LeftToRight);
        widget_choose->setStyleSheet(QStringLiteral(""));
        verticalLayout_3 = new QVBoxLayout(widget_choose);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout_3->setContentsMargins(5, 0, 5, 0);
        btnMachine = new QToolButton(widget_choose);
        btnMachine->setObjectName(QStringLiteral("btnMachine"));
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
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/Machine.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnMachine->setIcon(icon);
        btnMachine->setIconSize(QSize(60, 60));
        btnMachine->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout_3->addWidget(btnMachine);

        btnRobot = new QToolButton(widget_choose);
        btnRobot->setObjectName(QStringLiteral("btnRobot"));
        sizePolicy.setHeightForWidth(btnRobot->sizePolicy().hasHeightForWidth());
        btnRobot->setSizePolicy(sizePolicy);
        btnRobot->setFont(font);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/img/Robot.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnRobot->setIcon(icon1);
        btnRobot->setIconSize(QSize(60, 60));
        btnRobot->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout_3->addWidget(btnRobot);

        btnCenter = new QToolButton(widget_choose);
        btnCenter->setObjectName(QStringLiteral("btnCenter"));
        sizePolicy.setHeightForWidth(btnCenter->sizePolicy().hasHeightForWidth());
        btnCenter->setSizePolicy(sizePolicy);
        btnCenter->setFont(font);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/img/Center.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnCenter->setIcon(icon2);
        btnCenter->setIconSize(QSize(60, 60));
        btnCenter->setPopupMode(QToolButton::DelayedPopup);
        btnCenter->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout_3->addWidget(btnCenter);

        btnFlip = new QToolButton(widget_choose);
        btnFlip->setObjectName(QStringLiteral("btnFlip"));
        sizePolicy.setHeightForWidth(btnFlip->sizePolicy().hasHeightForWidth());
        btnFlip->setSizePolicy(sizePolicy);
        btnFlip->setFont(font);
        btnFlip->setIcon(icon);
        btnFlip->setIconSize(QSize(60, 60));
        btnFlip->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout_3->addWidget(btnFlip);

        btnUp = new QToolButton(widget_choose);
        btnUp->setObjectName(QStringLiteral("btnUp"));
        sizePolicy.setHeightForWidth(btnUp->sizePolicy().hasHeightForWidth());
        btnUp->setSizePolicy(sizePolicy);
        btnUp->setFont(font);
        btnUp->setIcon(icon);
        btnUp->setIconSize(QSize(60, 60));
        btnUp->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout_3->addWidget(btnUp);

        btnDown = new QToolButton(widget_choose);
        btnDown->setObjectName(QStringLiteral("btnDown"));
        sizePolicy.setHeightForWidth(btnDown->sizePolicy().hasHeightForWidth());
        btnDown->setSizePolicy(sizePolicy);
        btnDown->setFont(font);
        btnDown->setIcon(icon);
        btnDown->setIconSize(QSize(60, 60));
        btnDown->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout_3->addWidget(btnDown);

        widget_2 = new QWidget(widget_choose);
        widget_2->setObjectName(QStringLiteral("widget_2"));

        verticalLayout_3->addWidget(widget_2);

        verticalLayout_3->setStretch(0, 1);
        verticalLayout_3->setStretch(1, 1);
        verticalLayout_3->setStretch(2, 1);
        verticalLayout_3->setStretch(3, 1);
        verticalLayout_3->setStretch(4, 1);
        verticalLayout_3->setStretch(5, 1);
        verticalLayout_3->setStretch(6, 4);

        horizontalLayout_2->addWidget(widget_choose);

        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setStyleSheet(QStringLiteral("background-color: rgb(179, 179, 179);"));
        verticalLayout = new QVBoxLayout(widget_3);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));

        horizontalLayout_2->addWidget(widget_3);

        widget_4 = new QWidget(widget);
        widget_4->setObjectName(QStringLiteral("widget_4"));

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
        SelectEqu->setWindowTitle(QApplication::translate("SelectEqu", "Form", 0));
        btnMachine->setText(QApplication::translate("SelectEqu", "\346\212\230\345\274\257\346\234\272", 0));
        btnRobot->setText(QApplication::translate("SelectEqu", "\346\234\272\345\231\250\344\272\272", 0));
        btnCenter->setText(QApplication::translate("SelectEqu", "\345\257\271\344\270\255\345\217\260", 0));
        btnFlip->setText(QApplication::translate("SelectEqu", "\347\277\273\351\235\242\346\236\266", 0));
        btnUp->setText(QApplication::translate("SelectEqu", "\344\270\212\346\226\231\345\217\260", 0));
        btnDown->setText(QApplication::translate("SelectEqu", "\344\270\213\346\226\231\345\217\260", 0));
    } // retranslateUi

};

namespace Ui {
    class SelectEqu: public Ui_SelectEqu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTEQU_H
