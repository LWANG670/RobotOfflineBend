#include "selectequ.h"
#include "ui_selectequ.h"


SelectEqu::SelectEqu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SelectEqu)
{
    ui->setupUi(this);

	SoQt::init(ui->widget_3);

	Coin_Root = new SoSeparator();
	Coin_Root->ref();

	// init robot
	robot = new Robot();
	Robot_Root = robot->getRobotRootNode();
	Coin_Root->addChild(Robot_Root);


	simulatorView = new SoQtExaminerViewer(ui->widget_3);
	simulatorView->setSceneGraph(Coin_Root);
	simulatorView->setBackgroundColor(SbColor(0.60, 0.77, 0.43));
	simulatorView->show();
	SoQt::show(ui->widget_3);
	//text

	//singals
	connect(ui->btnMachine, &QPushButton::clicked, this, &SelectEqu::btnMachineClick);
	connect(ui->btnRobot, &QPushButton::clicked, this, &SelectEqu::btnRobotClick);
	connect(ui->btnCenter, &QPushButton::clicked, this, &SelectEqu::btnCenterClick);
	connect(ui->btnFlip, &QPushButton::clicked, this, &SelectEqu::btnFlipClick);
	connect(ui->btnUp, &QPushButton::clicked, this, &SelectEqu::btnUpClick);
	connect(ui->btnDown, &QPushButton::clicked, this, &SelectEqu::btnDownClick);
	connect(ui->btnSelect,&QPushButton::clicked, this, &SelectEqu::btnSelectClick);
	

    //coinedRobot=new QtCoin3D_Robot(ui->widget_3);
    //coinedRobot->show();
}

SelectEqu::~SelectEqu()
{
    delete ui;
}

void SelectEqu::resizeWindow(int width, int height)
{
    this->setGeometry(0,0,width,height);
}

void SelectEqu::selectChange(QByteArray selectname)
{
	ui->labTitle->setText(QString::fromLocal8Bit(selectname+"选取"));
	ui->labType->setText(QString::fromLocal8Bit(selectname + "型号："));

	//读取XML文件
}

void SelectEqu::btnMachineClick()
{
	ui->labShow->setText(QString::fromLocal8Bit("折弯机"));
	selectChange("折弯机");
}



void SelectEqu::btnRobotClick()
{
	ui->labShow->setText(QString::fromLocal8Bit("机器人"));
	selectChange("机器人");
}

void SelectEqu::btnCenterClick()
{
	ui->labShow->setText(QString::fromLocal8Bit("对中台"));
	selectChange("对中台");
}

void SelectEqu::btnFlipClick()
{
	ui->labShow->setText(QString::fromLocal8Bit("翻面架"));
	selectChange("翻面架");
}

void SelectEqu::btnUpClick()
{
	ui->labShow->setText(QString::fromLocal8Bit("上料台"));
	selectChange("上料台");

}

void SelectEqu::btnDownClick()
{
	ui->labShow->setText(QString::fromLocal8Bit("下料台"));
	selectChange("下料台");
}

//数据库选取摁扭
void SelectEqu::btnSelectClick()
{
	ui->labShow->setText(QString::fromLocal8Bit("选取"));
}


