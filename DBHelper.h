#pragma once

#include <QWidget>
#include "ui_DBHelper.h"

class DBHelper : public QWidget
{
	Q_OBJECT

public:
	DBHelper(QWidget *parent = Q_NULLPTR);
	~DBHelper();

private:
	Ui::DBHelper ui;
};
