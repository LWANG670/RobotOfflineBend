#include "BasicPlaneEntity.h"

#include "CreateWorkPieceHelper.h"
#include "..\inc\BasicPlaneEntity.h"

BasicPlaneEntity::BasicPlaneEntity()
	:m_root(new SoSeparator)
{
	m_root->ref();
	m_root->addChild(topSurf.GetRoot());
	m_root->addChild(btmSurf.GetRoot());
	m_root->addChild(extSurf.GetRoot());
}

BasicPlaneEntity::BasicPlaneEntity(const QVector<SbVec3f>& planePts, float thick)
	:BasicPlaneEntity()
{
	CreateSurfs(planePts, thick);
}

BasicPlaneEntity::~BasicPlaneEntity()
{
	m_root->unref();
}

void BasicPlaneEntity::CreateSurfs(const QVector<SbVec3f>& planePts, float thick)
{
	int ptCnt = planePts.size();
	QVector<SbVec3f> topOutline(ptCnt + 1);
	for (int i = 0; i < ptCnt; ++i)
	{
		topOutline[i] = planePts[i];
	}
	topOutline.last() = planePts.first();
	extSurf.SetCtlPtsKnot(CreateWorkPieceHelper::CreateStretchingSurf(topOutline, thick));

	for (auto& pt : topOutline)
	{
		pt[2] = thick;
	}
	topSurf.SetCtlPtsKnot(CreateWorkPieceHelper::CreatePlaneSurf(topOutline));

	QVector<SbVec3f> btmOutline(ptCnt + 1);
	btmOutline.first() = planePts.first();
	for (int i = 0; i < ptCnt; ++i)
	{
		btmOutline[i + 1] = planePts[ptCnt -1 - i];
	}
	btmSurf.SetCtlPtsKnot(CreateWorkPieceHelper::CreatePlaneSurf(btmOutline));
}

