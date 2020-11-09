#pragma once

#include <QtWidgets/QWidget>
#include "ui_Coin3DQtRobotBending.h"
#include <Inventor/Qt/SoQt.h>
#include <Inventor/Qt/viewers/SoQtExaminerViewer.h>
#include <Inventor/nodes/SoSeparator.h>
#include <QScopedPointer>

#include "RobotCoin3d.h"
#include "BendMachineCoin3d.h"
#include "CentringCoin3d.h"
class Coin3DQtRobotBending : public QWidget
{
    Q_OBJECT

public:
    Coin3DQtRobotBending(QWidget *parent = Q_NULLPTR);
    ~Coin3DQtRobotBending();

private:
    Ui::Coin3DQtRobotBendingClass ui; // 继承真正的界面类Ui_Coin3DQtRobotBendingClass
    
    // 场景展示窗口 将与coin3dDispaly绑定
    QScopedPointer<SoQtExaminerViewer> simulatorView;
    void InitSignalSlot();

    
    SoSeparator* root;// 场景图根节点

    QScopedPointer<RobotCoin3d> robot; // 机器人
    QScopedPointer<BendMachineCoin3d> bendMachine; // 机床
    QScopedPointer<CentringCoin3d> centring; // 对中台

//private slots:
	void TestFunc();
};
