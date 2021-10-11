#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main()
{
	int N;
	int i;

	N = 5;
	i = 0;
	std::cout << "ZOMBIE HORDE!!!\n";
	Zombie *Horde = zombieHorde(N, "Horde");
	while (i < N)
	{
		Horde[i].announce();
		i++;
	}
	std::cout << "\nLet's kill them:\n";
	delete []Horde;
}