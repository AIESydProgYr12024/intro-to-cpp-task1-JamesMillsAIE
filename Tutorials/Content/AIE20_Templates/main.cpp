#include <iostream>

#include "Array.h"

void PrintValues(int _val, int _index);

double Add(double _a, double _b);

template<typename T>
T Mul(T _a, T _b);

int main()
{
	double a = 4.2;
	double b = 6.9;

	std::cout << "A + B (double non-template): " << Add(a, b) << std::endl;

	float c = 13.37f;
	float d = 11.11f;

	std::cout << "A * B (Mul template - double): " << Mul<double>(a, b) << std::endl;
	std::cout << "C * D (Mul template - float): " << Mul<float>(c, d) << std::endl;
	std::cout << "5 * 8 (Mul template - int): " << Mul<int>(5, 8) << std::endl;

	const int ARRAY_SIZE = 16;
	Array<int, ARRAY_SIZE> templateArray;

	templateArray.ForEach(&PrintValues);

	int values[ARRAY_SIZE] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
	templateArray = Array<int, ARRAY_SIZE>(values);

	templateArray.ForEach(&PrintValues);

	for (size_t i = 0; i < ARRAY_SIZE; ++i)
	{
		templateArray.Set(i, values[(ARRAY_SIZE - 1) - i]);
	}

	templateArray.ForEach(&PrintValues);

	return 0;
}

void PrintValues(int _val, int _index)
{
	std::cout << "Value at index: " << _index << " is: " << _val << std::endl;
}

double Add(double _a, double _b)
{
	return _a + _b;
}

template<typename T>
T Mul(T _a, T _b)
{
	return _a * _b;
}