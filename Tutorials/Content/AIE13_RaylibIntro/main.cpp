#include "Application.h"

int main()
{
	Application app = Application("My First Raylib Project", 640, 480);
	int size = sizeof(app);

	app.Run();

	return 0;
}