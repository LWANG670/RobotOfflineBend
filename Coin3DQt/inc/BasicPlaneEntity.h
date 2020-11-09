#pragma once
#include "NurbsSurf.h"

#include <Inventor/nodes/SoSeparator.h>
class BasicPlaneEntity 
{
private:
	SoSeparator* m_root;
	NurbsSurf topSurf; // ����
	NurbsSurf btmSurf; // ����
	NurbsSurf extSurf; // ���浽�����������

public:
	BasicPlaneEntity();
	BasicPlaneEntity(const QVector<SbVec3f>& planePts, float thick);

	~BasicPlaneEntity();
public:
	inline SoSeparator* GetRoot() const { return m_root; }

	void CreateSurfs(const QVector<SbVec3f>& planePts, float thick);
};
	   
