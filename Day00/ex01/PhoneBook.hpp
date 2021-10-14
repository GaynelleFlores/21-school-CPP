#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <stdlib.h>

#define H(x) (x * x)
#define COLOR(text) ("\033[38;5;069m" text "\033[0m")

class PhoneBook {
private:
	Contact _contacts[8];
	int _i;

public:
	PhoneBook(void);
	void add(void);
	void findContact(void);
	void search(void);
	int printContacts(void);
};

#endif