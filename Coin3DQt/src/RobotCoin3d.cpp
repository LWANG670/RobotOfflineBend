#include <Inventor/actions/SoGetMatrixAction.h>
#include <Inventor/actions/SoSearchAction.h>
#include "RobotCoin3d.h"
#include "PrintHelper.h"

extern const  int AXIS_NUMBER;
RobotCoin3d::RobotCoin3d()
	: m_root(new SoSeparator)
{
	m_root->ref();
	m_axes.resize(AXIS_NUMBER);
}
RobotCoin3d::RobotCoin3d(const QVector<QString>& paths, const QVector<QVector<float>>& dhParams)
	:RobotCoin3d()
{
	//! 设置各轴的节点相对位置 第0根轴添加到m_root,其他{1}添加到{0}，{2}添加到{1}...以此类推
	SoInput input;
	for (int i = 0; i < AXIS_NUMBER; ++i)
	{
		if (i == 0) {
			m_axes[i] = new	AxisCoin3d(paths[i]);
			m_root->addChild(m_axes[i]->GetRootNode());
		}
		else
		{
			m_axes[i] = new AxisCoin3d(paths[i], dhParams[i - 1]);
			m_axes[i - 1]->AddChildSoNode(m_axes[i]->GetRootNode());
		}
		m_axes[i]->SetInitIVMat(GetInitMat(i)); //? 设置轴模型初始位置
		//todo 读文件的操作可以放到外面进行——如判断路径是否存在后再将模型读入进来
		auto axismodel = OpenWRLModel(i, input);       //? 读wrl文件

		//todo 路径错误就抛异常 -- 需要改进
		axismodel != nullptr ? m_axes[i]->AddWRL3DModel(axismodel) : throw("model path error");
	}
	m_Tv0o = m_axes[1]->GetTransMat().inverse();
}


RobotCoin3d::~RobotCoin3d()
{
	for (auto& axisPtr : m_axes) {
		if (axisPtr) delete axisPtr;
	}
	m_root->unref();
}

#pragma region 初始化轴

SbMatrix RobotCoin3d::GetInitMat(int index)
{
	SbMatrix res = SbMatrix::identity();
	for (int i = index; i >= 0; i--)
	{
		res *= m_axes[i]->GetTransMat().inverse();
	}
	return res;
}
SoVRMLGroup* RobotCoin3d::OpenWRLModel(int index, SoInput& input)
{
	//auto* myInput = new SoInput;
	if (input.openFile(m_axes[index]->GetPath().toStdString().data()))
	{
		auto* model = SoDB::readAllVRML(&input);
		input.closeFile();
		return model;
	}
	input.closeFile();
	return nullptr;
}
#pragma endregion


#pragma region 机器人运动相关

Mat4x4d RobotCoin3d::RetMat4x4T60ByEndWorld(const SbMatrix& endWorld)
{
	return Mat4x4d();
}

SbMatrix RobotCoin3d::GetAxisMatToWorld(int index)
{
	SbMatrix retMat = SbMatrix::identity();
	for (int i = 0; i <= index; ++i) {
		retMat *= m_axes[i]->GetTransMat();
	}
	return retMat;
}

void RobotCoin3d::RotateAixs(int num, float newTheta)
{
	//! 获取新的变换矩阵
	auto newMat = m_axes[num]->GetTransMatByUpdateTheta(newTheta);
	//! 设置SoMatrixTransform节点，改变三维模型位姿
	m_axes[num]->SetPosMatCol(newMat);
}

SbMatrix RobotCoin3d::GetAxisMatByAction(int index, const SbViewportRegion& viewPort)
{
	SoSearchAction searchAction;
	searchAction.setNode(m_axes[index]->GetRootNode()->getChild(0));
	searchAction.apply(m_axes[0]->GetRootNode());

	auto path = searchAction.getPath(); // 返回从第0根轴到第index轴的路径
	SoGetMatrixAction getMatrixAction(viewPort);
	getMatrixAction.apply(path);
	return getMatrixAction.getMatrix().transpose();
}

#pragma endregion
