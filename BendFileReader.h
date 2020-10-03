#pragma once

#include <QDialog>
#include "ui_BendFileReader.h"

class BendFileReader : public QDialog
{
	Q_OBJECT

public:
	BendFileReader(QWidget *parent = Q_NULLPTR);
	~BendFileReader();

private:
	Ui::BendFileReader ui;

private slots:
	void btnSureClicked();
};
