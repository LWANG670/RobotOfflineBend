#include "NurbsSurf.h"
#include <Inventor/nodes/SoCoordinate3.h>
#include <Inventor/nodes/SoNurbsSurface.h>
#include <Inventor/nodes/SoMaterial.h>


NurbsSurf::NurbsSurf()
	:m_root(new SoSeparator),
	material(new SoMaterial),
	ctlPts(new SoCoordinate3),
	surface(new SoNurbsSurface),
	insertPos(2)
{
	m_root->ref();
	m_root->addChild(material);
	m_root->addChild(ctlPts);
	m_root->addChild(surface);
}

NurbsSurf::NurbsSurf(const NurbsSurfData& data)
	:NurbsSurf()
{
	SetCtlPtsKnot(data);
}

NurbsSurf::~NurbsSurf()
{
	m_root->unref();
}



void NurbsSurf::AddProfileCurve(SoNode* node)
{
	m_root->insertChild(node, insertPos++);
}

void NurbsSurf::SetCtlPtsKnot(const QVector<SbVec3f>& cps, int Ucount, int Vcount, const QVector<float>& uKnots,const QVector<float>& vKnots)
{
	// 设置控制点
	ctlPts->point.setValues(0, cps.size(), &*cps.cbegin());
	surface->numUControlPoints = Ucount;
	surface->numVControlPoints = Vcount;

	// 设置节点向量
	surface->uKnotVector.setValues(0, uKnots.size(), &*uKnots.cbegin());
	surface->vKnotVector.setValues(0, vKnots.size(), &*vKnots.cbegin());
}


void NurbsSurf::SetCtlPtsKnot(const QVector<SbVec3f>& cps, int Ucount, int Vcount, const QVector<float>& knots)
{
	SetCtlPtsKnot(cps, Ucount, Vcount, knots, knots);
}

void NurbsSurf::SetCtlPtsKnot(const NurbsSurfData& data)
{
	SetCtlPtsKnot(data.cps, data.uNums, data.vNums, data.uKnots, data.vKnots);
}




