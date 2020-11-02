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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DBShower
{
public:
    QGridLayout *gridLayout;
    QWidget *choosewidget;
    QVBoxLayout *verticalLayout_5;
    QToolButton *btnMachine;
    QToolButton *btnRobot;
    QToolButton *btnCenter;
    QToolButton *btnFlip;
    QToolButton *btnUp;
    QToolButton *btnDown;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_6;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_8;
    QTableView *tableView;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_7;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout;
    QTableView *tableView_2;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_7;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_25;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_2;
    QLineEdit *lineMachineLength;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_9;
    QLineEdit *lineMachineWidth;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_10;
    QLineEdit *lineMachineHeight;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_11;
    QLineEdit *lineMachineLowHeight;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_12;
    QLineEdit *lineMachineUpperHeight;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_13;
    QLineEdit *lineMachineFile;
    QSpacerItem *verticalSpacer;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *toolButton_3;
    QToolButton *toolButton_4;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_12;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_10;
    QWidget *widget_8;
    QVBoxLayout *verticalLayout_11;
    QWidget *widget_11;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QWidget *widget_12;
    QHBoxLayout *horizontalLayout_6;
    QToolButton *toolButton_7;
    QToolButton *toolButton_8;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_15;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_13;
    QWidget *widget_13;
    QVBoxLayout *verticalLayout_14;
    QWidget *widget_14;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QWidget *widget_15;
    QHBoxLayout *horizontalLayout_7;
    QToolButton *toolButton_9;
    QToolButton *toolButton_10;
    QWidget *page_4;
    QVBoxLayout *verticalLayout_18;
    QGroupBox *groupBox_7;
    QVBoxLayout *verticalLayout_16;
    QWidget *widget_16;
    QVBoxLayout *verticalLayout_17;
    QWidget *widget_17;
    QLabel *label_6;
    QLineEdit *lineEdit_5;
    QWidget *widget_18;
    QHBoxLayout *horizontalLayout_8;
    QToolButton *toolButton_11;
    QToolButton *toolButton_12;
    QWidget *page_5;
    QVBoxLayout *verticalLayout_21;
    QGroupBox *groupBox_8;
    QVBoxLayout *verticalLayout_19;
    QWidget *widget_19;
    QVBoxLayout *verticalLayout_20;
    QWidget *widget_20;
    QLabel *label_7;
    QLineEdit *lineEdit_6;
    QWidget *widget_21;
    QHBoxLayout *horizontalLayout_9;
    QToolButton *toolButton_13;
    QToolButton *toolButton_14;
    QWidget *page_6;
    QVBoxLayout *verticalLayout_24;
    QGroupBox *groupBox_9;
    QVBoxLayout *verticalLayout_22;
    QWidget *widget_22;
    QVBoxLayout *verticalLayout_23;
    QWidget *widget_23;
    QLabel *label_8;
    QLineEdit *lineEdit_7;
    QWidget *widget_24;
    QHBoxLayout *horizontalLayout_10;
    QToolButton *toolButton_15;
    QToolButton *toolButton_16;

    void setupUi(QWidget *DBShower)
    {
        if (DBShower->objectName().isEmpty())
            DBShower->setObjectName(QString::fromUtf8("DBShower"));
        DBShower->resize(1532, 678);
        DBShower->setStyleSheet(QString::fromUtf8("background-color: rgb(234, 234, 234);"));
        gridLayout = new QGridLayout(DBShower);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
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

        verticalLayout_5->setStretch(0, 1);
        verticalLayout_5->setStretch(1, 1);
        verticalLayout_5->setStretch(2, 1);
        verticalLayout_5->setStretch(3, 1);
        verticalLayout_5->setStretch(4, 1);
        verticalLayout_5->setStretch(5, 1);

        gridLayout->addWidget(choosewidget, 0, 0, 1, 1);

        widget = new QWidget(DBShower);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, -1);
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        verticalLayout_6 = new QVBoxLayout(widget_2);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        widget_6 = new QWidget(widget_2);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        horizontalLayout_4 = new QHBoxLayout(widget_6);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(widget_6);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_8 = new QVBoxLayout(groupBox);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(2, -1, 2, 2);
        tableView = new QTableView(groupBox);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(12);
        tableView->setFont(font1);

        verticalLayout_8->addWidget(tableView);


        horizontalLayout_4->addWidget(groupBox);

        groupBox_2 = new QGroupBox(widget_6);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(2, -1, 2, 2);
        widget_7 = new QWidget(groupBox_2);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        widget_7->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 220, 220);"));

        verticalLayout_4->addWidget(widget_7);


        horizontalLayout_4->addWidget(groupBox_2);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 3);

        verticalLayout_6->addWidget(widget_6);

        groupBox_3 = new QGroupBox(widget_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout = new QVBoxLayout(groupBox_3);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(2, 9, 2, 2);
        tableView_2 = new QTableView(groupBox_3);
        tableView_2->setObjectName(QString::fromUtf8("tableView_2"));

        verticalLayout->addWidget(tableView_2);


        verticalLayout_6->addWidget(groupBox_3);

        verticalLayout_6->setStretch(0, 1);
        verticalLayout_6->setStretch(1, 1);

        horizontalLayout_2->addWidget(widget_2);

        stackedWidget = new QStackedWidget(widget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout_3 = new QVBoxLayout(page);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        groupBox_4 = new QGroupBox(page);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        verticalLayout_7 = new QVBoxLayout(groupBox_4);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        widget_3 = new QWidget(groupBox_4);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        verticalLayout_2 = new QVBoxLayout(widget_3);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget_4 = new QWidget(widget_3);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        verticalLayout_25 = new QVBoxLayout(widget_4);
        verticalLayout_25->setSpacing(6);
        verticalLayout_25->setContentsMargins(11, 11, 11, 11);
        verticalLayout_25->setObjectName(QString::fromUtf8("verticalLayout_25"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_2 = new QLabel(widget_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font2.setPointSize(20);
        label_2->setFont(font2);

        horizontalLayout_11->addWidget(label_2);

        lineMachineLength = new QLineEdit(widget_4);
        lineMachineLength->setObjectName(QString::fromUtf8("lineMachineLength"));
        lineMachineLength->setFont(font1);
        lineMachineLength->setAlignment(Qt::AlignCenter);
        lineMachineLength->setReadOnly(true);

        horizontalLayout_11->addWidget(lineMachineLength);


        verticalLayout_25->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_9 = new QLabel(widget_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font2);

        horizontalLayout_12->addWidget(label_9);

        lineMachineWidth = new QLineEdit(widget_4);
        lineMachineWidth->setObjectName(QString::fromUtf8("lineMachineWidth"));
        lineMachineWidth->setFont(font1);
        lineMachineWidth->setAlignment(Qt::AlignCenter);
        lineMachineWidth->setReadOnly(true);

        horizontalLayout_12->addWidget(lineMachineWidth);


        verticalLayout_25->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_10 = new QLabel(widget_4);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font2);

        horizontalLayout_13->addWidget(label_10);

        lineMachineHeight = new QLineEdit(widget_4);
        lineMachineHeight->setObjectName(QString::fromUtf8("lineMachineHeight"));
        lineMachineHeight->setFont(font1);
        lineMachineHeight->setAlignment(Qt::AlignCenter);
        lineMachineHeight->setReadOnly(true);

        horizontalLayout_13->addWidget(lineMachineHeight);


        verticalLayout_25->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_11 = new QLabel(widget_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font2);

        horizontalLayout_14->addWidget(label_11);

        lineMachineLowHeight = new QLineEdit(widget_4);
        lineMachineLowHeight->setObjectName(QString::fromUtf8("lineMachineLowHeight"));
        lineMachineLowHeight->setFont(font1);
        lineMachineLowHeight->setAlignment(Qt::AlignCenter);
        lineMachineLowHeight->setReadOnly(true);

        horizontalLayout_14->addWidget(lineMachineLowHeight);


        verticalLayout_25->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_12 = new QLabel(widget_4);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font2);

        horizontalLayout_15->addWidget(label_12);

        lineMachineUpperHeight = new QLineEdit(widget_4);
        lineMachineUpperHeight->setObjectName(QString::fromUtf8("lineMachineUpperHeight"));
        lineMachineUpperHeight->setFont(font1);
        lineMachineUpperHeight->setAlignment(Qt::AlignCenter);
        lineMachineUpperHeight->setReadOnly(true);

        horizontalLayout_15->addWidget(lineMachineUpperHeight);


        verticalLayout_25->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_13 = new QLabel(widget_4);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font2);

        horizontalLayout_16->addWidget(label_13);

        lineMachineFile = new QLineEdit(widget_4);
        lineMachineFile->setObjectName(QString::fromUtf8("lineMachineFile"));
        lineMachineFile->setFont(font1);
        lineMachineFile->setAlignment(Qt::AlignCenter);
        lineMachineFile->setReadOnly(true);

        horizontalLayout_16->addWidget(lineMachineFile);


        verticalLayout_25->addLayout(horizontalLayout_16);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_25->addItem(verticalSpacer);


        verticalLayout_2->addWidget(widget_4);

        widget_5 = new QWidget(widget_3);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_3 = new QHBoxLayout(widget_5);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        toolButton_3 = new QToolButton(widget_5);
        toolButton_3->setObjectName(QString::fromUtf8("toolButton_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(toolButton_3->sizePolicy().hasHeightForWidth());
        toolButton_3->setSizePolicy(sizePolicy1);
        QFont font3;
        font3.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font3.setPointSize(16);
        font3.setKerning(true);
        toolButton_3->setFont(font3);
        toolButton_3->setContextMenuPolicy(Qt::DefaultContextMenu);
        toolButton_3->setLayoutDirection(Qt::LeftToRight);
        toolButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 229, 229);"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/img/add.ico"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_3->setIcon(icon6);
        toolButton_3->setIconSize(QSize(40, 40));
        toolButton_3->setCheckable(false);
        toolButton_3->setChecked(false);
        toolButton_3->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_3->addWidget(toolButton_3);

        toolButton_4 = new QToolButton(widget_5);
        toolButton_4->setObjectName(QString::fromUtf8("toolButton_4"));
        sizePolicy1.setHeightForWidth(toolButton_4->sizePolicy().hasHeightForWidth());
        toolButton_4->setSizePolicy(sizePolicy1);
        QFont font4;
        font4.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font4.setPointSize(16);
        toolButton_4->setFont(font4);
        toolButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 229, 229);"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/img/delete.ico"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_4->setIcon(icon7);
        toolButton_4->setIconSize(QSize(40, 40));
        toolButton_4->setPopupMode(QToolButton::DelayedPopup);
        toolButton_4->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_3->addWidget(toolButton_4);


        verticalLayout_2->addWidget(widget_5);

        verticalLayout_2->setStretch(0, 6);
        verticalLayout_2->setStretch(1, 1);

        verticalLayout_7->addWidget(widget_3);


        verticalLayout_3->addWidget(groupBox_4);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayout_12 = new QVBoxLayout(page_2);
        verticalLayout_12->setSpacing(0);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        groupBox_5 = new QGroupBox(page_2);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        verticalLayout_10 = new QVBoxLayout(groupBox_5);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        widget_8 = new QWidget(groupBox_5);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        verticalLayout_11 = new QVBoxLayout(widget_8);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        widget_11 = new QWidget(widget_8);
        widget_11->setObjectName(QString::fromUtf8("widget_11"));
        label_4 = new QLabel(widget_11);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 60, 68, 15));
        lineEdit_3 = new QLineEdit(widget_11);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(190, 60, 113, 21));

        verticalLayout_11->addWidget(widget_11);

        widget_12 = new QWidget(widget_8);
        widget_12->setObjectName(QString::fromUtf8("widget_12"));
        horizontalLayout_6 = new QHBoxLayout(widget_12);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        toolButton_7 = new QToolButton(widget_12);
        toolButton_7->setObjectName(QString::fromUtf8("toolButton_7"));
        sizePolicy1.setHeightForWidth(toolButton_7->sizePolicy().hasHeightForWidth());
        toolButton_7->setSizePolicy(sizePolicy1);
        toolButton_7->setFont(font3);
        toolButton_7->setContextMenuPolicy(Qt::DefaultContextMenu);
        toolButton_7->setLayoutDirection(Qt::LeftToRight);
        toolButton_7->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 229, 229);"));
        toolButton_7->setIcon(icon6);
        toolButton_7->setIconSize(QSize(40, 40));
        toolButton_7->setCheckable(false);
        toolButton_7->setChecked(false);
        toolButton_7->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_6->addWidget(toolButton_7);

        toolButton_8 = new QToolButton(widget_12);
        toolButton_8->setObjectName(QString::fromUtf8("toolButton_8"));
        sizePolicy1.setHeightForWidth(toolButton_8->sizePolicy().hasHeightForWidth());
        toolButton_8->setSizePolicy(sizePolicy1);
        toolButton_8->setFont(font4);
        toolButton_8->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 229, 229);"));
        toolButton_8->setIcon(icon7);
        toolButton_8->setIconSize(QSize(40, 40));
        toolButton_8->setPopupMode(QToolButton::DelayedPopup);
        toolButton_8->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_6->addWidget(toolButton_8);


        verticalLayout_11->addWidget(widget_12);

        verticalLayout_11->setStretch(0, 4);
        verticalLayout_11->setStretch(1, 1);

        verticalLayout_10->addWidget(widget_8);


        verticalLayout_12->addWidget(groupBox_5);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        verticalLayout_15 = new QVBoxLayout(page_3);
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setContentsMargins(11, 11, 11, 11);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        groupBox_6 = new QGroupBox(page_3);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        verticalLayout_13 = new QVBoxLayout(groupBox_6);
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setContentsMargins(11, 11, 11, 11);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        widget_13 = new QWidget(groupBox_6);
        widget_13->setObjectName(QString::fromUtf8("widget_13"));
        verticalLayout_14 = new QVBoxLayout(widget_13);
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setContentsMargins(11, 11, 11, 11);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        widget_14 = new QWidget(widget_13);
        widget_14->setObjectName(QString::fromUtf8("widget_14"));
        label_5 = new QLabel(widget_14);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(60, 60, 68, 15));
        lineEdit_4 = new QLineEdit(widget_14);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(190, 60, 113, 21));

        verticalLayout_14->addWidget(widget_14);

        widget_15 = new QWidget(widget_13);
        widget_15->setObjectName(QString::fromUtf8("widget_15"));
        horizontalLayout_7 = new QHBoxLayout(widget_15);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        toolButton_9 = new QToolButton(widget_15);
        toolButton_9->setObjectName(QString::fromUtf8("toolButton_9"));
        sizePolicy1.setHeightForWidth(toolButton_9->sizePolicy().hasHeightForWidth());
        toolButton_9->setSizePolicy(sizePolicy1);
        toolButton_9->setFont(font3);
        toolButton_9->setContextMenuPolicy(Qt::DefaultContextMenu);
        toolButton_9->setLayoutDirection(Qt::LeftToRight);
        toolButton_9->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 229, 229);"));
        toolButton_9->setIcon(icon6);
        toolButton_9->setIconSize(QSize(40, 40));
        toolButton_9->setCheckable(false);
        toolButton_9->setChecked(false);
        toolButton_9->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_7->addWidget(toolButton_9);

        toolButton_10 = new QToolButton(widget_15);
        toolButton_10->setObjectName(QString::fromUtf8("toolButton_10"));
        sizePolicy1.setHeightForWidth(toolButton_10->sizePolicy().hasHeightForWidth());
        toolButton_10->setSizePolicy(sizePolicy1);
        toolButton_10->setFont(font4);
        toolButton_10->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 229, 229);"));
        toolButton_10->setIcon(icon7);
        toolButton_10->setIconSize(QSize(40, 40));
        toolButton_10->setPopupMode(QToolButton::DelayedPopup);
        toolButton_10->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_7->addWidget(toolButton_10);


        verticalLayout_14->addWidget(widget_15);

        verticalLayout_14->setStretch(0, 4);
        verticalLayout_14->setStretch(1, 1);

        verticalLayout_13->addWidget(widget_13);


        verticalLayout_15->addWidget(groupBox_6);

        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        verticalLayout_18 = new QVBoxLayout(page_4);
        verticalLayout_18->setSpacing(6);
        verticalLayout_18->setContentsMargins(11, 11, 11, 11);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        verticalLayout_18->setContentsMargins(0, 0, 0, 0);
        groupBox_7 = new QGroupBox(page_4);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        verticalLayout_16 = new QVBoxLayout(groupBox_7);
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setContentsMargins(11, 11, 11, 11);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        widget_16 = new QWidget(groupBox_7);
        widget_16->setObjectName(QString::fromUtf8("widget_16"));
        verticalLayout_17 = new QVBoxLayout(widget_16);
        verticalLayout_17->setSpacing(6);
        verticalLayout_17->setContentsMargins(11, 11, 11, 11);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        widget_17 = new QWidget(widget_16);
        widget_17->setObjectName(QString::fromUtf8("widget_17"));
        label_6 = new QLabel(widget_17);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(60, 60, 68, 15));
        lineEdit_5 = new QLineEdit(widget_17);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(190, 60, 113, 21));

        verticalLayout_17->addWidget(widget_17);

        widget_18 = new QWidget(widget_16);
        widget_18->setObjectName(QString::fromUtf8("widget_18"));
        horizontalLayout_8 = new QHBoxLayout(widget_18);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        toolButton_11 = new QToolButton(widget_18);
        toolButton_11->setObjectName(QString::fromUtf8("toolButton_11"));
        sizePolicy1.setHeightForWidth(toolButton_11->sizePolicy().hasHeightForWidth());
        toolButton_11->setSizePolicy(sizePolicy1);
        toolButton_11->setFont(font3);
        toolButton_11->setContextMenuPolicy(Qt::DefaultContextMenu);
        toolButton_11->setLayoutDirection(Qt::LeftToRight);
        toolButton_11->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 229, 229);"));
        toolButton_11->setIcon(icon6);
        toolButton_11->setIconSize(QSize(40, 40));
        toolButton_11->setCheckable(false);
        toolButton_11->setChecked(false);
        toolButton_11->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_8->addWidget(toolButton_11);

        toolButton_12 = new QToolButton(widget_18);
        toolButton_12->setObjectName(QString::fromUtf8("toolButton_12"));
        sizePolicy1.setHeightForWidth(toolButton_12->sizePolicy().hasHeightForWidth());
        toolButton_12->setSizePolicy(sizePolicy1);
        toolButton_12->setFont(font4);
        toolButton_12->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 229, 229);"));
        toolButton_12->setIcon(icon7);
        toolButton_12->setIconSize(QSize(40, 40));
        toolButton_12->setPopupMode(QToolButton::DelayedPopup);
        toolButton_12->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_8->addWidget(toolButton_12);


        verticalLayout_17->addWidget(widget_18);

        verticalLayout_17->setStretch(0, 4);
        verticalLayout_17->setStretch(1, 1);

        verticalLayout_16->addWidget(widget_16);


        verticalLayout_18->addWidget(groupBox_7);

        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        verticalLayout_21 = new QVBoxLayout(page_5);
        verticalLayout_21->setSpacing(6);
        verticalLayout_21->setContentsMargins(11, 11, 11, 11);
        verticalLayout_21->setObjectName(QString::fromUtf8("verticalLayout_21"));
        verticalLayout_21->setContentsMargins(0, 0, 0, 0);
        groupBox_8 = new QGroupBox(page_5);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        verticalLayout_19 = new QVBoxLayout(groupBox_8);
        verticalLayout_19->setSpacing(6);
        verticalLayout_19->setContentsMargins(11, 11, 11, 11);
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        widget_19 = new QWidget(groupBox_8);
        widget_19->setObjectName(QString::fromUtf8("widget_19"));
        verticalLayout_20 = new QVBoxLayout(widget_19);
        verticalLayout_20->setSpacing(6);
        verticalLayout_20->setContentsMargins(11, 11, 11, 11);
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        widget_20 = new QWidget(widget_19);
        widget_20->setObjectName(QString::fromUtf8("widget_20"));
        label_7 = new QLabel(widget_20);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(60, 60, 68, 15));
        lineEdit_6 = new QLineEdit(widget_20);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(190, 60, 113, 21));

        verticalLayout_20->addWidget(widget_20);

        widget_21 = new QWidget(widget_19);
        widget_21->setObjectName(QString::fromUtf8("widget_21"));
        horizontalLayout_9 = new QHBoxLayout(widget_21);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        toolButton_13 = new QToolButton(widget_21);
        toolButton_13->setObjectName(QString::fromUtf8("toolButton_13"));
        sizePolicy1.setHeightForWidth(toolButton_13->sizePolicy().hasHeightForWidth());
        toolButton_13->setSizePolicy(sizePolicy1);
        toolButton_13->setFont(font3);
        toolButton_13->setContextMenuPolicy(Qt::DefaultContextMenu);
        toolButton_13->setLayoutDirection(Qt::LeftToRight);
        toolButton_13->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 229, 229);"));
        toolButton_13->setIcon(icon6);
        toolButton_13->setIconSize(QSize(40, 40));
        toolButton_13->setCheckable(false);
        toolButton_13->setChecked(false);
        toolButton_13->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_9->addWidget(toolButton_13);

        toolButton_14 = new QToolButton(widget_21);
        toolButton_14->setObjectName(QString::fromUtf8("toolButton_14"));
        sizePolicy1.setHeightForWidth(toolButton_14->sizePolicy().hasHeightForWidth());
        toolButton_14->setSizePolicy(sizePolicy1);
        toolButton_14->setFont(font4);
        toolButton_14->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 229, 229);"));
        toolButton_14->setIcon(icon7);
        toolButton_14->setIconSize(QSize(40, 40));
        toolButton_14->setPopupMode(QToolButton::DelayedPopup);
        toolButton_14->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_9->addWidget(toolButton_14);


        verticalLayout_20->addWidget(widget_21);

        verticalLayout_20->setStretch(0, 6);
        verticalLayout_20->setStretch(1, 1);

        verticalLayout_19->addWidget(widget_19);


        verticalLayout_21->addWidget(groupBox_8);

        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        verticalLayout_24 = new QVBoxLayout(page_6);
        verticalLayout_24->setSpacing(6);
        verticalLayout_24->setContentsMargins(11, 11, 11, 11);
        verticalLayout_24->setObjectName(QString::fromUtf8("verticalLayout_24"));
        verticalLayout_24->setContentsMargins(0, 0, 0, 0);
        groupBox_9 = new QGroupBox(page_6);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        verticalLayout_22 = new QVBoxLayout(groupBox_9);
        verticalLayout_22->setSpacing(6);
        verticalLayout_22->setContentsMargins(11, 11, 11, 11);
        verticalLayout_22->setObjectName(QString::fromUtf8("verticalLayout_22"));
        widget_22 = new QWidget(groupBox_9);
        widget_22->setObjectName(QString::fromUtf8("widget_22"));
        verticalLayout_23 = new QVBoxLayout(widget_22);
        verticalLayout_23->setSpacing(6);
        verticalLayout_23->setContentsMargins(11, 11, 11, 11);
        verticalLayout_23->setObjectName(QString::fromUtf8("verticalLayout_23"));
        widget_23 = new QWidget(widget_22);
        widget_23->setObjectName(QString::fromUtf8("widget_23"));
        label_8 = new QLabel(widget_23);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(60, 60, 68, 15));
        lineEdit_7 = new QLineEdit(widget_23);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(190, 60, 113, 21));

        verticalLayout_23->addWidget(widget_23);

        widget_24 = new QWidget(widget_22);
        widget_24->setObjectName(QString::fromUtf8("widget_24"));
        horizontalLayout_10 = new QHBoxLayout(widget_24);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        toolButton_15 = new QToolButton(widget_24);
        toolButton_15->setObjectName(QString::fromUtf8("toolButton_15"));
        sizePolicy1.setHeightForWidth(toolButton_15->sizePolicy().hasHeightForWidth());
        toolButton_15->setSizePolicy(sizePolicy1);
        toolButton_15->setFont(font3);
        toolButton_15->setContextMenuPolicy(Qt::DefaultContextMenu);
        toolButton_15->setLayoutDirection(Qt::LeftToRight);
        toolButton_15->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 229, 229);"));
        toolButton_15->setIcon(icon6);
        toolButton_15->setIconSize(QSize(40, 40));
        toolButton_15->setCheckable(false);
        toolButton_15->setChecked(false);
        toolButton_15->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_10->addWidget(toolButton_15);

        toolButton_16 = new QToolButton(widget_24);
        toolButton_16->setObjectName(QString::fromUtf8("toolButton_16"));
        sizePolicy1.setHeightForWidth(toolButton_16->sizePolicy().hasHeightForWidth());
        toolButton_16->setSizePolicy(sizePolicy1);
        toolButton_16->setFont(font4);
        toolButton_16->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 229, 229);"));
        toolButton_16->setIcon(icon7);
        toolButton_16->setIconSize(QSize(40, 40));
        toolButton_16->setPopupMode(QToolButton::DelayedPopup);
        toolButton_16->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_10->addWidget(toolButton_16);


        verticalLayout_23->addWidget(widget_24);

        verticalLayout_23->setStretch(0, 6);
        verticalLayout_23->setStretch(1, 1);

        verticalLayout_22->addWidget(widget_22);


        verticalLayout_24->addWidget(groupBox_9);

        stackedWidget->addWidget(page_6);

        horizontalLayout_2->addWidget(stackedWidget);

        horizontalLayout_2->setStretch(0, 3);
        horizontalLayout_2->setStretch(1, 1);

        gridLayout->addWidget(widget, 0, 1, 1, 1);


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
        groupBox->setTitle(QCoreApplication::translate("DBShower", "\347\233\256\345\275\225", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("DBShower", "\350\256\276\345\244\207\346\230\276\347\244\272", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("DBShower", "\345\205\267\344\275\223\344\277\241\346\201\257", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("DBShower", "\346\212\230\345\274\257\346\234\272", nullptr));
        label_2->setText(QCoreApplication::translate("DBShower", "\345\244\226\345\275\242\351\225\277\345\272\246\357\274\232", nullptr));
        label_9->setText(QCoreApplication::translate("DBShower", "\345\244\226\345\275\242\345\256\275\345\272\246\357\274\232", nullptr));
        label_10->setText(QCoreApplication::translate("DBShower", "\345\244\226\345\275\242\351\253\230\345\272\246\357\274\232", nullptr));
        label_11->setText(QCoreApplication::translate("DBShower", "\344\270\213\345\244\271\345\205\267\351\253\230\345\272\246\357\274\232", nullptr));
        label_12->setText(QCoreApplication::translate("DBShower", "\345\274\200\345\217\243\351\253\230\345\272\246\357\274\232", nullptr));
        label_13->setText(QCoreApplication::translate("DBShower", "\346\226\207\344\273\266\350\267\257\345\276\204\357\274\232", nullptr));
        toolButton_3->setText(QCoreApplication::translate("DBShower", "  \346\226\260\345\242\236\346\225\260\346\215\256", nullptr));
        toolButton_4->setText(QCoreApplication::translate("DBShower", "  \345\210\240\351\231\244\346\225\260\346\215\256", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("DBShower", "\346\234\272\345\231\250\344\272\272", nullptr));
        label_4->setText(QCoreApplication::translate("DBShower", "TextLabel", nullptr));
        toolButton_7->setText(QCoreApplication::translate("DBShower", "  \346\226\260\345\242\236\346\225\260\346\215\256", nullptr));
        toolButton_8->setText(QCoreApplication::translate("DBShower", "  \345\210\240\351\231\244\346\225\260\346\215\256", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("DBShower", "\345\257\271\344\270\255\345\217\260", nullptr));
        label_5->setText(QCoreApplication::translate("DBShower", "TextLabel", nullptr));
        toolButton_9->setText(QCoreApplication::translate("DBShower", "  \346\226\260\345\242\236\346\225\260\346\215\256", nullptr));
        toolButton_10->setText(QCoreApplication::translate("DBShower", "  \345\210\240\351\231\244\346\225\260\346\215\256", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("DBShower", "\347\277\273\351\235\242\346\236\266", nullptr));
        label_6->setText(QCoreApplication::translate("DBShower", "TextLabel", nullptr));
        toolButton_11->setText(QCoreApplication::translate("DBShower", "  \346\226\260\345\242\236\346\225\260\346\215\256", nullptr));
        toolButton_12->setText(QCoreApplication::translate("DBShower", "  \345\210\240\351\231\244\346\225\260\346\215\256", nullptr));
        groupBox_8->setTitle(QCoreApplication::translate("DBShower", "\344\270\212\346\226\231\345\217\260", nullptr));
        label_7->setText(QCoreApplication::translate("DBShower", "TextLabel", nullptr));
        toolButton_13->setText(QCoreApplication::translate("DBShower", "  \346\226\260\345\242\236\346\225\260\346\215\256", nullptr));
        toolButton_14->setText(QCoreApplication::translate("DBShower", "  \345\210\240\351\231\244\346\225\260\346\215\256", nullptr));
        groupBox_9->setTitle(QCoreApplication::translate("DBShower", "\344\270\212\346\226\231\345\217\260", nullptr));
        label_8->setText(QCoreApplication::translate("DBShower", "TextLabel", nullptr));
        toolButton_15->setText(QCoreApplication::translate("DBShower", "  \346\226\260\345\242\236\346\225\260\346\215\256", nullptr));
        toolButton_16->setText(QCoreApplication::translate("DBShower", "  \345\210\240\351\231\244\346\225\260\346\215\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DBShower: public Ui_DBShower {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DBSHOWER_H
