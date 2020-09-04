#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMouseEvent>
#include"globalvars.h"


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

    pFileProgram=nullptr;
}

MainWindow::~MainWindow()
{
    delete ui;
    if(pSelectWidget)
        delete pSelectWidget;
    if(pShowerWidget)
        delete pShowerWidget;
    if(pFileProgram)
        delete pFileProgram;
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
    pSelectWidget->resizeWindow(width(),height());
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
    pShowerWidget->resizeWindow(width(),height());
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
    QFileDialog *fd = new QFileDialog(this);
    fd->setWindowTitle(QString::fromLocal8Bit("打开规划后文件"));
    QString filters = tr("txt files(*.txt);;IGES files(*.iges)");
    fd->setFilter(QDir::Files | QDir::NoSymLinks);//设置类型过滤器，只为文件格式
    fd->setNameFilter(filters); //设置过滤条件
    if(fd->exec()==QDialog::Accepted)
    {
        //这里需要一个销毁操作
        g_filePath=fd->selectedFiles()[0];
        int size = fd->directory().path().size()+1;
        int path_size = g_filePath.size();
        QString fileName = g_filePath.right(path_size-size).toLower();
        //确定是哪种格式的文件
        QString type = fileName.split(".").at(1);
        if(type=="txt")
        {
            pFileProgram=new TxtFileProgram(g_filePath);
            ui->labFilename->setText(fileName);
        }
    }
    delete fd;
    //装入
    if(!pFileProgram)
    {

    }
}



void MainWindow::on_action_S_triggered()
{

}

//定时器
void MainWindow::on_actionT_triggered()
{
    ProgressDlg *progressDlg=new ProgressDlg(this,QString::fromLocal8Bit("进度条"),100,true);
    progressDlg->show();

}


