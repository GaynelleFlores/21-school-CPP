#include "Contact.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->_i = -1;
}

void PhoneBook::add(void)
{
	this->_i++;
	if (this->_i > 7)
	{
		std::cout << "Phonebook is full. First contact will be overwritten\n";
		this->_i = 0;
	}
	this->_contacts[_i].createContact(_i);
}

void PhoneBook::findContact(void)
{
	int j;
	std::string str;
	while (1)
	{
		std::cout << "Enter the index of the desired contact: ";
		std::getline(std::cin, str);
		if (str == "stop")
			return ;
		j = atoi(str.c_str());
		if (j == 0 || j > 8 || this->_contacts[j - 1].checkEmpty() == 0)
			std::cout << "Sorry, I couldn't find it. Try again or enter \"stop\".\n";
		else
		{
			this->_contacts[j - 1].printAll();
			return ;
		}
	}
}
void PhoneBook::search(void)
{
	if (printContacts() == 0)
	{
		std::cout << "There are no contacts in the phone book yet\n";
		return ;
	}
	findContact();
}


int PhoneBook::printContacts(void)
{
	int j;
	int flag;

	flag = 0;
	j = 0;
	while (j < 8)
	{
		if (this->_contacts[j].checkEmpty() == 1)
		{
			if (flag == 0)
			{
				std::cout << std::setw(10) << "...index.." << "|";
				std::cout << std::setw(10) << "first name" << "|";
				std::cout << std::setw(10) << "last  name" << "|";
				std::cout << std::setw(10) << "nick  name" << "|\n";
			}
			this->_contacts[j].printContact();
			flag++;
		}
		j++;
	}
	if (flag == 0)
		return (0);
	else
		return (1);
}

