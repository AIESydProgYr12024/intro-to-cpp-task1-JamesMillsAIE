#include "Application.h"

#include <raylib/raylib.h>

Application::Application(const char* _title, int _w, int _h)
	: m_title{ _title }, m_width{ _w }, m_height{ _h }
{
}

Application::~Application() = default;

void Application::Run()
{
	InitWindow(m_width, m_height, m_title);

	BeginPlay();

	while (!WindowShouldClose())
	{
		Tick(GetFrameTime());

		BeginDrawing();
		ClearBackground(RAYWHITE);

		Render();

		EndDrawing();
	}

	EndPlay();

	CloseWindow();
}

void Application::BeginPlay()
{
}

void Application::Tick(float _deltaTime)
{
}

void Application::Render()
{
	DrawCircle(m_width / 2, m_height / 2, 20.0f, RED);
}

void Application::EndPlay()
{
}
