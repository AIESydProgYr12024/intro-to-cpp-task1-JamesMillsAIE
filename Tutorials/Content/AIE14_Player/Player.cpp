#include "Player.h"

Player::Player(float _x, float _y, Color _color, float _radius, float _speed)
	: m_position{ _x, _y }, m_color{ _color }, m_radius{ _radius }, m_speed{ _speed }
{
}

Player::~Player()
{
	m_position = {};
	m_color = {};

	m_radius = 0.f;
	m_speed = 0.f;
}

void Player::BeginPlay()
{
}

void Player::Tick(float _dt)
{
	if (IsKeyDown(KEY_W))
	{
		m_position.y -= m_speed * _dt;
	}

	if (IsKeyDown(KEY_S))
	{
		m_position.y += m_speed * _dt;
	}

	if (IsKeyDown(KEY_A))
	{
		m_position.x -= m_speed * _dt;
	}

	if (IsKeyDown(KEY_D))
	{
		m_position.x += m_speed * _dt;
	}
}

void Player::Render()
{
	DrawCircleV(m_position, m_radius, m_color);
}

void Player::EndPlay()
{
}
