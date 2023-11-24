#pragma once
#include <iostream>
#include <cmath>
#include "Point2D.h"

class Point3D : public Point2D
{
public:

	explicit Point3D(float fXvalue, float fYvalue, float fZvalue);

	void SetZ(float fValue);

	void Offset(float fXvalue, float fYvalue, float fZvalue);

	void Offset(Point3D c);

	float DistanceTo(Point3D a);

	void Print();

	Point3D operator+(Point3D& c);

private:
	float m_fZ;
};
