#pragma once
#include <iostream>
#include <cmath>
#include "Point2D.h"
#include "Shape.h"
#include "RectangleException.h"

class Rectangle : public Shape
{
public:
	Rectangle(Point2D ptTopLeft, float fWidth, float fHeight);
	Rectangle(const Rectangle& obj);
	Rectangle();

	void operator=(Rectangle const& obj);

	/**@brief Getter for Width value*/
	float GetWidth();

	/**@brief Getter for Height value*/
	float GetHeight();

	/**@brief Getter for TopLeft value*/
	Point2D GetTopLeft();

	/**@brief Getter for TopRight value*/
	Point2D GetTopRight();

	/**@brief Getter for BottomLeft value*/
	Point2D GetBottomLeft();

	/**@brief Getter for BottomRight value*/
	Point2D GetBottomRight();

	/**@brief Setter for Width value
	* By modifying this value some of the rectangle's properties are altered accordingly
	*/
	void SetWidth(float Width);

	/**@brief Setter for Height value
	*  By modifying this value some of the rectangle's properties are altered accordingly
	*/
	void SetHeight(float fHeight);

	/**@brief Calculates Rectangle's perimeter
	@return float number of computed circumference
	*/
	float ComputePerimeter() override;

	/**@brief Calculates Rectangle's area
	@return float number of computed area
	*/
	float ComputeArea() override;

	void Print() override;

private:
	Point2D m_ptTopLeft, m_ptTopRight, m_ptBottomLeft, m_ptBottomRight;
	float m_fWidth, m_fHeight;
};
