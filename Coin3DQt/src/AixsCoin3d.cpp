#include "AixsCoin3d.h"

#include <QVector>
#include <qmath.h>

#pragma region ���⺯��
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

	m_transformMat = CalcTransMat(m_theta);  // ������α任����
	//?*********************************************************
	//?һ��̲�ʹ�õ����о���Open inventorʹ�õ����о��󣬹���Ҫת��
	//? ����ʱ�ý̲����о���ʽ���㣬��ʹ�þ������ģ����̬ʱ�ǵ�ת��
	m_pos->matrix.setValue(m_transformMat.transpose()); // ���ñ任�ڵ�ĳ�ʼֵ
	//?*********************************************************
}

AxisCoin3d::AxisCoin3d(const QString& path, const QVector<float>& dHParas)
	:AxisCoin3d(path, dHParas[0], dHParas[1], dHParas[2], dHParas[3],
		dHParas[4], dHParas[5])
{
}
#pragma endregion


#pragma region ��α任����
//!����theta�ĸ���ֵ������α任����
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


#pragma region ģ�ͳ�ʼ��
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
