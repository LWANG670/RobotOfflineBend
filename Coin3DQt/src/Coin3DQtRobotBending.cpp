#include "Coin3DQtRobotBending.h"
#include "Init.hpp"

#include "PrintHelper.h"
#include "Test.hpp"

#include "NurbsSurf.h"
#include "BasicPlaneEntity.h"
Coin3DQtRobotBending::Coin3DQtRobotBending(QWidget* parent)
	: QWidget(parent),
	simulatorView(nullptr),
	root(nullptr),
	robot(nullptr),
	bendMachine(nullptr),
	centring(nullptr)
{
	ui.setupUi(this);
	SoQt::init(ui.coin3dDisplay);

	//!将一个Widget设为SoQtExaminerViewer
	simulatorView.reset(new SoQtExaminerViewer(ui.coin3dDisplay));
	simulatorView->setFeedbackVisibility(true);

	root = new SoSeparator;
	root->ref();



	//! 放入场景=====================================================
   //! 将机器人、机床...等模块放入场景

	//todo 初始化机器人
	//initRobot(robot);
	//root->addChild(robot->GetRobotRoot()); // 加入场景图

	//todo 初始化机床
	//initBendMachine(bendMachine);
	//root->addChild(bendMachine->GetRootNode()); // 加入场景图

	//todo 初始化对中台
	//initCentring(centring);
	//root->addChild(centring->GetRootNode());   // 加入场景图


	WorkPieceData wp = FileReadHelper::ReadOriginWorkPieceTxt(QString("./ResourceModel/WorkPieces/77.txt"));
	QVector<BasicPlaneEntity> basicSurfEntity(wp.bendlines.size());
	for (int i = 0; i < basicSurfEntity.size(); ++i)
	{
		basicSurfEntity[i].CreateSurfs(wp.planes[i], wp.thick);
		root->addChild(basicSurfEntity[i].GetRoot());
	}

	simulatorView->setSceneGraph(root);
	// 设置背景色
	simulatorView->setBackgroundColor(SbColor(0.6f, 0.7f, 0.43f));
	simulatorView->show();
	SoQt::show(ui.coin3dDisplay);

	//todo 钣金工件测试
	/*NurbsSurf surf;
	NurbsSurfTest(surf);
	root->addChild(surf.GetRoot());*/

	//WorkPieceData wp = FileReadHelper::ReadOriginWorkPieceTxt(QString("../ResourceModel/WorkPieces/77.txt"));
	//QVector<BasicPlaneEntity> basicSurfEntity(wp.bendlines.size());
	//for (int i = 0; i < basicSurfEntity.size(); ++i)
	//{
	//	basicSurfEntity[i].CreateSurfs(wp.planes[i], wp.thick);
	//	root->addChild(basicSurfEntity[i].GetRoot());
	//}

	/*QVector<SbVec3f> buttomPts{
		{-1000.f, 1000.f, 0.f}, {-1000.f, -1000.f, 0.f},
		{1000.f, -1000.f, 0.f}, {1000.f, 1000.f, 0.f}
	};
	BasicPlaneEntity bpe(buttomPts, 200.f);
	root->addChild(bpe.GetRoot());*/

#pragma region 信号和槽/点击事件相关

	InitSignalSlot();

#pragma endregion
	
}

Coin3DQtRobotBending::~Coin3DQtRobotBending()
{
	root->unref();
}

void Coin3DQtRobotBending::InitSignalSlot()
{
	connect(ui.btnTest, &QPushButton::clicked, this, &Coin3DQtRobotBending::TestFunc);
}

static float theta = -90.0f;
void Coin3DQtRobotBending::TestFunc()
{
	theta += 15.0f;
	robot->RotateAixs(5, theta);
}
