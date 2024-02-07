#include "InheritanceApplication.h"

int main()
{
	InheritanceApplication* app = new
		InheritanceApplication("Polymorphism", 720, 480);

	app->Run();

	delete app;

	return 0;
}