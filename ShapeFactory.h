// ShapeFactory.h
#pragma once
#include <memory>
#include <string>
#include "Shape.h"
#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"

class ShapeFactory {
public:
	template <typename T>
	static std::unique_ptr<Shape> createShape(const std::string& shapeType);
};

template <>
std::unique_ptr<Shape> ShapeFactory::createShape<Circle>(const std::string& shapeType) {
	float centerX, centerY, radius;

	centerX = 0.0f;
	centerY = 0.0f;
	radius = 1.0f;

	return std::make_unique<Circle>(Point2D(centerX, centerY), radius);
}

template <>
std::unique_ptr<Shape> ShapeFactory::createShape<Square>(const std::string& shapeType) {
	float topLeftX, topLeftY, length;

	topLeftX = 0.0f;
	topLeftY = 0.0f;
	length = 1.0f;

	return std::make_unique<Square>(Point2D(topLeftX, topLeftY), length);
}

template <>
std::unique_ptr<Shape> ShapeFactory::createShape<Rectangle>(const std::string& shapeType) {
	float topLeftX, topLeftY, width, height;

	topLeftX = 0.0f;
	topLeftY = 0.0f;
	width = 2.0f;
	height = 1.0f;

	return std::make_unique<Rectangle>(Point2D(topLeftX, topLeftY), width, height);
}
