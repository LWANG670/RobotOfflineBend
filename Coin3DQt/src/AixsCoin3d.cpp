#include "AixsCoin3d.h"

#include <QVector>
#include <qmath.h>

#pragma region 特殊函数
AxisCoin3d::AxisCoin3d(const QString& path, float alpha, float a, float d, float theta,
	float minTheta, float maxTheta)
	: BaseModelCoin3d(path),
	m_alpha(alpha), m_a(a), m_d(d), m_theta(theta),
	m_minTheta(minTheta + theta), m_maxTheta(maxTheta + theta),
	m_axisModelCtrl(new SoSeparator),
	m_axisInitPosCtrl(new SoMatrixTransform)
{
	m_axisModelCtrl->addChild(m_axisInitPosCtrl);
	m_root->addChild(m_axisModelCtrl);

	m_transformMat = CalcTransMat(m_theta);  // 计算齐次变换矩阵
	//?*********************************************************
	//?一般教材使用的是列矩阵，Open inventor使用的是行矩阵，故需要转置
	//? 计算时用教材中列矩阵方式计算，当使用矩阵控制模型姿态时记得转置
	m_pos->matrix.setValue(m_transformMat.transpose()); // 设置变换节点的初始值
	//?*********************************************************
}

AxisCoin3d::AxisCoin3d(const QString& path, const QVector<float>& dHParas)
	:AxisCoin3d(path, dHParas[0], dHParas[1], dHParas[2], dHParas[3],
		dHParas[4], dHParas[5])
{
}
#pragma endregion


#pragma region 齐次变换矩阵
//!根据theta的更新值计算齐次变换矩阵
auto AxisCoin3d::GetTransMatByUpdateTheta(float newTheta) -> decltype(m_transformMat)
{
	m_theta = newTheta;
	m_transformMat = CalcTransMat(m_theta);

	return m_transformMat;
}


SbMatrix AxisCoin3d::CalcTransMat(float theta)
{
	float alpha_rad = qDegreesToRadians(m_alpha);
	float theta_rad = qDegreesToRadians(theta);

	float cAlpha = qCos(alpha_rad);
	float sAlpha = qSin(alpha_rad);

	float cTheta = qCos(theta_rad);
	float sTheta = qSin(theta_rad);

	return SbMatrix
	(
		cTheta, -sTheta, 0.0f, m_a,
		sTheta * cAlpha, cTheta * cAlpha, -sAlpha, -sAlpha * m_d,
		sTheta * sAlpha, cTheta * sAlpha, cAlpha, cAlpha * m_d,
		0.0f, 0.0f, 0.0f, 1.0f
	);
}
#pragma endregion


void AxisCoin3d::SetTheta(float newTheta) { m_theta = newTheta; }


#pragma region 模型初始化
void AxisCoin3d::SetInitIVMat(const SbMatrix& initMat) const
{
	m_axisInitPosCtrl->matrix.setValue(initMat.transpose());
}

void AxisCoin3d::AddWRL3DModel(SoVRMLGroup* model)
{
	m_wrlModel = model;
	m_axisModelCtrl->addChild(m_wrlModel);
}
#pragma endregion
