#include "String.h"

String::String()
{
}

String::String(const char* _str)
{
}

String::String(const String& _other)
{
}

String::String(String&& _other) noexcept
{
}

String::~String()
{
}

size_t String::Length() const
{
	return -1;
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
	return *this;
}

String& String::operator=(String&& _str) noexcept
{
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
