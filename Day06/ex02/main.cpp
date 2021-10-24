#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	Base *p;

	srand(time(NULL));
	int a;
	a = rand()%3;
	if (a == 0)
	{
		std::cout << "Random choose A\n";
		p = new A();
		return (p);
	}
	if (a == 1)
	{
		std::cout << "Random choose B\n";
		p = new B;
		return (p);
	}
	std::cout << "Random choose C\n";
	p = new C;
	return (p);
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A\n";
	if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B\n";
	if (dynamic_cast<C*>(p) != NULL)
		std::cout << "C\n";
}

void identify(Base& p)
{
	try {
		if (dynamic_cast<A*>(&p))
			throw('A');
		if (dynamic_cast<B*>(&p))
			throw('B');
		if (dynamic_cast<C*>(&p))
				throw('C');
	}
	catch(char c) {
		std::cout << c << "\n";
	}
}

int main(void)
{
	Base *test;

	test = generate();
	identify(test);
	identify(*test);

	delete test;
	return 0;
}