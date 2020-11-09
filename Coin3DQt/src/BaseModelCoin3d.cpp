#include "BaseModelCoin3d.h"
#include <Inventor/SbVec3f.h>
#include <Inventor/SbRotation.h>
#include <QtMath>
#include "MathHe.h"
extern const float ANG2RAD;
BaseModelCoin3d::BaseModelCoin3d(const QString& path)
	: m_path(path),
	m_root(new SoSeparator),
	m_pos(new SoMatrixTransform)
{
	m_root->ref();
	m_root->addChild(m_pos);
}

BaseModelCoin3d::~BaseModelCoin3d()
{
	m_root->unref();
}


void BaseModelCoin3d::AddChildSoNode(SoNode* child)
{
	m_root->addChild(child);
}


void BaseModelCoin3d::SetPath(const QString& path)
{
	m_path = path;
}

void BaseModelCoin3d::SetPosMatRow(const SbMatrix& rowMat)
{
	m_pos->matrix.setValue(rowMat);
	m_root->touch();
}

void BaseModelCoin3d::SetPosMatCol(const SbMatrix& mat)
{
	m_pos->matrix.setValue(mat.transpose());
	m_root->touch();
}

void BaseModelCoin3d::SetPositionXYZ(float x, float y, float z)
{
	SbMatrix mat = m_pos->matrix.getValue(); // 获取当前的位置
	mat[3][0] = x;
	mat[3][1] = y;
	mat[3][2] = z;
	SetPosMatRow(mat);
}

void BaseModelCoin3d::SetPositionXYZ(const SbVec3f& pos)
{
	SetPositionXYZ(pos[0], pos[1], pos[2]);
}

void BaseModelCoin3d::SetRotationXYZSelf(const AxisXYZ& axis, float degree)
{
	degree *= ANG2RAD; // 化为弧度

	SbMatrix mat = SbMatrix::identity();
	switch (axis)
	{
	case AxisXYZ::X:
		mat.setRotate(SbRotation(SbVec3f(1, 0, 0), degree));
		break;
	case AxisXYZ::Y:
		mat.setRotate(SbRotation(SbVec3f(0, 1, 0), degree));
		break;
	case  AxisXYZ::Z:
		mat.setRotate(SbRotation(SbVec3f(0, 0, 1), degree));
		break;
	default:
		break;
	}

	mat *= m_pos->matrix.getValue(); // 相当于列矩阵右乘，让模型绕自身旋转
	SetPosMatRow(mat);
}

void BaseModelCoin3d::SetRotationXYZSelf(float x, float y, float z)
{
	SetPosMatCol(ZxyEuler2Mat4f(x, y, z));
}

void BaseModelCoin3d::SetRotationXYZSelf(const SbVec3f& vec)
{
	SetPosMatCol(ZxyEuler2Mat4f(vec));
}



