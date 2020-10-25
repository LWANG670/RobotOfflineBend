/********************************************************************************
** Form generated from reading UI file 'DBHelper.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DBHELPER_H
#define UI_DBHELPER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DBHelper
{
public:

    void setupUi(QWidget *DBHelper)
    {
        if (DBHelper->objectName().isEmpty())
            DBHelper->setObjectName(QString::fromUtf8("DBHelper"));
        DBHelper->resize(400, 300);

        retranslateUi(DBHelper);

        QMetaObject::connectSlotsByName(DBHelper);
    } // setupUi

    void retranslateUi(QWidget *DBHelper)
    {
        DBHelper->setWindowTitle(QCoreApplication::translate("DBHelper", "DBHelper", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DBHelper: public Ui_DBHelper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DBHELPER_H
