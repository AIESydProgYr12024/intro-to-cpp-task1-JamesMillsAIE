#pragma once

class Player;

class InheritanceApplication
{
public:
	InheritanceApplication(const char* _title, int _w, int _h);
	~InheritanceApplication();

public:
	void Run();

private:
	const char* m_title;
	int m_width;
	int m_height;

	Player* m_player;

private:
	void BeginPlay();

	void Tick(float _deltaTime);
	void Render();

	void EndPlay();

};