#include "AMateria.hpp"
#include "Ice.hpp"

Ice::Ice()
{
	this->type = "ice";
}

Ice::Ice(std::string const & type)
{
	this->type = type;
}

Ice::Ice(const Ice &other)
{
	this->type = other.type;
}

Ice::~Ice() {}

Ice& Ice::operator=(const Ice &other)
{
	this->type = other.type;
	return(*this);
}

AMateria* Ice::clone() const
{
	return(new Ice());
}