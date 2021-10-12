#include "ClapTrap.hpp"
#include "FragTrap.hpp"
int main ()
{
	FragTrap *a = new FragTrap("LadyWithClub");
	ClapTrap *b = new ClapTrap("Villian");
	a->highFivesGuys();
	a->attack("Villian");
	b->takeDamage(20);
	delete a;
}