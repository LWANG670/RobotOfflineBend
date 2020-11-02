#pragma once

#include <QWidget>
#include "ui_Dispaly.h"
#include <QTreeWidget>

class Dispaly : public QWidget
{
	Q_OBJECT

public:
	Dispaly(QWidget *parent = Q_NULLPTR);
	~Dispaly();

private:
	Ui::Dispaly ui;

	void initTreeWeidgt();
	QTreeWidgetItem* itemBends;//���乤�� ����
	QTreeWidgetItem* itemMachines;//������� ����
	QTreeWidgetItem* itemSettings;//���õ� ����
	//QTreeWidgetItem* m_itemOthers;//�����ļ� ����

private slots:

};
