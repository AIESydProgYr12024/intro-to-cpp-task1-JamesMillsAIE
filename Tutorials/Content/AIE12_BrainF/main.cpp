#include <iostream>

#include "BrainF.h"

int main()
{
	BrainF parser = BrainF("++++++++[>++++[>++>+++>+++>+<<<<-]>+>+>->>+[<]<-]>>.>---.+++++++..+++.>>.<-.<.+++.------.--------.>>+.>++.");

	std::cout << parser.Parse() << std::endl;

	return 0;
}