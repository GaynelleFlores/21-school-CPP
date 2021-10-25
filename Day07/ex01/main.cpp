#include "iter.hpp"

int main (void)
{
	int arr[] = {1, 2, 3, 4, 5};
	Awesome arr1[] = {1, 2, 3, 4, 5};
	std::string arr2[] = {"a", "b", "c"};
	std::cout << "Iter with int array:" << std::endl;
	iter(arr, 5, print);
	std::cout << "Iter with \"Awesome\":" << std::endl;
	iter(arr1, 5, print);
	std::cout << "Iter with strings:" << std::endl;
	iter(arr2, 3, print);
	return 0;
}