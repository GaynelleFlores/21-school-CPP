#include "Brain.hpp"

Brain::Brain()
{
	int i;
	int num;

	num = 100;
	i = 0;
	std::cout << "Brain constructor\n";
	while (i < num)
	{
		this->ideas[i] = "Some idea";
		i++;
	}
}

void Brain::setIdea(std::string idea, int i)
{
	if (i >= 0 && i <= 99)
		this->ideas[i] = idea;
	else
		std::cout << "Incorrect idea index!\n";
}

std::string Brain::getIdea(int i)
{
	if (i >= 0 && i <= 99)
		return(this->ideas[i]);
	else
		std::cout << "Incorrect idea index. I will return idea No.0\n";
	return(this->ideas[0]);
}

Brain::Brain(const Brain &other)
{
	*this = other;
	std::cout << "Brain copy constructor\n";
}

Brain::~Brain()
{
	std::cout << "Brain destructor\n";
}

Brain& Brain::operator=(const Brain &other)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	return(*this);
}

