#ifndef SELECTEQU_H
#define SELECTEQU_H

#include <QWidget>
#include <QPushButton>
#include "Coin3DQtRobotBending.h"

namespace Ui {
class SelectEqu;
}

class SelectEqu : public QWidget
{
    Q_OBJECT

public:
    explicit SelectEqu(QWidget *parent = 0);
    ~SelectEqu();

    void resizeWindow(int width,int height);


private:
    Ui::SelectEqu *ui;

    Coin3DQtRobotBending* coin3DWidget;

    void resizeEvent(QResizeEvent* event);

    void initChooseWidget();

    //Ë½ÓÐº¯Êý
    void selectChange(QByteArray selectname);

private slots:
    void btnMachineClick();
    void btnRobotClick();
    void btnCenterClick();
    void btnFlipClick();
    void btnUpClick();
    void btnDownClick();

    //void btnMachineSelectClick();
    //void btnRobotSelectClick();
    //void btnCenterSelectClick();
    //void btnFlipSelectClick();
    //void btnUpSelectClick();
    //void btnDownSelectClick();
};

#endif // SELECTEQU_H
