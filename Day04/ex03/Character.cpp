#include "Character.hpp"

Character::Character()
{
	this->name = "SomeName";
	this->i = 0;
	for(int j = 0; j < 4; j++)
		this->invent[j] = NULL;
}

Character::Character(std::string name)
{
	this->name = name;
	this->i = 0;
	for(int j = 0; j < 4; j++)
		this->invent[j] = NULL;
}

Character::Character(const Character &other)
{
	this->name = other.getName();
	this->i = const_cast<Character&>(other).getIndex();
	for(int j = 0; j < 4; j++)
	{
		if (other.invent[j] != NULL)
		{
			this->invent[j] = other.invent[j]->clone();
		}
		else
			this->invent[j] = NULL;
	}
}


Character& Character::operator=(const Character &other)
{
	this->name = other.getName();
	this->i = const_cast<Character&>(other).getIndex();
	for(int j = 0; j < 4; j++)
	{
		if (this->invent[j])
			delete this->invent[j];
	}
	for(int j = 0; j < 4; j++)
	{
		if (other.invent[j] != NULL)
			this->invent[j] = other.invent[j]->clone();
		else
			this->invent[j] = NULL;
	}
	return(*this);
}

int Character::getIndex(void)
{
	return(this->i);
}

Character::~Character()
{
	for(int j = 0; j < 4; j++)
	{
		if (this->invent[j])
			delete this->invent[j];
	}
}

std::string const & Character::getName() const
{
	return(this->name);
}

void Character::equip(AMateria* m)
{
	if (this->i < 4)
	{
		this->invent[i] = m;
		this->i++;
	}
	else if (m)
		std::cout << "You can't equip materia, inventory is full!\n";
}

void Character::unequip(int idx)
{
	if (idx < 4 && idx >= 0)
	{
		this->invent[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (this->invent[idx] && idx < 4 && idx >= 0)
		invent[idx]->use(target);
}