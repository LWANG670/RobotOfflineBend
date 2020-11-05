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
	int count=0;
	float thickeness;
	QMap<int, BendSurfaceData> surfaces;
	QMap<int, BendLineData> bendlines;
};



enum class WorkpieceType
{
	Machine, Robot, Center, Flip, Up, Down ,NONE
};

static QMap<int, QString>g_mapWorkpieces = { {0,"折弯机"}, {1,"机器人"},{2,"对中台"},{3,"翻面架"},{4,"上料台"},{5,"下料台"} };

struct WorkpieceBasicInfo
{
	WorkpieceType workpieceType= WorkpieceType::NONE;
	float xPos = 0;
	float yPos = 0;
	float zPos = 0;
	float xAngle = 0;
	float yAngle = 0;
	float zAngle = 0;
	QString workpieceName;
	QString workpiecePath;
};
//六个机器信息
struct WorkpieceMachine:WorkpieceBasicInfo
{
	QString data1 = "";
	QString data2 = "";
	QString data3 = "";
	QString data4 = "";
};

struct WorkpieceRobot:WorkpieceBasicInfo
{
	QString data1 = "";
	QString data2 = "";
	QString data3 = "";
	QString data4 = "";
};

struct WorkpieceCenter:WorkpieceBasicInfo
{
	QString data1 = "";
	QString data2 = "";
	QString data3 = "";
	QString data4 = "";
};

struct WorkpieceFlip:WorkpieceBasicInfo
{
	QString data1 = "";
	QString data2 = "";
	QString data3 = "";
	QString data4 = "";
};

struct WorkpieceUp:WorkpieceBasicInfo
{
	QString data1 = "";
	QString data2 = "";
	QString data3 = "";
	QString data4 = "";
};

struct WorkpieceDown:WorkpieceBasicInfo
{
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

extern QString g_fileName;
extern QString g_filePath;
extern TotalData g_totalData;


#endif // GLOBALVARS
