#include "AMateria.hpp"
#include "Cure.hpp"

Cure::Cure()
{
	this->type = "cure";
}

Cure::Cure(std::string const & type)
{
	this->type = type;
}

Cure::Cure(const Cure &other)
{
	this->type = other.type;
}

Cure::~Cure() {}

Cure& Cure::operator=(const Cure &other)
{
	this->type = other.type;
	return(*this);
}

AMateria* Cure::clone() const
{
	return(new Cure());
}