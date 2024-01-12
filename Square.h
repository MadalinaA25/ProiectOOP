#pragma once
#include <iostream>
#include <cmath>
#include "Point2D.h"
#include "Shape.h"
#include "SquareException.h"

class Square : public Shape
{
public:
	/**
	 * @brief Constructor that initialises an object with given atributes
	 * @param Point2D- point object with coordinates of a the top left point of square
	 * @param fSideLenght- lenght of the side of the square
	 */
	explicit Square(Point2D ptTopLeft, float fLenght);
	/**
	 * @brief Constructor that copies another object
	 * @param C- the object to be copied
	 */
	Square(const Square& C);
	Square();

	/**
	 * @brief Sets the lenght of a side
	*/
	void SetSideLenght(float fLenght);
	/**
	 * @brief Gets the lenght of a side
	 * @return A float with the lenght of a side
	*/
	float GetSideLenght();

	/**
	 * @brief Gets the coordinates of a corner of the square
	 * @return A Point2D object with the coordinates of a corner
	*/
	Point2D GetTopLeft();
	/**
	 * @brief Gets the coordinates of a corner of the square
	 * @return A Point2D object with the coordinates of a corner
	*/
	Point2D GetTopRight();
	/**
	 * @brief Gets the coordinates of a corner of the square
	 * @return A Point2D object with the coordinates of a corner
	*/
	Point2D GetBottomLeft();
	/**
	 * @brief Gets the coordinates of a corner of the square
	 * @return A Point2D object with the coordinates of a corner
	*/
	Point2D GetBottomRight();
	/**
	  * @brief Calculates the coordinates of the other three corners of a square
	*/

	/**
	 * @brief Operator Overloading for equal, copies the atributes from the object given as parameter
	 * @param C- object to copy
	*/
	void operator=(Square& C);

	void ComputeSquareCoordinates();
	/**
	  * @brief Prints the coordinates of the corners of a square
	*/
	void Print() override;
	/**
	  * @brief Calculates the lenght of a square
	  * @return The value of the perimeter calculated
	*/
	float ComputePerimeter() override;
	/**
	  * @brief Calculates the area of a circle
	  * @return The value of the aria calculated
	*/
	float ComputeArea() override;

protected:
	/**
	  * @brief Lenght of the side of a square
	*/
	float m_fSideLenght;

	/**
	  * @brief Top left point and coordinates of a square
	*/
	Point2D m_topLeft;

	/**
	  * @brief Top right point and coordinates of a square
	*/
	Point2D m_topRight;

	/**
	  * @brief Bottom left point and coordinates of a square
	*/
	Point2D m_bottomLeft;

	/**
	  * @brief Bottom right point and coordinates of a square
	*/
	Point2D m_bottomRight;
};
