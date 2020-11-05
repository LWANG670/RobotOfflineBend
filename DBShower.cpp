#include "DBShower.h"
#include "QPushButton"
#include <QMessageBox>
#include"globalvars.h"

DBShower::DBShower(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	initSqlite();
	initTableView();

	//singals
	connect(ui.btnMachine, &QPushButton::clicked, this, &DBShower::btnMachineClick);
	connect(ui.btnRobot, &QPushButton::clicked, this, &DBShower::btnRobotClick);
	connect(ui.btnCenter, &QPushButton::clicked, this, &DBShower::btnCenterClick);
	connect(ui.btnFlip, &QPushButton::clicked, this, &DBShower::btnFlipClick);
	connect(ui.btnUp, &QPushButton::clicked, this, &DBShower::btnUpClick);
	connect(ui.btnDown, &QPushButton::clicked, this, &DBShower::btnDownClick);
	connect(ui.btnInsert, &QPushButton::clicked, this, &DBShower::btnInsertClick);
	connect(ui.btnInsert, &QPushButton::clicked, this, &DBShower::btnDelClick);

	connect(pPiecesView, SIGNAL(clicked(QModelIndex)), this, SLOT(changePiecesItem(QModelIndex)));
	connect(pSelectPieceView, SIGNAL(clicked(QModelIndex)), this, SLOT(changeSelectItem(QModelIndex)));

	
}

