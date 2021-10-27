#include <iostream>
#include <list>
#include <vector>
#include "easyfind.hpp"

int main (void)
{
	{
		std::cout << "	Test with list:\n";
		std::list<int> list;
		std::list<int>::iterator i;
		for (int i = 0; i < 5; i++)
			list.push_back(i + 1);
		try {
			i = easyfind(list, 1);
			std::cout << "result: " << (*i) << "\n";
		}
		catch (std::exception &e) {
			std::cout << e.what() << "\n";
		}
	}
	{
		std::cout << "	Test with vector:\n";
		std::vector<int> vec;
		vec.push_back(1);
		vec.push_back(2);
		vec.push_back(3);
		vec.push_back(4);
		vec.push_back(5);
		std::vector<int>::iterator i;
		try {
			i = easyfind(vec, 1);
			std::cout << "result: " << (*i) << "\n";
		}
		catch (std::exception e) {
			std::cout << e.what() << "\n";
		}
	}
	return 0;
}
