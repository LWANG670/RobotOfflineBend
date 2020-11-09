#pragma once
#include <QVector>
#include <qmath.h>
#include <array>
#include <complex>
#include "IKMath.h"
using DHparamType = double;
using DHTableCol = std::array<DHparamType, 6>;

template<typename T>
using VecList = QVector<T>;

class IKSolverHe
{
private:
	DHTableCol alpha; //? 弧度值
	DHTableCol a;
	DHTableCol d; //? 使用m_d[i] 时下标减一

	std::array<DHparamType, 6> k1SquCoe; //! k1^2的系数
	std::array<DHparamType, 6> k2SquCoe; //! k2^2的系数


	std::array<DHparamType, 3> k1Coe; //! k1的系数
	std::array<DHparamType, 3> k2Coe; //! k2的系数
	std::array<DHparamType, 3> k3Coe; //! k3的系数
	std::array<DHparamType, 3> k4Coe; //! k4的系数

	//? 16行七列 每一行第一个数为0表示该组解无效，后6个数分别表示theta1、theta2...theta6
	VecList<VecList<DHparamType>>  thetaSols{ 8, VecList<DHparamType>(7, 0) };
public:
	explicit IKSolverHe(const DHTableCol& _alpha, const DHTableCol& _a, const DHTableCol& _d);

	VecList<VecList<DHparamType>> GetSolThetas(const Mat4x4d& t06);
private:
#pragma region 初始化

	//?  返回(ac3+bs3+c)^2各项系数
//? (a^2)c3^2+(b^2)s3^2+(2ab)c3s3+(2ac)c3+(2bc)s3+(c^2)
	inline auto	 KSquareCoe(DHparamType a0, DHparamType b, DHparamType c)
	{
		return std::array<DHparamType, 6>
		{
			a0* a0, b* b,
				2 * a0 * b,
				2 * a0 * c, 2 * b * c,
				c* c
		};
	}

	//! k1^2的系数
	//!  k1 = f1 = (a3)c3 + (d4sα3)s3 + a2
	inline auto GetK1SquCoe()
	{
		this->k1Coe = { a[3], d[3] * qSin(alpha[3]), a[2] };
		this->k1SquCoe = KSquareCoe(k1Coe[0], k1Coe[1], k1Coe[2]);
	}
	//! k2^2的系数
	//! k2 = -f2 = -{ (a3cα2)s3 - (d4sα3cα2)c3 (- d4sα2cα3-d3sα2) }
	inline auto GetK2SquCoe()
	{
		this->k2Coe = {
			d[3] * qSin(alpha[3] * qCos(alpha[2])),
			a[3] * qCos(alpha[2]),
			-qSin(alpha[2]) * (d[3] * qCos(alpha[3]) + d[2])
		};
		this->k2SquCoe = KSquareCoe(k2Coe[0], k2Coe[1], k2Coe[2]);
	}

	inline auto GetK3Coe()
	{
		this->k3Coe = {
			2 * (a[2] * a[3] - d[1] * d[3] * qSin(alpha[3]) * qSin(alpha[2])),

				2 * (a[2] * d[3] * qSin(alpha[3]) + d[1] * a[3] * qSin(alpha[2])),

				a[3] * a[3] + d[3] * d[3] + d[2] * d[2] + a[2] * a[2] + 2 * d[3] * d[2] * qCos(alpha[3])
				+ a[1] * a[1] + d[1] * d[1]
				+ 2 * d[1] * qCos(alpha[2]) * (d[3] * qCos(alpha[3]) + d[2])
		};
	}

	inline auto GetK4Coe()
	{
		this->k4Coe = {
			-qCos(alpha[1]) * d[3] * qSin(alpha[3]) * qSin(alpha[2]),
				qCos(alpha[1]) * a[3] * qSin(alpha[2]),
				qCos(alpha[1]) * (d[1] + qCos(alpha[2]) * (d[3] * qCos(alpha[3]) + d[2]))
		};
	}

