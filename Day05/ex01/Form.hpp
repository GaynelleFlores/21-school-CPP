#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string	_name;
	bool 				_signed;
	const int			_gradeForSign;
	const int			_gradeForExecute;
public:
	Form();
	Form(std::string name, int gradeForSign, int gradeForExecute);
	Form(const Form &other);
	Form& operator=(const Form &other);
	~Form();

	void beSigned(Bureaucrat *bur);

	int returnCorrectGrade(int grade);
	std::string getName(void) const;
	bool			getStatus(void) const;
	int			getGradeForSign(void) const;
	int			getGradeForExecute(void) const;
	static int checkFormGrade(int burGrade, int formGrade);
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

std::ostream & operator<<(std::ostream &out, const Form &bur);

#endif