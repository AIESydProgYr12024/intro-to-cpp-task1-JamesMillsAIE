#include <iostream>

int main()
{
	// Create a string and print it out... this one cannot be modified by
	// string functions... but it can be re-allocated.
	const char* firstName = "James";
	std::cout << firstName << std::endl;

	// Create another string and print it out... this one cannot be modified by
	// string functions... but it can be re-allocated.
	const char* lastName = "Mills";
	std::cout << lastName << std::endl;

	// Create a buffer for a full name. This one will NOT be const as it needs
	// to be able to be modified by string functions.
	char* fullName = new char[30];

	// Copy the first name into the buffer... we need to make sure we use the _s
	// version of the functions, as the others aren't safe. The second parameter
	// is the amount of memory in bytes that will be in the buffer AFTER copying
	strcpy_s(fullName, 6, firstName);

	// Print out the full name
	std::cout << fullName << std::endl;

	// concatenate a space to the end of the buffer. Concatenation means to ADD or combine
	// the buffer size must be the size of the string AFTER modification
	// Remember... the NULL terminator (\0) is a part of the string!
	strcat_s(fullName, 7, " ");
	// concatenate the last name into the buffer.
	strcat_s(fullName, 12, lastName);

	// Print out the full name
	std::cout << fullName << std::endl;

	// Loop through all characters in the string and print them out
	for (size_t i = 0; i < strlen(fullName) + 1; ++i)
	{
		std::cout << fullName[i] << std::endl;
	}

	// Create a new string with the same size as the original
	char* fullNameCopy = new char[strlen(fullName)];

	// copy all of the data from the original to this copy
	strcpy_s(fullNameCopy, strlen(fullName) + 1, fullName);

	// Print out the full name
	std::cout << fullNameCopy << std::endl;

	// Check if the strings are the same... 0 means they are!
	if (strcmp(fullName, fullNameCopy) == 0)
	{
		std::cout << "The names are the same!" << std::endl;
	}

	// Check if the strings are the same... not 0 means they aren't!
	if (strcmp(firstName, lastName) == 1)
	{
		std::cout << "The names are not the same!" << std::endl;
	}

	return 0;
}