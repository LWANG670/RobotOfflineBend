#pragma once
#include "NurbsSurf.h"

// 折弯面 is nurbs曲面
class BendSurface : NurbsSurf
{
public:
	bool isTop;
	bool isVisited;
	bool isBended; // 是否已经折弯
	int bendNum; // 折弯序号

	float bendRadius; // 折弯半径
	float bendAngle; // 折弯角度
	float length; // 展开平面的长度
	float width;  // 展开平面的宽度

	LineData axis; // 旋转轴
	LineData generatrix; //母线
	
	LineData bendLine; // 折弯线段

public:
	BendSurface();
};

