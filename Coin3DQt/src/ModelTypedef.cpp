#include "ModelTypedef.h"

LineData::LineData() = default;


LineData::LineData(const SbVec3f& sp, const SbVec3f& ep)
	:start(sp),end(ep)
{
}

NurbsSurfData::NurbsSurfData() = default;


NurbsSurfData::NurbsSurfData(int ucnt, int vcnt, const QVector<float>& uknots, const QVector<float>& vknots, QVector<SbVec3f>&& cp)
	:uNums(ucnt),vNums(vcnt),
	uKnots(uknots), vKnots(vknots),
	cps(cp)
{
}

NurbsSurfData::NurbsSurfData(int ucnt, int vcnt, QVector<float>&& uknots, QVector<float>&& vknots, QVector<SbVec3f>&& cp)
	:uNums(ucnt), vNums(vcnt),
	uKnots(uknots), vKnots(vknots),
	cps(cp)
{
}

NurbsCurveData::NurbsCurveData() = default;


NurbsCurveData::NurbsCurveData(const QVector<SbVec3f> cp, QVector<float> knot)
	:cps(cp), knots(knot)
{
}
