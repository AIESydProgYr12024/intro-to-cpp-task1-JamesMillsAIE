#include "Actor.h"

Actor::Actor()
	: m_pos{ 0, 0 }
{
}

Actor::Actor(Vector2 _position)
	: m_pos{ _position }
{
}

Actor::~Actor()
{
	m_pos = {};
}

void Actor::BeginPlay() {}

void Actor::Tick(float _deltaTime) {}

void Actor::Render() {}

void Actor::EndPlay() {}