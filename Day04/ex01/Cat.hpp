#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal {
public:
	Cat();
	Cat(const Cat &other);
	virtual ~Cat();
	Cat& operator=(const Cat &other);
	void makeSound(void) const;
	void setIdea(std::string idea, int i);
	std::string getIdea(int i) const;

private:
	Brain *_brain;
};

#endif