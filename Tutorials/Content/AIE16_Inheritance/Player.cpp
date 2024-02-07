#include "Player.h"

Player::Player()
	: Actor(), m_radius{ 50.f }, m_speed{ 50.f }
{

}

Player::Player(Vector2 _position, float _radius, float _speed)
	: Actor(_position), m_radius{ _radius }, m_speed{ _speed }
{

}

Player::~Player()
{
	Actor::~Actor();

	m_radius = 0.f;
	m_speed = 0.f;
}

void Player::Tick(float _deltaTime)
{
	if (IsKeyDown(KEY_W))
		m_pos.y -= m_speed * _deltaTime;

	if (IsKeyDown(KEY_S))
		m_pos.y += m_speed * _deltaTime;

	if (IsKeyDown(KEY_D))
		m_pos.x += m_speed * _deltaTime;

	if (IsKeyDown(KEY_A))
		m_pos.x -= m_speed * _deltaTime;
}

void Player::Render()
{
	DrawCircleV(m_pos, m_radius, RED);
}