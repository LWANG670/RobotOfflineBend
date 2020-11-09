#pragma once
#include <QVector>

#include <Inventor/nodes/SoSeparator.h>
#include <Inventor/SbVec3f.h>

#include "ModelTypedef.h"

class SoCoordinate3;
class SoNurbsSurface;
class SoMaterial;

// 无无裁剪,控制点不带权值的Nurbs曲面
class NurbsSurf
{
protected:
	SoSeparator* m_root;
	SoMaterial* material; // 材质，主要是控制曲面的颜色
	SoCoordinate3* ctlPts; // 控制点 简化 不带权重

	// 需要设置 u、v控制点个数 
	// u、v Knot节点向量
	SoNurbsSurface* surface; 
	int insertPos; //! 记录裁剪曲线应该插入的位置

public:
	NurbsSurf();
	NurbsSurf(const NurbsSurfData& data);
	virtual ~NurbsSurf();
public:
	inline SoSeparator* GetRoot() { return m_root; }
	//? 用于添加裁剪轮廓曲线
	void AddProfileCurve(SoNode* node);

	// 设置Nurbs曲面的控制点和节点向量
	void SetCtlPtsKnot(const QVector<SbVec3f>& cps, int Ucount, int Vcount, const QVector<float>& uKnots, const QVector<float>& vKnots);
	void SetCtlPtsKnot(const QVector<SbVec3f>& cps, int Ucount, int Vcount, const QVector<float>& knots);
	void SetCtlPtsKnot(const NurbsSurfData& data);
};

