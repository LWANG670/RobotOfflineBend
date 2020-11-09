#include "Coin3DQtRobotBending.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Coin3DQtRobotBending w;
	w.show();
	return a.exec();
}
