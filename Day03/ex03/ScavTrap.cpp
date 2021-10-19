#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->_hitpoints = 100;
	this->_energy = 50;
	this->_damage = 20;
	std::cout << "<ScavTrap>";
	std::cout << "Warrior's name is " << this->_name << ".\n";
}

ScavTrap::ScavTrap(void)
{
	this->_name = "Warrior";
	this->_hitpoints = 100;
	this->_energy = 50;
	this->_damage = 20;
	std::cout << "<ScavTrap>";
	std::cout << "ScavTrap Warrior was created.\n";
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	*this = copy;
	std::cout << "<ScavTrap>";
	std::cout << "ScavTrap copy was created.\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap &copy)
{
	this->_name = copy._name;
	this->_hitpoints = copy._hitpoints;
	this->_energy = copy._energy;
	this->_damage = copy._damage;
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "<ScavTrap>";
	std::cout << "Oh, no... We're losing " << this->_name << "!\n";
}

void ScavTrap::attack(std::string const &target)
{
	std::cout << "<ScavTrap>";
	if (this->_energy > 0)
		this->_energy--;
	else
	{
		std::cout << SWORD << "Oh, no! " << this->_name << " can't attack, energy isn't enough!\n";
		return ;
	}
	std::cout << SWORD << this->_name << " struck the enemy with a sword! ";
	std::cout << target << " takes " << this->_damage << " points of damage.\n";
}

void ScavTrap::guardGate(void)
{
	std::cout << "<ScavTrap>";
	std::cout << this->_name;
	std::cout << " have enterred in Gate keeper mode! Whatever that means...\n" ;
}
