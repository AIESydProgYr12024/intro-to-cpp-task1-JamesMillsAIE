#include "ConsoleApplication.h"

#include <iostream>

ConsoleApplication::ConsoleApplication()
{
}

void ConsoleApplication::LogMessage(string _message)
{
	std::cout << _message;
}

void ConsoleApplication::LogMessageNewLine(string _message)
{
	// std::cout << _message << std::endl;
	LogMessage(_message);
	NewLine();
}

void ConsoleApplication::NewLine()
{
	std::cout << std::endl;
}
