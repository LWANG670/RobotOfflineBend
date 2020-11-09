#include "IKSolverHe.h"

//! 将角度转化为弧度
const static DHparamType ANG2RAD = 0.017453292519943295769f; // pi/180
//! 将弧度转化为角度
const DHparamType RAD2ANG = 57.2957795130823208768f; //180/pi
IKSolverHe::IKSolverHe(const DHTableCol& _alpha, const DHTableCol& _a, const DHTableCol& _d)
	:alpha(_alpha), a(_a), d(_d)
{
	// 将角度化为弧度
	for (auto& al : alpha)
	{
		al *= ANG2RAD;
	}
	GetK1SquCoe();
	GetK2SquCoe();
	GetK3Coe();
	GetK4Coe();
}

VecList<VecList<DHparamType>> IKSolverHe::GetSolThetas(const Mat4x4d& t06)
{
	IKTheta123(t06[0][3], t06[1][3], t06[2][3]);
	IKTheta456(t06);
	return thetaSols;
}


std::array<DHparamType, 5> IKSolverHe::QuaEquCoe(DHparamType rSqu, DHparamType z)
{
	auto _2a1_1 = 1.0 / (2 * a[1]);
	auto k3SubSquCoe = KSquareCoe(k3Coe[0] * _2a1_1, k3Coe[1] * _2a1_1, (k3Coe[2] - rSqu) * _2a1_1);

	auto sAlpha1_1 = 1.0 / qSin(alpha[1]);
	auto k4SubSquCoe = KSquareCoe(k4Coe[0] * sAlpha1_1, k4Coe[1] * sAlpha1_1, (k4Coe[2] - z) * sAlpha1_1);
	
	decltype(k3SubSquCoe) quaCoe;
	for (int i = 0; i < 6; ++i)
	{
		quaCoe[i] = k3SubSquCoe[i] + k4SubSquCoe[i] - k1SquCoe[i] - k2SquCoe[i];
	}
	//?进行u = tan(theta/2)后超越方程的系数
	return std::array<DHparamType, 5> {
		quaCoe[0] - quaCoe[3] + quaCoe[5],
			2 * (-quaCoe[2] + quaCoe[4]),
			2 * (-quaCoe[0] + 2 * quaCoe[1] + quaCoe[5]),
			2 * (quaCoe[2] + quaCoe[4]),
			quaCoe[0] + quaCoe[3] + quaCoe[5]
	};
}

VecList<DHparamType> IKSolverHe::GetTheta3(std::array<std::complex<DHparamType>, 4>& roots,
	VecList<DHparamType>& c3, VecList<DHparamType>& s3)
{
	QVector<DHparamType> realSols;
	for (auto& root : roots)
	{
		if (qFuzzyIsNull(root.imag())) // 虚部为0
		{
			realSols.push_back(root.real());
		}
	}

	for (auto& sol : realSols)
	{
		auto temp = 1 / (1 + sol * sol);
		auto tx = 1 - sol * sol;
		auto ty = 2 * sol;
		c3.push_back(tx * temp);
		s3.push_back(ty * temp);
		sol = qAtan2(ty, tx) * RAD2ANG;
	}
	return realSols;
}

DHparamType IKSolverHe::GetSingleTheta2(DHparamType k1, DHparamType k2, DHparamType k3, DHparamType k4, 
	DHparamType rSqu, DHparamType z, DHparamType& c2, DHparamType& s2)
{
	auto tmp1 = (rSqu - k3) / (2 * a[1]);
	auto tmp2 = (z - k4) / sin(alpha[1]);

	auto tmp3 = 1 / (k1 * k1 + k2 * k2);
	c2 = (tmp1 * k1 - tmp2 * k2) * tmp3;
	s2 = (tmp1 * k2 + tmp2 * k1) * tmp3;
	return qAtan2(s2, c2) * RAD2ANG;
}

DHparamType IKSolverHe::GetSingelTheta1(DHparamType x, DHparamType y, DHparamType g1, DHparamType g2)
{
	//?某些机器人轴1{1}的Z轴不与{0}轴重合，比如库卡机器人KR16 第一个关节z轴向下为正 即alpha[0] = 180
	//?PIEPER解法alpha[0]=0, d1=0
	//?通过公式推导d1不影响求解结果， alpha[0]=180只需将y取反即可得到正确结果
	//if (!qFuzzyIsNull(alpha[0])) y = -y; 
	auto tmp = 1 / (g1 * g1 + g2 * g2);
	auto c1 = (x * g1 + y * g2) * tmp;
	auto s1 = (y * g1 - x * g2) * tmp;
	return qAtan2(s1, c1) * RAD2ANG;
}

