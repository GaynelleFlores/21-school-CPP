#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	std::cout << "<Dog>Constructor called\n";
}

void Dog::makeSound(void) const
{
	std::cout << "<Dog>Woof-woof!\n";
}

Dog::Dog(const Dog &other)
{
	*this = other;
	std::cout << "<Dog>Copy constructor called\n";
}

Dog& Dog::operator=(const Dog &other)
{
	this->_type = other._type;
	return(*this);
}

Dog::~Dog()
{
	std::cout << "<Dog>Destructor called\n";
}