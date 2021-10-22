#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->_type = "WrongCat";
	std::cout << "<WrongCat>Constructor called\n";
}

void WrongCat::makeSound(void) const
{
	std::cout << "<WrongCat>Meow-meow!\n";
}

WrongCat::WrongCat(const WrongCat &other)
{
	*this = other;
	std::cout << "<WrongCat>Copy constructor called\n";
}

WrongCat& WrongCat::operator=(const WrongCat &other)
{
	this->_type = other._type;
	return(*this);
}

WrongCat::~WrongCat()
{
	std::cout << "<WrongCat>Destructor called\n";
}