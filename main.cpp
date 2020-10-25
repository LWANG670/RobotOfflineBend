
#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

	QFile file("./qss/modify.qss");
	if (!file.open(QIODevice::ReadOnly))
		exit(0);

	QTextStream in(&file);
	QString css = in.readAll();
	qApp->setStyleSheet(css);

    w.show();
    return a.exec();
}
