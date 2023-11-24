#pragma once

#define _USE_MATH_DEFINES

#include "Point2D.h"
#include "Shape.h"
#include <cmath>
#include "CircleException.h"

class Circle : public Shape
{
public:
	Circle(Point2D m_center, float m_fRadius);
	Circle(const Circle& obj);
	Circle();

	void operator=(Circle const& obj);

	/**@brief Setter for center coordinate
	*/
	void SetCenter(Point2D fSetCenter);

	/**@brief Setter for radius*/
	void SetRadius(float fSetRadius);

	/**@brief Getter for center coordinate
	*/
	Point2D GetCenter();

	/**@brief Setter for radius*/
	float GetRadius();

	void Print() override;

	/**@brief Calculates circle's circumference
	@return float number of computed circumference
	*/
	float ComputePerimeter() override;

	/**@brief Calculates circle's area
	@return float number of computed area
	*/
	float ComputeArea() override;

private:
	Point2D m_center;
	float m_fRadius;
};
