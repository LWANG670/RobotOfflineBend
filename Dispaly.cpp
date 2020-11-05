#include "Dispaly.h"
#include "globalvars.h"
#include "mainwindow.h"

Dispaly::Dispaly(QWidget* parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	//����ui����
	ui.splitter->setCollapsible(0, false);//���ɱ��۵�
	ui.splitter->setFrameShadow(QFrame::Raised);

	QList<int> width{ 100,600,100 };
	ui.splitter->setSizes(width);
	ui.splitter->setStretchFactor(0, 1);
	ui.splitter->setStretchFactor(1, 1);
	ui.splitter->setStretchFactor(2, 1);

	QList<int> width2{ 100,100 };
	ui.splitter_2->setSizes(width2);
	ui.splitter_2->setChildrenCollapsible(false);
	ui.splitter_2->setStretchFactor(0, 1);
	ui.splitter_2->setStretchFactor(1, 1);

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

	itemBends = new QTreeWidgetItem(ui.treeWidget, QStringList{ "���乤��" });
	itemMachines = new QTreeWidgetItem(ui.treeWidget, QStringList("��ά����"));
	itemSettings = new QTreeWidgetItem(ui.treeWidget, QStringList("��������"));

	itemBends->setIcon(0, QIcon(QPixmap(":/img/clip-plane.svg")));
	itemBends->setFont(0, QFont("����", 14));
	itemMachines->setIcon(0, QIcon(QPixmap(":/img/xde-assembly.svg")));
	itemMachines->setFont(0, itemBends->font(0));
	itemSettings->setIcon(0, QIcon(QPixmap(":/img/export.svg")));
	itemSettings->setFont(0, itemBends->font(0));


	//QTreeWidgetItem* item = new QTreeWidgetItem((QTreeWidget*)0, QStringList({ "1","2","3" }));
	//itemBends->addChild(item);
}

void Dispaly::refreshFileData()
{
	ui.labFileName->setText(g_fileName + "  ��Ϣ");
	//�������
	initBendDataShow();
}

//��ʼ��������ʾ
void Dispaly::initBendDataShow()
{
	BendData filebenddata = g_totalData.totalBendData;
	QTreeWidgetItem* item = new QTreeWidgetItem(itemBends, QStringList{ "������ȣ� " + QString::number(filebenddata.thickeness) + "mm" });
	QFont itemfont("����", 11);
	itemfont.setBold(true);
	item->setFont(0, QFont("����", 12));
	for (int i = 1; i <= filebenddata.count; i++)
	{
		QTreeWidgetItem* item = new QTreeWidgetItem(itemBends, QStringList{ "����-"+QString::number(i)});
		item->setIcon(0, QIcon(QPixmap(":/img/xde-simple-shape.svg")));
		item->setFont(0, itemfont);
		item->setTextColor(0, QColor("red"));
		QTreeWidgetItem* childitem1= new QTreeWidgetItem(item, QStringList{ "A=" + QString::number((static_cast<float>(std::round(std::abs(filebenddata.bendlines[i].bendAngle/std::_Pi*180)))))});
		QTreeWidgetItem* childitem2 = new QTreeWidgetItem(item, QStringList{ "R=" + QString::number(std::abs(filebenddata.bendlines[i].bendRadius)) });
	}
}
