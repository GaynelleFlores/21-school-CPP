#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main ()
{
	FragTrap *a = new FragTrap("LadyWithClub");
	ScavTrap *b = new ScavTrap("Villian");
	a->highFivesGuys();
	a->attack("Villian");
	b->takeDamage(100);
	delete a;
}