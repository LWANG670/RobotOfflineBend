#pragma once

#include <Inventor/SoDB.h>
#include <QtMath>

#include "IKSolverHe.h"
#include "RobotCoin3d.h"
#include "NurbsSurf.h"
#include "CreateWorkPieceHelper.h"
#include "FileReadHelper.h"
#include "CentringCoin3d.h"

#include <QDebug>

extern const int AXIS_NUMBER;

static void initRobot(QScopedPointer<RobotCoin3d>& robot)
{
	//todo 机器人参数和wrl模型路径可放在配置文件入xml、json中或数据库中

#pragma region 设置模型路径
// ABB_m2600
//	("../ResourceModel/Robot/IRB6620-m2400/IRB6620_220-150_m2004_rev0_01-"
//		+ QString::number(i + 1) + ".wrl");


//!KR16
	QVector<QString> paths(AXIS_NUMBER);
	// 初始化轴
	for (size_t i = 0; i < AXIS_NUMBER; i++)
	{
		paths[i] = QString
		("./ResourceModel/Robot/KR16/axis" + QString::number(i) + ".wrl");
	}
#pragma endregion

#pragma region 设置DH参数
	// ABB_m2600 D-H参数
	/*QVector<float> axis1DH = { 0.0f, 0.0f, 680.0f, 0.0f, -170.0f, 170.0f };
	QVector<float> axis2DH = { -90.0f, 320.0f, 0.0f, -90.0f, -90.0f, 50.0f };
	QVector<float> axis3DH = { 0.0f, 975.0f, 0.0f, 0.0f, -180.0f, 70.0f };

	QVector<float> axis4DH = { -90.0f, 200.0f, 887.0f, 0.0f, -130.0f, 130.0f };
	QVector<float> axis5DH = { 90.0f, 0.0f, 0.0f, 0.0f, -130.0f, 130.0f };
	QVector<float> axis6DH = { -90.0f, 0.0f, 200.0f, 0.0f, -300.0f, 300.0f };

	QVector<QVector<float>> dhParas = { axis1DH,axis2DH, axis3DH,
										axis4DH, axis5DH, axis6DH };*/

										//!KR16
	QVector<float> axis1DH = { 180.0f, 0.0f, -675.0f, 0.0f, -185.0f, 185.0f };
	QVector<float> axis2DH = { 90.0f, 260.0f, 0.0f, -90.0f, -155.0f, 35.0f };
	QVector<float> axis3DH = { 0.0f, 680.0f, 0.0f, 180.0f, -130.0f, 154.0f };

	QVector<float> axis4DH = { -90.0f, 35.0f, -670.0f, 0.0f, -350.0f, 350.0f };
	QVector<float> axis5DH = { 90.0f, 0.0f, 0.0f, 0.0f, -130.0f, 130.0f };
	QVector<float> axis6DH = { -90.0f, 0.0f, -158.0f, 0.0f, -350.0f, 350.0f };

	QVector<QVector<float>> dhParas = { axis1DH,axis2DH, axis3DH,
										axis4DH, axis5DH, axis6DH };
#pragma endregion


#pragma region 测试机器人逆解
	/*DHTableCol alpha{ 0.0, 90.0, 0.0, -90.0, 90.0, -90.0};
	DHTableCol a{ 0.0, 260.0, 680.0, 35.0, 0.0, 0.0 };
	DHTableCol d{ 0.0, 0.0, 0.0, -670.0, 0.0, 0.0 };
	IKSolverHe iksolver(alpha, a, d);
	Mat4x4 t06;
	t06 << -9.55287005e-01, -2.05188852e-01, -2.12894981e-01, 7.20543336e+02,
		1.70606597e-01, 2.05565021e-01, -9.63657829e-01, 1.02904253e+03,
		2.41495605e-01, -9.56891090e-01, -1.61367021e-01, 4.49295918e+02,
		0, 0, 0, 1;
	auto sols = iksolver.GetSolThetas(t06);
	for (size_t i = 0; i < sols.size(); i++)
	{
		for (size_t j = 0; j < sols[0].size(); j++)
		{
			qDebug() << sols[i][j] << " ";
		}
		qDebug() << "\n";
	}*/
#pragma endregion


	robot.reset(new RobotCoin3d(paths, dhParas));
	//todo 初始化机器人 正确设置节点层次属性
}

