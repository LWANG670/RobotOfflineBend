#pragma once
#include "AixsCoin3d.h"
#include <QVector>
#include "IKSolverHe.h"
class RobotCoin3d
{
private:
	SoSeparator* m_root;

	// �����˵��߸����֣��߸���
	QVector<AxisCoin3d*> m_axes;
	//? һ����˵��ʵ�ʻ�����{0}����ϵ�������{1}�غϣ�
	//? baseMatΪ������ѧ�е�{0}�����ʵ��{0}�������
	//?����ʵ��{1}�����{2}�������
	SbMatrix m_Tv0o;

public:
	RobotCoin3d();
	RobotCoin3d(const QVector<QString>& paths, const QVector<QVector<float>>& dhParams);
	~RobotCoin3d();

	//! ���к���=====================================================
	inline auto GetRobotRoot()  const { return m_root; }

private:
	//! ��ʼ����
	SbMatrix GetInitMat(int index);
	SoVRMLGroup* OpenWRLModel(int index, SoInput& input);

	//?���ƻ������˶�====================================================================

	//todo���ݻ�����ĩ������������λ����������{0}��λ��
	Mat4x4d RetMat4x4T60ByEndWorld(const SbMatrix& endWorld);
public:
	//! ������[i]��������������������
	SbMatrix GetAxisMatToWorld(int index);
	void RotateAixs(int num, float theta);
	SbMatrix GetAxisMatByAction(int index, const SbViewportRegion& viewPort);
};
