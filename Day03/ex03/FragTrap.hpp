#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap {
public:
	FragTrap(std::string name);
	FragTrap(void);
	FragTrap(const FragTrap &copy);
	FragTrap& operator=(const FragTrap &copy);
	~FragTrap(void);
	void attack(std::string const & target);
	void highFivesGuys(void);
	int getDamage(void);
} ;

#endif