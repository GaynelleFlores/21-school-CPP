#include "ClapTrap.hpp"

int main ()
{
	{
		ClapTrap *a = new ClapTrap("Super-Elf-Girl");
		ClapTrap *b = new ClapTrap("Villian");
		b->attack("Super-Elf-Girl");
		a->takeDamage(5);
		a->attack("Villian");
		a->beRepaired(4);
		b->attack("Super-Elf-Girl");
		a->takeDamage(5);
		b->attack("Super-Elf-Girl");
		a->takeDamage(5);
		delete b;
	}
}