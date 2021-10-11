#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact {
private:
	int index;
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string login;
	std::string address;
	std::string email;
	std::string birthday;
	std::string number;
	std::string meal;
	std::string color;
	std::string secret;

	std::string createField(std::string name)
	{
		std:: string str;
		std::cout << "Enter a " << name << ": ";
		std::getline(std::cin, str);
		return (str);
	}
public:
	Contact()
	{
		this->index = 0;
		this->firstName = "empty";
	}
	int checkEmpty()
	{
		if (this->firstName == "empty")
			return (0);
		return (1);
	}
	void createContact(int i)
	{
		std:: string str;

		this->index = i;
		this->firstName = createField("first name");
		this->lastName = createField("last name");
		this->nickName = createField("nickname");
		this->login = createField("login");
		this->address =  createField("postal address");
		this->email = createField("email");
		this->number = createField("phone number");;
		this->birthday = createField("birthday date");
		this->meal = createField("favorite meal");
		this->color = createField("underwear color");
		this->secret = createField("darkest secret");
		std::cout << "You did it!\n\n";
	}
	void printContact()
	{
		std::cout << std::setw(10) << std::setfill('.') << this->index + 1 << "|";
		if (this->firstName.length() <= 10)
			std::cout << std::setw(10) << this->firstName << "|";
		else
			std::cout << this->firstName.substr(0, 9) << ".|";
		if (this->lastName.length() <= 10)
			std::cout << std::setw(10) << this->lastName << "|";
		else
			std::cout << this->lastName.substr(0, 9) << ".|";
		if (this->nickName.length() <= 10)
			std::cout << std::setw(10) << this->nickName << "|";
		else
			std::cout << this->nickName.substr(0, 9) << ".|";
		std::cout << '\n';
	}
	void printAll()
	{
		std::cout.setf(std::ios::left);
		std::cout << std::setw(17) << std::setfill(' ') << "First name: " << this->firstName << "\n";
		std::cout << std::setw(17) << "Last name: " << this->lastName << "\n";
		std::cout << std::setw(17) << "Nickname: " << this->nickName << "\n";
		std::cout << std::setw(17) << "Login: " << this->login << "\n";
		std::cout << std::setw(17) << "Postal address: " << this->address << "\n";
		std::cout << std::setw(17) << "Email: " << this->email << "\n";
		std::cout << std::setw(17) << "Phone number: " << this->number << "\n";
		std::cout << std::setw(17) << "Birthday date: " << this->birthday << "\n";
		std::cout << std::setw(17) << "Favorite meal: " << this->meal << "\n";
		std::cout << std::setw(17) << "Underwear color: " << this->color << "\n";
		std::cout << std::setw(17) << "Darkest secret: " << this->secret << "\n";
	}
};

#endif