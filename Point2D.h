#pragma once
#include <iostream>
#include <cmath>

class Point2D
{
public:

	Point2D() {
		this->m_fX = 0;
		this->m_fY = 0;
	}

	/**
	 * @brief Constructor that initialises an object with given atributes
	 * @param fXvalue- X coordinate of a point
	 * @param fYvalue- Y coordinate of a point
	 */
	Point2D(float fXvalue, float fYvalue);

	/**
	 * @brief Sets the X coordinate
	*/
	void SetX(float fValue);

	/**
	 * @brief Sets the Y coordinate
	*/
	void SetY(float fValue);

	/**
	 * @brief Gets the X coordinate
	*/
	float GetX();

	/**
	 * @brief Gets the Y coordinate
	*/
	float GetY();

	/**
	 * @brief Makes an offset for the coordinates
	*/
	void Offset(float fXvalue, float fYvalue);

	/**
	 * @brief Makes an offset for the coordinates with the coordinates of another point object
	*/
	void Offset(Point2D c);

	/**
	 * @brief Calculates the distance between 2 points
	 * @param a The point from witch to calculate the distance
	 * @return The value of the calculated distance
	*/
	float DistanceTo(Point2D a);

	/**
	 * @brief Prints the coordinates of o a point
	*/
	void Print();

	/**
	 * @brief Operator Overloading for plus, makes an offset for each coordinate with the value of the coordinates of another point object
	 * @param C- object to add
	 * @return an object with the new coordinates
	*/
	Point2D operator+(Point2D& c);

	/**
	 * @brief Operator Overloading for equal, makes an copy of the point object
	 * @param C- object to copy
	 * @return an object with the new coordinates
	*/
	Point2D& operator=(const Point2D& c);

protected:

	/**
	 * @brief Value of X coordinate of a point
	*/
	float m_fX;

	/**
	 * @brief Value of Y coordinate of a point
	*/
	float m_fY;
};