static void initBendMachine(QScopedPointer<BendMachineCoin3d>& bendMachine)
{
	QString path("../ResourceModel/Machine/machine.wrl");
	bendMachine.reset(new BendMachineCoin3d(950, 1370, 60, path));
	bendMachine->AddChildSoNode(FileReadHelper::LoadWrlModel(bendMachine->GetPath()));

	bendMachine->SetPositionXYZ(1500.f, 0.f, 950.f); // 设置初始位置
}

static void initCentring(QScopedPointer<CentringCoin3d>& centring)
{
	QString path("../ResourceModel/Center/center_tool.wrl");
	centring.reset(new CentringCoin3d(SbVec3f(708.45f, -984.81f, 218.73), 2000, 1500, path));
	centring->AddChildSoNode(FileReadHelper::LoadWrlModel(centring->GetPath()));

	// 设置初始位置
	centring->SetPositionXYZ(0.0f, 3000.0f, 0.0f); // 设置位置
	centring->SetRotationXYZSelf(AxisXYZ::Z, -90.0f); // 设置姿态
}

static void NurbsSurfTest(NurbsSurf& surf)
{
	// 一般曲面
	/*QVector<SbVec4f> cps {
		{-4.5, -2.0, 8.0}, {-2.0, 1.0, 8.0}, {2.0, -3.0, 6.0}, {5.0, -1.0, 8.0},
		{-3.0, 3.0, 4.0}, {0.0, -1.0, 4.0}, {1.0, -1.0, 4.0}, {3.0, 2.0, 4.0},
		{-5.0, -2.0, -2.0}, {-2.0, -4.0, -2.0}, {2.0, -1.0, -2.0}, {5.0, 0.0, -2.0},
		{-4.5, 2.0, -6.0}, {-2.0, -4.0, -5.0}, {2.0, 3.0, -5.0}, {4.5, -2.0, -6.0}
	};
	QVector<float> knots{ 0, 0, 0, 0, 1, 1, 1, 1 };
	surf.SetCtlPtsKnot(cps, 4, 4, knots);*/

	// 平面
	/*QVector<SbVec3f> cps{
		{-300.0, -200.0, 100.0}, {300.0, -200.0, 100.0},
		{-300.0, 200.0, 100.0, {300.0, 200.0, 100.0}
	};
	QVector<float> knots{ 0,0,1,1 };
	surf.SetCtlPtsKnot(cps, 2, 2, knots);*/
	// 平面2
	/*LineData line1({ 0, 0, 0 }, {200, 0, 0 });
	LineData line2({ 0, 200, 0 }, { 200, 200, 0 });
	surf.SetCtlPtsKnot(CreateWorkPieceHelper::CreatePlaneSurf(line1, line2));*/

	// 柱面
	/*QVector<float> uKnots{ 0, 0, 1, 1 };
	QVector<float> vKnots{ 0, 0, 1, 2, 3, 4, 4 };
	QVector<SbVec3f> cps(10);
	for (int i = 0; i < 5; ++i)
	{
		float angleR = qDegreesToRadians(22.5f * i);
		cps[i * 2] = { 100.f * cos(angleR), 0, 100.f * sin(angleR) };
		cps[i * 2 + 1] = { 100.f * cos(angleR), 1000.f, 100.f * sin(angleR) };
	}

	surf.SetCtlPtsKnot(cps, 2, 5, uKnots, vKnots);*/
	// 柱面2
	/*LineData genLine({ 0, 100, 0 }, { 500, 100, 500 });
	LineData aixs({ 0, 0, 0 }, { 1, 0, 1 });
	surf.SetCtlPtsKnot(CreateWorkPieceHelper::CreateCylinSurf(genLine, aixs, -270));*/

	// 拉伸面
	QVector<SbVec3f> buttomPts{
		{-1000.f, 1000.f, 0.f}, {-1000.f, -1000.f, 0.f},
		{1000.f, -1000.f, 0.f}, {1000.f, 1000.f, 0.f},
		{-1000.f, 1000.f, 0.f}
	};
	/*surf.SetCtlPtsKnot(CreateWorkPieceHelper::CreateStretchingSurf(buttomPts, 500.f));*/
	surf.SetCtlPtsKnot(CreateWorkPieceHelper::CreatePlaneSurf(buttomPts));
}

