#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("StandartName")
{
	this->_grade = 150;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	if (checkGrade(grade) == 0)
		this->_grade = grade;
	else
		this->_grade = 150;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.getName())
{
	this->_grade = other.getGrade();
}

void Bureaucrat::signForm(Form &form)
{
	form.beSigned(this);
}

int Bureaucrat::checkGrade(int grade)
{
	try
	{
		if (grade > 150)
			throw(Bureaucrat::GradeTooLowException());
		if (grade < 0)
			throw(Bureaucrat::GradeTooHighException());
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << "\n";
		return (1);
	}
	return (0);
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other)
{
	this->_grade = other.getGrade();
	return (*this);
}

Bureaucrat::~Bureaucrat() {}

std::string Bureaucrat::getName(void) const
{
	return(this->name);
}

int Bureaucrat::getGrade(void)  const
{
	return(this->_grade);
}

void Bureaucrat::incrementGrade(void)
{
	if (this->_grade > 0)
		this->_grade--;
}

void Bureaucrat::decrementGrade(void)
{
	if (this->_grade < 150)
		this->_grade++;
}

const char* Bureaucrat:: GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}

const char* Bureaucrat:: GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}

std::ostream & operator<<(std::ostream &out, const Bureaucrat &bur)
{
	out << bur.getName() << ", bureaucrat grade " << bur.getGrade();
	return(out);
}