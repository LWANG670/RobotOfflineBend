#ifndef GLOBALVARS_H
#define GLOBALVARS_H
#include <QString>
#include <QMap>


extern QString g_filePath;

struct MyPoint
{
	float px;
	float py;
	MyPoint(){}
	MyPoint(float x, float y)
	{
		px = x;
		py = y;
	}
};

struct BendSurfaceData
{
	QVector<MyPoint> OutLines;

	BendSurfaceData() {}
	BendSurfaceData(QVector<MyPoint> outlines)
	{
		OutLines = outlines;
	}
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

#endif // GLOBALVARS_H
