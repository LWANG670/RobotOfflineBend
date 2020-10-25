#include "fileshower.h"
#include "ui_fileshower.h"
#include "XMLReader.h"

FileShower::FileShower(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FileShower)
{
    ui->setupUi(this);
    connect(ui->btnShow, &QPushButton::clicked, this, &FileShower::btnShowClicked);

    
}

FileShower::~FileShower()
{
    delete ui;
}

void FileShower::resizeWindow(int width, int height)
{
    this->setGeometry(0,0,width,height);
}

void FileShower::btnShowClicked()
{
	XMLReader xmlreader;
    xmlreader.creareDataFiles();
}