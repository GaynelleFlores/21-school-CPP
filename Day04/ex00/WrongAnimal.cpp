#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->_type = "WrongAnimal";
	std::cout << "<WrongAnimal>Constructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	*this = other;
	std::cout << "<WrongAnimal>Copy constructor called\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
{
	this->_type = other._type;
	return(*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "<WrongAnimal>Destructor called\n";
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "<WrongAnimal>Wrong sound\n";
}

std::string WrongAnimal::getType(void) const
{
	return(this->_type);
}