DBShower::~DBShower()
{

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

void DBShower::initSqlite()
{
	QSqlDatabase database;
	if (QSqlDatabase::contains("qt_sql_default_connection"))
	{
		database = QSqlDatabase::database("qt_sql_default_connection");
	}
	else
	{
		QString dbname = QString("./data/workpiecedb.db");
		QFile file;
		db = QSqlDatabase::addDatabase("QSQLITE");
		if (!file.exists(dbname))
		{
			//������sqlite���ݵ�����
			
			//�������ݿ��ļ�������
			db.setDatabaseName(dbname);
			if (!db.open())
			{
				QMessageBox::warning(this, QString::fromLocal8Bit("�����ݿ����"), db.lastError().text());
				return;
			}
			//QSqlQuery query;
			//query.exec("create table pieces(name varchar(40) primary key,type varchar(40))");
			//query.exec(QObject::tr("insert into pieces values('PBA0001', '���������')"));
			//query.exec(QObject::tr("insert into pieces values('ER30', '������')"));
			//query.exec(QObject::tr("insert into pieces values('1005a', '�����')"));
			//query.exec(QObject::tr("insert into pieces values('dzp0810', '����̨')"));
			//query.exec("create table machines(name varchar(40) primary key,length int,width int,height int,upperheight float,lowerheight float,moldwidth float,filepath varchar(250),imagepath varchar(250),foreign key(name) references pieces(name))");
			////query.exec("create table cars (carid int primary key, name varchar(50), factoryid int, year int, foreign key(factoryid) references factory(id))");
			//query.exec(QObject::tr("insert into machines values('PBA0001',1930,1400,2200,250,880,1250,'D:/program/RobotOfflineBend/DBsource/BendMachine/PBA0001װ����.IGS','D:/program/RobotOfflineBend/DBsource/BendMachine/PBA0001.jpg')"));
			//query.exec("create table robots(name varchar(40) primary key,length int,width int,height int,filepath varchar(40),imagepath varchar(40),foreign key(name) references pieces(name))");
			//query.exec("create table centers(name varchar(40) primary key,length int,width int,height int,filepath varchar(40),imagepath varchar(40),foreign key(name) references pieces(name))");
		}
		else
		{
			db.setDatabaseName(dbname);
			if (!db.open())
			{
				QMessageBox::warning(this, QString::fromLocal8Bit("�����ݿ����"), db.lastError().text());
				return;
			}
		}
	}
}

void DBShower::initTableView()
{
	pPiecesModel = new QSqlTableModel(this);
	pPiecesModel->setTable("pieces");
	pPiecesModel->select();

	pMachineModel = new QSqlTableModel(this);
	pMachineModel->setTable("machines");
	pMachineModel->select();

	pRobotModel = new QSqlTableModel(this);
	pRobotModel->setTable("robots");
	pRobotModel->select();

	pCenterModel = new QSqlTableModel(this);
	pCenterModel->setTable("centers");
	pCenterModel->select();

	pPiecesView = ui.tableView;
	pPiecesView->setEditTriggers(QAbstractItemView::NoEditTriggers);
	pPiecesView->setSortingEnabled(true);
	pPiecesView->setSelectionBehavior(QAbstractItemView::SelectRows);
	pPiecesView->setSelectionMode(QAbstractItemView::SingleSelection);
	pPiecesView->setShowGrid(false);
	pPiecesView->setAlternatingRowColors(true);

	pSelectPieceView = ui.tableView_2;
	pSelectPieceView->setEditTriggers(QAbstractItemView::NoEditTriggers);
	pSelectPieceView->setSortingEnabled(true);
	pSelectPieceView->setSelectionBehavior(QAbstractItemView::SelectRows);
	pSelectPieceView->setSelectionMode(QAbstractItemView::SingleSelection);
	pSelectPieceView->setShowGrid(false);
	pSelectPieceView->setAlternatingRowColors(true);

	pPiecesView->setModel(pPiecesModel);
	pPiecesView->setColumnWidth(0, 150);
	pPiecesView->setColumnWidth(1, 150);
}

void DBShower::changePiecesItem(QModelIndex index)
{
	QSqlRecord record = pPiecesModel->record(index.row());
	piecetype = record.value("type").toString();
	if (piecetype == "�����")
	{
		btnMachineClick();
	}
	else if (piecetype == ("������"))
	{
		btnRobotClick();
	}
	else if (piecetype == ("����̨"))
	{
		btnCenterClick();
	}
	else if (piecetype == ("�����"))
	{
		btnFlipClick();
	}
	else if (piecetype == ("����̨"))
	{
		btnUpClick();
	}
	else if (piecetype == ("����̨"))
	{
		btnDownClick();
	}
	
}

void DBShower::changeSelectItem(QModelIndex index)
{
	record = pCurModel->record(index.row());
	QString name = record.value("name").toString();
	//��ʾ���ݿ��������
	if (piecetype == "�����")
	{
		ui.lineMachineHeight->setText(record.value("height").toString());
		ui.lineMachineLength->setText(record.value("length").toString());
		ui.lineMachineWidth->setText(record.value("width").toString());
		ui.lineMachineLowHeight->setText(record.value("lowerheight").toString());
		ui.lineMachineUpperHeight->setText(record.value("upperheight").toString());
		ui.lineMachineFile->setText(record.value("filepath").toString());
	}
	else if (piecetype == ("������"))
	{
		
	}
	else if (piecetype == ("����̨"))
	{
		
	}
	else if (piecetype == ("�����"))
	{
		
	}
	else if (piecetype == ("����̨"))
	{
		
	}
	else if (piecetype == ("����̨"))
	{
		
	}
}

void DBShower::btnMachineClick()
{
	pCurModel = pMachineModel;
	pSelectPieceView->setModel(pCurModel);
	pSelectPieceView->setColumnWidth(0, 100);
	pSelectPieceView->setColumnWidth(1, 100);
	pSelectPieceView->setColumnWidth(2, 100);
	pSelectPieceView->setColumnWidth(3, 100);
	pSelectPieceView->setColumnWidth(4, 100);
	pSelectPieceView->setColumnWidth(5, 100);
	pSelectPieceView->setColumnWidth(6, 100);
	pSelectPieceView->setColumnWidth(7, 400);
	pPiecesModel->setFilter("type='�����'");
	ui.stackedWidget->setCurrentIndex(0);

	initChooseWidget();
	ui.btnMachine->setStyleSheet("background-color: rgb(255,235,205);border: 3px solid;border-radius: 20px;");
}

void DBShower::btnRobotClick()
{
	pCurModel = pRobotModel;
	pSelectPieceView->setModel(pCurModel);
	pPiecesModel->setFilter("type='������'");
	ui.stackedWidget->setCurrentIndex(1);
	initChooseWidget();
	ui.btnRobot->setStyleSheet("background-color: rgb(255,235,205);border: 3px solid;border-radius: 20px;");
}

void DBShower::btnCenterClick()
{
	pCurModel = pCenterModel;
	pSelectPieceView->setModel(pCenterModel);
	pPiecesModel->setFilter("type='����̨'");
	ui.stackedWidget->setCurrentIndex(2);
	initChooseWidget();
	ui.btnCenter->setStyleSheet("background-color: rgb(255,235,205);border: 3px solid;border-radius: 20px;");
}

void DBShower::btnFlipClick()
{
	pPiecesModel->setFilter("type='�����'");
	ui.stackedWidget->setCurrentIndex(3);
	initChooseWidget();
	ui.btnFlip->setStyleSheet("background-color: rgb(255,235,205);border: 3px solid;border-radius: 20px;");
}

void DBShower::btnUpClick()
{
	pPiecesModel->setFilter("type='����̨'");
	ui.stackedWidget->setCurrentIndex(4);
	initChooseWidget();
	ui.btnUp->setStyleSheet("background-color: rgb(255,235,205);border: 3px solid;border-radius: 20px;");
}

void DBShower::btnDownClick()
{
	pPiecesModel->setFilter("type='����̨'");
	ui.stackedWidget->setCurrentIndex(5);
	initChooseWidget();
	ui.btnDown->setStyleSheet("background-color: rgb(255,235,205);border: 3px solid;border-radius: 20px;");
}

void DBShower::btnInsertClick()
{
	DBInsertDlg* insertDlg = new DBInsertDlg(this);
	if (insertDlg->exec() == QDialog::Accepted)
	{
		//pMachineModel->setTable("machines");
		//pMachineModel->select();
	}
	delete insertDlg;
}

void DBShower::btnDelClick() 
{
	

}