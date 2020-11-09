/********************************************************************************
** Form generated from reading UI file 'Coin3DQtRobotBending.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COIN3DQTROBOTBENDING_H
#define UI_COIN3DQTROBOTBENDING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Coin3DQtRobotBendingClass
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *coin3dDisplay;
    QPushButton *btnTest;

    void setupUi(QWidget *Coin3DQtRobotBendingClass)
    {
        if (Coin3DQtRobotBendingClass->objectName().isEmpty())
            Coin3DQtRobotBendingClass->setObjectName(QString::fromUtf8("Coin3DQtRobotBendingClass"));
        Coin3DQtRobotBendingClass->resize(1071, 621);
        horizontalLayout = new QHBoxLayout(Coin3DQtRobotBendingClass);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        coin3dDisplay = new QWidget(Coin3DQtRobotBendingClass);
        coin3dDisplay->setObjectName(QString::fromUtf8("coin3dDisplay"));

        horizontalLayout->addWidget(coin3dDisplay);

        btnTest = new QPushButton(Coin3DQtRobotBendingClass);
        btnTest->setObjectName(QString::fromUtf8("btnTest"));

        horizontalLayout->addWidget(btnTest);

        horizontalLayout->setStretch(0, 7);
        horizontalLayout->setStretch(1, 1);

        retranslateUi(Coin3DQtRobotBendingClass);

        QMetaObject::connectSlotsByName(Coin3DQtRobotBendingClass);
    } // setupUi

    void retranslateUi(QWidget *Coin3DQtRobotBendingClass)
    {
        Coin3DQtRobotBendingClass->setWindowTitle(QCoreApplication::translate("Coin3DQtRobotBendingClass", "Coin3DQtRobotBending", nullptr));
        btnTest->setText(QCoreApplication::translate("Coin3DQtRobotBendingClass", "\346\265\213\350\257\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Coin3DQtRobotBendingClass: public Ui_Coin3DQtRobotBendingClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COIN3DQTROBOTBENDING_H
