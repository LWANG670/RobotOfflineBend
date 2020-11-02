#ifndef GLOBALVARS_H
#define GLOBALVARS_H
#include <QString>
#include <QMap>

//设置中文
#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif

struct MyPoint
{
	float px;
	float py;
	MyPoint() {}
	MyPoint(float x, float y)
	{
		px = x;
		py = y;
	}
};

struct BendSurfaceData
{
	QVector<MyPoint> outLines;

	BendSurfaceData() {}
	BendSurfaceData(QVector<MyPoint> outlines)
	{
		outLines = outlines;
	}
	//内部其他点
};

struct BendLineData
{
	MyPoint startPoint;
	MyPoint endPoint;
	float bendAngle;
	float bendRadius;
};

struct BendData
{
	float thickeness;
	QMap<int, BendSurfaceData> surfaces;
	QMap<int, BendLineData> bendlines;
};

struct WorkpieceBasicInfo
{
	float xPos = 0;
	float yPos = 0;
	float zAngle = 0;
	QString workpieceName;
	QString workpiecePath;
	enum WorkpieceType
	{
		Machine, Robot, Center, Flip, Up, Down
	};
};

//六个机器信息
struct WorkpieceMachine
{
	WorkpieceBasicInfo basicInfo;
	QString data1 = "";
	QString data2 = "";
	QString data3 = "";
	QString data4 = "";
};

struct WorkpieceRobot
{
	WorkpieceBasicInfo basicInfo;
	QString data1 = "";
	QString data2 = "";
	QString data3 = "";
	QString data4 = "";
};

struct WorkpieceCenter
{
	WorkpieceBasicInfo basicInfo;
	QString data1 = "";
	QString data2 = "";
	QString data3 = "";
	QString data4 = "";
};

struct WorkpieceFlip
{
	WorkpieceBasicInfo basicInfo;
	QString data1 = "";
	QString data2 = "";
	QString data3 = "";
	QString data4 = "";
};

struct WorkpieceUp
{
	WorkpieceBasicInfo basicInfo;
	QString data1 = "";
	QString data2 = "";
	QString data3 = "";
	QString data4 = "";
};

struct WorkpieceDown
{
	WorkpieceBasicInfo basicInfo;
	QString data1 = "";
	QString data2 = "";
	QString data3 = "";
	QString data4 = "";
};

struct Workpieces
{
	WorkpieceMachine machine;
	WorkpieceRobot robot;
	WorkpieceFlip flip;
	WorkpieceCenter center;
	WorkpieceUp up;
	WorkpieceDown down;
};

struct TotalData
{
	BendData totalBendData;
	Workpieces totalWorkpiece;

};

extern QString g_filePath;
extern TotalData g_totalData;


#endif // GLOBALVARS
