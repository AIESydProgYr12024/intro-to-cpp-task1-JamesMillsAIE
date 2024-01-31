#include <iostream>

double Round(double _v);
double ToFahrenheit(double _celsius);
double ToCelsius(double _fahrenheit);

int main()
{
	double celsius = 12.5;
	double fahrenheit = 40.5;

	std::cout << celsius << " in fahrenheit is " << ToFahrenheit(celsius) << std::endl;
	std::cout << fahrenheit << " in celsius is " << ToCelsius(fahrenheit) << std::endl;

	return 0;
}

double Round(double _v)
{
	return ceil(_v * 100.0) / 100.0;
}

double ToFahrenheit(double _celsius)
{
	return Round(_celsius * 9.0 / 5.0 + 32.0);
}

double ToCelsius(double _fahrenheit)
{
	return Round((_fahrenheit - 32.0) * 5.0 / 9.0);
}