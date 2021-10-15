#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );
#define COLOR(text) ("[38;2;99;156;115m" text "[0m")

int main(void)
{
	int N;
	int i;

	N = 5;
	i = 0;
	std::cout << COLOR("ZOMBIE HORDE!!!\n");
	Zombie *Horde = zombieHorde(N, "Horde");
	while (i < N)
	{
		Horde[i].announce();
		i++;
	}
	std::cout << COLOR("Let's kill them:\n");
	delete []Horde;
}