#pragma once

#include <QDialog>
#include "ui_DBInsertDlg.h"
#include "globalvars.h"

class DBInsertDlg : public QDialog
{
	Q_OBJECT

public:
	DBInsertDlg(QWidget *parent = Q_NULLPTR);
	~DBInsertDlg();


private:
	Ui::DBInsertDlg ui;
	WorkpieceMachine* workPiece;

	QString dlgFileChoose(QString& filename, WorkpieceType workpiecetype);

private slots:
	void btnAcceptClick();
	void btnMachineClick();
};
