#include "Zombie.hpp"

void randomChump(std::string name);

int main()
{
	std::cout << "Lets create two zombies on a heap:\n";

	Zombie *May = new Zombie("May");
	May->announce();
	Zombie *Alice = new Zombie("Alice");
	Alice->announce();
	std::cout << "\nNow we'll kill them:\n";
	delete May;
	delete Alice;
	std::cout << "\nAnd create three \"random Chumps\":\n";
	randomChump("random Matt");
	randomChump("random Bob");
	randomChump("random Mary");
}