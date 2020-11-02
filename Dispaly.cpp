#include "Dispaly.h"
#include "globalvars.h"

Dispaly::Dispaly(QWidget* parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	//浮动ui设置
	ui.splitter->setCollapsible(0,false);//不可被折叠
	ui.splitter->setFrameShadow(QFrame::Raised);

	QList<int> width{ 100,600,100 };
	ui.splitter->setSizes(width);
	ui.splitter->setStretchFactor(0, 1);
	ui.splitter->setStretchFactor(1, 1);
	ui.splitter->setStretchFactor(2, 1);

	initTreeWeidgt();

	//connect(ui.pushButton, &QPushButton::clicked, [=]() {ui.widget->hide(); });

}

Dispaly::~Dispaly()
{

}

void Dispaly::initTreeWeidgt()
{
	ui.treeWidget->setColumnCount(1);//设置列数
	ui.treeWidget->setHeaderHidden(true);
	//ui.treeWidget->setHeaderLabel("折弯结构");//设置标题

	itemBends = new QTreeWidgetItem(ui.treeWidget, QStringList("折弯属性"));
	itemMachines = new QTreeWidgetItem(ui.treeWidget, QStringList("三维环境"));
	itemSettings = new QTreeWidgetItem(ui.treeWidget, QStringList("设置属性"));

	QTreeWidgetItem* item = new QTreeWidgetItem((QTreeWidget*)0, QStringList({"1","2","3"}));
	itemBends->addChild(item);
}



