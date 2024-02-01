#include "ShapeMaths.h"
#include <numbers>

using std::numbers::pi_v;

double Round(double _v)
{
	return ceil(_v * 100.0) / 100.0;
}

double CircleCircumference(double _r)
{
	return Round(2 * pi_v<double> * _r);
}

double CircleArea(double _r)
{
	return Round(pi_v<double> * pow(_r, 2));
}

double RectPerimeter(double _w, double _h)
{
	return Round(2 * (_w + _h));
}

double RectArea(double _w, double _h)
{
	return Round(_w * _h);
}
