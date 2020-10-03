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
    this->setWindowTitle(QString::fromLocal8Bit("折弯机钣金加工仿真软件"));
    this->setWindowIcon(QIcon(":/img/Machine.png"));
    this->setWindowState(Qt::WindowMaximized);

    //阴影效果
    shadow=new QGraphicsDropShadowEffect();
    shadow->setBlurRadius(20);
    shadow->setColor(Qt::black);
    shadow->setOffset(0);
    ui->childwidget->setGraphicsEffect(shadow);
    ui->widget_data->setGraphicsEffect(shadow);

    //子界面
    //设备选型界面
    pSelectWidget=new SelectEqu(ui->childwidget);
    pSelectWidget->hide();
    //工件显示界面
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
    //如果没有文件，添加一个判断条件，读取文件
}


/*
 * 打开文件指令
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

//定时器
void MainWindow::on_actionT_triggered()
{

}


