#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
}

const std::string Weapon::getType ()
{
	const std::string &refType = this->type;
	return(refType);
}

void Weapon::setType(std::string type)
{
	this->type = type;
}