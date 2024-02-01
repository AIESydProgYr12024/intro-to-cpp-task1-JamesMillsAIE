#include <iostream>

#include "ShapeMaths.h"

int main()
{
	double radius;

	std::cout << "Circle Calculator:" << std::endl;
	std::cout << "	Radius: ";
	std::cin >> radius;

	std::cout << "	Circumference: " << CircleCircumference(radius) << std::endl;
	std::cout << "	Area: " << CircleArea(radius) << std::endl;

	double width = 0;
	double height = 0;

	std::cout << std::endl << "Rectangle Calculator:" << std::endl;
	std::cout << "	Width: ";
	std::cin >> width;
	std::cout << "	Height: ";
	std::cin >> height;

	std::cout << "	Perimeter: " << RectPerimeter(width, height) << std::endl;
	std::cout << "	Area: " << RectArea(width, height) << std::endl;

	return 0;
}