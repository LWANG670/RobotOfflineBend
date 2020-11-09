#pragma once
#include "BaseModelCoin3d.h"
class SoNode;

class BendMachineCoin3d :
	public BaseModelCoin3d
{
private:
	//todo Ϊȷ������ģλ�����õı���
	float lowerHeight; //! ��ģ��������ʱ����ģ�ϵ��浽����ľ���
	float upperHeight; //! ���浽��ģ����ľ���
	
	float moldWidth;

public:
	BendMachineCoin3d(float lh, float uh, float mw, const QString& path = "");
};


