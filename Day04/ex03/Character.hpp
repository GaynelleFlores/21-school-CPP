#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"

class Character : public ICharacter
{
protected:
	int i;
	std::string name;
	AMateria *invent[4];
public:
	Character(std::string name);
	Character();
	Character(const Character &other);
	Character& operator=(const Character &other);
	virtual ~Character();
	virtual std::string const & getName() const;
	int getIndex(void);
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};

#endif