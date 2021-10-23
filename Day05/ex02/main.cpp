#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include  "RobotomyRequestForm.hpp"
#include  "PresidentialPardonForm.hpp"

int main ()
{
	Bureaucrat jim("Jim", 145);
	Bureaucrat leo("Leo", 5);
	std::cout << "Bureaucrats:\n";
	std::cout << jim << std::endl;
	std::cout << leo << std::endl;
	PresidentialPardonForm a("Mary");
	ShrubberyCreationForm b("Home");
	RobotomyRequestForm c("Bob");
	std::cout << "Forms:\n";
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << "Execution:\n";
	jim.signForm(a);
	jim.executeForm(a);
	leo.signForm(a);
	leo.executeForm(a);
	std::cout << "\n";
	leo.signForm(b);
	leo.executeForm(b);
	std::cout << "\n";
	leo.signForm(c);
	leo.executeForm(c);
}