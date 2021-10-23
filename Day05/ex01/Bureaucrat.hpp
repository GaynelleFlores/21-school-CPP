#ifndef BIREAUCRAT_HPP
#define BIREAUCRAT_HPP

#include "Form.hpp"
#include <iostream>

class Form;

class Bureaucrat
{
protected:
	int _grade;
	const std::string name;
public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &other);

	Bureaucrat& operator=(const Bureaucrat &other);

	~Bureaucrat();

	std::string getName(void) const;
	int getGrade(void) const;
	void incrementGrade(void);
	void decrementGrade(void);
	int checkGrade(int grade);
	void signForm(Form &form);
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
};

std::ostream & operator<<(std::ostream &out, const Bureaucrat &bur);

#endif