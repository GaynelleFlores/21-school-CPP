#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
protected:
	int i;
	AMateria *skills[4];
	int findMateria(std::string const & type);
public:
	MateriaSource();
	virtual ~MateriaSource();
	MateriaSource(const MateriaSource &other);
	virtual void learnMateria(AMateria* m);
	virtual AMateria* createMateria(std::string const & type);
	MateriaSource& operator=(const MateriaSource &other);
	int getIndex(void);
};

#endif