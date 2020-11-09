#pragma once
#include "BaseModelCoin3d.h"
class SoNode;

class BendMachineCoin3d :
	public BaseModelCoin3d
{
private:
	//todo 为确定上下模位置设置的变量
	float lowerHeight; //! 上模在上死点时，上模上底面到地面的距离
	float upperHeight; //! 地面到下模地面的距离
	
	float moldWidth;

public:
	BendMachineCoin3d(float lh, float uh, float mw, const QString& path = "");
};


