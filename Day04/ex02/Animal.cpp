#include "Animal.hpp"

Animal::Animal()
{
	this->_type = "Animal";
	std::cout << "<Animal>Constructor called\n";
}

Animal::Animal(const Animal &other)
{
	*this = other;
	std::cout << "<Animal>Copy constructor called\n";
}

Animal& Animal::operator=(const Animal &other)
{
	this->_type = other._type;
	return(*this);
}

Animal::~Animal()
{
	std::cout << "<Animal>Destructor called\n";
}

std::string Animal::getType(void) const
{
	return(this->_type);
}