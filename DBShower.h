#pragma once

#include <QWidget>
#include "ui_DBShower.h"
#include <QSqlDatabase>
#include <QtSql>
#include <QTableView>
#include "DBInsertDlg.h"

class DBShower : public QWidget
{
	Q_OBJECT

public:
	DBShower(QWidget *parent = Q_NULLPTR);
	~DBShower();

private:
	Ui::DBShower ui;

	enum piece { Machine, Robot, Center, Flip, Up, Down };

	QSqlDatabase db;
	QSqlTableModel* pPiecesModel;
	QString piecetype;
	QSqlTableModel* pCurModel;//区分目前是哪个模块
	QSqlTableModel* pMachineModel;
	QSqlTableModel* pRobotModel;
	QSqlTableModel* pCenterModel;
	QSqlTableModel* pFlipModel;
	QSqlTableModel* pUpModel;
	QSqlTableModel* pDownModel;
	QTableView *pPiecesView;
	QTableView* pSelectPieceView;
	QSqlRecord record;//当前选取数据

	void initChooseWidget();
	void initSqlite();
	void initTableView();

private slots:
	void btnMachineClick();
	void btnRobotClick();
	void btnCenterClick();
	void btnFlipClick();
	void btnUpClick();
	void btnDownClick();

	void btnInsertClick();
	void btnDelClick();

	void changeSelectItem(QModelIndex index);
	void changePiecesItem(QModelIndex index);
};
