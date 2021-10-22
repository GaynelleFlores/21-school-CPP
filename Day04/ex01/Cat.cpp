#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "<Cat>Constructor called\n";
	this->_type = "Cat";
	this->_brain = new Brain;
	for (int i = 0; i < 100; i++)
		this->_brain->setIdea("Cat idea", i);
}

void Cat::makeSound(void) const
{
	std::cout << "<Cat>Meow!\n";
}

Cat::Cat(const Cat &other)
{
	this->_type = other._type;
	this->_brain = new Brain();
	for (int i = 0; i < 100; i++)
		this->_brain->setIdea(other.getIdea(i), i);
	std::cout << "<Cat>Copy constructor called\n";
}

Cat& Cat::operator=(const Cat &other)
{
	if (this == &other)
	{
		std::cout << "<Cat>Warning! Identical objects.\n";
		return(*this);
	}
	this->_type = other._type;
	delete this->_brain;
	this->_brain = new Brain();
	for (int i = 0; i < 100; i++)
		this->_brain->setIdea(other.getIdea(i), i);
	return(*this);
}

void Cat::setIdea(std::string idea, int i)
{
	this->_brain->setIdea(idea, i);
}

std::string Cat::getIdea(int i) const
{
	return(this->_brain->getIdea(i));
}

Cat::~Cat()
{
	std::cout << "<Cat>Destructor called\n";
	delete this->_brain;
}