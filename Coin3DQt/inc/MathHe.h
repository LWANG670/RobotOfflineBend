#pragma once
class SbMatrix;
class SbVec3f;
// Z-X-Yŷ����ת����
SbMatrix ZxyEuler2Mat4f(float x, float y, float z);
SbMatrix ZxyEuler2Mat4f(const SbVec3f& vec);