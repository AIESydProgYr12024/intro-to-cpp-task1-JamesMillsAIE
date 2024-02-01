#pragma once

#include <string>
#include <vector>

using std::string;
using std::vector;

class BrainF
{
public:
	BrainF(string _code);

public:
	string Parse();

private:
	// the actual brainfuck commands
	string m_code;

	vector<int> m_stack;

	size_t m_stackTracker;
	size_t m_bracketTracker;

private:
	void HandleCharacter(size_t& _index, string& _text);

	void MoveTrackerRight();
	void MoveTrackerLeft();

	void IncrementCurrentStackPos();
	void DecrementCurrentStackPos();

	void MoveToClosingBracket(size_t& _index);
	void MoveToOpeningBracket(size_t& _index);

};