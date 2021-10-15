#include <iostream>

int main (void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *PTR = &brain;
	std::string &REF = brain;

	std::cout << "Address of the string:\n";
	std::cout << &brain << std::endl;
	std::cout << "Address of the string by using PTR:\n";
	std::cout << PTR << std::endl;
	std::cout << "Address of the string by using REF:\n";
	std::cout << &REF << std::endl;

	std::cout << "\nString:\n";
	std::cout << brain << std::endl;
	std::cout << "String by using PTR:\n";
	std::cout << *PTR << std::endl;
	std::cout << "String by using REF:\n";
	std::cout << REF << std::endl;
}