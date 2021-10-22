#include "AMateria.hpp"

AMateria::AMateria()
{
	this->type = "abstract materia";
}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
}

AMateria::AMateria(const AMateria &other)
{
	this->type = other.type;
}

AMateria& AMateria::operator=(const AMateria &other)
{
	this->type = other.type;
	return(*this);
}

std::string const & AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter& target)
{
	if (this->type == "ice")
		std::cout << "*Ice: shoots an ice bolt at " << target.getName();
	else if (this->type == "cure")
		std::cout << "*Cure: heals " << target.getName() <<  "'s wounds";
	std::cout << "*\n";
}

AMateria::~AMateria() {}