#ifndef SELECTEQU_H
#define SELECTEQU_H

#include <QWidget>
#include <QPushButton>
#include"Coin3d/QtCoin3D_Robot.h"
#include"Coin3d/Robot.h"

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

    //QtCoin3D_Robot* coinedRobot;
    // Coin root node
    SoSeparator* Coin_Root;

    // Robot root node
    SoSeparator* Robot_Root;

    // Robot
    Robot* robot;

    // Viewer
    SoQtExaminerViewer* simulatorView;

    //Ë½ÓÐº¯Êý
    void selectChange(QByteArray selectname);

private slots:
    void btnMachineClick();
    void btnRobotClick();
    void btnCenterClick();
    void btnFlipClick();
    void btnUpClick();
    void btnDownClick();
    void btnSelectClick();
    
};

#endif // SELECTEQU_H
