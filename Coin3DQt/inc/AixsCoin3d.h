#pragma once
#include "BaseModelCoin3d.h"
#include <Inventor/SbMatrix.h>
#include <Inventor/VRMLnodes/SoVRMLGroup.h>
class AxisCoin3d :
	public BaseModelCoin3d
{
private:
	// DH参数
	float m_alpha;
	float m_a;
	float m_d;
	float m_theta;
	float m_minTheta;
	float m_maxTheta;
	SbMatrix m_transformMat;

	SoSeparator* m_axisModelCtrl; //? 用来控制wrl三维模型的的初始位置 主要作用使变换矩阵不影响其他轴的位置
	SoMatrixTransform* m_axisInitPosCtrl; //? 控制轴初始位置的变换矩阵
	SoVRMLGroup* m_wrlModel = nullptr; // 默认值为空.三维wrl模型

public:

	//!特殊函数//////////////////////////////////////////////////////////////////////////////////////////////////////
	explicit AxisCoin3d(const QString& path = "", float alpha = 0.0f, float a = 0.0f, float d = 0.0f, float theta = 0.0f,
		float minTheta = 0.0f, float maxTheta = 0.0f);

	explicit AxisCoin3d(const QString& path, const QVector<float>& dHParas);
	//!特殊函数//////////////////////////////////////////////////////////////////////////////////////////////////////


	//?计算轴的齐次变换矩阵********************************************************************************************
	// 直接返回变换矩阵
	inline auto GetTransMat() const { return m_transformMat; }
	// 更新theta参数和变换矩阵
	auto GetTransMatByUpdateTheta(float newTheta) -> decltype(m_transformMat);
private:
	SbMatrix CalcTransMat(float theta);


	//!关于theta的getter、setter------------------------------------------------------
public:
	inline auto GetTheta() const { return m_theta; }
	void SetTheta(float newTheta);

	inline auto GetMinTheta() const { return m_minTheta; }
	inline auto GetMaxTheta() const { return m_maxTheta; }

	inline auto GetAlpha() const { return m_alpha; }
	inline auto GetA() const { return m_a; }
	inline auto GetD() const { return m_d; }
	//!关于theta的getter、setter------------------------------------------------------


	//?设置三维wrl模型位置====================================================
	void AddWRL3DModel(SoVRMLGroup* model);
	void SetInitIVMat(const SbMatrix& initMat) const;
	//?设置三维wrl模型位置====================================================
};


