#include "Bureaucrat.hpp"
#include "Form.hpp"

int main ()
{
	std::cout << "Create a Bureaucrat:" << std::endl;
	Bureaucrat a("Jim", 15);
	std::cout << a  << std::endl << std::endl;

	std::cout << "Create wrong form:" << std::endl;
	Form f("MyForm", -2, 151);
	std::cout << f << std::endl << std::endl;

	std::cout << "Let's sign it:"  << "\n";
	a.signForm(f);
	std::cout << f << std::endl;
	a.signForm(f);
	std::cout << std::endl;

	std::cout << "Create wrong Bureaucrat:"  << std::endl;
	Bureaucrat b("Carl", 156);
	std::cout << b << std::endl << std::endl;

	std::cout << "Create form which couldn't be signed:"  << std::endl;
	Form f2("SecondForm", 1, 1);
	std::cout << f2 << std::endl;
	f2.beSigned(&b);
	std::cout << f2 << std::endl;
}