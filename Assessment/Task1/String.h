#pragma once

class String
{
public:
	String();
	String(const char* _str);

	String(const String& _other);
	String(String&& _other) noexcept;

	~String();

public:
	size_t Length() const;
	char& CharacterAt(size_t _index);
	const char& CharacterAt(size_t _index) const;

	bool EqualTo(const String& _other) const;

	String& Append(const String& _str);
	String& Prepend(const String& _str);

	const char* CStr() const;

	String& ToLower();
	String& ToUpper();

	size_t Find(const String& _str);
	size_t Find(size_t _startIndex, const String& _str);

	String& Replace(const String& _find, const String& _replace);

	String& ReadFromConsole();
	String& WriteToConsole();

public:
	bool operator==(const String& _other);
	bool operator!=(const String& _other);

	String& operator=(const String& _str);
	String& operator=(String&& _str) noexcept;

	char& operator[](size_t _index);
	const char& operator[](size_t _index) const;

private:
	size_t m_length;
	char* m_buffer;

private:
	size_t Compare(const String& _rhs) const;

};