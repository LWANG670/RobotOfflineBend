#include "MathHe.h"
#include <Inventor/SbMatrix.h>
#include <Inventor/SbVec3f.h>
#include <cmath>
const static float ANG2RAD = 0.017453292519943295769f; // pi/180
SbMatrix ZxyEuler2Mat4f(float x, float y, float z)
{
	x *= ANG2RAD; // ½Ç¶È×ª»¡¶È
	y *= ANG2RAD;
	z *= ANG2RAD;

	float cx = cos(x); float sx = sin(x);
	float cy = cos(y); float sy = sin(y);
	float cz = cos(z); float sz = sin(z);

	return SbMatrix(
		cy * cx - sy * sz * sx, -sy * cz, cy * sx + sy * sz * cx, 0.0f,
		sy * cx + cy * sz * sx, cy * cz, sy * sx - cy * sz * cx, 0.0f,
		-cz * sx, sz, cz * cx, 0.0f,
		0.0f, 0.0f, 0.0f, 1.0f
	);
}
SbMatrix ZxyEuler2Mat4f(const SbVec3f& vec)
{
	return ZxyEuler2Mat4f(vec[0], vec[1], vec[2]);
}
