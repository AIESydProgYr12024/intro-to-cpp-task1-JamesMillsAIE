#pragma once

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

private:
	void BeginPlay();

	void Tick(float _deltaTime);
	void Render();

	void EndPlay();

};