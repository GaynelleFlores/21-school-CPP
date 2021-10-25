#include <iostream>
#include "Array.hpp"

#define LEN 5
int main ()
{
	Array<int> a(LEN);
	for (int i = 0; i < LEN; i++)
	{
		a[i] = i;
	}
	std::cout << "Create an array a: ";
	for(int i = 0; i < LEN; i++)
		std::cout << a[i] << " ";
	std::cout << std::endl;
	std::cout << "Size function return a array's size: " << a.size() << "\n";
	std::cout << "Create a copy_a array: ";
	Array<int>copy_a(a);
	for(int i = 0; i < LEN; i++)
		std::cout << copy_a[i] << " ";
	std::cout << std::endl;
	std::cout << "Then change a[1] from 1 to 8: ";
	a[1] = 8;
	for(int i = 0; i < LEN; i++)
		std::cout << a[i] << " ";
	std::cout << std::endl;
	std::cout << "And a_copy array wasn't changed: ";
	for(int i = 0; i < LEN; i++)
		std::cout << copy_a[i] << " ";
	std::cout << std::endl;
	return 0;
}
