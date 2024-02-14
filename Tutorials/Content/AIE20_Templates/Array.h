#pragma once

template<typename T, size_t SIZE>
class Array
{
public:
	Array() = default;
	Array(T _default[SIZE]);

public:
	void Set(int _index, T _item);
	void ForEach(void(*_callback)(T, int));

private:
	T m_items[SIZE];

};

template<typename T, size_t SIZE>
inline Array<T, SIZE>::Array(T _default[SIZE])
{
	for (size_t i = 0; i < SIZE; ++i)
	{
		m_items[i] = _default[i];
	}
}

template<typename T, size_t SIZE>
inline void Array<T, SIZE>::Set(int _index, T _item)
{
	if (_index < SIZE)
	{
		m_items[_index] = _item;
	}
}

template<typename T, size_t SIZE>
inline void Array<T, SIZE>::ForEach(void(*_callback)(T, int))
{
	for (size_t i = 0; i < SIZE; ++i)
	{
		_callback(m_items[i], i);
	}
}
