#include "String.h"

#include <iostream>

String::String()
	: m_buffer{ new char[1] }
{
}

String::String(const char* _str)
	: m_buffer{ new char[strlen(_str) + 1] }
{
	strcpy_s(m_buffer, strlen(_str) + 1, _str);
}

String::String(const String& _other)
	: String(_other.m_buffer)
{
}

String::String(String&& _other) noexcept
	: m_buffer{ _other.m_buffer }
{
	_other.m_buffer = nullptr;
}

String::~String()
{
	delete[] m_buffer;
}

size_t String::Length() const
{
	return strlen(m_buffer);
}

char& String::CharacterAt(size_t _index)
{
	char c = '\0';

	return c;
}

const char& String::CharacterAt(size_t _index) const
{
	char c = '\0';

	return c;
}

bool String::EqualTo(const String& _other) const
{
	return false;
}

String& String::Append(const String& _str)
{
	return *this;
}

String& String::Prepend(const String& _str)
{
	return *this;
}

const char* String::CStr() const
{
	return nullptr;
}

String& String::ToLower()
{
	return *this;
}

String& String::ToUpper()
{
	return *this;
}

size_t String::Find(const String& _str)
{
	return -1;
}

size_t String::Find(size_t _startIndex, const String& _str)
{
	return -1;
}

String& String::Replace(const String& _find, const String& _replace)
{
	return *this;
}

String& String::ReadFromConsole()
{
	return *this;
}

String& String::WriteToConsole()
{
	return *this;
}

bool String::operator==(const String& _other)
{
	return false;
}

bool String::operator!=(const String& _other)
{
	return false;
}

String& String::operator=(const String& _str)
{
	m_buffer = new char[strlen(_str.m_buffer) + 1];
	strcpy_s(m_buffer, strlen(_str.m_buffer) + 1, _str.m_buffer);

	return *this;
}

String& String::operator=(String&& _str) noexcept
{
	m_buffer = _str.m_buffer;
	_str.m_buffer = nullptr;

	return *this;
}

char& String::operator[](size_t _index)
{
	char c = '\0';

	return c;
}

const char& String::operator[](size_t _index) const
{
	char c = '\0';

	return c;
}

size_t String::Compare(const String& _rhs) const
{
	return -1;
}
