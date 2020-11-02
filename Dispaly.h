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
	QTreeWidgetItem* itemBends;//折弯工件 子项
	QTreeWidgetItem* itemMachines;//折弯机等 子项
	QTreeWidgetItem* itemSettings;//设置等 子项
	//QTreeWidgetItem* m_itemOthers;//其它文件 子项

private slots:

};
