#include <iostream>
#include <vector>

using std::vector;

vector<int> GetFibonacciNumbers(int _count);

int main()
{
	// Get the first 10 digits of the fibonacci sequence
	vector<int> fibNumbers = GetFibonacciNumbers(10);

	for (int num : fibNumbers)
	{
		std::cout << num << ", ";
	}

	return 0;
}

vector<int> GetFibonacciNumbers(int _count)
{
	vector<int> result;

	if (_count >= 1)
	{
		result.emplace_back(0);
	}

	if (_count >= 2)
	{
		result.emplace_back(1);
	}

	// F O R
	// First Value
	// Operator
	// Rate
	for (int i = 2; i < _count; ++i)
	{
		result.emplace_back(result[i - 1] + result[i - 2]);
	}

	return result;
}