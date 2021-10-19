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

Fixed::Fixed(float i)
{
	std::cout << "Float constructor called\n";
	this->_value = roundf(i * (float)(1 << this->_fract));
}

int Fixed::toInt( void ) const
{
	return (this->_value / (1 << this->_fract));
}

float Fixed::toFloat( void ) const
{
	return ((float)this->_value / (float)(1 << _fract));
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

std::ostream & operator<<(std::ostream &out, const Fixed &num)
{
	out << num.toFloat() << "\n";
	return(out);
}

Fixed& Fixed:: operator= (const Fixed &other)
{
	std::cout << "Assignation operator called\n";
	this->_value = other._value;
	return (*this);
}

Fixed& Fixed:: operator+ (const Fixed &other)
{
	Fixed *a = new Fixed();
	a->setRawBits(this->getRawBits() + other.getRawBits());
	return (*a);
}

Fixed& Fixed:: operator- (const Fixed &other)
{
	Fixed *a = new Fixed();
	a->setRawBits(this->getRawBits() - other.getRawBits());
	return (*a);
}

Fixed& Fixed:: operator* (const Fixed &other)
{
	Fixed *a = new Fixed();
	a->setRawBits(this->getRawBits() * other.getRawBits() >> this->_fract);
	return (*a);
}

Fixed& Fixed:: operator/ (const Fixed &other)
{
	int		num1;
	int		num2;
	if(other.getRawBits() == 0)
	{
		std::cout << "Sorry, you can't divide by zero. I will return 0!\n";
		Fixed *res = new Fixed(0);
		return(*res) ;
	}
	else
	{
		num1 = this->getRawBits() << (int)(Fixed::_fract) ;
		num2 = other.getRawBits() << (int)(Fixed::_fract) ;
		Fixed *res = new Fixed((float)num1 / (float)num2);
		return(*res) ;
	}
}

bool Fixed:: operator< (const Fixed &other)
{
	if (this->getRawBits() < other.getRawBits())
		return (true);
	return (false);
}

bool Fixed:: operator> (const Fixed &other) const
{
	if (this->getRawBits() > other.getRawBits())
		return (true);
	return (false);
}

const Fixed& Fixed:: min(const Fixed &num1, const Fixed &num2)
{
	if (num1.getRawBits() < num2.getRawBits())
		return (num1);
	return (num2);
}

Fixed& Fixed:: min(Fixed &num1, Fixed &num2)
{
	if (num1 < num2)
		return (num1);
	return (num2);
}

const Fixed& Fixed:: max(const Fixed &num1, const Fixed &num2)
{
	if (num1.getRawBits() > num2.getRawBits())
		return (num1);
	return (num2);
}

Fixed& Fixed:: max(Fixed &num1, Fixed &num2)
{
	if (num1 > num2)
		return (num1);
	return (num2);
}


bool Fixed:: operator<= (const Fixed &other)
{
	if (this->getRawBits() <= other.getRawBits())
		return (true);
	return (false);
}

bool Fixed:: operator>= (const Fixed &other)
{
	if (this->getRawBits() >= other.getRawBits())
		return (true);
	return (false);
}

bool Fixed:: operator== (const Fixed &other)
{
	if (this->getRawBits() == other.getRawBits())
		return (true);
	return (false);
}

bool Fixed:: operator!= (const Fixed &other)
{
	if (this->getRawBits() != other.getRawBits())
		return (true);
	return (false);
}

Fixed& Fixed::operator--()
{
	this->_value -= 1;
	return (*this);
}

Fixed& Fixed::operator++()
{
	this->_value += 1;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	this->_value -= 1;
	return (temp);
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	this->_value += 1;
	return (temp);
}
