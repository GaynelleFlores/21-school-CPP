#include "ClapTrap.hpp"
#include "FragTrap.hpp"

#define HI "\U0001F596"

FragTrap::FragTrap(void)
{
	this->_name = "Warrior";
	this->_hitpoints = 100;
	this->_energy = 100;
	this->_damage = 30;
	std::cout << "<FragTrap>";
	std::cout << "FragTrap finished creation.\n";
}

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->_hitpoints = 100;
	this->_energy = 100;
	this->_damage = 30;
	std::cout << "<FragTrap>";
	std::cout << "FragTrap warrior's name is " << this->_name << ".\n";
}

FragTrap::FragTrap(const FragTrap &copy)
{
	*this = copy;
	std::cout << "<FragTrap>";
	std::cout << "FragTrap copy was created.\n";
}

FragTrap& FragTrap::operator=(const FragTrap &copy)
{
	this->_name = copy._name;
	this->_hitpoints = copy._hitpoints;
	this->_energy = copy._energy;
	this->_damage = copy._damage;
	return(*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "<FragTrap>";
	std::cout << "Goodbye, " << this->_name << "!\n";
}

void FragTrap::attack(std::string const &target)
{
	std::cout << "<FragTrap>";
	if (this->_energy > 0)
		this->_energy--;
	else
	{
		std::cout << SWORD << "Oh, no! " << this->_name << " can't attack! Energy isn't enough!\n";
		return ;
	}
	std::cout << SWORD << this->_name << " attacked! ";
	std::cout << target << " takes " << this->_damage << " points of damage.\n";
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "<FragTrap>";
	std::cout << HI << "High five!\n" ;
}

int FragTrap::getDamage(void)
{
	return(this->_damage);
}
