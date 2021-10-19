#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(const float x, const float y) : x(x), y(y){}

Point::~Point() {}

Point::Point(const Point &other)
{
	const_cast<Fixed&>(x)  = other.x;
	const_cast<Fixed&>(y)  = other.y;
}

Fixed& Point::getX()
{
	return(const_cast<Fixed&>(this->x));
}

Fixed& Point::getY()
{
	return(const_cast<Fixed&>(this->y));
}

bool Point::operator==(const Point &other)
{
	if (const_cast<Fixed&>(this->x) == const_cast<Fixed&>(other.x) && const_cast<Fixed&>(this->y) == const_cast<Fixed&>(other.y))
		return (true);
	return (false);
}

Point& Point::operator=(const Point &other)
{
	const_cast<Fixed&>(x)  = other.x;
	const_cast<Fixed&>(y)  = other.y;
	return(*this);
}