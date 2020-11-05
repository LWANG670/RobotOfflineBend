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
	//�ж�����
	switch (ui.comboBox->currentIndex())
	{
	case static_cast<int>(WorkpieceType::Machine):
	{
		//������������ж�����
		QSqlQuery query;
		query.exec(QObject::tr("insert into machines values('PBA0003',1930,1400,2200,250,880,1250,'D:/program/RobotOfflineBend/DBsource/BendMachine/PBA0001װ����.IGS')"));
		break;
	}
		
	}
	this->accept();
}

QString DBInsertDlg::dlgFileChoose(QString& filename, WorkpieceType workpiecetype)
{
	QString filePath;
	QFileDialog* fd = new QFileDialog(this);
	fd->setWindowTitle("ѡȡ"+g_mapWorkpieces.value(static_cast<int>(workpiecetype)));
	QString filters = ("wrl files(*.wrl)");
	fd->setFilter(QDir::Files | QDir::NoSymLinks);//�������͹�������ֻΪ�ļ���ʽ
	fd->setNameFilter(filters); //���ù�������
	if (fd->exec() == QDialog::Accepted)
	{
		//������Ҫһ�����ٲ���
		filePath = fd->selectedFiles()[0];
		int size = fd->directory().path().size() + 1;
		int path_size = filePath.size();
		filename = filePath.right(path_size - size).toLower();
		//ȷ�������ָ�ʽ���ļ�
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

