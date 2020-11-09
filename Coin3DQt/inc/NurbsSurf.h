#pragma once
#include <QVector>

#include <Inventor/nodes/SoSeparator.h>
#include <Inventor/SbVec3f.h>

#include "ModelTypedef.h"

class SoCoordinate3;
class SoNurbsSurface;
class SoMaterial;

// ���޲ü�,���Ƶ㲻��Ȩֵ��Nurbs����
class NurbsSurf
{
protected:
	SoSeparator* m_root;
	SoMaterial* material; // ���ʣ���Ҫ�ǿ����������ɫ
	SoCoordinate3* ctlPts; // ���Ƶ� �� ����Ȩ��

	// ��Ҫ���� u��v���Ƶ���� 
	// u��v Knot�ڵ�����
	SoNurbsSurface* surface; 
	int insertPos; //! ��¼�ü�����Ӧ�ò����λ��

public:
	NurbsSurf();
	NurbsSurf(const NurbsSurfData& data);
	virtual ~NurbsSurf();
public:
	inline SoSeparator* GetRoot() { return m_root; }
	//? ������Ӳü���������
	void AddProfileCurve(SoNode* node);

	// ����Nurbs����Ŀ��Ƶ�ͽڵ�����
	void SetCtlPtsKnot(const QVector<SbVec3f>& cps, int Ucount, int Vcount, const QVector<float>& uKnots, const QVector<float>& vKnots);
	void SetCtlPtsKnot(const QVector<SbVec3f>& cps, int Ucount, int Vcount, const QVector<float>& knots);
	void SetCtlPtsKnot(const NurbsSurfData& data);
};

