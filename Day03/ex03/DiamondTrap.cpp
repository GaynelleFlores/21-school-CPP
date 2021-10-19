#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "<DiamondTrap>";
	this->_name = "Warrior";
	this->_hitpoints = 100;
	this->_energy = 50;
	this->_damage = 30;
	ClapTrap::_name = "Warrior_clap_name";
	std::cout << "Wow, " << this->_name << " was created!\n";
}

DiamondTrap::DiamondTrap(const std::string name)
{
	std::cout << "<DiamondTrap>";
	this->_name = name;
	this->_hitpoints = 100;
	this->_energy = 50;
	this->_damage = 30;
	ClapTrap::_name = name + "_clap_name";
	std::cout << "Wow, " << this->_name << " was created!\n";
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "<DiamondTrap>";
	std::cout << "Destruction was started.\n";
}

void DiamondTrap::getInfo()
{
	std::cout << "<DiamondTrap>My name is " << this->_name << "\n";
	std::cout << "<DiamondTrap>My HP is " << this->_hitpoints << "\n";
	std::cout << "<DiamondTrap>My energy is " << this->_energy << "\n";
	std::cout << "<DiamondTrap>My damage is " << this->_damage << "\n";
}

void DiamondTrap::whoAmI()
{
	std::cout << "<DiamondTrap>My Clap name is " << ClapTrap::_name << "\n";
	std::cout << "<DiamondTrap>My Diamond name is " << this->_name << "\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	*this = copy;
	this->ClapTrap::_name = copy._name + "_clap_name";
	std::cout << "<DiamondTrap>";
	std::cout << "DiamondTrap copy was created.\n";
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &copy)
{
	this->_name = copy._name;
	this->ClapTrap::_name = copy._name + "_clap_name";
	this->_hitpoints = copy._hitpoints;
	this->_energy = copy._energy;
	this->_damage = copy._damage;
	return(*this);
}