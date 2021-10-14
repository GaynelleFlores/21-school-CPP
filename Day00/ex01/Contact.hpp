#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <stdlib.h>

class Contact {
private:
	int _index;
	std::string _firstName;
	std::string _lastName;
	std::string _nickName;
	std::string _number;
	std::string _secret;

	std::string createField(std::string name);
public:
	Contact(void);
	int checkEmpty(void);
	void createContact(int i);
	void printContact(void);
	void printAll(void);
};

#endif