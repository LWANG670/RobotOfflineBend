#include "PrintHelper.h"

namespace HeJianHelper {

	void PrintSbMatrix(const SbMatrix& sbMat)
	{
		for (size_t i = 0; i < 4; i++)
		{
			auto row = sbMat[i];
			qDebug() << row[0] << "," << row[1] << "," << row[2] << "," << row[3] << "\n";
		}
	}

	void PrintSbVec3(const SbVec3f& sbVe3)
	{
		qDebug() << sbVe3[0] << "," << sbVe3[1] << "," << sbVe3[2] << "\n";
	}


}