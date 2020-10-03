#include "BendFileReader.h"
#include <QFileDialog>
#include <QTextStream>

BendFileReader::BendFileReader(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	connect(ui.btn_choose, &QPushButton::clicked, this, &BendFileReader::btnSureClicked);
	this->setWindowTitle(QString::fromLocal8Bit("导入零件"));
}

BendFileReader::~BendFileReader()
{

}

BendData BendFileReader::getBendData()
{
	return bendData;
}


//打开后的操作
void BendFileReader::btnSureClicked()
{
	QFileDialog *fd = new QFileDialog(this);
	fd->setWindowTitle(QString::fromLocal8Bit("选取零件"));
	QString filters = tr("txt files(*.txt);;IGES files(*.iges)");
	fd->setFilter(QDir::Files | QDir::NoSymLinks);//设置类型过滤器，只为文件格式
	fd->setNameFilter(filters); //设置过滤条件
	if(fd->exec()==QDialog::Accepted)
	{
	    //这里需要一个销毁操作
	    g_filePath=fd->selectedFiles()[0];
	    int size = fd->directory().path().size()+1;
	    int path_size = g_filePath.size();
	    QString fileName = g_filePath.right(path_size-size).toLower();
	    //确定是哪种格式的文件
	    QString type = fileName.split(".").at(1);
	    if(type=="txt")
	    {
			ui.filepath->setText(g_filePath);
			QString jpgpath = g_filePath.mid(0, g_filePath.size()-3) + "jpg";
			ui.showlabel->setPixmap(QPixmap(jpgpath));
			txtReader(g_filePath);
	    }
	}
	delete fd;
}

/*
 * 打开txt文件
 * author:wl
 * time  2020/9/31
 */
void BendFileReader::txtReader(QString filepath)
{
	QFile file(filepath);
	if (!file.open(QIODevice::ReadOnly|QIODevice::Text))
	{
		return;
	}

	QList<QString> txtdata;
	
	QTextStream in(&file);
	while (!in.atEnd()) 
	{
		QString line = in.readLine();
		txtdata.push_back(line);
	}
	bendData.Thickeness = txtdata[0].section(':', 1, 1).toFloat();
	auto i = txtdata.begin() + 2;
	//surface
	while (*i != "endface")
	{
		readSurfaceData(*i);
		i++;
	}
	i = i + 2;
	//bendLine
	while (*i != "endbendline")
	{
		readBendLineData(*i);
		i++;
	}
	int a = 0;
}

void BendFileReader::readSurfaceData(QString surfacedata)
{
	QVector<MyPoint> points;
	int num = surfacedata.split(" ")[0].toInt();
	QStringList outlines = surfacedata.split(";")[0].mid(3).split(QRegExp("[,]"));
	for (auto i = outlines.begin(); i != outlines.end()-1; i++)
	{
		float px = i->split(" ")[0].toFloat();
		float py = i->split(" ")[1].toFloat();
		MyPoint point(px, py);
		points.push_back(point);
	}
	bendData.Surfaces.insert(num, BendSurfaceData(points));
}

void BendFileReader::readBendLineData(QString bendlinedata)
{
	QStringList bendline = bendlinedata.split(";");
	int num = bendline[0].split(" ")[0].toInt();
	BendLineData data;
	data.StartPoint = MyPoint(bendline[0].mid(3).split(" ")[0].toFloat(),\
								bendline[0].mid(3).split(" ")[1].toFloat());
	data.EndPoint = MyPoint(bendline[0].split(",")[1].split(" ")[0].toFloat(), \
								bendline[0].split(",")[1].split(" ")[1].toFloat());
	data.BendAngle = bendline[1].split(":")[1].toFloat();
	data.BendRadius=bendline[2].split(":")[1].toFloat();

	bendData.Bendlines.insert(num, data);
}
