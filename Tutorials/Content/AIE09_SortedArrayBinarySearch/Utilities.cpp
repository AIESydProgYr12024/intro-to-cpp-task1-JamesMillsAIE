#include "Utilities.h"

int* BinarySearch(int* _arr, int _count, int _searchValue)
{
	int* start = _arr;
	int* mid = start + _count / 2;

	if (_count == 0)
		return nullptr;

	if (*mid == _searchValue)
		return mid;

	if (_searchValue < *mid)
		return BinarySearch(start, _count / 2, _searchValue);

	if (_searchValue > *mid)
		return BinarySearch(mid, _count / 2, _searchValue);

	return nullptr;
}
