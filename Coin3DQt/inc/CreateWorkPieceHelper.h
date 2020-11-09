#pragma once
#include "ModelTypedef.h"

class SbMatrix;
class CreateWorkPieceHelper
{
public:
	// 通过两条平行的线创建平面
	static NurbsSurfData CreatePlaneSurf(const LineData& line1, const LineData& line2);
	// 根据轮廓点创建一次平面
	static NurbsSurfData CreatePlaneSurf(const QVector<SbVec3f>& points);

	// 通过母线、轴线、圆柱面转过的角度（度数） 母线两端是圆弧的起点
	static NurbsSurfData CreateCylinSurf(const LineData& generatrix, const LineData& axis, float angle);

	// 通过底面和厚度创建拉伸面 一次曲面
	static NurbsSurfData CreateStretchingSurf(const QVector<SbVec3f>& bottomPts, float thick);
private:
	// 绕过原点的任意旋转轴旋转angle  再平移off得到的变换矩阵 
	static SbMatrix FormRotateTransToMatrix(const SbVec3f& axis, float angle, const SbVec3f& off);

	// 获得一次直线的节点向量 numCps > 2
	static QVector<float> GetLineKnotsVec(int numCps);
};

