#pragma once

#include "Actor.h"

class Player : public Actor
{
public:
	Player();
	Player(Vector2 _position, float _radius, float _speed);
	~Player() override;

public:
	void Tick(float _deltaTime) override;
	void Render() override;

private:
	float m_radius;
	float m_speed;

};