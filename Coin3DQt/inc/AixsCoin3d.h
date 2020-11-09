#pragma once
#include "BaseModelCoin3d.h"
#include <Inventor/SbMatrix.h>
#include <Inventor/VRMLnodes/SoVRMLGroup.h>
class AxisCoin3d :
	public BaseModelCoin3d
{
private:
	// DH����
	float m_alpha;
	float m_a;
	float m_d;
	float m_theta;
	float m_minTheta;
	float m_maxTheta;
	SbMatrix m_transformMat;

	SoSeparator* m_axisModelCtrl; //? ��������wrl��άģ�͵ĵĳ�ʼλ�� ��Ҫ����ʹ�任����Ӱ���������λ��
	SoMatrixTransform* m_axisInitPosCtrl; //? �������ʼλ�õı任����
	SoVRMLGroup* m_wrlModel = nullptr; // Ĭ��ֵΪ��.��άwrlģ��

public:

	//!���⺯��//////////////////////////////////////////////////////////////////////////////////////////////////////
	explicit AxisCoin3d(const QString& path = "", float alpha = 0.0f, float a = 0.0f, float d = 0.0f, float theta = 0.0f,
		float minTheta = 0.0f, float maxTheta = 0.0f);

	explicit AxisCoin3d(const QString& path, const QVector<float>& dHParas);
	//!���⺯��//////////////////////////////////////////////////////////////////////////////////////////////////////


	//?���������α任����********************************************************************************************
	// ֱ�ӷ��ر任����
	inline auto GetTransMat() const { return m_transformMat; }
	// ����theta�����ͱ任����
	auto GetTransMatByUpdateTheta(float newTheta) -> decltype(m_transformMat);
private:
	SbMatrix CalcTransMat(float theta);


	//!����theta��getter��setter------------------------------------------------------
public:
	inline auto GetTheta() const { return m_theta; }
	void SetTheta(float newTheta);

	inline auto GetMinTheta() const { return m_minTheta; }
	inline auto GetMaxTheta() const { return m_maxTheta; }

	inline auto GetAlpha() const { return m_alpha; }
	inline auto GetA() const { return m_a; }
	inline auto GetD() const { return m_d; }
	//!����theta��getter��setter------------------------------------------------------


	//?������άwrlģ��λ��====================================================
	void AddWRL3DModel(SoVRMLGroup* model);
	void SetInitIVMat(const SbMatrix& initMat) const;
	//?������άwrlģ��λ��====================================================
};


