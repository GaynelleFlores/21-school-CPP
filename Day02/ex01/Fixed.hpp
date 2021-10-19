#ifndef FIXED_HPP
# define POINT_HPP

#include <iostream>
#include <cmath>

class Fixed {
public:
	Fixed();
	Fixed(const Fixed &other);
	Fixed(int i);
	Fixed(float i);
	~Fixed();
	Fixed& operator=(const Fixed &other);
	int getRawBits(void) const;
	void setRawBits (int const raw) ;
	int toInt( void ) const;
	float toFloat( void ) const;

private:
	int _value;
	static const int _fract = 8;
};

std::ostream & operator<<(std::ostream &out, const Fixed &num);

#endif