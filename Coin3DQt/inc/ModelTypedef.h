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

//! nurbs圆弧曲线的数据结构
struct NurbsCurveData
{
	QVector<SbVec3f> cps;
	QVector<float> knots;

	NurbsCurveData();
	NurbsCurveData(const QVector<SbVec3f> cp, QVector<float> knot);
};

struct NurbsSurfData
{	
	int uNums = 0; //! u方向控制点个数
	int vNums = 0; //! v方向控制点个数

	QVector<SbVec3f> cps; //! 控制点
	QVector<float> uKnots;
	QVector<float> vKnots;

	NurbsSurfData();
	NurbsSurfData(int ucnt, int vcnt, const QVector<float>& uknots, const QVector<float>& vknots, QVector<SbVec3f>&& cp);
	NurbsSurfData(int ucnt, int vcnt, QVector<float>&& uknots, QVector<float>&& vknots, QVector<SbVec3f>&& cp);
};



//自定义工件格式数据==================================================================
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