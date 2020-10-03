#ifndef TXTFILEPROGRAM_H
#define TXTFILEPROGRAM_H

#include"FileProgram.h"


class TxtFileProgram : public FileProgram
{
public:
    TxtFileProgram(QString filename);
    ~TxtFileProgram();
};

#endif // TXTFILEPROGRAM_H
