#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	int i;

	i = 0;
	Zombie *Horde = new Zombie[N];
	while (i < N)
	{
		Horde[i].setName(name);
		i++;
	}
	return (Horde);
}