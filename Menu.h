// ShapeManager.h
#pragma once

#include <vector>
#include <memory>
#include "Shape.h"

#include <iostream>
#include <conio.h>
#include <vector>

#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"

class Menu {
private:
	std::vector<std::unique_ptr<Shape>> shapes;
	static Menu* instance;

	// Private constructor to prevent instantiation
	Menu() {}

	// Function to display the menu
	void displayMenu();

	// Function to handle user input and perform actions accordingly
	void handleMenuOption(char option);

public:
	// Function to get the instance of the Singleton class
	static Menu* getInstance();

	// Function to get the vector of shapes
	std::vector<std::unique_ptr<Shape>>& getShapes();

	// Function to start the menu loop
	void startMenu();

	// Other functions to manage the shapes vector can be added here

	// Destructor to clean up resources
	~Menu();
};
