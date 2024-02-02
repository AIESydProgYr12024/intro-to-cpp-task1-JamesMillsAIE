#include "Application.h"
#include <raylib/raylib.h>

#include "Player.h"

Application::Application(const char* _title, int _w, int _h)
	: m_title{ _title }, m_width{ _w }, m_height{ _h },
	m_player{ new Player(_w * 0.5f, _h * 0.5f, RED, 25.f, 100.f) }
{

}

Application::~Application()
{
	delete m_player;
	m_player = nullptr;

	m_title = nullptr;

	m_width = 0;
	m_height = 0;
}

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
	m_player->BeginPlay();
}

void Application::Tick(float _dt)
{
	m_player->Tick(_dt);
}

void Application::Render()
{
	m_player->Render();
}

void Application::EndPlay()
{
	m_player->EndPlay();
}