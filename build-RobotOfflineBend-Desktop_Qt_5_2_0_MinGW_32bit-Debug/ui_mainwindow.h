/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_O;
    QAction *action_S;
    QAction *action;
    QAction *action_up;
    QAction *action_down;
    QAction *actionT;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *btnBend;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *btnSelect;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_4;
    QToolButton *btnSetting;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_5;
    QToolButton *btnDiaplay;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_7;
    QToolButton *btnProg;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_8;
    QToolButton *btnShow;
    QWidget *widget_9;
    QWidget *widget_data;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labFilename;
    QSpacerItem *horizontalSpacer;
    QWidget *childwidget;
    QMenuBar *menuBar;
    QMenu *menu_F;
    QMenu *menu_V;
    QMenu *menu;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1200, 800);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setToolButtonStyle(Qt::ToolButtonIconOnly);
        action_O = new QAction(MainWindow);
        action_O->setObjectName(QStringLiteral("action_O"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_O->setIcon(icon);
        action_S = new QAction(MainWindow);
        action_S->setObjectName(QStringLiteral("action_S"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/img/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_S->setIcon(icon1);
        action = new QAction(MainWindow);
        action->setObjectName(QStringLiteral("action"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/img/Machine.png"), QSize(), QIcon::Normal, QIcon::Off);
        action->setIcon(icon2);
        action_up = new QAction(MainWindow);
        action_up->setObjectName(QStringLiteral("action_up"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/img/zoom-in.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_up->setIcon(icon3);
        action_down = new QAction(MainWindow);
        action_down->setObjectName(QStringLiteral("action_down"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/img/zoom-out.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_down->setIcon(icon4);
        actionT = new QAction(MainWindow);
        actionT->setObjectName(QStringLiteral("actionT"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setStyleSheet(QStringLiteral("background-color: rgb(229, 229, 229);"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(7);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(1, 1, 1, 1);
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setStyleSheet(QStringLiteral(""));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout->setContentsMargins(2, 2, 6, 0);
        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        btnBend = new QToolButton(widget_3);
        btnBend->setObjectName(QStringLiteral("btnBend"));
        sizePolicy.setHeightForWidth(btnBend->sizePolicy().hasHeightForWidth());
        btnBend->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(9);
        btnBend->setFont(font);
        btnBend->setContextMenuPolicy(Qt::ActionsContextMenu);
        btnBend->setStyleSheet(QStringLiteral("border:none;"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/img/Bend.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnBend->setIcon(icon5);
        btnBend->setIconSize(QSize(50, 50));
        btnBend->setAutoRepeatDelay(300);
        btnBend->setPopupMode(QToolButton::DelayedPopup);
        btnBend->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_2->addWidget(btnBend);


        horizontalLayout->addWidget(widget_3);

        widget_4 = new QWidget(widget);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        horizontalLayout_3 = new QHBoxLayout(widget_4);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        btnSelect = new QToolButton(widget_4);
        btnSelect->setObjectName(QStringLiteral("btnSelect"));
        sizePolicy.setHeightForWidth(btnSelect->sizePolicy().hasHeightForWidth());
        btnSelect->setSizePolicy(sizePolicy);
        btnSelect->setFont(font);
        btnSelect->setContextMenuPolicy(Qt::ActionsContextMenu);
        btnSelect->setStyleSheet(QStringLiteral("border:none;"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/img/Select.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnSelect->setIcon(icon6);
        btnSelect->setIconSize(QSize(50, 50));
        btnSelect->setAutoRepeatDelay(300);
        btnSelect->setPopupMode(QToolButton::DelayedPopup);
        btnSelect->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_3->addWidget(btnSelect);


        horizontalLayout->addWidget(widget_4);

        widget_5 = new QWidget(widget);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
""));
        horizontalLayout_4 = new QHBoxLayout(widget_5);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        btnSetting = new QToolButton(widget_5);
        btnSetting->setObjectName(QStringLiteral("btnSetting"));
        sizePolicy.setHeightForWidth(btnSetting->sizePolicy().hasHeightForWidth());
        btnSetting->setSizePolicy(sizePolicy);
        btnSetting->setFont(font);
        btnSetting->setContextMenuPolicy(Qt::ActionsContextMenu);
        btnSetting->setStyleSheet(QStringLiteral("border:none;"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/img/Setting.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnSetting->setIcon(icon7);
        btnSetting->setIconSize(QSize(50, 50));
        btnSetting->setAutoRepeatDelay(300);
        btnSetting->setPopupMode(QToolButton::DelayedPopup);
        btnSetting->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_4->addWidget(btnSetting);


        horizontalLayout->addWidget(widget_5);

        widget_6 = new QWidget(widget);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        widget_6->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
""));
        horizontalLayout_5 = new QHBoxLayout(widget_6);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        btnDiaplay = new QToolButton(widget_6);
        btnDiaplay->setObjectName(QStringLiteral("btnDiaplay"));
        sizePolicy.setHeightForWidth(btnDiaplay->sizePolicy().hasHeightForWidth());
        btnDiaplay->setSizePolicy(sizePolicy);
        btnDiaplay->setFont(font);
        btnDiaplay->setContextMenuPolicy(Qt::ActionsContextMenu);
        btnDiaplay->setStyleSheet(QStringLiteral("border:none;"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/img/Display.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnDiaplay->setIcon(icon8);
        btnDiaplay->setIconSize(QSize(50, 50));
        btnDiaplay->setAutoRepeatDelay(300);
        btnDiaplay->setPopupMode(QToolButton::DelayedPopup);
        btnDiaplay->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_5->addWidget(btnDiaplay);


        horizontalLayout->addWidget(widget_6);

        widget_7 = new QWidget(widget);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        widget_7->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
""));
        horizontalLayout_7 = new QHBoxLayout(widget_7);
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        btnProg = new QToolButton(widget_7);
        btnProg->setObjectName(QStringLiteral("btnProg"));
        sizePolicy.setHeightForWidth(btnProg->sizePolicy().hasHeightForWidth());
        btnProg->setSizePolicy(sizePolicy);
        btnProg->setFont(font);
        btnProg->setContextMenuPolicy(Qt::ActionsContextMenu);
        btnProg->setStyleSheet(QStringLiteral("border:none;"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/img/Program.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnProg->setIcon(icon9);
        btnProg->setIconSize(QSize(50, 50));
        btnProg->setAutoRepeatDelay(300);
        btnProg->setPopupMode(QToolButton::DelayedPopup);
        btnProg->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_7->addWidget(btnProg);


        horizontalLayout->addWidget(widget_7);

        widget_8 = new QWidget(widget);
        widget_8->setObjectName(QStringLiteral("widget_8"));
        widget_8->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
""));
        horizontalLayout_8 = new QHBoxLayout(widget_8);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        btnShow = new QToolButton(widget_8);
        btnShow->setObjectName(QStringLiteral("btnShow"));
        sizePolicy.setHeightForWidth(btnShow->sizePolicy().hasHeightForWidth());
        btnShow->setSizePolicy(sizePolicy);
        btnShow->setFont(font);
        btnShow->setContextMenuPolicy(Qt::ActionsContextMenu);
        btnShow->setStyleSheet(QStringLiteral("border:none;"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/img/Show.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnShow->setIcon(icon10);
        btnShow->setIconSize(QSize(50, 50));
        btnShow->setAutoRepeatDelay(300);
        btnShow->setPopupMode(QToolButton::DelayedPopup);
        btnShow->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_8->addWidget(btnShow);


        horizontalLayout->addWidget(widget_8);

        widget_9 = new QWidget(widget);
        widget_9->setObjectName(QStringLiteral("widget_9"));

        horizontalLayout->addWidget(widget_9);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 1);
        horizontalLayout->setStretch(3, 1);
        horizontalLayout->setStretch(4, 1);
        horizontalLayout->setStretch(5, 1);
        horizontalLayout->setStretch(6, 6);

        verticalLayout->addWidget(widget);

        widget_data = new QWidget(centralwidget);
        widget_data->setObjectName(QStringLiteral("widget_data"));
        widget_data->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:0.035, y2:0, stop:0.427861 rgba(206, 206, 207, 255), stop:1 rgba(255, 255, 255, 255));"));
        horizontalLayout_6 = new QHBoxLayout(widget_data);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(2, 2, 2, 2);
        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        labFilename = new QLabel(widget_data);
        labFilename->setObjectName(QStringLiteral("labFilename"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labFilename->sizePolicy().hasHeightForWidth());
        labFilename->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(8);
        labFilename->setFont(font1);
        labFilename->setStyleSheet(QStringLiteral("background-color: transparent;"));

        horizontalLayout_6->addWidget(labFilename);

        horizontalSpacer = new QSpacerItem(80, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        horizontalLayout_6->setStretch(0, 1);
        horizontalLayout_6->setStretch(1, 1);
        horizontalLayout_6->setStretch(2, 25);

        verticalLayout->addWidget(widget_data);

        childwidget = new QWidget(centralwidget);
        childwidget->setObjectName(QStringLiteral("childwidget"));
        QFont font2;
        font2.setPointSize(6);
        childwidget->setFont(font2);
        childwidget->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(childwidget);

        verticalLayout->setStretch(0, 3);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 24);
        MainWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1200, 26));
        menu_F = new QMenu(menuBar);
        menu_F->setObjectName(QStringLiteral("menu_F"));
        menu_V = new QMenu(menuBar);
        menu_V->setObjectName(QStringLiteral("menu_V"));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        MainWindow->setMenuBar(menuBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menu_F->menuAction());
        menuBar->addAction(menu_V->menuAction());
        menuBar->addAction(menu->menuAction());
        menu_F->addAction(action_O);
        menu_F->addAction(action_S);
        menu_V->addAction(action);
        menu_V->addAction(action_up);
        menu_V->addAction(action_down);
        menu->addAction(actionT);
        toolBar->addAction(action_O);
        toolBar->addSeparator();
        toolBar->addAction(action_S);
        toolBar->addSeparator();
        toolBar->addAction(action);
        toolBar->addAction(action_up);
        toolBar->addAction(action_down);
        toolBar->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        action_O->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266(&O)", 0));
        action_S->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230\346\226\207\344\273\266(&S)", 0));
#ifndef QT_NO_TOOLTIP
        action_S->setToolTip(QApplication::translate("MainWindow", "\344\277\235\345\255\230\346\234\272\345\231\250\344\272\272\344\273\243\347\240\201(S)", 0));
#endif // QT_NO_TOOLTIP
        action->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\350\256\276\345\244\207", 0));
        action_up->setText(QApplication::translate("MainWindow", "\346\224\276\345\244\247\350\247\206\345\233\276", 0));
#ifndef QT_NO_TOOLTIP
        action_up->setToolTip(QApplication::translate("MainWindow", "\346\224\276\345\244\247\350\247\206\345\233\276", 0));
#endif // QT_NO_TOOLTIP
        action_down->setText(QApplication::translate("MainWindow", "\347\274\251\345\260\217\350\247\206\345\233\276", 0));
#ifndef QT_NO_TOOLTIP
        action_down->setToolTip(QApplication::translate("MainWindow", "\347\274\251\345\260\217\350\257\225\345\233\276", 0));
#endif // QT_NO_TOOLTIP
        actionT->setText(QApplication::translate("MainWindow", "\345\256\232\346\227\266\345\231\250", 0));
#ifndef QT_NO_TOOLTIP
        actionT->setToolTip(QApplication::translate("MainWindow", "\345\256\232\346\227\266\345\231\250", 0));
#endif // QT_NO_TOOLTIP
        btnBend->setText(QApplication::translate("MainWindow", "CAM\345\267\245\345\272\217\350\247\204\345\210\222", 0));
        btnSelect->setText(QApplication::translate("MainWindow", "\350\256\276\345\244\207\351\200\211\345\236\213", 0));
        btnSetting->setText(QApplication::translate("MainWindow", "\345\267\245\350\211\272\350\247\204\345\210\222", 0));
        btnDiaplay->setText(QApplication::translate("MainWindow", "\344\270\211\347\273\264\345\261\225\347\244\272", 0));
        btnProg->setText(QApplication::translate("MainWindow", "\344\273\243\347\240\201\347\256\241\347\220\206", 0));
        btnShow->setText(QApplication::translate("MainWindow", "\345\267\245\344\273\266\346\230\276\347\244\272", 0));
        labFilename->setText(QApplication::translate("MainWindow", "\346\226\207\344\273\266\345\220\215\357\274\232\343\200\202\343\200\202\343\200\202\343\200\202\343\200\202\343\200\202", 0));
        menu_F->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266(&F)", 0));
        menu_V->setTitle(QApplication::translate("MainWindow", "\350\247\206\345\233\276(&V)", 0));
        menu->setTitle(QApplication::translate("MainWindow", "\345\260\217\347\216\251\346\204\217", 0));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
