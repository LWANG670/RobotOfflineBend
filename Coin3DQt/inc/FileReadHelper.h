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
	// ��ȡ����������
	static QVector<SbVec3f> ReadPlanePoints(const QString& str);
	// ��ȡ��������Ϣ
	static BendLineData ReadBendline(const QString& str);
};

