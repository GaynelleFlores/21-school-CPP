#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("sword");
		std::cout << "\n";
		bob.attack();
		std::cout << "\n";

	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		std::cout << "\n";
		club.setType("sword");
		jim.attack();
		std::cout << "\n";
	}
}