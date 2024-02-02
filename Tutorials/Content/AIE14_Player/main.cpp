#include "Application.h"

int main()
{
	Application* app = new Application("Player example", 640, 480);

	app->Run();

	delete app;
	app = nullptr;

	return 0;
}