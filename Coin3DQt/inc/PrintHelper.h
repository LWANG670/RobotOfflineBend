#pragma  once

#include <QDebug>
#include <Inventor/SbMatrix.h>
#include <Inventor/SbVec3f.h>
namespace HeJianHelper
{
	// ��ӡ4x4����
	void PrintSbMatrix(const SbMatrix& sbMat);
	// ��ӡvec3f����
	void PrintSbVec3(const SbVec3f& sbVe3);

}



