#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->_hitpoints = 100;
	this->_energy = 50;
	this->_damage = 20;
	std::cout << "Warrior's name is " << this->_name << ".\n";
}

ScavTrap::ScavTrap(void)
{
	this->_name = "Warrior";
	this->_hitpoints = 100;
	this->_energy = 50;
	this->_damage = 20;
	std::cout << "ScavTrap Warrior was created.\n";
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Oh, no... We're losing " << this->_name << "!\n";
}

void ScavTrap::attack(std::string const &target)
{
	if (this->_energy > 0)
		this->_energy--;
	else
	{
		std::cout << SWORD << "Oh, no! " << this->_name << " can't attack! Energy isn't enough!\n";
		return ;
	}
	std::cout << SWORD << this->_name << " struck the enemy with a sword! ";
	std::cout << target << " takes " << this->_damage << " points of damage.\n";
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap have enterred in Gate keeper mode! Whatever that means...\n" ;
}
