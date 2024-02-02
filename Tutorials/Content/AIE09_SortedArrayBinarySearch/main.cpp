#include <iostream>

#include "Utilities.h"

int main()
{
	const int NUM_ITEMS = 8;
	int arr[NUM_ITEMS] = { 1, 3, 5, 7, 9, 11, 13, 15 };

	// Ternary Operator
	// CONDITION ? TRUE_VAL : FALSE_VAL
	// ? = if
	// : = else
	// if(CONDITION) return TRUE_VAL else return FALSE_VAL
	std::cout << (BinarySearch(arr, NUM_ITEMS, 9) != nullptr ? "Found" : "Not Found") << std::endl;
	std::cout << (BinarySearch(arr, NUM_ITEMS, 1) != nullptr ? "Found" : "Not Found") << std::endl;
	std::cout << (BinarySearch(arr, NUM_ITEMS, 15) != nullptr ? "Found" : "Not Found") << std::endl;
	std::cout << (BinarySearch(arr, NUM_ITEMS, 0) != nullptr ? "Found" : "Not Found") << std::endl;

	return 0;
}