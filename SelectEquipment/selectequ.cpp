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