	//? 返回一元四次方程系数abcde
	std::array<DHparamType, 5> QuaEquCoe(DHparamType rSqu, DHparamType z);

	//? 返回一元四次方程的实数解--即theta3
	VecList<DHparamType> GetTheta3(std::array<std::complex<DHparamType>, 4>& roots,
		VecList<DHparamType>& c3, VecList<DHparamType>& s3);
#pragma endregion


#pragma region 根据theta3求出k1,k2,k3,k4和f1,f2,f3
	//!k1
	inline auto GetK1Val(DHparamType c3, DHparamType s3)
	{
		return k1Coe[0] * c3 + k1Coe[1] * s3 + k1Coe[2];
	}
	//!f1
	inline auto Getf1Val(DHparamType c3, DHparamType s3)
	{
		return GetK1Val(c3, s3);
	}
	//!k2
	inline auto GetK2Val(DHparamType c3, DHparamType s3)
	{
		return k2Coe[0] * c3 + k2Coe[1] * s3 + k2Coe[2];
	}
	//!f2
	inline auto	Getf2Val(DHparamType c3, DHparamType s3)
	{
		return -GetK2Val(c3, s3);
	}
	//!k3
	inline auto GetK3Val(DHparamType c3, DHparamType s3)
	{
		return k3Coe[0] * c3 + k3Coe[1] * s3 + k3Coe[2];
	}
	//!f3
	inline auto Getf3Val(DHparamType c3, DHparamType s3)
	{
		return a[3] * qSin(alpha[2]) * s3 - d[3] * qSin(alpha[3]) * qSin(alpha[2]) * c3
			+ d[3] * qCos(alpha[2]) * qCos(alpha[3]) + d[2] * qCos(alpha[2]);
	}
	//!k4
	inline auto GetK4Val(DHparamType c3, DHparamType s3)
	{
		return k4Coe[0] * c3 + k4Coe[1] * s3 + k4Coe[2];
	}
#pragma endregion


	DHparamType GetSingleTheta2(DHparamType k1, DHparamType k2, DHparamType k3, DHparamType k4,
		DHparamType rSqu, DHparamType z, DHparamType& c2, DHparamType& s2);

#pragma region 根据theta3求出g1, g2
	//!g1
	inline auto Getg1Val(DHparamType f1, DHparamType f2, DHparamType c2, DHparamType s2)
	{
		return c2 * f1 - s2 * f2 + a[1];
	}
	//!g2
	inline auto Getg2Val(DHparamType f1, DHparamType f2, DHparamType f3, DHparamType c2, DHparamType s2)
	{
		return qCos(alpha[1]) * (s2 * f1 + c2 * f2) - qSin(alpha[1]) * (f3 - d[1]);
	}
#pragma endregion

	DHparamType GetSingelTheta1(DHparamType x, DHparamType y, DHparamType g1, DHparamType g2);

	void IKTheta123(DHparamType x, DHparamType y, DHparamType z);

	//! 将解得的theta123放入8x7数组中
	void UpdateTheta123(const VecList<DHparamType>& theta3s,const VecList<DHparamType>& theta2s, const VecList<DHparamType>& theta1s);


	inline Mat4x4d HomoTransMat(DHparamType _alpha_rad, DHparamType _a, DHparamType _d, DHparamType _theta_rad)
	{
		double cAlpha = cos(_alpha_rad);
		double sAlpha = sin(_alpha_rad);
		double cTheta = cos(_theta_rad);
		double sTheta = sin(_theta_rad);
		return Mat4x4d{
		cTheta, -sTheta, 0, _a,
		sTheta * cAlpha, cTheta * cAlpha, -sAlpha, -sAlpha * _d,
		sTheta * sAlpha, cTheta * sAlpha, cAlpha, cAlpha * _d,
		0, 0, 0, 1
		};
	}
	inline Mat4x4d HomoTransMat(int index, DHparamType theta)
	{
		return HomoTransMat(alpha[index], a[index], d[index], theta);
	}
	void IKTheta456(const Mat4x4d& t06);
};

