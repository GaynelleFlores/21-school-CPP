#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span {
private:
	unsigned int size;
	unsigned int freeSpace;
	std::vector<int> array;
public:
	Span();
	Span(unsigned int n);
	Span(const Span &other);
	Span& operator=(const Span &other);
	~Span();
	void addNumber(int);
	void addRange(int begin, int end);
	int getMaxSize(void);
	int getCurrentSize(void);
	int getElem(unsigned int index);
	int longestSpan(void);
	int shortestSpan(void);
};

#endif