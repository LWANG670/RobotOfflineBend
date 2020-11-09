#include "CreateWorkPieceHelper.h"
#include <Inventor/SbRotation.h>
#include <Inventor/SbMatrix.h>

// 将角度转化为弧度
extern const float ANG2RAD;
//! 直线的节点向量
const QVector<float> LINE_KNOTS_VECTOR{ 0, 0, 1, 1 };

//! 分成40段二次曲线 圆弧 41控制点+3阶
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
	//todo ==================有问题 ===========================
	//todo 问题等价于在图形内部找一点，图形的顶点与该点相连的线段仍然在图形内
	//todo 现在只考虑矩形 取第一个顶点即可
	QVector<SbVec3f> cps(knotCnt * 2, points.first());
	//todo ===================有问题===========================
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
	SbVec3f axisVec = axis.end - axis.start; // 旋转轴向量
	SbVec3f genPtS = generatrix.start - axis.start; //? 母线起点   将母线移到了以旋转轴起点axis.start为原点的坐标系
	SbVec3f genPtE = generatrix.end - axis.start; //? 母线终点

	float thetaAng = angle / 40; //! 将圆弧分为40段二次曲线
	QVector<SbVec3f> cps(82); // 2 * 41
	for (int i = 0; i < 41; ++i) {
		SbMatrix mat = FormRotateTransToMatrix(axisVec, thetaAng * i, axis.start);//? 将母线移到了以旋转轴起点axis.start为原点的坐标系
		mat.multVecMatrix(genPtS, cps[2 * i]); //! 向量 * 行矩阵
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
//========================================================================================== 私有方法
SbMatrix CreateWorkPieceHelper::FormRotateTransToMatrix(const SbVec3f& axis, float angle, const SbVec3f& off)
{ 
	angle *= ANG2RAD; // 将角度转化为弧度
 	SbMatrix mat; // 具名返回值优化NRV
	mat.setTransform(off, SbRotation(axis, angle), SbVec3f(1, 1, 1)); // 根据TRS设置矩阵
	return mat; //! 返回的是行矩阵
}

QVector<float> CreateWorkPieceHelper::GetLineKnotsVec(int numCps)
{
	QVector<float> knots(numCps + 2);
	knots.first() = 0.0f;
	knots.last() = 1.0f;
	knots[1] = 0.0f;
	knots[numCps] = 1.0f;

	float step = 1.0f / (numCps - 1); // 控制点数目大于2
	for (int i = 2; i < numCps; ++i)
	{
		knots[i] = knots[i - 1] + step;
	}
	return knots;
}

