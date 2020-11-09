#include "CentringCoin3d.h"


CentringCoin3d::CentringCoin3d(const SbVec3f& pt, float len, float wid, const QString& path)
	:BaseModelCoin3d(path),
	origin(pt), lenx(len), widy(wid)
{
}
