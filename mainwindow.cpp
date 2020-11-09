#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMouseEvent>
#include "BendFileReader.h"

MainWindow::MainWindow(QWidget* parent)
	: QMainWindow(parent)
	, ui(new Ui::MainWindow)
{
	ui->setupUi(this);
	//this->setWindowTitle(QString::fromLocal8Bit("������ӽ�ӹ��������"));
	this->setWindowTitle(QString("������ӽ�ӹ��������"));
	this->setWindowIcon(QIcon(":/img/Machine.png"));
	this->setWindowState(Qt::WindowMaximized);

	//�۵�Ч��
	isMenuShow = true;
	ui->splitter->setFrameShadow(QFrame::Raised);
	
	QList<int> width{ 400,4000 };
	ui->splitter->setSizes(width);
	ui->splitter->setStretchFactor(0, 1);
	ui->splitter->setStretchFactor(1, 1);

	//��ӰЧ��
	shadow = new QGraphicsDropShadowEffect();
	shadow->setBlurRadius(20);
	shadow->setColor(Qt::black);
	shadow->setOffset(0);
	ui->childwidget->setGraphicsEffect(shadow);
	ui->widget_data->setGraphicsEffect(shadow);

	//�ӽ���
	//�豸ѡ�ͽ���
	pSelectWidget = new SelectEqu(ui->childwidget);
	pSelectWidget->hide();
	//���ݿ���ʾ����
	pDBWidget = new DBShower(ui->childwidget);
	pDBWidget->hide();

	pDisplayWidget = new Dispaly(ui->childwidget);
	pDisplayWidget->hide();

	connect(ui->action_showMenu, &QAction::triggered, this, &MainWindow::actionMenuTriggered);
	connect(ui->btnShowMenu, &QPushButton::clicked, this, &MainWindow::actionMenuTriggered);
	connect(this, &MainWindow::fileReaded, pDisplayWidget, &Dispaly::refreshFileData);

	ui->widget_5->hide();
	ui->widget_8->hide();
}

MainWindow::~MainWindow()
{
	delete ui;
	if (pSelectWidget)
		delete pSelectWidget;
	if (pDBWidget)
		delete pDBWidget;
	if (pDisplayWidget)
		delete pDisplayWidget;
}

void MainWindow::resizeEvent(QResizeEvent* event)
{
	resizeParentWidgets();
}

void MainWindow::resizeParentWidgets()
{
	int width = ui->childwidget->width();
	if (pSelectWidget && width > 200)
		pSelectWidget->resize(ui->childwidget->width(), ui->childwidget->height());
	if (pDBWidget && width > 200)
		pDBWidget->resize(ui->childwidget->width(), ui->childwidget->height());
	if (pDisplayWidget && width > 200)
		pDisplayWidget->resize(ui->childwidget->width(), ui->childwidget->height());
}

void MainWindow::hideParentWidgets()
{
	pSelectWidget->hide();
	pDBWidget->hide();
	pDisplayWidget->hide();

	ui->widget_3->setStyleSheet("background-color: rgb(255,255,255);");
	ui->widget_4->setStyleSheet("background-color: rgb(255,255,255);");
	ui->widget_5->setStyleSheet("background-color: rgb(255,255,255);");
	ui->widget_6->setStyleSheet("background-color: rgb(255,255,255);");
	ui->widget_7->setStyleSheet("background-color: rgb(255,255,255);");
	ui->widget_8->setStyleSheet("background-color: rgb(255,255,255);");
}




void MainWindow::on_btnBend_clicked()
{
	hideParentWidgets();
	ui->widget_3->setStyleSheet("background-color: rgb(255,235,205);");
	//QProcess* pProcess = new QProcess(this);
	//QString sProgram = "F:\\release\\ui.exe";
	//pProcess->setProgram(sProgram);
	//pProcess->start();
	//QProcess::execute("F:\\release\\ui.exe");
}

void MainWindow::on_btnSelect_clicked()
{
	hideParentWidgets();
	pSelectWidget->resize(ui->childwidget->width(), ui->childwidget->height());
	ui->widget_4->setStyleSheet("background-color: rgb(255,235,205);");
	pSelectWidget->show();
}

void MainWindow::on_btnSetting_clicked()
{
	hideParentWidgets();
	ui->widget_5->setStyleSheet("background-color: rgb(255,235,205);");
}

void MainWindow::on_btnDiaplay_clicked()
{
	hideParentWidgets();
	pDisplayWidget->resize(ui->childwidget->width(), ui->childwidget->height());
	pDisplayWidget->show();
	ui->widget_6->setStyleSheet("background-color: rgb(255,235,205);");
}

//���ݿ����
void MainWindow::on_btnProg_clicked()
{
	hideParentWidgets();
	ui->widget_7->setStyleSheet("background-color: rgb(255,235,205);");
	pDBWidget->resize(ui->childwidget->width(), ui->childwidget->height());
	pDBWidget->show();
}

void MainWindow::on_btnShow_clicked()
{
	hideParentWidgets();
	ui->widget_8->setStyleSheet("background-color: rgb(255,235,205);");
	//���û���ļ������һ���ж���������ȡ�ļ�
}


/*
 * ���ļ�ָ��
 * author:wl
 * time  2020/8/31
 */
void MainWindow::on_action_O_triggered()
{
	BendFileReader* filereader = new BendFileReader();
	if (filereader->exec() == QDialog::Accepted)
	{
		ui->labFilename->setText(("�ļ�����") + g_filePath);
		g_totalData.totalBendData = filereader->getBendData();
		emit fileReaded();
	}
	delete filereader;
}

void MainWindow::on_action_S_triggered()
{

}

//��ʱ��
void MainWindow::on_actionT_triggered()
{

}

void MainWindow::actionMenuTriggered()
{
	QList<int> tmpwidth;
	if (isMenuShow)
	{
		tmpwidth=QList<int>{0,4000 };
		isMenuShow = !isMenuShow;
	}
	else
	{
		isMenuShow = !isMenuShow;
		tmpwidth = QList<int>{ 400,4000 };
	}
	ui->splitter->setSizes(tmpwidth);
	update();
	resizeParentWidgets();
}


