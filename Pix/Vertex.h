#pragma once

#include "MathHelper.h"
#include <XEngine.h>

struct Vertex
{
	Vector3 pos;
	X::Color color;
};

inline static Vector3 LerpPosition(const Vector3& a, const Vector3& b, float t)
{
	Vector3 pos;
	pos.x = MathHelper::Lerp(a.x, b.x, t);
	pos.y = MathHelper::Lerp(a.y, b.y, t);
	pos.z = MathHelper::Lerp(a.z, b.z, t);
}

inline static X::Color LerpColor(const X::Color& a, const X::Color& b, float t)
{
	X::Color color;
	color.r = MathHelper::Lerposition(a.r, b.r, t);
	color.g = MathHelper::Lerposition(a.g, b.g, t);
	color.b = MathHelper::Lerposition(a.b, b.b, t);
	color.a = MathHelper::Lerposition(a.a, b.a, t);
	return color
}