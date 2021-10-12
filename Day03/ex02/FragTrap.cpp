#include "ClapTrap.hpp"
#include "FragTrap.hpp"

#define HI "\U0001F596"

FragTrap::FragTrap(void)
{
	this->_name = "Warrior";
	this->_hitpoints = 100;
	this->_energy = 100;
	this->_damage = 30;
	std::cout << "FragTrap finished creation.\n";
}

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->_hitpoints = 100;
	this->_energy = 100;
	this->_damage = 30;
	std::cout << "FragTrap warrior's name is " << this->_name << ".\n";
}

FragTrap::~FragTrap(void)
{
	std::cout << "Goodbye, " << this->_name << "!\n";
}

void FragTrap::attack(std::string const &target)
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

void FragTrap::highFivesGuys(void)
{
	std::cout << HI << "High five!\n" ;
}
