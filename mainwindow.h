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
    SelectEqu *pSelectWidget;//�豸ѡȡ����
    DBShower* pDBWidget;//���ݿ�������
    Dispaly* pDisplayWidget;//��άչʾ������
    //QString filename;

    //˽������
    BendData bendDate;
    bool isMenuShow;

    QGraphicsDropShadowEffect *shadow;//��ӰЧ��

private:
    void resizeEvent(QResizeEvent* event);

    void hideParentWidgets();//������������
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
