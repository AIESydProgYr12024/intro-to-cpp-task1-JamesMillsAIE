#pragma once

#include <list>

using std::list;

class Actor;

class ActorManager
{
public:
	ActorManager();
	~ActorManager();

public:
	void Spawn(Actor* _actor);
	void Destroy(Actor* _actor);

	void Tick(float _deltaTime);
	void Render();

private:
	list<Actor*> m_actors;

};