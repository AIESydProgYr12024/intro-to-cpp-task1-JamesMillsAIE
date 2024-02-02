#pragma once

#include <raylib/raylib.h>

class Player
{
public:
	Player(float _x, float _y, Color _color, float _radius, float _speed);
	~Player();

public:
	void BeginPlay();

	void Tick(float _dt);
	void Render();

	void EndPlay();

private:
	Vector2 m_position;
	Color m_color;

	float m_radius;
	float m_speed;

};