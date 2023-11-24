#include "Circle.h"

Circle::Circle(Point2D m_center, float m_fRadius)
{
	if (m_fRadius <= 0) {
		throw CircleException(); // Throw CircleException for invalid radius
	}

	this->m_center = m_center;
	this->m_fRadius = m_fRadius;
}

Circle::Circle(const Circle& obj)
{
	this->m_center = obj.m_center;
	this->m_fRadius = obj.m_fRadius;
}

Circle::Circle()
{
	this->m_center = Point2D(0, 0);
	this->m_fRadius = 0;
}

void Circle::operator=(Circle const& obj)
{
	this->m_center = obj.m_center;
	this->m_fRadius = obj.m_fRadius;
}

void Circle::SetCenter(Point2D fSetCenter)
{
	this->m_center = fSetCenter;
}

void Circle::SetRadius(float fSetRadius) {
	this->m_fRadius = fSetRadius;
}

Point2D Circle::GetCenter()
{
	return this->m_center;
}

float Circle::GetRadius()
{
	return this->m_fRadius;
}

void Circle::Print()
{
	std::cout << "Center of the circle:";
	m_center.Print();
	std::cout << "Radius:" << m_fRadius;
}

float Circle::ComputePerimeter()
{
	return 2 * M_PI * this->m_fRadius;//2piR
}

float Circle::ComputeArea()
{
	return M_PI * (pow(this->m_fRadius, 2));//pi*r^2
}