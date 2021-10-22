#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal {
public:
	Dog();
	Dog(const Dog &other);
	virtual ~Dog();
	Dog& operator=(const Dog &other);
	void makeSound(void) const;
	void setIdea(std::string idea, int i);
	std::string getIdea(int i) const;

private:
	Brain *_brain;
};

#endif