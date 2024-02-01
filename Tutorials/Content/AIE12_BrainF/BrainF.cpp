#include "BrainF.h"

BrainF::BrainF(string _code)
	: m_code{ std::move(_code) }, m_stack{ {  } }, m_stackTracker{ 0 }, m_bracketTracker{ 0 }
{
}

string BrainF::Parse()
{
	string text;

	m_stack.clear();
	m_stack.emplace_back(0);

	for (size_t i = 0; i < m_code.size(); ++i)
	{
		HandleCharacter(i, text);
	}

	return text;
}

void BrainF::HandleCharacter(size_t& _index, string& _text)
{
	switch (m_code[_index])
	{
		// > - Move the tracker right
	case '>':
		MoveTrackerRight();
		break;

		// < - Move the tracker left
	case '<':
		MoveTrackerLeft();
		break;

		// + - Add 1 to the current position of the stack
	case '+':
		IncrementCurrentStackPos();
		break;

		// - - Minus 1 from the current position of the stack
	case '-':
		DecrementCurrentStackPos();
		break;

		// [ - If m_stack[position] = 0. Move to closing bracket
	case '[':
		MoveToClosingBracket(_index);
		break;

		// ] - If m_stack[position] doesn't contain 0. Move to opening bracket.
	case ']':
		MoveToOpeningBracket(_index);
		break;

		// . - Output the value as a char. Convert from UTF32
	case '.':
		_text += static_cast<char>(m_stack[m_stackTracker]);
		break;

	default:
		break;
	}
}

void BrainF::MoveTrackerRight()
{
	if (m_stackTracker + 1 == m_stack.size())
	{
		// Add another cell
		m_stack.emplace_back(0);
		m_stackTracker++;
	}
	else
	{
		m_stackTracker++;
	}
}

void BrainF::MoveTrackerLeft()
{
	if (m_stackTracker != 0)
	{
		m_stackTracker--;
	}
}

void BrainF::IncrementCurrentStackPos()
{
	m_stack[m_stackTracker]++;
}

void BrainF::DecrementCurrentStackPos()
{
	if (m_stack[m_stackTracker] != 0)
	{
		m_stack[m_stackTracker]--;
	}
}

void BrainF::MoveToClosingBracket(size_t& _index)
{
	if (m_stack[m_stackTracker] == 0)
	{
		m_bracketTracker++;
		while (m_code[_index] != ']' || m_bracketTracker != 0)
		{
			_index++;
			if (m_code[_index] == '[')
			{
				m_bracketTracker++;
			}
			else if(m_code[_index] == ']')
			{
				m_bracketTracker--;
			}
		}
	}
}

void BrainF::MoveToOpeningBracket(size_t& _index)
{
	if (m_stack[m_stackTracker] != 0)
	{
		m_bracketTracker++;
		while (m_code[_index] != '[' || m_bracketTracker != 0)
		{
			_index--;
			if (m_code[_index] == ']')
			{
				m_bracketTracker++;
			}
			else if (m_code[_index] == '[')
			{
				m_bracketTracker--;
			}
		}
	}
}
