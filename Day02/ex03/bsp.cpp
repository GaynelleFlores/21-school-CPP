#include "Point.hpp"

float calculateArea(Point a, Point b, Point c)
{
	Fixed res;
	res = (a.getX() - c.getX()) * (b.getY() - c.getY()) - ((b.getX() - c.getX()) * (a.getY() - c.getY()));
	float final = res.toFloat();
	return (final);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float TotalArea;
	float Area1;
	float Area2;
	float Area3;
	Fixed zero = Fixed();
	TotalArea = calculateArea(a, b, c);
	Area1 = calculateArea(point, b, c);
	Area2 = calculateArea(point, a, c);
	Area3 = calculateArea(point, a, b);
	if((Area1 + Area2 + Area3) > TotalArea)
		return (false);
	if (const_cast<Point&>(point) == const_cast<Point&>(a) || const_cast<Point&>(point) == const_cast<Point&>(b)
		|| const_cast<Point&>(point) == const_cast<Point&>(c))
		return (false);
	return (true);
}
