#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	this->i = 0;
	for(int j = 0; j < 4; j++)
		this->skills[j] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	this->i = const_cast<MateriaSource&>(other).getIndex();
	for(int j = 0; j < 4; j++)
	{
		if (other.skills[j] != NULL)
			this->skills[j] = other.skills[j]->clone();
		else
			this->skills[j] = NULL;
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource &other)
{
	this->i = const_cast<MateriaSource&>(other).getIndex();
	for(int j = 0; j < 4; j++)
	{
		if (this->skills[j])
			delete this->skills[j];
	}
	for(int j = 0; j < 4; j++)
	{
		if (other.skills[j] != NULL)
			this->skills[j] = other.skills[j]->clone();
		else
			this->skills[j] = NULL;
	}
	return(*this);
}

int MateriaSource::getIndex(void)
{
	return(this->i);
}

MateriaSource::~MateriaSource()
{
	for(int j = 0; j < 4; j++)
	{
		if (this->skills[j])
			delete this->skills[j];
	}
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (this->i < 4 && this->i >= 0)
	{
		this->skills[this->i] = m;
		this->i++;
	}
	else
		std::cout << "You can't learn materia, source is full!\n";
}

int MateriaSource::findMateria(std::string const & type)
{

	for(int j = 0; j < 4 && this->skills[j]; j++)
		if (this->skills[j]->getType() == type)
			return (j);
	return (-1);
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int i;

	if ((i = this->findMateria(type)) == -1)
		return (0);
	return (this->skills[i]->clone());
}