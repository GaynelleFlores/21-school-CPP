#include "Zombie.hpp"

Zombie::~Zombie()
{
	std::cout << this->name << " was killed" << "\n";
}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

void Zombie::announce ()
{
	std::cout << "<" << this->name << "> ";
	std::cout << "BraiiiiiiinnnzzzZ...\n";
}