#include "BendFileReader.h"
#include "globalvars.h"
#include <QFileDialog>

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
	        pFileProgram=new TxtFileProgram(g_filePath);
	        ui->labFilename->setText(fileName);
	    }
	}
	delete fd;
}
