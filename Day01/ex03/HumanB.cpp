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
void HumanB::attack(void) {
	if (this->weapon == NULL)
	{
		std::cout << this->name << " attacks with bare hands\n";
		return ;
	}
	std::cout << this->name << " attacks with his " << this->weapon->getType();
	std::cout << std::endl;
}