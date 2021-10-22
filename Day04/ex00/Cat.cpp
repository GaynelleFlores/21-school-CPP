#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	std::cout << "<Cat>Constructor called\n";
}

void Cat::makeSound(void) const
{
	std::cout << "<Cat>Meow!\n";
}

Cat::Cat(const Cat &other)
{
	*this = other;
	std::cout << "<Cat>Copy constructor called\n";
}

Cat& Cat::operator=(const Cat &other)
{
	this->_type = other._type;
	return(*this);
}

Cat::~Cat()
{
	std::cout << "<Cat>Destructor called\n";
}