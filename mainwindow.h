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

    void hideparentwidgets();//������������

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
    SelectEqu *pSelectWidget;//�豸ѡȡ����
    FileShower *pShowerWidget;//������ʾ����
    DBShower* pDBWidget;//���ݿ�������
    //QString filename;

    //˽������
    BendData bendDate;

    QGraphicsDropShadowEffect *shadow;//��ӰЧ��

    void resizeEvent(QResizeEvent* event);

};
#endif // MAINWINDOW_H
