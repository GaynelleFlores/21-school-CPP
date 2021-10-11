#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
	Zombie *Bob = new Zombie(name);
	return (Bob);
}
