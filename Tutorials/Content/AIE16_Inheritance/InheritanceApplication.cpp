#include "InheritanceApplication.h"

#include <raylib/raylib.h>

#include "Player.h"

InheritanceApplication::InheritanceApplication(const char* _title, int _w, int _h)
	: m_title{ _title }, m_width{ _w }, m_height{ _h }, m_player{ nullptr }
{
}

InheritanceApplication::~InheritanceApplication()
{
	delete m_player;
	m_player = nullptr;
}

void InheritanceApplication::Run()
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

void InheritanceApplication::BeginPlay()
{
	m_player = new Player(
		Vector2
		{
			static_cast<float>(m_width) * 0.5f,
			static_cast<float>(m_height) * 0.5f
		},
		30.f, 100.f
	);

	m_player->BeginPlay();
}

void InheritanceApplication::Tick(float _deltaTime)
{
	m_player->Tick(_deltaTime);
}

void InheritanceApplication::Render()
{
	m_player->Render();
}

void InheritanceApplication::EndPlay()
{
	m_player->EndPlay();
}
