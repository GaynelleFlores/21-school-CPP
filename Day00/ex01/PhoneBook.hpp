#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#define HELLO "\033[38;5;069m***AWESOME PHONEBOOK***\033[0m"
#define BYE "\033[38;5;069mGoodbye!\033[0m\n"

class PhoneBook {
private:
	Contact contacts[8];
	int i;

public:
	PhoneBook()
	{
		this->i = -1;
	}
	void add()
	{
		this->i++;
		if (this->i > 7)
		{
			std::cout << "Phonebook is full. First contact will be overwritten\n";
			this->i = 0;
		}
		this->contacts[i].createContact(i);
	}
	void findContact()
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
			if (j == 0 || j > 8 || this->contacts[j - 1].checkEmpty() == 0)
				std::cout << "Sorry, I couldn't find it. Try again or enter \"stop\".\n";
			else
			{
				this->contacts[j - 1].printAll();
				return ;
			}
		}
	}
	void search()
	{
		if (printContacts() == 0)
		{
			std::cout << "There are no contacts in the phone book yet\n";
			return ;
		}
		findContact();
	}
	int printContacts()
	{
		int j;
		int flag;

		flag = 0;
		j = 0;
		while (j < 8)
		{
			if (this->contacts[j].checkEmpty() == 1)
			{
				this->contacts[j].printContact();
				flag++;
			}
			j++;
		}
		if (flag == 0)
			return (0);
		else
			return (1);
	}
};

#endif