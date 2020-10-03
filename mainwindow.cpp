#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMouseEvent>
#include"globalvars.h"
#include "BendFileReader.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle(QString::fromLocal8Bit("������ӽ�ӹ��������"));
    this->setWindowIcon(QIcon(":/img/Machine.png"));
    this->setWindowState(Qt::WindowMaximized);

    //��ӰЧ��
    shadow=new QGraphicsDropShadowEffect();
    shadow->setBlurRadius(20);
    shadow->setColor(Qt::black);
    shadow->setOffset(0);
    ui->childwidget->setGraphicsEffect(shadow);
    ui->widget_data->setGraphicsEffect(shadow);

    //�ӽ���
    //�豸ѡ�ͽ���
    pSelectWidget=new SelectEqu(ui->childwidget);
    pSelectWidget->hide();
    //������ʾ����
    pShowerWidget=new FileShower(ui->childwidget);
    pShowerWidget->hide();

}

MainWindow::~MainWindow()
{
    delete ui;
    if(pSelectWidget)
        delete pSelectWidget;
    if(pShowerWidget)
        delete pShowerWidget;
}

void MainWindow::hideparentwidgets()
{
    pSelectWidget->hide();
    pShowerWidget->hide();

    ui->widget_3->setStyleSheet("background-color: rgb(255,255,255);");
    ui->widget_4->setStyleSheet("background-color: rgb(255,255,255);");
    ui->widget_5->setStyleSheet("background-color: rgb(255,255,255);");
    ui->widget_6->setStyleSheet("background-color: rgb(255,255,255);");
    ui->widget_7->setStyleSheet("background-color: rgb(255,255,255);");
    ui->widget_8->setStyleSheet("background-color: rgb(255,255,255);");
}


void MainWindow::on_btnBend_clicked()
{
    hideparentwidgets();
    ui->widget_3->setStyleSheet("background-color: rgb(255,235,205);");
}

void MainWindow::on_btnSelect_clicked()
{
    hideparentwidgets();
    pSelectWidget->resizeWindow(ui->childwidget->width(), ui->childwidget->height());
    ui->widget_4->setStyleSheet("background-color: rgb(255,235,205);");
    pSelectWidget->show();
}

void MainWindow::on_btnSetting_clicked()
{
    hideparentwidgets();
    ui->widget_5->setStyleSheet("background-color: rgb(255,235,205);");
}

void MainWindow::on_btnDiaplay_clicked()
{
    hideparentwidgets();
    ui->widget_6->setStyleSheet("background-color: rgb(255,235,205);");
}

void MainWindow::on_btnProg_clicked()
{
    hideparentwidgets();
    ui->widget_7->setStyleSheet("background-color: rgb(255,235,205);");
}

void MainWindow::on_btnShow_clicked()
{
    hideparentwidgets();
    pShowerWidget->resizeWindow(ui->childwidget->width(), ui->childwidget->height());
    ui->widget_8->setStyleSheet("background-color: rgb(255,235,205);");
    pShowerWidget->show();
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


