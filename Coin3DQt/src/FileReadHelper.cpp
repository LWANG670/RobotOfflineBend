#include "FileReadHelper.h"

#include <QMessageBox>
#include <QFile>
#include <QTextStream>

#include <Inventor/SoInput.h>

#include "ModelTypedef.h"

// ��ȡ����Ҫ����
const static QString FIND_thickness_STR("thickness");
const static QString FIND_face_STR("face");
const static QString FIND_faceEnd_STR(",;");

const static QString POINT_SPLIT(","); // ���ַ����ķָ���,��[pointStr1,pointStr2]�еĶ��š�,��
const static QString POINT_INNER_SPLIT(" "); // ���ַ��������ķָ���,��[x y z]�еĿո�

// ��ȡ��������Ҫ����
const static QString FIND_bendline_STR("bendline");
const static QString FIND_bendangle_STR("bendangle");
const static QString FIND_bendradius_STR("bendradius");
const static QString BEND_LINE_INNER(";");

const static float RAD2ANG = 57.2957795130823208768f; //180/pi

SoVRMLGroup* FileReadHelper::LoadWrlModel(const QString& filename)
{
	if (!(filename.endsWith(".wrl") || filename.endsWith(".iv") || filename.endsWith(".wrl.gz") || filename.endsWith(".wrz")))
	{
		QMessageBox::critical(nullptr, "Error", "File format not supported.");
		return nullptr;
	}

	SoInput modelInputer;
	if (!modelInputer.openFile(filename.toStdString().c_str(), true))
	{
		QMessageBox::critical(nullptr, "Error", "File not found");
		return nullptr;
	}

	auto model = SoDB::readAllVRML(&modelInputer);
	modelInputer.closeFile();

	//! �ж�
	if (nullptr == model)
	{
		QMessageBox::critical(nullptr, "Error", "Error reading file.");
		return nullptr;
	}
	return model;
}

WorkPieceData FileReadHelper::ReadOriginWorkPieceTxt(const QString& filePath)
{
	if (filePath.isEmpty())
	{
		QMessageBox::critical(nullptr, "Error", "The file path does not exist");
		return WorkPieceData();
	}
	QFile file(filePath);

	if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
	{
		QMessageBox::critical(nullptr, "Error", "File open error");
		return WorkPieceData();
	}

	WorkPieceData wp;
	while (!file.atEnd())
	{
		QByteArray line = file.readLine();
		QString str(line);
		
		// ��ȡ��
		if (str.startsWith(FIND_face_STR))
		{
			int starIdx = FIND_face_STR.size();
			int strLen = str.indexOf(FIND_faceEnd_STR) - 1 - starIdx;
			wp.planes.push_back(ReadPlanePoints(str.mid(starIdx, strLen)));
			continue;
		}
		// ��ȡ������
		if (str.startsWith(FIND_bendline_STR))
		{
			int startIdx = FIND_bendline_STR.size();
			wp.bendlines.push_back(ReadBendline(str.mid(startIdx)));
		}

		// ��ȡ���
		if (str.startsWith(FIND_thickness_STR))
		{
			wp.thick = (str.mid(FIND_bendangle_STR.size() + 1).toFloat());
			continue;
		}
	}
	file.close();
	return wp;
}

QVector<SbVec3f> FileReadHelper::ReadPlanePoints(const QString& str)
{
	auto points = str.split(POINT_SPLIT); // �ָ��������� [x1 y1]��[x2 y2]����
	QVector<SbVec3f> pts(points.size());
	for (int i = 0; i < pts.size(); ++i)
	{
		auto pt = points[i].split(POINT_INNER_SPLIT); // �ָ����  x y
		pts[i].setValue(pt[0].toFloat(), pt[1].toFloat(), 0.0f);
	}
	return pts;
}

BendLineData FileReadHelper::ReadBendline(const QString& str)
{
	// ���Ϊ �ߡ��Ƕȡ��뾶�����ַ���
	auto infos = str.split(BEND_LINE_INNER);

	// �����ַ���ת��Ϊ����
	auto pointsStr = infos[0].split(POINT_SPLIT);
	LineData line;
	auto pt1Str = pointsStr[0].split(POINT_INNER_SPLIT); // ����ַ���
	line.start.setValue(pt1Str[0].toFloat(), pt1Str[1].toFloat(), 0.f);
	auto pt2Str = pointsStr[1].split(POINT_INNER_SPLIT); // �յ��ַ���
	line.end.setValue(pt2Str[0].toFloat(), pt2Str[1].toFloat(), 0.f);


	float angle = infos[1].mid(FIND_bendangle_STR.size()).toFloat() * RAD2ANG;
	float radius = infos[2].mid(FIND_bendradius_STR.size()).toFloat();

	BendLineData bl;
	bl.angle = angle;
	bl.radius = radius;
	bl.line = line;
	return bl;
}
