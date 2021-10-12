#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
int main ()
{
	ScavTrap *a = new ScavTrap("GreatestWarrior");
	ClapTrap *b = new ClapTrap("Villian");
	a->guardGate();
	a->attack("Villian");
	b->takeDamage(20);
	delete a;
}