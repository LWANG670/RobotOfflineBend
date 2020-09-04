/********************************************************************************
** Form generated from reading UI file 'progressdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROGRESSDLG_H
#define UI_PROGRESSDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
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
            ProgressDlg->setObjectName(QStringLiteral("ProgressDlg"));
        ProgressDlg->resize(500, 150);
        progressBar = new QProgressBar(ProgressDlg);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(80, 70, 381, 30));
        progressBar->setValue(10);
        label = new QLabel(ProgressDlg);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 30, 231, 31));
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(ProgressDlg);

        QMetaObject::connectSlotsByName(ProgressDlg);
    } // setupUi

    void retranslateUi(QDialog *ProgressDlg)
    {
        ProgressDlg->setWindowTitle(QApplication::translate("ProgressDlg", "Dialog", 0));
        progressBar->setFormat(QApplication::translate("ProgressDlg", "%p%", 0));
        label->setText(QApplication::translate("ProgressDlg", "\347\250\213\345\272\217\346\233\264\346\226\260\344\270\255...", 0));
    } // retranslateUi

};

namespace Ui {
    class ProgressDlg: public Ui_ProgressDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROGRESSDLG_H
