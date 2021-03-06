#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
private:
	std::string	_name;
	int			_hitpoints;
	int			_energy;
	int			_damage;
public:
	ClapTrap(std::string name);
	ClapTrap(void);
	ClapTrap(const ClapTrap &copy);
	ClapTrap& operator=(const ClapTrap &copy);
	~ClapTrap(void);
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif