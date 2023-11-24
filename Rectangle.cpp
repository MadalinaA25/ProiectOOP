#include "Rectangle.h"

Rectangle::Rectangle(Point2D ptTopLeft, float fWidth, float fHeight)
{
	if (fWidth <= 0 || fHeight <= 0) {
		throw RectangleException(); // Throw RectangleException for invalid width or height
	}

	this->m_ptTopLeft = ptTopLeft;
	this->m_ptTopRight = Point2D(ptTopLeft.GetX() + fWidth, ptTopLeft.GetY());
	this->m_ptBottomLeft = Point2D(ptTopLeft.GetX(), ptTopLeft.GetY() - fHeight);
	this->m_ptBottomRight = Point2D(ptTopLeft.GetX() + fWidth, ptTopLeft.GetY() - fHeight);
	this->m_fWidth = fWidth;
	this->m_fHeight = fHeight;
}

Rectangle::Rectangle(const Rectangle& obj)
{
	this->m_ptTopLeft = obj.m_ptTopLeft;
	this->m_ptTopRight = obj.m_ptTopRight;
	this->m_ptBottomLeft = obj.m_ptBottomLeft;
	this->m_ptBottomRight = obj.m_ptBottomRight;
	this->m_fWidth = obj.m_fWidth;
	this->m_fHeight = obj.m_fHeight;
}

Rectangle::Rectangle()
{
	this->m_ptTopLeft = Point2D(0, 0);
	this->m_ptTopRight = Point2D(0, 0);
	this->m_ptBottomLeft = Point2D(0, 0);
	this->m_ptBottomRight = Point2D(0, 0);
	this->m_fWidth = 0;
	this->m_fHeight = 0;
}

void Rectangle::operator=(Rectangle const& obj)
{
	this->m_ptTopLeft = obj.m_ptTopLeft;
	this->m_ptTopRight = obj.m_ptTopRight;
	this->m_ptBottomLeft = obj.m_ptBottomLeft;
	this->m_ptBottomRight = obj.m_ptBottomRight;
	this->m_fWidth = obj.m_fWidth;
	this->m_fHeight = obj.m_fHeight;
}

float Rectangle::GetWidth()
{
	return this->m_fWidth;
}
float Rectangle::GetHeight()
{
	return this->m_fHeight;
}

Point2D Rectangle::GetTopLeft()
{
	return this->m_ptTopLeft;
}
Point2D Rectangle::GetTopRight()
{
	return this->m_ptTopRight;
}
Point2D Rectangle::GetBottomLeft()
{
	return this->m_ptBottomLeft;
}
Point2D Rectangle::GetBottomRight()
{
	return this->m_ptBottomRight;
}

void Rectangle::SetWidth(float fWidth)
{
	this->m_fWidth = fWidth;
	this->m_ptTopRight.SetX(this->m_ptTopLeft.GetX() + fWidth);
	this->m_ptBottomRight.SetX(this->m_ptBottomLeft.GetX() + fWidth);
}
void Rectangle::SetHeight(float fHeight)
{
	this->m_fHeight = fHeight;
	this->m_ptBottomLeft.SetY(this->m_ptTopLeft.GetY() - fHeight);
	this->m_ptBottomRight.SetY(this->m_ptTopRight.GetY() - fHeight);
}

float Rectangle::ComputePerimeter()
{
	return (this->m_fWidth * 2 + this->m_fHeight * 2);
}

float Rectangle::ComputeArea()
{
	return (this->m_fWidth * this->m_fHeight);
}

void Rectangle::Print()
{
	std::cout << "TopLeft: "; this->m_ptTopLeft.Print();
	std::cout << "TopRight: "; this->m_ptTopRight.Print();
	std::cout << "BottomLeft: "; this->m_ptBottomLeft.Print();
	std::cout << "BottomRight: "; this->m_ptBottomRight.Print();
	std::cout << "Witdth: " << this->m_fWidth;
	std::cout << "Height: " << this->m_fHeight; std::cout << std::endl;
}