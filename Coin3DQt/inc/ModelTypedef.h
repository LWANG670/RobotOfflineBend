#pragma once
#include <QVector>
#include <Inventor/SbVec3f.h>

struct LineData
{
	SbVec3f start;
	SbVec3f end;

	LineData();
	LineData(const SbVec3f& sp, const SbVec3f& ep);
};

//! nurbsԲ�����ߵ����ݽṹ
struct NurbsCurveData
{
	QVector<SbVec3f> cps;
	QVector<float> knots;

	NurbsCurveData();
	NurbsCurveData(const QVector<SbVec3f> cp, QVector<float> knot);
};

struct NurbsSurfData
{	
	int uNums = 0; //! u������Ƶ����
	int vNums = 0; //! v������Ƶ����

	QVector<SbVec3f> cps; //! ���Ƶ�
	QVector<float> uKnots;
	QVector<float> vKnots;

	NurbsSurfData();
	NurbsSurfData(int ucnt, int vcnt, const QVector<float>& uknots, const QVector<float>& vknots, QVector<SbVec3f>&& cp);
	NurbsSurfData(int ucnt, int vcnt, QVector<float>&& uknots, QVector<float>&& vknots, QVector<SbVec3f>&& cp);
};



//�Զ��幤����ʽ����==================================================================
struct BendLineData
{
	LineData line;
	float angle = 0.0f;
	float radius = -1.0f;
};
struct WorkPieceData
{
	float thick = -1.0f;
	QVector<QVector<SbVec3f>> planes;
	QVector<BendLineData> bendlines;
};