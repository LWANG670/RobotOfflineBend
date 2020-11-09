#pragma once
#include "NurbsSurf.h"

#include <Inventor/nodes/SoSeparator.h>
class BasicPlaneEntity 
{
private:
	SoSeparator* m_root;
	NurbsSurf topSurf; // 顶面
	NurbsSurf btmSurf; // 底面
	NurbsSurf extSurf; // 顶面到底面的拉伸面

public:
	BasicPlaneEntity();
	BasicPlaneEntity(const QVector<SbVec3f>& planePts, float thick);

	~BasicPlaneEntity();
public:
	inline SoSeparator* GetRoot() const { return m_root; }

	void CreateSurfs(const QVector<SbVec3f>& planePts, float thick);
};
	   
