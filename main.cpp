
#include "mainwindow.h"
#include <QTextCodec>
#include <QApplication>



int main(int argc, char* argv[])
{
	QApplication a(argc, argv);
	MainWindow w;

	//…Ë÷√◊÷ÃÂ
//#if (QT_VERSION <= QT_VERSION_CHECK(5,0,0))
//#if _MSC_VER
//	QTextCodec* codec = QTextCodec::codecForName("GBK");
//#else
//	QTextCodec* codec = QTextCodec::codecForName("UTF-8");
//#endif
//	QTextCodec::setCodecForLocale(codec);
//	QTextCodec::setCodecForCStrings(codec);
//	QTextCodec::setCodecForTr(codec);
//#else
//	QTextCodec* codec = QTextCodec::codecForName("UTF-8");
//	QTextCodec::setCodecForLocale(codec);
//	QTextCodec::
//#endif

	QFile file("./qss/modify.qss");
	if (!file.open(QIODevice::ReadOnly))
		exit(0);

	QTextStream in(&file);
	QString css = in.readAll();
	qApp->setStyleSheet(css);

	w.show();
	return a.exec();
}
