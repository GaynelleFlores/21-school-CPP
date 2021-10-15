#include "Zombie.hpp"

Zombie::~Zombie(void)
{
	std::cout << this->name << " was killed" << "\n";
}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::Zombie(void) { }

void Zombie::setName(std::string name)
{
	this->name = name;
}

void Zombie::announce (void)
{
	std::cout << "\"BraiiiiiiinnnzzzZ...\"" << ZOMBIE;
	std::cout << std::endl;
}