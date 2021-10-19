#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
public:
	Fixed();
	Fixed(const Fixed &other);
	~Fixed();
	Fixed& operator=(const Fixed &other);
	int getRawBits(void) const;
	void setRawBits (int const raw) ;

private:
	int _value;
	static const int _fract = 8;
};

#endif