#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm() : ::Form("RobotomyRequestForm", 72, 45, "no_target") {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45, target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : Form("RobotomyRequestForm", 72, 45, other.getTarget()) {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	this->setTarget(other.getTarget());
	return(*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::action(void) const
{
	srand(time(NULL));
	int a;
	std::cout << "*drill noises*\n";
	a = rand()%100;
	if (a < 50)
		std::cout << this->getTarget() << " has been robotomized successfully.\n";
	else
		std::cout << "Unfortunately, " << this->getTarget() << " has not been robotomized.\n";

}

std::ostream & operator<<(std::ostream &out, const RobotomyRequestForm &form)
{
	out << "Form \"" << form.getName() << "\". Status: ";
	if (form.getStatus())
		out << "signed. ";
	else
		out << "unsigned. ";
	out << "Required grade for signing: " << form.getGradeForSign();
	out << ". Required grade for execution: " << form.getGradeForExecute() << ".";
	out << " Target: " << form.getTarget() << ".";
	return (out);
}