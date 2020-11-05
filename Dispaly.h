#pragma once

#include <QWidget>
#include "ui_Dispaly.h"
#include <QTreeWidget>

class Dispaly : public QWidget
{
	Q_OBJECT

public:
	Dispaly(QWidget *parent);
	~Dispaly();

private:
	Ui::Dispaly ui;

	QWidget* mainWindow;

	void initTreeWeidgt();
	QTreeWidgetItem* itemBends;//���乤�� ����
	QTreeWidgetItem* itemMachines;//������� ����
	QTreeWidgetItem* itemSettings;//���õ� ����
	//QTreeWidgetItem* m_itemOthers;//�����ļ� ����

	//��ʼ��������ʾ����
	void initBendDataShow();

public slots:
	void refreshFileData();

};
