#include "Utilities.h"

#include <cmath>

int BinarySearch(int _arr[ARRAY_SIZE], int _end, int _searchValue)
{
	int start = _arr[0];
	int mid = _arr[_end / 2];

	if (_end == 0)
		return INT_MAX;

	if (mid == _searchValue)
		return mid;

	if (_searchValue < mid)
		return INT_MAX;

	return INT_MAX;
}
