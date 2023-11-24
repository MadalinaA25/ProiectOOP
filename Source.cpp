#include <iostream>
#include <conio.h>
#include <vector>

#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"

int main()
{
	/*std::vector <Circle> vecCircle;
	std::vector <Square> vecSquare;
	std::vector <Rectangle> vecRectangle;*/
	std::vector<std::unique_ptr<Shape>> shapes;

	while (1)
	{
		/*Menu*/
		std::cout << " 1 - Define a geometric form" << std::endl;
		std::cout << " 2 - Compute area of a geometric form" << std::endl;
		std::cout << " 3 - Compute perimeter of a geometric form" << std::endl;
		std::cout << " 4 - Display all forms" << std::endl;
		std::cout << " 5 - Exit " << std::endl;

		char cSelectedMenuOption = _getch();

		switch (cSelectedMenuOption)
		{
		case '1':

			try
			{
				while (cSelectedMenuOption != 'n')
				{
					std::cout << "What form do you want ?" << std::endl;
					std::cout << "1. Circle" << std::endl;
					std::cout << "2. Square" << std::endl;
					std::cout << "3. Rectangle" << std::endl;
					cSelectedMenuOption = _getch();
					switch (cSelectedMenuOption)
					{
					case '1': /*Circle*/
					{
						float fCenterX, fCenterY, fRadius;
						std::cout << "Enter x cordinate of center: ";
						std::cin >> fCenterX;
						std::cout << "Enter y cordinate of center: ";
						std::cin >> fCenterY;
						std::cout << "Enter radius: ";
						std::cin >> fRadius;
						shapes.push_back(std::make_unique<Circle>(Point2D(fCenterX, fCenterY), fRadius));
						//vecCircle.push_back(Circle(Point2D(fCenterX, fCenterY), fRadius));
						break;
					}

					case '2':  /*Square*/
					{
						float fTopLeftX, fTopLeftY, fLenght;
						std::cout << "Enter X cordinate of top-left square's point: ";
						std::cin >> fTopLeftX;
						std::cout << "Enter Y cordinate of top-left square's point: ";
						std::cin >> fTopLeftY;
						std::cout << "Enter square's lenght: ";
						std::cin >> fLenght;
						shapes.push_back(std::make_unique<Square>(Point2D(fTopLeftX, fTopLeftY), fLenght));
						//vecSquare.push_back(Square(Point2D(fTopLeftX, fTopLeftY), fLenght));
						break;
					}
					case '3':  /*Rectangle*/
					{
						float fTopLeftX, fTopLeftY, fWidth, fHeight;
						std::cout << "Enter X cordinate of top-left rectangle's point: ";
						std::cin >> fTopLeftX;
						std::cout << "Enter Y cordinate of top-left rectangle's point: ";
						std::cin >> fTopLeftY;
						std::cout << "Enter rectangle's width: ";
						std::cin >> fWidth;
						std::cout << "Enter rectangle's height: ";
						std::cin >> fHeight;
						shapes.push_back(std::make_unique<Rectangle>(Point2D(fTopLeftX, fTopLeftY), fWidth, fHeight));
						//vecRectangle.push_back(Rectangle(Point2D(fTopLeftX, fTopLeftY), fWidth, fHeight));
						break;
					}
					default:
						break;
					}
					std::cout << "Do you want to define more shapes? (y/n)";
					cSelectedMenuOption = _getch();
					std::cout << std::endl;
				}
			}
			catch (const CircleException& e) {
				std::cerr << "CircleException: " << e.what() << std::endl;
			}
			catch (const SquareException& e) {
				std::cerr << "SquareException: " << e.what() << std::endl;
			}
			catch (const RectangleException& e) {
				std::cerr << "RectangleException: " << e.what() << std::endl;
			}
			break;

		case '2':
			while (cSelectedMenuOption != 'n')
			{
				std::cout << "What form do you want ?" << std::endl;
				std::cout << "1. Circle" << std::endl;
				std::cout << "2. Square" << std::endl;
				std::cout << "3. Rectangle" << std::endl;
				cSelectedMenuOption = _getch();

				switch (cSelectedMenuOption)
				{
				case '1': /*Circle*/
				{
					std::cout << "Choose a circle index ";
					cSelectedMenuOption = _getch();
					int index = cSelectedMenuOption - '0';
					if (index < shapes.size())
					{
						Circle* circlePtr = dynamic_cast<Circle*>(shapes[index].get());
						if (circlePtr)
							std::cout << "Area of the chosen circle is: " << circlePtr->ComputeArea() << std::endl;

						else
							std::cout << "Chosen shape is not a circle." << std::endl;
					}
					else
						std::cout << "Invalid index." << std::endl;

					break;
				}

				case '2': /*Square*/
				{
					std::cout << "Choose a square index";
					cSelectedMenuOption = _getch();
					int index = cSelectedMenuOption - '0';
					if (index < shapes.size())
					{
						Square* squarePtr = dynamic_cast<Square*>(shapes[index].get());
						if (squarePtr)
							std::cout << "Area of the chosen square is: " << squarePtr->ComputeArea() << std::endl;

						else
							std::cout << "Chosen shape is not a square." << std::endl;
					}
					else
						std::cout << "Invalid index." << std::endl;

					break;
				}

				case '3': /*Rectangle*/
				{
					std::cout << "Choose a rectangle index";
					cSelectedMenuOption = _getch();
					int index = cSelectedMenuOption - '0';
					if (index < shapes.size())
					{
						Rectangle* rectanglePtr = dynamic_cast<Rectangle*>(shapes[index].get());
						if (rectanglePtr)
							std::cout << "Area of the chosen rectangle is: " << rectanglePtr->ComputeArea() << std::endl;

						else
							std::cout << "Chosen shape is not a rectangle." << std::endl;
					}
					else
						std::cout << "Invalid index." << std::endl;
					break;
				}
				default:
					break;
				}

				std::cout << "Do you want to know more perimeters?? (y/n)";
				cSelectedMenuOption = _getch();
				std::cout << std::endl;
			}
		case '3':
			while (cSelectedMenuOption != 'n')
			{
				std::cout << "What form do you want ?" << std::endl;
				std::cout << "1. Circle" << std::endl;
				std::cout << "2. Square" << std::endl;
				std::cout << "3. Rectangle" << std::endl;
				cSelectedMenuOption = _getch();

				switch (cSelectedMenuOption)
				{
				case '1': /*Circle*/
				{
					std::cout << "Choose a circle index ";
					cSelectedMenuOption = _getch();
					int index = cSelectedMenuOption - '0';
					if (index < shapes.size())
					{
						Circle* circlePtr = dynamic_cast<Circle*>(shapes[index].get());
						if (circlePtr)
							std::cout << "Area of the chosen circle is: " << circlePtr->ComputePerimeter() << std::endl;

						else
							std::cout << "Chosen shape is not a circle." << std::endl;
					}
					else
						std::cout << "Invalid index." << std::endl;

					break;
				}

				case '2': /*Square*/
				{
					std::cout << "Choose a square index";
					cSelectedMenuOption = _getch();
					int index = cSelectedMenuOption - '0';
					if (index < shapes.size())
					{
						Square* squarePtr = dynamic_cast<Square*>(shapes[index].get());
						if (squarePtr)
							std::cout << "Area of the chosen square is: " << squarePtr->ComputePerimeter() << std::endl;

						else
							std::cout << "Chosen shape is not a square." << std::endl;
					}
					else
						std::cout << "Invalid index." << std::endl;
					break;
				}

				case '3': /*Rectangle*/
				{
					std::cout << "Choose a rectangle index";
					cSelectedMenuOption = _getch();
					int index = cSelectedMenuOption - '0';
					if (index < shapes.size())
					{
						Rectangle* rectanglePtr = dynamic_cast<Rectangle*>(shapes[index].get());
						if (rectanglePtr)
							std::cout << "Area of the chosen rectangle is: " << rectanglePtr->ComputePerimeter() << std::endl;

						else
							std::cout << "Chosen shape is not a rectangle." << std::endl;
					}
					else
						std::cout << "Invalid index." << std::endl;
					break;
				}
				default:
					break;
				}

				std::cout << "Do you want to know more perimeters?? (y/n)";
				cSelectedMenuOption = _getch();
				std::cout << std::endl;
			}
		case '4': /*Display all forms*/
		{
			std::cout << "1 - Circles:" << std::endl;
			for (std::size_t index = 0; index < shapes.size(); ++index)
			{
				const std::unique_ptr<Shape>& shapePtr = shapes[index];
				Circle* circlePtr = dynamic_cast<Circle*>(shapePtr.get());
				if (circlePtr) {
					std::cout << "C" << index << "(" << circlePtr->GetCenter().GetX() << "," << circlePtr->GetCenter().GetY() <<
						") and R=" << circlePtr->GetRadius() << std::endl;
				}
			}

			std::cout << "2 - Squares:" << std::endl;
			for (std::size_t index = 0; index < shapes.size(); ++index)
			{
				const std::unique_ptr<Shape>& shapePtr = shapes[index];
				Square* squarePtr = dynamic_cast<Square*>(shapePtr.get());

				if (squarePtr) {
					std::cout << "S" << index <<
						" TL(" << squarePtr->GetTopLeft().GetX() << "," << squarePtr->GetTopLeft().GetY() << ")" <<
						" TR(" << squarePtr->GetTopRight().GetX() << "," << squarePtr->GetTopRight().GetY() << ")" <<
						" BL(" << squarePtr->GetBottomLeft().GetX() << "," << squarePtr->GetBottomLeft().GetY() << ")" <<
						" BR(" << squarePtr->GetBottomRight().GetX() << "," << squarePtr->GetBottomRight().GetY() << ")" << std::endl;
				}
			}
			std::cout << "3 - Rectangles:" << std::endl;
			for (std::size_t index = 0; index < shapes.size(); ++index)
			{
				const std::unique_ptr<Shape>& shapePtr = shapes[index];
				Rectangle* rectanglePtr = dynamic_cast<Rectangle*>(shapePtr.get());

				if (rectanglePtr)
				{
					std::cout << "S" << index <<
						" TL(" << rectanglePtr->GetTopLeft().GetX() << "," << rectanglePtr->GetTopLeft().GetY() << ")" <<
						" TR(" << rectanglePtr->GetTopRight().GetX() << "," << rectanglePtr->GetTopRight().GetY() << ")" <<
						" BL(" << rectanglePtr->GetBottomLeft().GetX() << "," << rectanglePtr->GetBottomLeft().GetY() << ")" <<
						" BR(" << rectanglePtr->GetBottomRight().GetX() << "," << rectanglePtr->GetBottomRight().GetY() << ")" << std::endl;
				}
			}
		}
		break;
		case '5':
			return 0;
		default:
			break;
		}
	}
	return 0;
}