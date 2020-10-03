#ifndef PROGRESSDLG_H
#define PROGRESSDLG_H

#include <QDialog>
#include <QProgressBar>
#include <QLabel>
#include <QPushButton>

namespace Ui {
class ProgressDlg;
}

class ProgressDlg : public QDialog
{
    Q_OBJECT
    
public:
    explicit ProgressDlg(QWidget *parent = 0,const QString strMsg = "", int maxvalue = 0, bool modal = true);
    ~ProgressDlg();
    
private:
    Ui::ProgressDlg *ui_ProgressDlg;
    QProgressBar    *pProgressBar;
    QLabel          *pMsg;
    int MaxValue;
    int curvalue;
public:
    void setValue(int num);
public slots:
    void timeout();
};

#endif // PROGRESSDLG_H
