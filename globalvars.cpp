#include "globalvars.h"
#include <QMap>

QString g_filePath="./file/";

struct MyPoint
{
	float px;
	float py;
};

struct BendSurfaceData
{
	QVector<MyPoint> OutLines;
	//内部其他点
};

struct BendLineData
{
	MyPoint StartPoint;
	MyPoint EndPoint;
	float BendAngle;
	float BendRadius;
};

struct BendData
{
	float Thickeness;
	QMap<int, BendSurfaceData> Surfaces;
	QMap<int, BendLineData> Bendlines;
};
