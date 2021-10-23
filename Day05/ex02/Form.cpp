#include "Form.hpp"

Form::Form() : _name("StandardForm"),  _gradeForSign(150), _gradeForExecute(150)
{
	this->_signed = 0;
}

Form::Form(std::string name, int gradeForSign, int gradeForExecute, std::string target) :
								_name(name), _gradeForSign(returnCorrectGrade(gradeForSign)),
								_gradeForExecute(returnCorrectGrade(gradeForExecute))
{
	this->_signed = 0;
	this->_target = target;
}

int Form::returnCorrectGrade(int grade)
{
	try
	{
		if (grade > 150)
			throw (Form::GradeTooLowException());
		if (grade < 0)
			throw (Form::GradeTooHighException());
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << "\n";
		return (150);
	}
	return (grade);
}

Form::Form(const Form &other) : _name(other.getName()), _gradeForSign(other.getGradeForSign()), _gradeForExecute(other.getGradeForExecute())
{
	this->_signed = other.getStatus();
}

Form::~Form(){}

int Form::checkFormGrade(int Grade, int formGrade)
{
	try
	{
		if (Grade < 0)
			throw(Form::GradeTooHighException());
		if (Grade > formGrade)
			throw(Form::GradeTooLowException());
		if (formGrade < 0)
			throw(Form::GradeTooHighException());
	}
	catch (std::exception & e)
	{
		return (1);
	}
	return (0);
}

void Form::beSigned(Bureaucrat *bur)
{
	if (&bur == nullptr)
		return ;
	if (this->getStatus())
	{
		std::cout << bur->getName() <<" cannot sign " << this->getName();
		std::cout << " because the form has already been signed.\n";
		return ;
	}
	if (checkFormGrade(bur->getGrade(), this->getGradeForSign()) == 1)
	{
		std::cout << bur->getName() <<" cannot sign " << this->getName()
					<< " because his grade too low.\n";
	}
	else
	{
		this->_signed = true;
		std::cout << bur->getName() <<" signs " << this->getName() << ".\n";
	}
}

std::string		Form::getTarget(void) const
{
	return(this->_target);
}

std::string Form::getName(void) const
{
	return(this->_name);
}

bool			Form::getStatus(void) const
{
	return(this->_signed);
}

int			Form::getGradeForSign(void) const
{
	return(this->_gradeForSign);
}

int			Form::getGradeForExecute(void) const
{
	return(this->_gradeForExecute);
}

void Form::execute(Bureaucrat const & executor) const
{
	if (&executor == nullptr)
		return ;
	try
	{
		if (!this->getStatus())
			throw(Form::FormIsntSignedException());
	}
	catch (std::exception & e)
	{
		std::cout << e.what();
		std::cout << executor.getName() << " cannot execute it.\n";
		return ;
	}
	try
	{
		if (executor.getGrade() > this->getGradeForExecute())
			throw(Form::GradeTooLowException());
	}
	catch (std::exception & e)
	{
		std::cout << executor.getName() << " has too low grade. ";
		std::cout << this->getName() << " wasn't executed.\n";
		return ;
	}
	this->action();
}

void Form::setTarget(std::string target)
{
	this->_target = target;
}

const char* Form:: GradeTooHighException::what() const throw()
{
	return ("Grade too high! Grade changed to 150.");
}

const char* Form:: GradeTooLowException::what() const throw()
{
	return ("Grade too low! Grade changed to 150.");
}

const char* Form::FormIsntSignedException::what() const throw()
{
	return ("Form isn't signed. ");
}

std::ostream & operator<<(std::ostream &out, const Form &form)
{
	out << "Form \"" << form.getName() << "\". Status: ";
	if (form.getStatus())
		out << "signed. ";
	else
		out << "unsigned. ";
	out << "Required grade for signing: " << form.getGradeForSign();
	out << ". Required grade for execution: " << form.getGradeForExecute() << ".";
	return (out);
}