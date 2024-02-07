#include "ActorManager.h"

#include "Actor.h"

ActorManager::ActorManager()
{
}

ActorManager::~ActorManager()
{
	for (auto& actor : m_actors)
	{
		actor->EndPlay();
		delete actor;
	}

	m_actors.clear();
}

void ActorManager::Spawn(Actor* _actor)
{
	_actor->BeginPlay();
	m_actors.emplace_back(_actor);
}

void ActorManager::Destroy(Actor* _actor)
{
	_actor->EndPlay();
	m_actors.remove(_actor);
	delete _actor;
}

void ActorManager::Tick(float _deltaTime)
{
	for (auto& actor : m_actors)
	{
		actor->Tick(_deltaTime);
	}
}

void ActorManager::Render()
{
	for (auto& actor : m_actors)
	{
		actor->Render();
	}
}
