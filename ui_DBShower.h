/********************************************************************************
** Form generated from reading UI file 'DBShower.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DBSHOWER_H
#define UI_DBSHOWER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DBShower
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *choosewidget;
    QVBoxLayout *verticalLayout_5;
    QToolButton *btnMachine;
    QToolButton *btnRobot;
    QToolButton *btnCenter;
    QToolButton *btnFlip;
    QToolButton *btnUp;
    QToolButton *btnDown;
    QSpacerItem *verticalSpacer;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_3;
    QTableWidget *Machinetable;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *toolButton;
    QSpacerItem *horizontalSpacer;
    QToolButton *toolButton_2;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_4;
    QWidget *widget_6;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QWidget *page_2;

    void setupUi(QWidget *DBShower)
    {
        if (DBShower->objectName().isEmpty())
            DBShower->setObjectName(QString::fromUtf8("DBShower"));
        DBShower->resize(1532, 702);
        DBShower->setStyleSheet(QString::fromUtf8("background-color: rgb(234, 234, 234);"));
        horizontalLayout = new QHBoxLayout(DBShower);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        choosewidget = new QWidget(DBShower);
        choosewidget->setObjectName(QString::fromUtf8("choosewidget"));
        choosewidget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_5 = new QVBoxLayout(choosewidget);
        verticalLayout_5->setSpacing(20);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(5, -1, 5, -1);
        btnMachine = new QToolButton(choosewidget);
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
        icon.addFile(QString::fromUtf8(":/img/machine.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnMachine->setIcon(icon);
        btnMachine->setIconSize(QSize(60, 60));
        btnMachine->setCheckable(false);
        btnMachine->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout_5->addWidget(btnMachine);

        btnRobot = new QToolButton(choosewidget);
        btnRobot->setObjectName(QString::fromUtf8("btnRobot"));
        sizePolicy.setHeightForWidth(btnRobot->sizePolicy().hasHeightForWidth());
        btnRobot->setSizePolicy(sizePolicy);
        btnRobot->setFont(font);
        btnRobot->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 255, 231);border: 1px solid;border-radius: 20px;\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/robot2.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnRobot->setIcon(icon1);
        btnRobot->setIconSize(QSize(60, 60));
        btnRobot->setCheckable(false);
        btnRobot->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout_5->addWidget(btnRobot);

        btnCenter = new QToolButton(choosewidget);
        btnCenter->setObjectName(QString::fromUtf8("btnCenter"));
        sizePolicy.setHeightForWidth(btnCenter->sizePolicy().hasHeightForWidth());
        btnCenter->setSizePolicy(sizePolicy);
        btnCenter->setFont(font);
        btnCenter->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 255, 231);border: 1px solid;border-radius: 20px;\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/center2.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnCenter->setIcon(icon2);
        btnCenter->setIconSize(QSize(60, 60));
        btnCenter->setPopupMode(QToolButton::DelayedPopup);
        btnCenter->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout_5->addWidget(btnCenter);

        btnFlip = new QToolButton(choosewidget);
        btnFlip->setObjectName(QString::fromUtf8("btnFlip"));
        sizePolicy.setHeightForWidth(btnFlip->sizePolicy().hasHeightForWidth());
        btnFlip->setSizePolicy(sizePolicy);
        btnFlip->setFont(font);
        btnFlip->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 255, 231);border: 1px solid;border-radius: 20px;\n"
""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/flip2.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnFlip->setIcon(icon3);
        btnFlip->setIconSize(QSize(60, 60));
        btnFlip->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout_5->addWidget(btnFlip);

        btnUp = new QToolButton(choosewidget);
        btnUp->setObjectName(QString::fromUtf8("btnUp"));
        sizePolicy.setHeightForWidth(btnUp->sizePolicy().hasHeightForWidth());
        btnUp->setSizePolicy(sizePolicy);
        btnUp->setFont(font);
        btnUp->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 255, 231);border: 1px solid;border-radius: 20px;\n"
""));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/Up.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnUp->setIcon(icon4);
        btnUp->setIconSize(QSize(60, 60));
        btnUp->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout_5->addWidget(btnUp);

        btnDown = new QToolButton(choosewidget);
        btnDown->setObjectName(QString::fromUtf8("btnDown"));
        sizePolicy.setHeightForWidth(btnDown->sizePolicy().hasHeightForWidth());
        btnDown->setSizePolicy(sizePolicy);
        btnDown->setFont(font);
        btnDown->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 255, 231);border: 1px solid;border-radius: 20px;\n"
""));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/img/Down.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnDown->setIcon(icon5);
        btnDown->setIconSize(QSize(60, 60));
        btnDown->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        verticalLayout_5->addWidget(btnDown);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        verticalLayout_5->setStretch(0, 1);
        verticalLayout_5->setStretch(1, 1);
        verticalLayout_5->setStretch(2, 1);
        verticalLayout_5->setStretch(3, 1);
        verticalLayout_5->setStretch(4, 1);
        verticalLayout_5->setStretch(5, 1);
        verticalLayout_5->setStretch(6, 5);

        horizontalLayout->addWidget(choosewidget);

        widget = new QWidget(DBShower);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        stackedWidget = new QStackedWidget(widget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        horizontalLayout_2 = new QHBoxLayout(page);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(page);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        verticalLayout_3 = new QVBoxLayout(widget_2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        Machinetable = new QTableWidget(widget_2);
        if (Machinetable->columnCount() < 4)
            Machinetable->setColumnCount(4);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/img/Setting.ico"), QSize(), QIcon::Normal, QIcon::Off);
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(12);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem->setFont(font1);
        __qtablewidgetitem->setIcon(icon6);
        Machinetable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/img/datashow.ico"), QSize(), QIcon::Normal, QIcon::Off);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem1->setFont(font1);
        __qtablewidgetitem1->setIcon(icon7);
        Machinetable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/img/JPG_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem2->setFont(font1);
        __qtablewidgetitem2->setIcon(icon8);
        Machinetable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem3->setFont(font1);
        Machinetable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (Machinetable->rowCount() < 2)
            Machinetable->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        Machinetable->setVerticalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        Machinetable->setVerticalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        Machinetable->setItem(0, 0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        Machinetable->setItem(0, 1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        Machinetable->setItem(0, 2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        Machinetable->setItem(0, 3, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        Machinetable->setItem(1, 0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        Machinetable->setItem(1, 1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        Machinetable->setItem(1, 2, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        Machinetable->setItem(1, 3, __qtablewidgetitem13);
        Machinetable->setObjectName(QString::fromUtf8("Machinetable"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        Machinetable->setFont(font2);
        Machinetable->horizontalHeader()->setCascadingSectionResizes(false);
        Machinetable->horizontalHeader()->setDefaultSectionSize(180);
        Machinetable->horizontalHeader()->setHighlightSections(true);
        Machinetable->verticalHeader()->setVisible(true);
        Machinetable->verticalHeader()->setDefaultSectionSize(60);

        verticalLayout_3->addWidget(Machinetable);

        widget_5 = new QWidget(widget_2);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_3 = new QHBoxLayout(widget_5);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        toolButton = new QToolButton(widget_5);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(toolButton->sizePolicy().hasHeightForWidth());
        toolButton->setSizePolicy(sizePolicy1);
        QFont font3;
        font3.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font3.setPointSize(16);
        font3.setKerning(true);
        toolButton->setFont(font3);
        toolButton->setContextMenuPolicy(Qt::DefaultContextMenu);
        toolButton->setLayoutDirection(Qt::LeftToRight);
        toolButton->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 229, 229);"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/img/add.ico"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon9);
        toolButton->setIconSize(QSize(40, 40));
        toolButton->setCheckable(false);
        toolButton->setChecked(false);
        toolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_3->addWidget(toolButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        toolButton_2 = new QToolButton(widget_5);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        sizePolicy1.setHeightForWidth(toolButton_2->sizePolicy().hasHeightForWidth());
        toolButton_2->setSizePolicy(sizePolicy1);
        QFont font4;
        font4.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font4.setPointSize(16);
        toolButton_2->setFont(font4);
        toolButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 229, 229);"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/img/delete.ico"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_2->setIcon(icon10);
        toolButton_2->setIconSize(QSize(40, 40));
        toolButton_2->setPopupMode(QToolButton::DelayedPopup);
        toolButton_2->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_3->addWidget(toolButton_2);


        verticalLayout_3->addWidget(widget_5);


        horizontalLayout_2->addWidget(widget_2);

        widget_3 = new QWidget(page);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        verticalLayout_2 = new QVBoxLayout(widget_3);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget_4 = new QWidget(widget_3);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));

        verticalLayout_2->addWidget(widget_4);

        widget_6 = new QWidget(widget_3);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        verticalLayout_4 = new QVBoxLayout(widget_6);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label = new QLabel(widget_6);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label);


        verticalLayout_2->addWidget(widget_6);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 1);

        horizontalLayout_2->addWidget(widget_3);

        horizontalLayout_2->setStretch(0, 3);
        horizontalLayout_2->setStretch(1, 2);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);

        verticalLayout->addWidget(stackedWidget);


        horizontalLayout->addWidget(widget);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 7);

        retranslateUi(DBShower);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DBShower);
    } // setupUi

    void retranslateUi(QWidget *DBShower)
    {
        DBShower->setWindowTitle(QCoreApplication::translate("DBShower", "DBShower", nullptr));
        btnMachine->setText(QCoreApplication::translate("DBShower", "\346\212\230\345\274\257\346\234\272", nullptr));
        btnRobot->setText(QCoreApplication::translate("DBShower", "\346\234\272\345\231\250\344\272\272", nullptr));
        btnCenter->setText(QCoreApplication::translate("DBShower", "\345\257\271\344\270\255\345\217\260", nullptr));
        btnFlip->setText(QCoreApplication::translate("DBShower", "\347\277\273\351\235\242\346\236\266", nullptr));
        btnUp->setText(QCoreApplication::translate("DBShower", "\344\270\212\346\226\231\345\217\260", nullptr));
        btnDown->setText(QCoreApplication::translate("DBShower", "\344\270\213\346\226\231\345\217\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem = Machinetable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("DBShower", "\345\220\215\347\247\260", nullptr));
#if QT_CONFIG(whatsthis)
        ___qtablewidgetitem->setWhatsThis(QCoreApplication::translate("DBShower", "name", nullptr));
#endif // QT_CONFIG(whatsthis)
        QTableWidgetItem *___qtablewidgetitem1 = Machinetable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("DBShower", "\346\250\241\345\236\213\346\226\207\344\273\266\345\234\260\345\235\200", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = Machinetable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("DBShower", "\345\256\236\344\276\213\345\233\276\347\211\207\345\234\260\345\235\200", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = Machinetable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("DBShower", "\345\210\233\345\273\272\346\227\266\351\227\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = Machinetable->verticalHeaderItem(0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("DBShower", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = Machinetable->verticalHeaderItem(1);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("DBShower", "2", nullptr));

        const bool __sortingEnabled = Machinetable->isSortingEnabled();
        Machinetable->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem6 = Machinetable->item(0, 0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("DBShower", "adaw", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = Machinetable->item(0, 1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("DBShower", "sadaw", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = Machinetable->item(0, 2);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("DBShower", "awda", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = Machinetable->item(0, 3);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("DBShower", "awda", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = Machinetable->item(1, 0);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("DBShower", "sada", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = Machinetable->item(1, 1);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("DBShower", "fdsfd", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = Machinetable->item(1, 2);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("DBShower", "dsfsd", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = Machinetable->item(1, 3);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("DBShower", "sfds", nullptr));
        Machinetable->setSortingEnabled(__sortingEnabled);

        toolButton->setText(QCoreApplication::translate("DBShower", "\346\226\260\345\242\236\346\225\260\346\215\256", nullptr));
        toolButton_2->setText(QCoreApplication::translate("DBShower", "\345\210\240\351\231\244\346\225\260\346\215\256", nullptr));
        label->setText(QCoreApplication::translate("DBShower", "show;lab", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DBShower: public Ui_DBShower {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DBSHOWER_H
