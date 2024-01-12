#include "Menu.h"
#include "GenericCollection.h"
#include "ShapeFactory.h"

int main() {

	//implementation for template class
	GenericCollection<Circle> circleCollection;

	Circle circle1(Point2D(0, 0), 5);
	Circle circle2(Point2D(1, 1), 3);

	circleCollection.addItem(circle1);
	circleCollection.addItem(circle2);

	circleCollection.displayItems();

	//implementation for factory pattern
	std::vector<std::unique_ptr<Shape>> shapes;

	std::string shapeType;
	std::cout << "Enter shape type (Circle/Square/Rectangle): ";
	std::cin >> shapeType;

	if (shapeType == "Circle") {
		shapes.push_back(ShapeFactory::createShape<Circle>(shapeType));
	}
	else if (shapeType == "Square") {
		shapes.push_back(ShapeFactory::createShape<Square>(shapeType));
	}
	else if (shapeType == "Rectangle") {
		shapes.push_back(ShapeFactory::createShape<Rectangle>(shapeType));
	}
	else {
		std::cerr << "Invalid shape type." << std::endl;
	}

	Menu* menu = Menu::getInstance();
	menu->startMenu();
	delete menu;

	return 0;
}