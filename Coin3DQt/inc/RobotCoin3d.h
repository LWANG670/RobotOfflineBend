#pragma once
#include "AixsCoin3d.h"
#include <QVector>
#include "IKSolverHe.h"
class RobotCoin3d
{
private:
	SoSeparator* m_root;

	// 机器人的七个部分，七根轴
	QVector<AxisCoin3d*> m_axes;
	//? 一般来说，实际机器人{0}坐标系并不会和{1}重合，
	//? baseMat为机器人学中的{0}相对于实际{0}的逆矩阵
	//?等于实际{1}相对于{2}的逆矩阵
	SbMatrix m_Tv0o;

public:
	RobotCoin3d();
	RobotCoin3d(const QVector<QString>& paths, const QVector<QVector<float>>& dhParams);
	~RobotCoin3d();

	//! 公有函数=====================================================
	inline auto GetRobotRoot()  const { return m_root; }

private:
	//! 初始化轴
	SbMatrix GetInitMat(int index);
	SoVRMLGroup* OpenWRLModel(int index, SoInput& input);

	//?控制机器人运动====================================================================

	//todo根据机器人末端相对于世界的位置求出相对于{0}的位置
	Mat4x4d RetMat4x4T60ByEndWorld(const SbMatrix& endWorld);
public:
	//! 返回轴[i]相对于世界的齐次坐标矩阵
	SbMatrix GetAxisMatToWorld(int index);
	void RotateAixs(int num, float theta);
	SbMatrix GetAxisMatByAction(int index, const SbViewportRegion& viewPort);
};
