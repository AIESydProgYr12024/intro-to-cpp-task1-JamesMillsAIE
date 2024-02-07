#include "InheritanceApplication.h"

#include <raylib/raylib.h>

#include "Player.h"
#include "ActorManager.h"

InheritanceApplication::InheritanceApplication(const char* _title, int _w, int _h)
	: m_title{ _title }, m_width{ _w }, m_height{ _h }, m_actorManager{ nullptr }
{
}

InheritanceApplication::~InheritanceApplication()
{
	delete m_actorManager;
	m_actorManager = nullptr;
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
	m_actorManager = new ActorManager;

	m_actorManager->Spawn(
		new Player(
			Vector2
			{
				static_cast<float>(m_width) * 0.5f,
				static_cast<float>(m_height) * 0.5f
			},
			30.f, 100.f
		)
	);
}

void InheritanceApplication::Tick(float _deltaTime)
{
	m_actorManager->Tick(_deltaTime);
}

void InheritanceApplication::Render()
{
	m_actorManager->Render();
}

void InheritanceApplication::EndPlay()
{
}
