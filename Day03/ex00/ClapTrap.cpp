#include "ClapTrap.hpp"

#define SKULL "\U0001F480"
#define SHIELD "\U0001F6E1"
#define SWORD "\U0001F5E1"
#define ELF "\U0001F9DD"
#define HEAL "\U0001F31F"

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->_hitpoints = 10;
	this->_energy = 10;
	this->_damage = 0;
	std::cout << ELF << this->_name << " was created!\n";
}

ClapTrap::ClapTrap(void)
{
	this->_name = "Warrior";
	this->_hitpoints = 10;
	this->_energy = 10;
	this->_damage = 0;
	std::cout << ELF << this->_name << " was created!\n";
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &copy)
{
	this->_name = copy._name;
	this->_hitpoints = copy._hitpoints;
	this->_energy = copy._energy;
	this->_damage = copy._damage;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << this->_name << " was deleted.\n";
}
void ClapTrap::attack(std::string const &target)
{
	if (this->_energy > 0)
		this->_energy--;
	else
	{
		std::cout << SWORD << this->_name << " can't attack. Energy isn't enough!\n";
		return ;
	}
	std::cout << SWORD << this->_name << " attacked! ";
	std::cout << target << " takes " << this->_damage << " points of damage.\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->_hitpoints -= amount;
	if (this->_hitpoints <= 0)
	{
		std::cout << SKULL << this->_name << " was killed!\n";
		delete this;
	}
	else
	{
		std::cout << SHIELD << this->_name << " was injured! ";
		std::cout << "Now " << this->_name << " has " << this->_hitpoints << " hitpoints.\n";
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->_hitpoints += amount;
	std::cout << HEAL << this->_name << " was cured! ";
	std::cout << this->_name << "has " << this->_hitpoints << " hitpoints.\n";
}