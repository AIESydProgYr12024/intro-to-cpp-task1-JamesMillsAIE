#include <iostream>

void PrintIntAndChange(int _someInt);
void PrintIntPtrAndChange(int* _someInt);

int main()
{
	// Initialise an integer with the value of 50
	int someInt = 50;

	// Print out the current value of the int
	std::cout << "============================" << std::endl;
	std::cout << "Some Int is: " << someInt << std::endl;
	std::cout << "============================" << std::endl;

	// Initialise an int pointer to the memory of the someInt variable
	int* someIntPtr = &someInt;

	// Print out the memory address and value of the pointer
	std::cout << "Some Int Ptr Address is: " << someIntPtr << std::endl;
	std::cout << "Some Int Ptr Value is: " << *someIntPtr << std::endl;
	std::cout << "============================" << std::endl;

	// Initialise an int pointer to the SAME memory of the someIntPtr variable
	int* someOtherIntPtr = someIntPtr;

	// Print out the memory address and value of the pointer
	std::cout << "Some Other Int Ptr Address is: " << someOtherIntPtr << std::endl;
	std::cout << "Some Other Int Ptr Value is: " << *someOtherIntPtr << std::endl;
	std::cout << "============================" << std::endl;

	// Change the value of the initial pointer
	someInt = 69;

	// Print of the VALUES of all 3 variables
	std::cout << "Some Int Value is: " << someInt << std::endl;
	std::cout << "Some Int Ptr Value is: " << *someIntPtr << std::endl;
	std::cout << "Some Other Int Ptr Value is: " << *someOtherIntPtr << std::endl;
	std::cout << "============================" << std::endl;

	// Change the value of the someIntPtr memory
	*someIntPtr = 420;

	// Print of the VALUES of all 3 variables
	std::cout << "Some Int Value is: " << someInt << std::endl;
	std::cout << "Some Int Ptr Value is: " << *someIntPtr << std::endl;
	std::cout << "Some Other Int Ptr Value is: " << *someOtherIntPtr << std::endl;
	std::cout << "============================" << std::endl;

	// Pass the original int variable into the function
	PrintIntAndChange(someInt);

	// Print out the value of someInt after the value has changed
	std::cout << "============================" << std::endl;
	std::cout << "SomeInt after PrintIntAndChange is: " << someInt << std::endl;

	// Pass the original int variable into the function
	PrintIntPtrAndChange(&someInt);

	// Print out the value of someInt after the value has changed
	std::cout << "============================" << std::endl;
	std::cout << "SomeInt after PrintIntPtrAndChange is: " << someInt << std::endl;
	std::cout << "============================" << std::endl;

	// Re-initialise the first pointer to new memory
	someIntPtr = new int(420);

	// Print out the values/memory addresses of all 3 variables
	std::cout << "Some Int Value is: " << someInt << std::endl;
	std::cout << "Some Int Ptr Address is: " << someIntPtr << std::endl;
	std::cout << "Some Int Ptr Value is: " << *someIntPtr << std::endl;
	std::cout << "Some Other Int Ptr Address is: " << someOtherIntPtr << std::endl;
	std::cout << "Some Other Int Ptr Value is: " << *someOtherIntPtr << std::endl;
	std::cout << "============================" << std::endl;

	// Delete the memory of the first pointer
	delete someIntPtr;
	someIntPtr = nullptr;

	std::cout << "Some Int Ptr Address is: " << someIntPtr << std::endl;

	someIntPtr = &someInt;
	delete someIntPtr;

	//std::cout << "Some Int Ptr Value is: " << *someIntPtr << std::endl;
	std::cout << "Some Other Int Ptr Value is: " << *someOtherIntPtr << std::endl;

	return 0;
}

void PrintIntAndChange(int _someInt)
{
	// Print out the value of the parameter BEFORE changing it
	std::cout << "Before: " << _someInt << std::endl;

	// Set the parameter to a new value
	_someInt = 50;

	// Print of the value of the paramter AFTER changing it
	std::cout << "After: " << _someInt << std::endl;
}

void PrintIntPtrAndChange(int* _someInt)
{
	// Print out the value of the parameter BEFORE changing it
	std::cout << "Before: " << *_someInt << std::endl;

	// Set the parameter to a new value
	*_someInt = 50;

	// Print of the value of the paramter AFTER changing it
	std::cout << "After: " << *_someInt << std::endl;
}