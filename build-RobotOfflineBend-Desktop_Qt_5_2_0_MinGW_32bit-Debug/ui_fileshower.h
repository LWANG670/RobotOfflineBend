/********************************************************************************
** Form generated from reading UI file 'fileshower.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILESHOWER_H
#define UI_FILESHOWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FileShower
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QPushButton *pushButton;

    void setupUi(QWidget *FileShower)
    {
        if (FileShower->objectName().isEmpty())
            FileShower->setObjectName(QStringLiteral("FileShower"));
        FileShower->resize(1060, 393);
        FileShower->setStyleSheet(QStringLiteral(""));
        horizontalLayout = new QHBoxLayout(FileShower);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(5, 5, 5, 5);
        widget = new QWidget(FileShower);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setStyleSheet(QStringLiteral("background-color: rgb(214, 214, 214);"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(80, 120, 201, 28));

        horizontalLayout->addWidget(widget);


        retranslateUi(FileShower);

        QMetaObject::connectSlotsByName(FileShower);
    } // setupUi

    void retranslateUi(QWidget *FileShower)
    {
        FileShower->setWindowTitle(QApplication::translate("FileShower", "Form", 0));
        pushButton->setText(QApplication::translate("FileShower", "\346\226\207\344\273\266\345\261\225\347\244\272\347\225\214\351\235\242", 0));
    } // retranslateUi

};

namespace Ui {
    class FileShower: public Ui_FileShower {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILESHOWER_H
