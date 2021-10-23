#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include  "RobotomyRequestForm.hpp"
#include  "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main ()
{
	Bureaucrat jim("Jim", 0);
	Intern someRandomIntern;

	Form* rrf;
	Form* ppf;
	Form* scf;
	Form* test;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	ppf = someRandomIntern.makeForm("presidential pardon", "Fred");
	scf = someRandomIntern.makeForm("shrubbery creation", "School21");
	test = someRandomIntern.makeForm("test", "School21");
	std::cout << *rrf << std::endl;
	std::cout << *ppf << std::endl;
	std::cout << *scf << std::endl;

	jim.signForm(*rrf);
	jim.executeForm(*rrf);
	jim.signForm(*ppf);
	jim.executeForm(*ppf);
	jim.signForm(*scf);
	jim.executeForm(*scf);

	delete test;
	delete scf;
	delete ppf;
	delete rrf;

}