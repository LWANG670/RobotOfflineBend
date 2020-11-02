#include "Dispaly.h"
#include "globalvars.h"

Dispaly::Dispaly(QWidget* parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	//����ui����
	ui.splitter->setCollapsible(0,false);//���ɱ��۵�
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
	ui.treeWidget->setColumnCount(1);//��������
	ui.treeWidget->setHeaderHidden(true);
	//ui.treeWidget->setHeaderLabel("����ṹ");//���ñ���

	itemBends = new QTreeWidgetItem(ui.treeWidget, QStringList("��������"));
	itemMachines = new QTreeWidgetItem(ui.treeWidget, QStringList("��ά����"));
	itemSettings = new QTreeWidgetItem(ui.treeWidget, QStringList("��������"));

	QTreeWidgetItem* item = new QTreeWidgetItem((QTreeWidget*)0, QStringList({"1","2","3"}));
	itemBends->addChild(item);
}



