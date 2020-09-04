#ifndef FILEPROGRAM_H
#define FILEPROGRAM_H
#include<QString>

class FileProgram
{
public:
    FileProgram(QString filename);
    FileProgram()=default;
    virtual ~FileProgram();

protected:
    QString mfileName;
};

#endif // FILEPROGRAM_H
