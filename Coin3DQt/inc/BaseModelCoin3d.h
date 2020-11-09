#pragma once
#include <QString>
#include <Inventor/nodes/SoNode.h>
#include <Inventor/nodes/SoSeparator.h>
#include <Inventor/nodes/SoMatrixTransform.h>

//?因为Open Inventor的场景图节点使用了引用计数技术
//?故凡是使用继承或组合的方式使用BaseModelCoin3d 客户端都要使用指针BaseModelCoin3d*形式

enum class AxisXYZ
{
	X,
	Y,
	Z
};
class BaseModelCoin3d
{
protected:
	QString m_path; // 模型位置
	SoSeparator* m_root; // 三维模型


	//? 一般教材使用的是列矩阵，Open inventor使用的是行矩阵，故需要转置
	//? 计算时用教材中列矩阵方式计算，当使用矩阵控制模型姿态时记得转置
	SoMatrixTransform* m_pos; // 控制模型的位姿 具有累积效应 受父节点的m_pos的影响

public:
	explicit BaseModelCoin3d(const QString& path = "");

	//? 禁止其子类拷贝构造
	BaseModelCoin3d(const BaseModelCoin3d&) = delete;
	//? 禁止其子类赋值
	BaseModelCoin3d& operator=(const BaseModelCoin3d&) = delete;

	virtual ~BaseModelCoin3d();

public:
	//!公有函数===================================================
	void AddChildSoNode(SoNode* child);
	inline auto GetRootNode() const { return m_root; }

	inline const auto& GetPath() const { return m_path; }
	void SetPath(const QString& path);

	// 返回行矩阵
	inline SbMatrix GetPosMatRow() const { return m_pos->matrix.getValue(); }
	// 返回列矩阵
	inline SbMatrix GetPosMatCol() const { return m_pos->matrix.getValue().transpose(); }

	//!设置模型位姿==================================================
	// 通过行矩阵设置位姿
	void SetPosMatRow(const SbMatrix& rowMat);
	// 通过列矩阵设置位姿
	void SetPosMatCol(const SbMatrix& mat);

	//! 设置模型位置
	void SetPositionXYZ(float x, float y, float z);
	void SetPositionXYZ(const SbVec3f& pos);

	//! 设置模型姿态
	void SetRotationXYZSelf(const AxisXYZ& axis, float degree);
	// 旋转次序为Z-X-Y
	void SetRotationXYZSelf(float x, float y, float z);
	void SetRotationXYZSelf(const SbVec3f& vec);
};

