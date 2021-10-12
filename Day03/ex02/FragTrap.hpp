#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
	FragTrap(std::string name);
	FragTrap(void);
	~FragTrap(void);
	void attack(std::string const & target);
	void highFivesGuys(void);
} ;


#endif