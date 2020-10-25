#ifndef GLOBALVARS_H
#define GLOBALVARS_H
#include <QString>
#include <QMap>


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

struct Workpiecepos
{
	float xPos=0;
	float yPos=0;
	float zAngle=0;
};

//保存设置好的数据信息
struct WorkpieceData
{
	QString workpeicename[6];
	Workpiecepos workpeicepos[6];
};


extern QString g_filePath;
extern WorkpieceData g_workpiecedata;

#endif // GLOBALVARS_H
