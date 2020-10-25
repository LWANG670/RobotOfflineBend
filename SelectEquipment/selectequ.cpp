#include "selectequ.h"
#include "ui_selectequ.h"


SelectEqu::SelectEqu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SelectEqu)
{
    ui->setupUi(this);
	//��ʼ��ui����

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
	//1-����� 2-������ 3-����̨ 4-����� 5-����̨ 6-����̨

	connect(ui->btnMachineSelect,&QPushButton::clicked, this, &SelectEqu::btnMachineSelectClick);
	connect(ui->btnRobotSelect, &QPushButton::clicked, this, &SelectEqu::btnRobotSelectClick);
	connect(ui->btnCenterSelect, &QPushButton::clicked, this, &SelectEqu::btnCenterSelectClick);
	connect(ui->btnFlipSelect, &QPushButton::clicked, this, &SelectEqu::btnFlipSelectClick);
	connect(ui->btnUpSelect, &QPushButton::clicked, this, &SelectEqu::btnUpSelectClick);
	connect(ui->btnDownSelect, &QPushButton::clicked, this, &SelectEqu::btnDownSelectClick);

	
	

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

void SelectEqu::initChooseWidget()
{
	ui->btnMachine->setStyleSheet("background-color: rgb(246, 255, 231);border: 1px solid;border-radius: 20px;");
	ui->btnRobot->setStyleSheet("background-color: rgb(246, 255, 231);border: 1px solid;border-radius: 20px;");
	ui->btnCenter->setStyleSheet("background-color: rgb(246, 255, 231);border: 1px solid;border-radius: 20px;");
	ui->btnFlip->setStyleSheet("background-color: rgb(246, 255, 231);border: 1px solid;border-radius: 20px;");
	ui->btnUp->setStyleSheet("background-color: rgb(246, 255, 231);border: 1px solid;border-radius: 20px;");
	ui->btnDown->setStyleSheet("background-color: rgb(246, 255, 231);border: 1px solid;border-radius: 20px;");
}

void SelectEqu::selectChange(QByteArray selectname)
{

	//��ȡXML�ļ�
}

void SelectEqu::btnMachineClick()
{
	ui->stackedWidget->setCurrentIndex(0);
	initChooseWidget();
	ui->btnMachine->setStyleSheet("background-color: rgb(255,235,205);border: 3px solid;border-radius: 20px;");
	ui->labShow->setText(QString::fromLocal8Bit("�����"));
	selectChange("�����");
}

void SelectEqu::btnRobotClick()
{
	ui->stackedWidget->setCurrentIndex(1);
	initChooseWidget();
	ui->btnRobot->setStyleSheet("background-color: rgb(255,235,205);border: 3px solid;border-radius: 20px;");
	ui->labShow->setText(QString::fromLocal8Bit("������"));
	selectChange("������");
}

void SelectEqu::btnCenterClick()
{
	ui->stackedWidget->setCurrentIndex(2);
	initChooseWidget();
	ui->btnCenter->setStyleSheet("background-color: rgb(255,235,205);border: 3px solid;border-radius: 20px;");
	selectChange("����̨");
}

void SelectEqu::btnFlipClick()
{
	ui->stackedWidget->setCurrentIndex(3);
	initChooseWidget();
	ui->btnFlip->setStyleSheet("background-color: rgb(255,235,205);border: 3px solid;border-radius: 20px;");
	selectChange("�����");
}

void SelectEqu::btnUpClick()
{
	ui->stackedWidget->setCurrentIndex(4);
	initChooseWidget();
	ui->btnUp->setStyleSheet("background-color: rgb(255,235,205);border: 3px solid;border-radius: 20px;");
	selectChange("����̨");

}

void SelectEqu::btnDownClick()
{
	ui->stackedWidget->setCurrentIndex(5);
	initChooseWidget();
	ui->btnDown->setStyleSheet("background-color: rgb(255,235,205);border: 3px solid;border-radius: 20px;");
	selectChange("����̨");
}

//���ݿ�ѡȡ��Ť
void SelectEqu::btnMachineSelectClick()
{
	
}

void SelectEqu::btnRobotSelectClick()
{

}

void SelectEqu::btnCenterSelectClick()
{

}

void SelectEqu::btnFlipSelectClick()
{

}

void SelectEqu::btnUpSelectClick()
{

}

void SelectEqu::btnDownSelectClick()
{

}


