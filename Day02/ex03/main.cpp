#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main ()
{
	Point a(7, 7);
	Point b(1, 2);
	Point c(6, 1);
	Point p(7, 1);
	Point p1(3, 4.1f);
	Point p2(7, 3);
	std:: cout << "point p is in triangle? " << bsp(a, b, c, p) << "\n";
	std:: cout << "point p1 is in triangle? " << bsp(a, b, c, p1) << "\n";
	std:: cout << "point p2 is in triangle? " << bsp(a, b, c, p2) << "\n";
	return 0;
}

