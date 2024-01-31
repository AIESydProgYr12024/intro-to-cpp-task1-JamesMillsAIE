#include <iostream>
#include <numbers>

using std::numbers::pi_v;

double Round(double _v)
{
	return ceil(_v * 100.0) / 100.0;
}

int main()
{
	int radius = 4;

	double circumference = Round(2 * pi_v<double> * radius);
	double area = Round(pi_v<double> * pow(radius, 2));

	std::cout << "The circumference is: " << circumference << std::endl;
	std::cout << "The area is: " << area << std::endl;

	return 0;
}