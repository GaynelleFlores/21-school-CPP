#ifndef FIXED_HPP
# define FIXED_HPP

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
	Fixed& operator+(const Fixed &other);
	Fixed& operator-(const Fixed &other);
	Fixed& operator*(const Fixed &other);
	Fixed& operator/(const Fixed &other);
	bool operator< (const Fixed &other);
	bool operator> (const Fixed &other) const;
	bool operator<= (const Fixed &other);
	bool operator>= (const Fixed &other);
	bool operator!= (const Fixed &other);
	bool operator== (const Fixed &other);
	Fixed& operator--();
	Fixed& operator++();
	Fixed operator--(int);
	Fixed operator++(int);

	int getRawBits(void) const;
	void setRawBits (int const raw) ;
	int toInt( void ) const;
	float toFloat( void ) const;
	static const Fixed& min(const Fixed &num1, const Fixed &num2);
	static Fixed& min(Fixed &num1, Fixed &num2);
	static const Fixed& max(const Fixed &num1, const Fixed &num2);
	static Fixed& max(Fixed &num1, Fixed &num2);

private:
	int _value;
	static const int _fract = 8;
};

std::ostream & operator<<(std::ostream &out, const Fixed &num);

#endif