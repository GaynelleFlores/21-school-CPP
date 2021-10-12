#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#define SKULL "\U0001F480"
#define SHIELD "\U0001F6E1"
#define SWORD "\U0001F5E1"
#define ELF "\U0001F9DD"
#define HEAL "\U0001F31F"
#include <iostream>

class ClapTrap {
protected:
	std::string	_name;
	int			_hitpoints;
	int			_energy;
	int			_damage;
public:
	ClapTrap(std::string name);
	ClapTrap(void);
	~ClapTrap(void);
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif