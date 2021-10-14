#include "Contact.hpp"

std::string Contact::createField(std::string name)
{
	std:: string str;
	std::cout << "Enter a " << name << ": ";
	std::getline(std::cin, str);
	if (std::cin.eof())
		exit (0);
	return (str);
}

Contact::Contact(void)
{
	this->_index = 0;
	this->_firstName = "empty";
}

int Contact::checkEmpty(void)
{
	if (this->_firstName == "empty")
		return (0);
	return (1);
}

void Contact::createContact(int i)
{
	std:: string str;

	this->_index = i;
	this->_firstName = createField("first name");
	this->_lastName = createField("last name");
	this->_nickName = createField("nickname");
	this->_number = createField("phone number");;
	this->_secret = createField("darkest secret");
	std::cout << "You did it!\n\n";
}

void Contact::printContact(void)
{
	std::cout << std::setw(10) << std::setfill('.') << this->_index + 1 << "|";
	if (this->_firstName.length() <= 10)
		std::cout << std::setw(10) << this->_firstName << "|";
	else
		std::cout << this->_firstName.substr(0, 9) << ".|";
	if (this->_lastName.length() <= 10)
		std::cout << std::setw(10) << this->_lastName << "|";
	else
		std::cout << this->_lastName.substr(0, 9) << ".|";
	if (this->_nickName.length() <= 10)
		std::cout << std::setw(10) << this->_nickName << "|";
	else
		std::cout << this->_nickName.substr(0, 9) << ".|";
	std::cout << '\n';
}

void Contact::printAll(void)
{
	std::cout.setf(std::ios::left);
	std::cout << std::setw(17) << std::setfill(' ') << "First name: " << this->_firstName << "\n";
	std::cout << std::setw(17) << "Last name: " << this->_lastName << "\n";
	std::cout << std::setw(17) << "Nickname: " << this->_nickName << "\n";
	std::cout << std::setw(17) << "Phone number: " << this->_number << "\n";
	std::cout << std::setw(17) << "Darkest secret: " << this->_secret << "\n";
}