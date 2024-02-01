#include "ConsoleApplication.h"

int main()
{
	ConsoleApplication console;

	console.LogMessage("Hello, World!");
	console.NewLine();

	console.LogMessageNewLine("Hello, World from LogMessageNewLine!");

	return 0;
}