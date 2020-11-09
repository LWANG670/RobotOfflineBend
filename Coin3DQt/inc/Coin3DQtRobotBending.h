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
    Ui::Coin3DQtRobotBendingClass ui; // �̳������Ľ�����Ui_Coin3DQtRobotBendingClass
    
    // ����չʾ���� ����coin3dDispaly��
    QScopedPointer<SoQtExaminerViewer> simulatorView;
    void InitSignalSlot();

    
    SoSeparator* root;// ����ͼ���ڵ�

    QScopedPointer<RobotCoin3d> robot; // ������
    QScopedPointer<BendMachineCoin3d> bendMachine; // ����
    QScopedPointer<CentringCoin3d> centring; // ����̨

//private slots:
	void TestFunc();
};
