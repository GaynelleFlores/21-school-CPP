#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point {
public:

	Point();
	~Point();
	Point(const Point &other);
	Point(const float x, const float y);
	Point& operator=(const Point &other);
	bool operator==(const Point &other);
	Fixed& getX();
	Fixed& getY();
private:
	const Fixed x;
	const Fixed y;
};

#endif