#include "DBInsertDlg.h"
#include <QFileDialog>
#include "QSqlQuery"

DBInsertDlg::DBInsertDlg(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	connect(ui.comboBox, QOverload<int>::of(&QComboBox::currentIndexChanged), 
		[=](int index) 
		{
			ui.groupBox->setTitle(g_mapWorkpieces.value(index));
			ui.stackedWidget->setCurrentIndex(index);
		});
	ui.comboBox->setCurrentIndex(0);
	connect(ui.btnAccept, &QPushButton::clicked, this, &DBInsertDlg::btnAcceptClick);
	connect(ui.btnMachine, &QPushButton::clicked, this, &DBInsertDlg::btnMachineClick);

	
}

DBInsertDlg::~DBInsertDlg()
{

}

void DBInsertDlg::btnAcceptClick()
{
	//判断条件
	switch (ui.comboBox->currentIndex())
	{
	case static_cast<int>(WorkpieceType::Machine):
	{
		//添加数据类型判断条件
		QSqlQuery query;
		query.exec(QObject::tr("insert into machines values('PBA0003',1930,1400,2200,250,880,1250,'D:/program/RobotOfflineBend/DBsource/BendMachine/PBA0001装配体.IGS')"));
		break;
	}
		
	}
	this->accept();
}

QString DBInsertDlg::dlgFileChoose(QString& filename, WorkpieceType workpiecetype)
{
	QString filePath;
	QFileDialog* fd = new QFileDialog(this);
	fd->setWindowTitle("选取"+g_mapWorkpieces.value(static_cast<int>(workpiecetype)));
	QString filters = ("wrl files(*.wrl)");
	fd->setFilter(QDir::Files | QDir::NoSymLinks);//设置类型过滤器，只为文件格式
	fd->setNameFilter(filters); //设置过滤条件
	if (fd->exec() == QDialog::Accepted)
	{
		//这里需要一个销毁操作
		filePath = fd->selectedFiles()[0];
		int size = fd->directory().path().size() + 1;
		int path_size = filePath.size();
		filename = filePath.right(path_size - size).toLower();
		//确定是哪种格式的文件
	}
	delete fd;
	return filePath;
}

void DBInsertDlg::btnMachineClick()
{
	QString filename="NULL";
	QString filepath = dlgFileChoose(filename, WorkpieceType::Machine);
	ui.editMachineName->setText(filename);
	ui.editMachinePath->setText(filepath);
}

