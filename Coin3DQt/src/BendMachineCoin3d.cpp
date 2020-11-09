#include "BendMachineCoin3d.h"
#include "FileReadHelper.h"
BendMachineCoin3d::BendMachineCoin3d(float lh, float uh, float mw, const QString& path)
	:BaseModelCoin3d(path), lowerHeight(lh), upperHeight(uh), moldWidth(mw)
{
}


