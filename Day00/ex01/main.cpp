#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
	PhoneBook book;
	std::string str;

	std::cout << COLOR("***AWESOME PHONEBOOK***\n");
	while (1)
	{
		std::cout << "Please, enter a command ADD, SEARCH or EXIT:";
		std::getline(std::cin, str);
		if (std::cin.eof())
			exit (0);
		if (str == "ADD" || str == "add")
			book.add();
		else if (str == "SEARCH" || str == "search")
			book.search();
		else if (str == "EXIT" || str == "exit")
		{
			std::cout << COLOR("Goodbye!\n");
			exit (0);
		}
		else
			std::cout << "Let's try again. ";
	}
}