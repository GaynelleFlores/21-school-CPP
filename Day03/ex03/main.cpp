#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"

int main ()
{
	DiamondTrap test("Test");
	std::cout << "\n";
	test.getInfo();
	std::cout << "\n";
	test.whoAmI();
	std::cout << "\n" << "Special functions:\n";
	test.guardGate();
	test.highFivesGuys();
	std::cout << "\n";
	std::cout << "Attack:\n";
	test.attack("Robber");
	std::cout << "\n";
}