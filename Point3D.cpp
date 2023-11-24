#include "Point3D.h"

Point3D::Point3D(float fXvalue, float fYvalue, float fZvalue) :Point2D(fXvalue, fYvalue), m_fZ(fZvalue) {
	this->m_fZ = fZvalue;
}

void Point3D::SetZ(float fValue) {
	this->m_fZ = fValue;
}

void Point3D::Offset(float fXvalue, float fYvalue, float fZvalue) {
	Point2D::Offset(fXvalue, fYvalue);
	this->m_fZ = this->m_fZ + fZvalue;
}

void Point3D::Offset(Point3D c) {
	Point2D::Offset(c.m_fX, c.m_fY);
	this->m_fZ = this->m_fZ + c.m_fZ;
}

void Point3D::Print() {
	Point2D::Print();
	std::cout << " Z coordinate: " << this->m_fZ << std::endl;
}

float Point3D::DistanceTo(Point3D a) {
	return sqrt((a.m_fX - this->m_fX) * (a.m_fX - this->m_fX) + (a.m_fY - this->m_fY) * (a.m_fY - this->m_fY) + (a.m_fZ - this->m_fZ) * (a.m_fZ - this->m_fZ));
}

Point3D Point3D::operator+(Point3D& c)
{
	Point3D res(0, 0, 0);

	res.m_fX = this->m_fX + c.m_fX;
	res.m_fY = this->m_fY + c.m_fY;
	res.m_fZ = this->m_fZ + c.m_fZ;

	return res;
}