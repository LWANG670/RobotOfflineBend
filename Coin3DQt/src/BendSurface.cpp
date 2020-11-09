#include "BendSurface.h"

BendSurface::BendSurface()
	:NurbsSurf(),
	isTop(false), isVisited(false), isBended(false),
	bendNum(-1),
	bendRadius(-1.0f), bendAngle(-1.0f),
	length(-1.0f), width(-1.0f)
{
}
