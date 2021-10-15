#include "Zombie.hpp"

void randomChump(std::string name);
Zombie *newZombie(std::string name);

#define COLOR(text) ("[38;2;99;156;115m" text "[0m")

int main(void)
{
	std::cout << COLOR("Lets create two zombies on a heap:\n");

	Zombie *May = new Zombie("May");
	May->announce();
	Zombie *Alice = newZombie("Alice");
	Alice->announce();
	std::cout << COLOR("\n\nNow we'll kill them:\n");
	delete May;
	delete Alice;
	std::cout << COLOR("\n\nAnd create three \"random Chumps\":\n");
	randomChump("random Matt");
	randomChump("random Bob");
	randomChump("random Mary");
}