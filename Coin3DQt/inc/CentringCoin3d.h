#pragma once
#include "BaseModelCoin3d.h"
#include <Inventor/SbVec3f.h>
// 对中台
class CentringCoin3d :
    public BaseModelCoin3d
{
private:
    SbVec3f origin; // {base2}x、y轴相交点 相对于局部坐标
    float lenx;  // 长
    float widy;  // 宽

public:
    CentringCoin3d(const SbVec3f& pt, float len, float wid, const QString& path = "");
};

