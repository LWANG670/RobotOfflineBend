#ifndef FILESHOWER_H
#define FILESHOWER_H

#include <QWidget>

namespace Ui {
class FileShower;
}

class FileShower : public QWidget
{
    Q_OBJECT

public:
    explicit FileShower(QWidget *parent = 0);
    ~FileShower();

    void resizeWindow(int width,int height);

private:
    Ui::FileShower *ui;
};

#endif // FILESHOWER_H
