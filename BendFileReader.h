#pragma once

#include <QDialog>
#include "ui_BendFileReader.h"
#include "globalvars.h"

class BendFileReader : public QDialog
{
	Q_OBJECT

public:
	BendFileReader(QWidget *parent = Q_NULLPTR);
	~BendFileReader();

	BendData getBendData();

private:
	Ui::BendFileReader ui;

	//˽�к���
	void txtReader(QString filepath);
	void readSurfaceData(QString surfacedata);
	void readBendLineData(QString bendlinedata);

	//˽������
	BendData bendData;

private slots:
	void btnSureClicked();
};
