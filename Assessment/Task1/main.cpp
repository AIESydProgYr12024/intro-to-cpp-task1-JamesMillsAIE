#include <iostream>

#include "String.h"

int main()
{
	String a = String("banana");
	String b = a;

	b = std::move(a);

	return 0;
}