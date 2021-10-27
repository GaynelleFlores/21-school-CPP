#include "span.hpp"

Span::Span()
{
	this->size = 0;
}

Span::Span(unsigned int n)
{
	this->size = n;
	this->freeSpace = 0;
}

Span::Span(const Span &other)
{
	this->size = other.size;
	this->array = other.array;
}

Span& Span::operator=(const Span &other)
{
	this->size = other.size;
	this->array = other.array;
	return(*this);
}

int Span::getElem(unsigned int index)
{
	if (index < 0 || index >= array.size())
		throw std::out_of_range("No such element.");
	return(this->array[index]);
}

int Span::getMaxSize(void)
{
	return(this->size);
}

int Span::getCurrentSize()
{
	return(this->array.size());
}

void Span::addNumber(int num)
{
	if (this->array.size() < this->size)
		this->array.push_back(num);
	else
		throw std::overflow_error("No free space for new element.");
}

int Span::longestSpan(void)
{
	std::vector<int>::iterator min;
	std::vector<int>::iterator max;
	if (this->array.size() < 2)
		throw std::out_of_range("Array contain only one or no one element.");
	min = min_element(array.begin(), array.end());
	max = max_element(array.begin(), array.end());
	return ((*max) - (*min));
}

void Span::addRange(int begin, int end)
{
	for (;begin <= end;begin++)
		this->addNumber(begin);
}

int Span::shortestSpan(void)
{
	std::vector<int>::iterator i;
	std::vector<int> temp;
	int diff = INT_MAX;
	if (this->array.size() < 2)
		throw std::out_of_range("Array contain only one or no one element.");
	temp = array;
	std::sort(temp.begin(), temp.end());
	i = temp.begin();
	while((i + 1) < temp.end())
	{
		if (diff > (*(i + 1) - *i))
			diff = (*(i + 1) - *i);
		i++;
	}
	return(diff);
}

Span::~Span()
{

}

