#pragma once
#include <QString>
#include <QVector>

#include <Inventor/SbVec3f.h>
#include <Inventor/VRMLnodes/SoVRMLGroup.h>

class WorkPieceData;
class BendLineData;

class FileReadHelper
{
private:
	static QString txtString;
	static QString fileName;
public:
	static SoVRMLGroup* LoadWrlModel(const QString& filename);

	static WorkPieceData ReadOriginWorkPieceTxt(const QString& filePath);

private: 
	// 读取矩形面数据
	static QVector<SbVec3f> ReadPlanePoints(const QString& str);
	// 读取折弯线信息
	static BendLineData ReadBendline(const QString& str);
};

