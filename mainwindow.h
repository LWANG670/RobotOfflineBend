#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QGraphicsDropShadowEffect>
#include "SelectEquipment/selectequ.h"
#include"fileProgram/fileshower.h"
#include<QFileDialog>
#include<QTimer>
#include "DBShower.h"
#include"globalvars.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow;}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void hideparentwidgets();//销毁其他界面

private slots:
    void on_btnBend_clicked();

    void on_btnSelect_clicked();

    void on_action_O_triggered();

    void on_btnShow_clicked();

    void on_action_S_triggered();

    void on_actionT_triggered();

    void on_btnSetting_clicked();

    void on_btnDiaplay_clicked();

    void on_btnProg_clicked();

private:
    Ui::MainWindow *ui;
    SelectEqu *pSelectWidget;//设备选取界面
    FileShower *pShowerWidget;//工件显示界面
    DBShower* pDBWidget;//数据库管理界面
    //QString filename;

    //私有数据
    BendData bendDate;

    QGraphicsDropShadowEffect *shadow;//阴影效果

    void resizeEvent(QResizeEvent* event);

};
#endif // MAINWINDOW_H
