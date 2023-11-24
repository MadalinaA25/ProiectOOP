#include "Square.h"

Square::Square(Point2D ptTopLeft, float fLenght) {
	if (fLenght <= 0) {
		throw SquareException(); // Throw SquareException for invalid length
	}

	this->m_topLeft = ptTopLeft;
	this->m_fSideLenght = fLenght;
}

Square::Square(const Square& C) {
	this->m_topLeft = C.m_topLeft;
	this->m_topRight = C.m_topRight;
	this->m_bottomLeft = C.m_bottomLeft;
	this->m_bottomRight = C.m_bottomRight;
	this->m_fSideLenght = C.m_fSideLenght;
}

void Square::SetSideLenght(float fLenght) {
	float auxLenght = this->m_fSideLenght - fLenght >= 0;
	this->m_fSideLenght = fLenght;

	m_topRight.SetX(m_topLeft.GetX() + auxLenght);
	m_topRight.SetY(m_topLeft.GetY());

	m_bottomLeft.SetX(m_topLeft.GetX());
	m_bottomLeft.SetY(m_topLeft.GetY() - auxLenght);

	m_bottomRight.SetX(m_topLeft.GetX() + auxLenght);
	m_bottomRight.SetY(m_topLeft.GetY() - auxLenght);
}

float Square::GetSideLenght() {
	return m_fSideLenght;
}

Point2D Square::GetTopLeft() {
	return m_topLeft;
}
Point2D Square::GetTopRight() {
	return m_topRight;
}
Point2D Square::GetBottomLeft() {
	return m_bottomLeft;
}
Point2D Square::GetBottomRight() {
	return m_bottomRight;
}

void Square::operator=(Square& C) {
	this->m_topLeft = C.m_topLeft;
	this->m_topRight = C.m_topRight;
	this->m_bottomLeft = C.m_bottomLeft;
	this->m_bottomRight = C.m_bottomRight;
}

void Square::Print() {
	std::cout << std::endl << "Top Left X: " << m_topLeft.GetX() << " Top Left Y: " << m_topLeft.GetY() << std::endl;
	std::cout << "Top Right X: " << m_topRight.GetX() << " Top Left Y: " << m_topRight.GetY() << std::endl;
	std::cout << "Buttom Left X: " << m_bottomLeft.GetX() << " Top Left Y: " << m_bottomLeft.GetY() << std::endl;
	std::cout << "Top Left X: " << m_bottomRight.GetX() << " Top Left Y: " << m_bottomRight.GetY() << std::endl;
}

void Square::ComputeSquareCoordinates() {
	m_topRight.SetX(m_topLeft.GetX() + m_fSideLenght);
	m_topRight.SetY(m_topLeft.GetY());

	m_bottomLeft.SetX(m_topLeft.GetX());
	m_bottomLeft.SetY(m_topLeft.GetY() - m_fSideLenght);

	m_bottomRight.SetX(m_topLeft.GetX() + m_fSideLenght);
	m_bottomRight.SetY(m_topLeft.GetY() - m_fSideLenght);
}

float Square::ComputeArea() {
	return pow(this->m_fSideLenght, 2);
}

float Square::ComputePerimeter() {
	return this->m_fSideLenght * 4;
}