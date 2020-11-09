#pragma  once

#include <QDebug>
#include <Inventor/SbMatrix.h>
#include <Inventor/SbVec3f.h>
namespace HeJianHelper
{
	// 打印4x4矩阵
	void PrintSbMatrix(const SbMatrix& sbMat);
	// 打印vec3f向量
	void PrintSbVec3(const SbVec3f& sbVe3);

}



