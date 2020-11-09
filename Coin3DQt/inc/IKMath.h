#pragma once
//?ʹ��Ferrari�����һԪ�Ĵη���
#include <math.h>
#include <float.h>
#include <complex>
#include <array>
#include <Inventor/SbMatrix.h>
#include <Inventor/SbDPMatrix.h>

using Mat4x4d = SbDPMatrix;
/******************************************************************************\
��һ������ x �� n �η�
\******************************************************************************/
std::complex<double>  sqrtn(const std::complex<double>& x, double n);

/******************************************************************************\
ʹ�÷����﷨���һԪ�Ĵη��� a* x ^ 4 + b * x ^ 3 + c * x ^ 2 + d * x + e = 0
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

