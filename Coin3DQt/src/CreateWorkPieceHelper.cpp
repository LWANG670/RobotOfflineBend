#include "CreateWorkPieceHelper.h"
#include <Inventor/SbRotation.h>
#include <Inventor/SbMatrix.h>

// ���Ƕ�ת��Ϊ����
extern const float ANG2RAD;
//! ֱ�ߵĽڵ�����
const QVector<float> LINE_KNOTS_VECTOR{ 0, 0, 1, 1 };

//! �ֳ�40�ζ������� Բ�� 41���Ƶ�+3��
const QVector<float> ARC_KNOTS_VECTOR{ 0.00,0.00,0.00,0.05,0.05,0.10,0.10,0.15,0.15,0.20,0.20,\
										 0.25,0.25,0.30,0.30,0.35,0.35,0.40,0.40,0.45,0.45,0.50,\
										 0.50,0.55,0.55,0.60,0.60,0.65,0.65,0.70,0.70,0.75,0.75,\
										 0.80,0.80,0.85,0.85,0.90,0.90,0.95,0.95,1.00,1.00,1.00 };

NurbsSurfData CreateWorkPieceHelper::CreatePlaneSurf(const LineData& line1, const LineData& line2)
{
	return NurbsSurfData(2, 2, LINE_KNOTS_VECTOR, LINE_KNOTS_VECTOR, QVector<SbVec3f>{ line1.start, line1.end, line2.start, line2.end });
}

NurbsSurfData CreateWorkPieceHelper::CreatePlaneSurf(const QVector<SbVec3f>& points)
{	
	int knotCnt = points.size();
	//todo ==================������ ===========================
	//todo ����ȼ�����ͼ���ڲ���һ�㣬ͼ�εĶ�����õ��������߶���Ȼ��ͼ����
	//todo ����ֻ���Ǿ��� ȡ��һ�����㼴��
	QVector<SbVec3f> cps(knotCnt * 2, points.first());
	//todo ===================������===========================
	for (int i = 0; i < knotCnt; ++i)
	{
		cps[2 * i + 1] = points[i];
	}
	/*auto knotVec = GetLineKnotsVec(knotCnt);*/
	return NurbsSurfData(2, knotCnt, 
		QVector<float>{0.f, 0.f, 1.0f, 1.0f}, GetLineKnotsVec(knotCnt), std::move(cps));
}
	

NurbsSurfData CreateWorkPieceHelper::CreateCylinSurf(const LineData& generatrix, const LineData& axis, float angle)
{
	SbVec3f axisVec = axis.end - axis.start; // ��ת������
	SbVec3f genPtS = generatrix.start - axis.start; //? ĸ�����   ��ĸ���Ƶ�������ת�����axis.startΪԭ�������ϵ
	SbVec3f genPtE = generatrix.end - axis.start; //? ĸ���յ�

	float thetaAng = angle / 40; //! ��Բ����Ϊ40�ζ�������
	QVector<SbVec3f> cps(82); // 2 * 41
	for (int i = 0; i < 41; ++i) {
		SbMatrix mat = FormRotateTransToMatrix(axisVec, thetaAng * i, axis.start);//? ��ĸ���Ƶ�������ת�����axis.startΪԭ�������ϵ
		mat.multVecMatrix(genPtS, cps[2 * i]); //! ���� * �о���
		mat.multVecMatrix(genPtE, cps[2 * i + 1]);
	}
	return NurbsSurfData(2, 41, LINE_KNOTS_VECTOR, ARC_KNOTS_VECTOR, std::move(cps));
}

NurbsSurfData CreateWorkPieceHelper::CreateStretchingSurf(const QVector<SbVec3f>& bottomPts, float thick)
{
	QVector<SbVec3f> cps(bottomPts.size() * 2);
	for (int i = 0; i < bottomPts.size(); ++i)
	{
		cps[2 * i].setValue(bottomPts[i][0], bottomPts[i][1], thick);
		cps[2 * i + 1] = bottomPts[i];
	}

	return NurbsSurfData(2, bottomPts.size(), QVector<float>{0.0f, 0.0f, 1.0f, 1.0f},
		GetLineKnotsVec(bottomPts.size()), std::move(cps));
}
//========================================================================================== ˽�з���
SbMatrix CreateWorkPieceHelper::FormRotateTransToMatrix(const SbVec3f& axis, float angle, const SbVec3f& off)
{ 
	angle *= ANG2RAD; // ���Ƕ�ת��Ϊ����
 	SbMatrix mat; // ��������ֵ�Ż�NRV
	mat.setTransform(off, SbRotation(axis, angle), SbVec3f(1, 1, 1)); // ����TRS���þ���
	return mat; //! ���ص����о���
}

QVector<float> CreateWorkPieceHelper::GetLineKnotsVec(int numCps)
{
	QVector<float> knots(numCps + 2);
	knots.first() = 0.0f;
	knots.last() = 1.0f;
	knots[1] = 0.0f;
	knots[numCps] = 1.0f;

	float step = 1.0f / (numCps - 1); // ���Ƶ���Ŀ����2
	for (int i = 2; i < numCps; ++i)
	{
		knots[i] = knots[i - 1] + step;
	}
	return knots;
}

