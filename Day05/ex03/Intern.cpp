#include "Intern.hpp"

Intern::Intern()
{
	this->shrab = &Intern::returnShrabbery;
	this->robot = &Intern::returnRobot;
	this->pardon = &Intern::returnPresident;
}

Intern::~Intern() {}

Intern::Intern(const Intern &other)
{
	*this = other;
}

Intern& Intern::operator=(const Intern &other)
{
	this->shrab = other.shrab;
	this->robot = other.robot;
	this->pardon = other.pardon;
	return(*this);
}

Form* Intern::returnShrabbery(std::string target)
{
	Form *f = new ShrubberyCreationForm(target);
	return(f);
}

Form* Intern::returnRobot(std::string target)
{
	Form *f = new RobotomyRequestForm(target);
	return(f);
}

Form* Intern::returnPresident(std::string target)
{
	Form *f = new PresidentialPardonForm(target);
	return(f);
}

Form* Intern::makeForm(std::string form, std::string target)
{
	std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	int i;

	i = 0;
	while (i < 3 && forms[i] != form)
		i++;
	switch (i) {
		case 0:
			return((this->*shrab)(target));
		case 1:
			return((this->*robot)(target));
		case 2:
			return((this->*pardon)(target));
		default:
			std::cout << "No such form!\n";
	}
	return(nullptr);
}

const char* Intern:: NoSuchFormException ::what() const throw()
{
	return ("No such form. NULL will be returned.\n");
}