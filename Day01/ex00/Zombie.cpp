#include "Zombie.hpp"

#define ZOMBIE "\U0001F9DF"

Zombie::~Zombie(void)
{
	std::cout << this->name << " was killed";
	std::cout << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::Zombie(void)
{
	this->name = "Zombie";
}

void Zombie::announce (void)
{
	std::cout << "<" << this->name << "> ";
	std::cout << "\"BraiiiiiiinnnzzzZ...\"" << ZOMBIE;
	std::cout << std::endl;
}