#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QGraphicsDropShadowEffect>
#include "SelectEquipment/selectequ.h"
#include<QFileDialog>
#include<QTimer>
#include "DBShower.h"
#include "Dispaly.h"
#include "globalvars.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow;}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    
private:
    Ui::MainWindow *ui;
    SelectEqu *pSelectWidget;//设备选取界面
    DBShower* pDBWidget;//数据库管理界面
    Dispaly* pDisplayWidget;//三维展示主界面
    //QString filename;

    //私有数据
    BendData bendDate;
    bool isMenuShow;

    QGraphicsDropShadowEffect *shadow;//阴影效果

private:
    void resizeEvent(QResizeEvent* event);

    void hideParentWidgets();//销毁其他界面
    void resizeParentWidgets();

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

    void actionMenuTriggered();

signals:
    void fileReaded();

};
#endif // MAINWINDOW_H
