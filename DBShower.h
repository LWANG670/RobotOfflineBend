#pragma once

#include <QWidget>
#include "ui_DBShower.h"

class DBShower : public QWidget
{
	Q_OBJECT

public:
	DBShower(QWidget *parent = Q_NULLPTR);
	~DBShower();

private:
	Ui::DBShower ui;

	void initChooseWidget();

private slots:
	void btnMachineClick();
	void btnRobotClick();
	void btnCenterClick();
	void btnFlipClick();
	void btnUpClick();
	void btnDownClick();
};
