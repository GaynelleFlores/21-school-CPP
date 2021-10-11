#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA:: HumanA(std::string name, Weapon &weapon) : weapon(weapon)
{
	this->name = name;
}

void HumanA:: attack() {
	std::cout << this->name << " attacks with his " << this->weapon.getType();
}