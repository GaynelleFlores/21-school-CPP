#include "Fixed.hpp"

Fixed::Fixed()
{
	this->_value = 0;
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(int i)
{
	std::cout << "Int constructor called\n";
	this->_value = i * (1 << this->_fract);
}

int Fixed::toInt( void ) const
{
	return (this->_value / (1 << this->_fract));
}

std::ostream & operator<<(std::ostream &out, const Fixed &num)
{
	out << num.toFloat() << "\n";
	return(out);
}


Fixed::Fixed(float i)
{
	std::cout << "Float constructor called\n";
	this->_value = roundf(i * (float)(1 << this->_fract));
}

float Fixed::toFloat( void ) const
{
	return ((float)this->_value / (float)(1 << this->_fract));
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called\n";
	*this = other;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

Fixed& Fixed:: operator= (const Fixed &other)
{
	std::cout << "Assignation operator called\n";
	this->_value = other._value;
	return (*this);
}

void Fixed::setRawBits (int const raw)
{
	std::cout << "setRawBits member function called\n";
	this->_value = raw;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (this->_value);
}



