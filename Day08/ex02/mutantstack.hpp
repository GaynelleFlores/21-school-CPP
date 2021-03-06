#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <class T>
class MutantStack : public std::stack<T> {
public:
	typedef typename std::deque<T>::iterator iterator;
	MutantStack(){};
	MutantStack(const MutantStack &other)
	{
		this->c = other.c;
	};
	MutantStack& operator=(const MutantStack &other)
	{
		this->c = other.c;
		return (*this);
	};
	~MutantStack() {};
	iterator begin()
	{
		return (this->c.begin());
	};
	iterator end()
	{
		return (this->c.end());
	};
};

#endif