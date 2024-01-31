#include <iostream>
#include <ctime>

int main()
{
	// seed random
	// this will allow random numbers to be unique every time we run the program... ish
	srand(time(nullptr));

	// generate a random number to be guessed from 0-100
	// we can make it const as it never changes
	const int randomNumber = rand() % 101;

	int guess;

	do
	{
		// prompt for input
		std::cout << "Enter your guess: ";
		std::cin >> guess;

		// Feedback to the user (higher or lower)
		if (randomNumber < guess)
		{
			std::cout << "Lower" << std::endl;
		}

		if (randomNumber > guess)
		{
			std::cout << "Higher" << std::endl;
		}
	} 
	while (randomNumber != guess);

	std::cout << "Correct!" << std::endl;

	return 0;
}