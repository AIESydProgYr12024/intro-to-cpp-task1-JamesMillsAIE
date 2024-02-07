#pragma once

#include <raylib/raylib.h>

class Actor
{
public:
	Actor();
	Actor(Vector2 _position);
	virtual ~Actor();

public:
	virtual void BeginPlay();

	virtual void Tick(float _deltaTime);
	virtual void Render();

	virtual void EndPlay();

protected:
	Vector2 m_pos;

};