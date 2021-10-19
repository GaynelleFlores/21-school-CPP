#include "Fixed.hpp"

int main ()
{
	{
		std::cout << "Subject's tests\n";
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;
	}
	{
		std::cout << "\nMy tests\n";
		Fixed a(13);
		Fixed b(26.45f);
		Fixed d;
		d = b / a;
		std::cout << "26.45 / 13 = " << d;
		d = b * a;
		std::cout << "26.45 * 13 = " << d;
		d = b - a;
		std::cout << "26.45 - 13 = " << d;
		d = b + a;
		std::cout << "26.45 + 13 = " << d;
	}
	return 0;
}

