#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon = NULL;
}
void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
void HumanB::attack() {
	std::cout << this->name << " attacks with his " << this->weapon->getType();
}