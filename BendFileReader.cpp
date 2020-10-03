#include "BendFileReader.h"
#include "globalvars.h"
#include <QFileDialog>

BendFileReader::BendFileReader(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	connect(ui.btn_choose, &QPushButton::clicked, this, &BendFileReader::btnSureClicked);
	this->setWindowTitle(QString::fromLocal8Bit("�������"));
}

BendFileReader::~BendFileReader()
{

}

//�򿪺�Ĳ���
void BendFileReader::btnSureClicked()
{
	QFileDialog *fd = new QFileDialog(this);
	fd->setWindowTitle(QString::fromLocal8Bit("ѡȡ���"));
	QString filters = tr("txt files(*.txt);;IGES files(*.iges)");
	fd->setFilter(QDir::Files | QDir::NoSymLinks);//�������͹�������ֻΪ�ļ���ʽ
	fd->setNameFilter(filters); //���ù�������
	if(fd->exec()==QDialog::Accepted)
	{
	    //������Ҫһ�����ٲ���
	    g_filePath=fd->selectedFiles()[0];
	    int size = fd->directory().path().size()+1;
	    int path_size = g_filePath.size();
	    QString fileName = g_filePath.right(path_size-size).toLower();
	    //ȷ�������ָ�ʽ���ļ�
	    QString type = fileName.split(".").at(1);
	    if(type=="txt")
	    {
	        pFileProgram=new TxtFileProgram(g_filePath);
	        ui->labFilename->setText(fileName);
	    }
	}
	delete fd;
}
