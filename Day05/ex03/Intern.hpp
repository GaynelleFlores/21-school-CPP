#ifndef INTERN_HPP
#define INTERN_HPP

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include  "RobotomyRequestForm.hpp"
#include  "PresidentialPardonForm.hpp"
#include  "Form.hpp"

class Form;

class Bureaucrat;

class Intern {
	typedef Form* (Intern::*func_ptr)(std::string);
private:
	func_ptr robot;
	func_ptr pardon;
	func_ptr shrab;
	Form* returnShrabbery(std::string target);
	Form* returnRobot(std::string target);
	Form* returnPresident(std::string target);
public:
	Intern();
	~Intern();
	Intern(const Intern &other);
	Intern& operator=(const Intern &other);
	Form* makeForm(std::string form, std::string target);
	class NoSuchFormException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

};

#endif