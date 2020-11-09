#pragma once
class SbMatrix;
class SbVec3f;
// Z-X-YÅ·À­½Ç×ª¾ØÕó
SbMatrix ZxyEuler2Mat4f(float x, float y, float z);
SbMatrix ZxyEuler2Mat4f(const SbVec3f& vec);