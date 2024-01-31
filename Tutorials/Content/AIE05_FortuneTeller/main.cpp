#include <iostream>
#include <string>

using std::string;

int main()
{
	int numChildren = 0;
	string partnersName;
	string geoLocation;
	string jobTitle;

	std::cout << "How many children do you want? ";
	std::cin >> numChildren;
	std::cin.ignore();

	std::cout << "What is your partner's name? ";
	std::getline(std::cin, partnersName);
	//std::cin >> partnersName;
	//std::cin.ignore();

	std::cout << "Where do you live? ";
	std::cin >> geoLocation;
	std::cin.ignore();

	std::cout << "What is your job? ";
	std::cin >> jobTitle;
	std::cin.ignore();

	std::cout << std::endl;

	std::cout << "You will be a " << jobTitle << " in " << geoLocation << ", an married to " <<
		partnersName << " with " << numChildren << " children." << std::endl;

	return 0;
}