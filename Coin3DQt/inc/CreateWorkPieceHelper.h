#pragma once
#include "ModelTypedef.h"

class SbMatrix;
class CreateWorkPieceHelper
{
public:
	// ͨ������ƽ�е��ߴ���ƽ��
	static NurbsSurfData CreatePlaneSurf(const LineData& line1, const LineData& line2);
	// ���������㴴��һ��ƽ��
	static NurbsSurfData CreatePlaneSurf(const QVector<SbVec3f>& points);

	// ͨ��ĸ�ߡ����ߡ�Բ����ת���ĽǶȣ������� ĸ��������Բ�������
	static NurbsSurfData CreateCylinSurf(const LineData& generatrix, const LineData& axis, float angle);

	// ͨ������ͺ�ȴ��������� һ������
	static NurbsSurfData CreateStretchingSurf(const QVector<SbVec3f>& bottomPts, float thick);
private:
	// �ƹ�ԭ���������ת����תangle  ��ƽ��off�õ��ı任���� 
	static SbMatrix FormRotateTransToMatrix(const SbVec3f& axis, float angle, const SbVec3f& off);

	// ���һ��ֱ�ߵĽڵ����� numCps > 2
	static QVector<float> GetLineKnotsVec(int numCps);
};

