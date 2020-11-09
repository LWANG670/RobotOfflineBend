#pragma once
#include "BaseModelCoin3d.h"
#include <Inventor/SbVec3f.h>
// ����̨
class CentringCoin3d :
    public BaseModelCoin3d
{
private:
    SbVec3f origin; // {base2}x��y���ཻ�� ����ھֲ�����
    float lenx;  // ��
    float widy;  // ��

public:
    CentringCoin3d(const SbVec3f& pt, float len, float wid, const QString& path = "");
};

