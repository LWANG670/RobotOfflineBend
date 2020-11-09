#pragma once
#include <QString>
#include <Inventor/nodes/SoNode.h>
#include <Inventor/nodes/SoSeparator.h>
#include <Inventor/nodes/SoMatrixTransform.h>

//?��ΪOpen Inventor�ĳ���ͼ�ڵ�ʹ�������ü�������
//?�ʷ���ʹ�ü̳л���ϵķ�ʽʹ��BaseModelCoin3d �ͻ��˶�Ҫʹ��ָ��BaseModelCoin3d*��ʽ

enum class AxisXYZ
{
	X,
	Y,
	Z
};
class BaseModelCoin3d
{
protected:
	QString m_path; // ģ��λ��
	SoSeparator* m_root; // ��άģ��


	//? һ��̲�ʹ�õ����о���Open inventorʹ�õ����о��󣬹���Ҫת��
	//? ����ʱ�ý̲����о���ʽ���㣬��ʹ�þ������ģ����̬ʱ�ǵ�ת��
	SoMatrixTransform* m_pos; // ����ģ�͵�λ�� �����ۻ�ЧӦ �ܸ��ڵ��m_pos��Ӱ��

public:
	explicit BaseModelCoin3d(const QString& path = "");

	//? ��ֹ�����࿽������
	BaseModelCoin3d(const BaseModelCoin3d&) = delete;
	//? ��ֹ�����ำֵ
	BaseModelCoin3d& operator=(const BaseModelCoin3d&) = delete;

	virtual ~BaseModelCoin3d();

public:
	//!���к���===================================================
	void AddChildSoNode(SoNode* child);
	inline auto GetRootNode() const { return m_root; }

	inline const auto& GetPath() const { return m_path; }
	void SetPath(const QString& path);

	// �����о���
	inline SbMatrix GetPosMatRow() const { return m_pos->matrix.getValue(); }
	// �����о���
	inline SbMatrix GetPosMatCol() const { return m_pos->matrix.getValue().transpose(); }

	//!����ģ��λ��==================================================
	// ͨ���о�������λ��
	void SetPosMatRow(const SbMatrix& rowMat);
	// ͨ���о�������λ��
	void SetPosMatCol(const SbMatrix& mat);

	//! ����ģ��λ��
	void SetPositionXYZ(float x, float y, float z);
	void SetPositionXYZ(const SbVec3f& pos);

	//! ����ģ����̬
	void SetRotationXYZSelf(const AxisXYZ& axis, float degree);
	// ��ת����ΪZ-X-Y
	void SetRotationXYZSelf(float x, float y, float z);
	void SetRotationXYZSelf(const SbVec3f& vec);
};

