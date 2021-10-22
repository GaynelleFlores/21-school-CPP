#ifndef	BRAIN_HPP
#define	BRAIN_HPP

#include <iostream>

class Brain {
public:
	Brain();
	Brain(const Brain &other);
	~Brain();
	Brain& operator=(const Brain &other);
	void setIdea(std::string idea, int i);
	std::string getIdea(int i);

protected:
	std::string ideas[100];
};

#endif