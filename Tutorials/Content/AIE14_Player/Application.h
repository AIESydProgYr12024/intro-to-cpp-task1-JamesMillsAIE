#pragma once

class Player;

class Application
{
public:
	Application(const char* _title, int _w, int _h);
	~Application();

public:
	void Run();

private:
	const char* m_title;
	int m_width;
	int m_height;

	Player* m_player;

private:
	void BeginPlay();

	void Tick(float _dt);
	void Render();

	void EndPlay();

};