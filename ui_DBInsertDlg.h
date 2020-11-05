/********************************************************************************
** Form generated from reading UI file 'DBInsertDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DBINSERTDLG_H
#define UI_DBINSERTDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DBInsertDlg
{
public:
    QVBoxLayout *verticalLayout_2;
    QComboBox *comboBox;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *Machine;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_2;
    QLineEdit *editMachineName;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_3;
    QLineEdit *lineMachineLength_2;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_4;
    QLineEdit *lineMachineLength_3;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_5;
    QLineEdit *lineMachineLength_4;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_6;
    QLineEdit *lineMachineLength_5;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_7;
    QLineEdit *lineMachineLength_6;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_8;
    QLineEdit *editMachinePath;
    QPushButton *btnMachine;
    QWidget *Robot;
    QWidget *widget;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAccept;
    QPushButton *btnCancel;

    void setupUi(QDialog *DBInsertDlg)
    {
        if (DBInsertDlg->objectName().isEmpty())
            DBInsertDlg->setObjectName(QString::fromUtf8("DBInsertDlg"));
        DBInsertDlg->resize(500, 800);
        verticalLayout_2 = new QVBoxLayout(DBInsertDlg);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(9, 9, -1, -1);
        comboBox = new QComboBox(DBInsertDlg);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(16);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        comboBox->setFont(font);

        verticalLayout_2->addWidget(comboBox);

        groupBox = new QGroupBox(DBInsertDlg);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(9, 9, 9, 9);
        stackedWidget = new QStackedWidget(groupBox);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        Machine = new QWidget();
        Machine->setObjectName(QString::fromUtf8("Machine"));
        verticalLayout_3 = new QVBoxLayout(Machine);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_2 = new QLabel(Machine);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(12);
        label_2->setFont(font1);

        horizontalLayout_11->addWidget(label_2);

        editMachineName = new QLineEdit(Machine);
        editMachineName->setObjectName(QString::fromUtf8("editMachineName"));
        editMachineName->setFont(font1);
        editMachineName->setAlignment(Qt::AlignCenter);
        editMachineName->setReadOnly(true);

        horizontalLayout_11->addWidget(editMachineName);


        verticalLayout_3->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_3 = new QLabel(Machine);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        horizontalLayout_12->addWidget(label_3);

        lineMachineLength_2 = new QLineEdit(Machine);
        lineMachineLength_2->setObjectName(QString::fromUtf8("lineMachineLength_2"));
        lineMachineLength_2->setFont(font1);
        lineMachineLength_2->setAlignment(Qt::AlignCenter);
        lineMachineLength_2->setReadOnly(false);

        horizontalLayout_12->addWidget(lineMachineLength_2);


        verticalLayout_3->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_4 = new QLabel(Machine);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        horizontalLayout_13->addWidget(label_4);

        lineMachineLength_3 = new QLineEdit(Machine);
        lineMachineLength_3->setObjectName(QString::fromUtf8("lineMachineLength_3"));
        lineMachineLength_3->setFont(font1);
        lineMachineLength_3->setAlignment(Qt::AlignCenter);
        lineMachineLength_3->setReadOnly(false);

        horizontalLayout_13->addWidget(lineMachineLength_3);


        verticalLayout_3->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_5 = new QLabel(Machine);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);

        horizontalLayout_14->addWidget(label_5);

        lineMachineLength_4 = new QLineEdit(Machine);
        lineMachineLength_4->setObjectName(QString::fromUtf8("lineMachineLength_4"));
        lineMachineLength_4->setFont(font1);
        lineMachineLength_4->setAlignment(Qt::AlignCenter);
        lineMachineLength_4->setReadOnly(false);

        horizontalLayout_14->addWidget(lineMachineLength_4);


        verticalLayout_3->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_6 = new QLabel(Machine);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font1);

        horizontalLayout_15->addWidget(label_6);

        lineMachineLength_5 = new QLineEdit(Machine);
        lineMachineLength_5->setObjectName(QString::fromUtf8("lineMachineLength_5"));
        lineMachineLength_5->setFont(font1);
        lineMachineLength_5->setAlignment(Qt::AlignCenter);
        lineMachineLength_5->setReadOnly(false);

        horizontalLayout_15->addWidget(lineMachineLength_5);


        verticalLayout_3->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_7 = new QLabel(Machine);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font1);

        horizontalLayout_16->addWidget(label_7);

        lineMachineLength_6 = new QLineEdit(Machine);
        lineMachineLength_6->setObjectName(QString::fromUtf8("lineMachineLength_6"));
        lineMachineLength_6->setFont(font1);
        lineMachineLength_6->setAlignment(Qt::AlignCenter);
        lineMachineLength_6->setReadOnly(false);

        horizontalLayout_16->addWidget(lineMachineLength_6);


        verticalLayout_3->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_8 = new QLabel(Machine);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font1);

        horizontalLayout_17->addWidget(label_8);

        editMachinePath = new QLineEdit(Machine);
        editMachinePath->setObjectName(QString::fromUtf8("editMachinePath"));
        editMachinePath->setFont(font1);
        editMachinePath->setAlignment(Qt::AlignCenter);
        editMachinePath->setReadOnly(true);

        horizontalLayout_17->addWidget(editMachinePath);


        verticalLayout_3->addLayout(horizontalLayout_17);

        btnMachine = new QPushButton(Machine);
        btnMachine->setObjectName(QString::fromUtf8("btnMachine"));

        verticalLayout_3->addWidget(btnMachine);

        stackedWidget->addWidget(Machine);
        Robot = new QWidget();
        Robot->setObjectName(QString::fromUtf8("Robot"));
        stackedWidget->addWidget(Robot);

        verticalLayout->addWidget(stackedWidget);


        verticalLayout_2->addWidget(groupBox);

        widget = new QWidget(DBInsertDlg);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(222, 222, 222);"));

        verticalLayout_2->addWidget(widget);

        widget_2 = new QWidget(DBInsertDlg);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnAccept = new QPushButton(widget_2);
        btnAccept->setObjectName(QString::fromUtf8("btnAccept"));

        horizontalLayout->addWidget(btnAccept);

        btnCancel = new QPushButton(widget_2);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));

        horizontalLayout->addWidget(btnCancel);


        verticalLayout_2->addWidget(widget_2);

        verticalLayout_2->setStretch(1, 3);
        verticalLayout_2->setStretch(2, 2);

        retranslateUi(DBInsertDlg);
        QObject::connect(btnCancel, SIGNAL(clicked()), DBInsertDlg, SLOT(reject()));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DBInsertDlg);
    } // setupUi

    void retranslateUi(QDialog *DBInsertDlg)
    {
        DBInsertDlg->setWindowTitle(QCoreApplication::translate("DBInsertDlg", "\346\226\260\345\242\236\346\225\260\346\215\256\345\272\223\346\225\260\346\215\256", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("DBInsertDlg", "\346\212\230\345\274\257\346\234\272", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("DBInsertDlg", "\346\234\272\345\231\250\344\272\272", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("DBInsertDlg", "\345\257\271\344\270\255\345\217\260", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("DBInsertDlg", "\347\277\273\351\235\242\346\236\266", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("DBInsertDlg", "\344\270\212\346\226\231\345\217\260", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("DBInsertDlg", "\344\270\213\346\226\231\345\217\260", nullptr));

        groupBox->setTitle(QCoreApplication::translate("DBInsertDlg", "\346\212\230\345\274\257\346\234\272", nullptr));
        label_2->setText(QCoreApplication::translate("DBInsertDlg", "\345\220\215\347\247\260\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("DBInsertDlg", "\345\244\226\345\275\242\351\225\277\345\272\246\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("DBInsertDlg", "\345\244\226\345\275\242\345\256\275\345\272\246\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("DBInsertDlg", "\344\270\213\345\244\271\345\205\267\351\253\230\345\272\246\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("DBInsertDlg", "\345\244\226\345\275\242\345\256\275\345\272\246\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("DBInsertDlg", "\345\274\200\345\217\243\351\253\230\345\272\246\357\274\232", nullptr));
        label_8->setText(QCoreApplication::translate("DBInsertDlg", "\346\226\207\344\273\266\350\267\257\345\276\204\357\274\232", nullptr));
        btnMachine->setText(QCoreApplication::translate("DBInsertDlg", "\346\226\207\344\273\266\351\200\211\346\213\251", nullptr));
#if QT_CONFIG(whatsthis)
        widget->setWhatsThis(QCoreApplication::translate("DBInsertDlg", "\346\230\276\347\244\272\346\241\206", nullptr));
#endif // QT_CONFIG(whatsthis)
        btnAccept->setText(QCoreApplication::translate("DBInsertDlg", "\347\241\256\350\256\244", nullptr));
        btnCancel->setText(QCoreApplication::translate("DBInsertDlg", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DBInsertDlg: public Ui_DBInsertDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DBINSERTDLG_H
