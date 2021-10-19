#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
public:
	void getInfo();
	DiamondTrap(const std::string name);
	DiamondTrap();
	~DiamondTrap();
	DiamondTrap(const DiamondTrap &copy);
	DiamondTrap& operator=(const DiamondTrap &copy);
	using ScavTrap::attack;
	void whoAmI();
private:
	std::string _name;
};

#endif