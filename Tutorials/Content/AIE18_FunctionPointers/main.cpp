#include <iostream>

typedef void(*PrintFunction)();
typedef double(*MathFunction)(double, double);

void PrintHelloWorld();
void PrintWorldHello();

void RunMathFunction(MathFunction _fnc, double _a, double _b);

double Add(double _a, double _b);
double Sub(double _a, double _b);
double Mul(double _a, double _b);
double Div(double _a, double _b);

int main()
{
	PrintFunction fnc = nullptr;
	fnc = &PrintHelloWorld;
	fnc();

	fnc = &PrintWorldHello;
	fnc();

	const double a = 4.2;
	const double b = 6.9;
	MathFunction fncs[] = { &Add, &Sub, &Mul, &Div };

	for (MathFunction func : fncs)
		RunMathFunction(func, a, b);

	RunMathFunction(&Add, a, b);
	RunMathFunction(&Sub, a, b);
	RunMathFunction(&Mul, a, b);
	RunMathFunction(&Div, a, b);


	return 0;
}

void PrintHelloWorld()
{
	std::cout << "Hello, World!" << std::endl;
}

void PrintWorldHello()
{
	std::cout << "World, Hello!" << std::endl;
}

void RunMathFunction(MathFunction _fnc, double _a, double _b)
{
	std::cout << _fnc(_a, _b) << std::endl;
}

double Add(double _a, double _b)
{
	return _a + _b;
}

double Sub(double _a, double _b)
{
	return _a - _b;
}

double Mul(double _a, double _b)
{
	return _a * _b;
}

double Div(double _a, double _b)
{
	return _a / _b;
}