#include "fileshower.h"
#include "ui_fileshower.h"

FileShower::FileShower(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FileShower)
{
    ui->setupUi(this);

}

FileShower::~FileShower()
{
    delete ui;
}

void FileShower::resizeWindow(int width, int height)
{
    this->setGeometry(0,0,width,height);
}
