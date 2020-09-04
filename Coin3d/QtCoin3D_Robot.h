#include <QtWidgets/QMainWindow>

#include <Inventor/nodes/SoSeparator.h>
#include <Inventor/Qt/viewers/SoQtExaminerViewer.h>

#include "ui_QtCoin3D_Robot.h"

#include "Robot.h"

namespace Ui {
	class QtCoin3D_Robot;
}
class QtCoin3D_Robot : public QMainWindow
{
	Q_OBJECT

public:
	QtCoin3D_Robot(QWidget *parent = Q_NULLPTR);
	~QtCoin3D_Robot();

	// Init UI robot axes
	void initUiRobotAxis();

public slots:

	// Set robot pose
	void setRobotPose();

private:
	Ui::QtCoin3D_RobotClass ui;

	// Coin root node
	SoSeparator* Coin_Root;

	// Robot root node
	SoSeparator* Robot_Root;

	// Robot
	Robot *robot;

	// Viewer
	SoQtExaminerViewer* simulatorView;
};
