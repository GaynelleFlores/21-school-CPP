#include "span.hpp"

int main(void)
{
	{
		std::cout << "	Test with 10000 elements\n";
		Span sp = Span(10000);
		sp.addNumber(3);
		sp.addRange(15, 9500);
		try {
			std::cout << "Longest span is: " << sp.longestSpan() << "\n";
			std::cout << "Shortest span is: " << sp.shortestSpan() << "\n";
		}
		catch(std::exception &r)
		{
			std::cout << r.what() << "\n";
		}
	}
	{
		std::cout << "	\nTest with errors\n";
		Span sp = Span(1);
		sp.addNumber(5);
		std::cout << "*Let\'s try to add an element in array with no free space:*\n";
		try {
			sp.addNumber(1);
		}
		catch(std::exception &r)
		{
			std::cout << r.what() << "\n";
		}
		std::cout << "*Let\'s try to print elem which isn't exist:*\n";
		try {
			sp.getElem(1);
		}
		catch(std::exception &r)
		{
			std::cout << r.what() << "\n";
		}
		std::cout << "*Let\'s try to find a span in an array with single elem:*\n";
		try {
			sp.longestSpan();
		}
		catch(std::exception &r)
		{
			std::cout << r.what() << "\n";
		}
	}
	return (0);
}