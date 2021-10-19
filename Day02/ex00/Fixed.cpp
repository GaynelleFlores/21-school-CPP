#include "Fixed.hpp"

Fixed::Fixed()
{
	this->_value = 0;

	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called\n";
	*this = other; //his->operator=(other);
	//this->_value = other._value;
	//*this = other;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

Fixed& Fixed:: operator= (const Fixed &other)
{
	std::cout << "Assignation operator called\n";
	this->_value = other.getRawBits();
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



