#include "DBShower.h"
#include "QPushButton"

DBShower::DBShower(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	//singals
	connect(ui.btnMachine, &QPushButton::clicked, this, &DBShower::btnMachineClick);
	connect(ui.btnRobot, &QPushButton::clicked, this, &DBShower::btnRobotClick);
	connect(ui.btnCenter, &QPushButton::clicked, this, &DBShower::btnCenterClick);
	connect(ui.btnFlip, &QPushButton::clicked, this, &DBShower::btnFlipClick);
	connect(ui.btnUp, &QPushButton::clicked, this, &DBShower::btnUpClick);
	connect(ui.btnDown, &QPushButton::clicked, this, &DBShower::btnDownClick);
}

DBShower::~DBShower()
{

}


void DBShower::btnMachineClick()
{
	ui.stackedWidget->setCurrentIndex(0);
	initChooseWidget();
	ui.btnMachine->setStyleSheet("background-color: rgb(255,235,205);border: 3px solid;border-radius: 20px;");
}

void DBShower::initChooseWidget()
{
	ui.btnMachine->setStyleSheet("background-color: rgb(246, 255, 231);border: 1px solid;border-radius: 20px;");
	ui.btnRobot->setStyleSheet("background-color: rgb(246, 255, 231);border: 1px solid;border-radius: 20px;");
	ui.btnCenter->setStyleSheet("background-color: rgb(246, 255, 231);border: 1px solid;border-radius: 20px;");
	ui.btnFlip->setStyleSheet("background-color: rgb(246, 255, 231);border: 1px solid;border-radius: 20px;");
	ui.btnUp->setStyleSheet("background-color: rgb(246, 255, 231);border: 1px solid;border-radius: 20px;");
	ui.btnDown->setStyleSheet("background-color: rgb(246, 255, 231);border: 1px solid;border-radius: 20px;");
}

void DBShower::btnRobotClick()
{
	ui.stackedWidget->setCurrentIndex(1);
	initChooseWidget();
	ui.btnRobot->setStyleSheet("background-color: rgb(255,235,205);border: 3px solid;border-radius: 20px;");
}

void DBShower::btnCenterClick()
{
	ui.stackedWidget->setCurrentIndex(2);
	initChooseWidget();
	ui.btnCenter->setStyleSheet("background-color: rgb(255,235,205);border: 3px solid;border-radius: 20px;");
}

void DBShower::btnFlipClick()
{
	ui.stackedWidget->setCurrentIndex(3);
	initChooseWidget();
	ui.btnFlip->setStyleSheet("background-color: rgb(255,235,205);border: 3px solid;border-radius: 20px;");
}

void DBShower::btnUpClick()
{
	ui.stackedWidget->setCurrentIndex(4);
	initChooseWidget();
	ui.btnUp->setStyleSheet("background-color: rgb(255,235,205);border: 3px solid;border-radius: 20px;");
}

void DBShower::btnDownClick()
{
	ui.stackedWidget->setCurrentIndex(5);
	initChooseWidget();
	ui.btnDown->setStyleSheet("background-color: rgb(255,235,205);border: 3px solid;border-radius: 20px;");
}