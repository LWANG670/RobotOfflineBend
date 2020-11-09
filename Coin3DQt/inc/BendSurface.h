#pragma once
#include "NurbsSurf.h"

// ������ is nurbs����
class BendSurface : NurbsSurf
{
public:
	bool isTop;
	bool isVisited;
	bool isBended; // �Ƿ��Ѿ�����
	int bendNum; // �������

	float bendRadius; // ����뾶
	float bendAngle; // ����Ƕ�
	float length; // չ��ƽ��ĳ���
	float width;  // չ��ƽ��Ŀ��

	LineData axis; // ��ת��
	LineData generatrix; //ĸ��
	
	LineData bendLine; // �����߶�

public:
	BendSurface();
};