void IKSolverHe::IKTheta123(DHparamType x, DHparamType y, DHparamType z)
{
	//!求出theta3*******************************************************************
	//!获得超越方程系数
	auto rSqu = x * x + y * y + z * z;
	auto abcde = QuaEquCoe(rSqu, z);
	auto roots = Ferrari(abcde[0], abcde[1], abcde[2], abcde[3], abcde[4]);//一元四次方程的四个根

	VecList<DHparamType>c3s; // cos(theta3)
	VecList<DHparamType>s3s; // sin(theta3)
	//? 获得theta3（角度值）顺便获得余弦、正弦值
	auto theta3s = GetTheta3(roots, c3s, s3s);
	
	//!求出theta2*******************************************************************
	//!根据theta3求出f1, f2, f3和k1, k2, k3, k4的值

	auto solsNum = theta3s.size(); // 解的个数
	VecList<DHparamType> f1s(solsNum);
	VecList<DHparamType> f2s(solsNum);
	VecList<DHparamType> f3s(solsNum);

	VecList<DHparamType> k1s(solsNum);
	VecList<DHparamType> k2s(solsNum);
	VecList<DHparamType> k3s(solsNum);
	VecList<DHparamType> k4s(solsNum);

	VecList<DHparamType> c2s(solsNum);
	VecList<DHparamType> s2s(solsNum);
	VecList<DHparamType> theta2s(solsNum);

	for (int i = 0; i < solsNum; ++i)
	{
		f1s[i] = Getf1Val(c3s[i], s3s[i]);
		f2s[i] = Getf2Val(c3s[i], s3s[i]);
		f3s[i] = Getf3Val(c3s[i], s3s[i]);

		k1s[i] = GetK1Val(c3s[i], s3s[i]);
		k2s[i] = GetK2Val(c3s[i], s3s[i]);
		k3s[i] = GetK3Val(c3s[i], s3s[i]);
		k4s[i] = GetK4Val(c3s[i], s3s[i]);

		theta2s[i] = GetSingleTheta2(k1s[i], k2s[i], k3s[i], k4s[i], rSqu,z, c2s[i], s2s[i]);
	}
	//!求出theta1*******************************************************************
	VecList<DHparamType> theta1s(solsNum);
	VecList<DHparamType> g1s(solsNum);
	VecList<DHparamType> g2s(solsNum);
	for (int i = 0; i < solsNum; ++i)
	{
		g1s[i] = Getg1Val(f1s[i], f2s[i], c2s[i], s2s[i]);
		g2s[i] = Getg2Val(f1s[i], f2s[i], f3s[i], c2s[i], s2s[i]);
		theta1s[i] = GetSingelTheta1(x, y, g1s[i], g2s[i]);
	}

	UpdateTheta123(theta3s, theta2s, theta1s);
}

void IKSolverHe::UpdateTheta123(const VecList<DHparamType>& theta3s, const VecList<DHparamType>& theta2s, const VecList<DHparamType>& theta1s)
{
	for (int i = 0; i < theta3s.size(); ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			thetaSols[i + 4 * j][0] = 1;
			thetaSols[i + 4 * j][1] = theta1s[i];
			thetaSols[i + 4 * j][2] = theta2s[i];
			thetaSols[i + 4 * j][3] = theta3s[i];
		}
	}
}


void IKSolverHe::IKTheta456(const Mat4x4d& t06)
{
	for (int i = 0; i < 4; ++i)
	{
		if (!qFuzzyIsNull(thetaSols[i][0])) // 为1时有解
		{
			Mat4x4d t04 = (HomoTransMat(0, 0, 0, qDegreesToRadians(thetaSols[i][1])) *
				HomoTransMat(1, qDegreesToRadians(thetaSols[i][2])) *
				HomoTransMat(2, qDegreesToRadians(thetaSols[i][3]))
				* HomoTransMat(3, 0));
			Mat4x4d t46 = t04.inverse() * t06;
			//?欧拉角ZYZ法求theta4、theta5、theta6
			//?获取β
			DHparamType r32 = t46[2][1];
			DHparamType r31 = t46[2][0];
			
			// sinβ的绝对值
			auto sinBetaAbs = qSqrt((r31 * r31) + (r32 * r32));
			if (!qFuzzyIsNull(sinBetaAbs))  //? sinβ ≠ 0时
			{
				DHparamType r13 = t46[0][2];
				DHparamType r23 = t46[1][2];
				DHparamType r33 = t46[2][2];
				//!sinβ为正数时
				thetaSols[i][4] = qAtan2(r23, r13)* RAD2ANG; //!α theta4
				//? 玄学负号=========================================================================
				thetaSols[i][5] = -qAtan2(sinBetaAbs, r33) * RAD2ANG; //!取(0,180)的一个解
				//? 玄学负号=========================================================================
				thetaSols[i][6] = qAtan2(r32, -r31) * RAD2ANG;

				//!sinβ为负数时
				thetaSols[i + 4][4] = qAtan2(-r23, -r13) * RAD2ANG;
				//? 玄学负号==========================================================================
				thetaSols[i + 4][5] = -qAtan2(-sinBetaAbs, r33) * RAD2ANG;
				//? 玄学负号==========================================================================
				thetaSols[i + 4][6] = qAtan2(-r32, r31) * RAD2ANG;
			}
			else
			{
				DHparamType r12 = t46[0][1];
				DHparamType r11 = t46[0][0];
				thetaSols[i][4] = 0.0;
				thetaSols[i][5] = 0.0;
				thetaSols[i][6] = qAtan2(-r12, r11) * RAD2ANG;

				thetaSols[i][4] = 180.0;
				thetaSols[i][5] = 0.0;
				thetaSols[i][6] = qAtan2(r12, -r11) * RAD2ANG;
			}
		}
	}
}



