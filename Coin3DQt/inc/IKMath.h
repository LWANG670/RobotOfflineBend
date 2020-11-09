#pragma once
//?使用Ferrari法求解一元四次方程
#include <math.h>
#include <float.h>
#include <complex>
#include <array>
#include <Inventor/SbMatrix.h>
#include <Inventor/SbDPMatrix.h>

using Mat4x4d = SbDPMatrix;
/******************************************************************************\
对一个复数 x 开 n 次方
\******************************************************************************/
std::complex<double>  sqrtn(const std::complex<double>& x, double n);

/******************************************************************************\
使用费拉里法求解一元四次方程 a* x ^ 4 + b * x ^ 3 + c * x ^ 2 + d * x + e = 0
\ * *****************************************************************************/
std::array<std::complex<double>,4> 
Ferrari(std::complex<double> a
	, std::complex<double> b
	, std::complex<double> c
	, std::complex<double> d
	, std::complex<double> e);

Mat4x4d GetHomoTransMat4d(double _alpha, double _a, double _d, double _theta);

//SbMatrix GetHomoTransMat_SbMatrix(float alpha, float a, float d, float theta);


//Eigen::Matrix4d MatTR(const Eigen::Vector3d& distance, const Eigen::Vector3d& axis, double angle);
//
//Eigen::Matrix4d MatTR_Z(double distance, double angel);

