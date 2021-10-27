#include <iostream>
#include <stack>
#include "mutantstack.hpp"

int main()
{
	{
		std::cout << "Test from subject: " << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(8);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		std::cout << "Print stack with using an iterator: " << std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::cout << "End of stack" << std::endl;
		std::stack<int> s(mstack);
	}
	{
		std::cout << "More tests: " << std::endl;
		MutantStack<int> a;
		a.push(12);
		a.push(18);
		a.push(567);
		MutantStack<int> b(a);
		MutantStack<int>::iterator it = a.begin();
		MutantStack<int>::iterator ite = a.end();
		std::cout << "Print stack A: " << std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::cout << "Delete top elemen from stack A:" << std::endl;
		a.pop();
		it = a.begin();
		ite = a.end();
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		it = b.begin();
		ite = b.end();
		std::cout << "Print stack B which is copy of A (it still has a first elem, wow!): " << std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
	return 0;
}