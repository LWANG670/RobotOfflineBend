/********************************************************************************
** Form generated from reading UI file 'progressdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROGRESSDLG_H
#define UI_PROGRESSDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>

QT_BEGIN_NAMESPACE

class Ui_ProgressDlg
{
public:
    QProgressBar *progressBar;
    QLabel *label;

    void setupUi(QDialog *ProgressDlg)
    {
        if (ProgressDlg->objectName().isEmpty())
            ProgressDlg->setObjectName(QString::fromUtf8("ProgressDlg"));
        ProgressDlg->resize(500, 150);
        progressBar = new QProgressBar(ProgressDlg);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(80, 70, 381, 30));
        progressBar->setValue(10);
        label = new QLabel(ProgressDlg);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 30, 231, 31));
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(ProgressDlg);

        QMetaObject::connectSlotsByName(ProgressDlg);
    } // setupUi

    void retranslateUi(QDialog *ProgressDlg)
    {
        ProgressDlg->setWindowTitle(QCoreApplication::translate("ProgressDlg", "Dialog", nullptr));
        progressBar->setFormat(QCoreApplication::translate("ProgressDlg", "%p%", nullptr));
        label->setText(QCoreApplication::translate("ProgressDlg", "\347\250\213\345\272\217\346\233\264\346\226\260\344\270\255...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProgressDlg: public Ui_ProgressDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROGRESSDLG_H
