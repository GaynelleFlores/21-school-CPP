#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "<Dog>Constructor called\n";
	this->_type = "Dog";
	this->_brain = new Brain;
	for (int i = 0; i < 100; i++)
		this->_brain->setIdea("Dog idea", i);
}

void Dog::makeSound(void) const
{
	std::cout << "<Dog>Woof-Woof!\n";
}

Dog::Dog(const Dog &other)
{
	this->_type = other._type;
	this->_brain = new Brain();
	for (int i = 0; i < 100; i++)
		this->_brain->setIdea(other.getIdea(i), i);
	std::cout << "<Dog>Copy constructor called\n";
}

Dog& Dog::operator=(const Dog &other)
{
	if (this == &other)
	{
		std::cout << "<Dog>Warning! Identical objects.\n";
		return(*this);
	}
	this->_type = other._type;
	delete this->_brain;
	this->_brain = new Brain();
	for (int i = 0; i < 100; i++)
		this->_brain->setIdea(other.getIdea(i), i);
	return(*this);
}

void Dog::setIdea(std::string idea, int i)
{
	this->_brain->setIdea(idea, i);
}

std::string Dog::getIdea(int i) const
{
	return(this->_brain->getIdea(i));
}

Dog::~Dog()
{
	std::cout << "<Dog>Destructor called\n";
	delete this->_brain;
}