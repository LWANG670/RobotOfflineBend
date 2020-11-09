#include "CNCBend.h"
#include "QProcess"
#include "QWindow"

CNCBend::CNCBend(QWidget *parent)
	: QWidget(parent)
{
    QProcess* pProcess = new QProcess(this);
    QString sProgram = "F:/release/ui.exe";
    pProcess->setProgram(sProgram);
    pProcess->start();

    qint64 lID = pProcess->processId();
    
    QWindow* window = QWindow::fromWinId(lID);
    parent = QWidget::createWindowContainer(window, this, Qt::Widget);
}

CNCBend::~CNCBend()
{

}
