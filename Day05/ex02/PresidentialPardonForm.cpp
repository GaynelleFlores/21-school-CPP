#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <ctime>

PresidentialPardonForm::PresidentialPardonForm() : ::Form("PresidentialPardonForm", 25, 5, "no_target") {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5, target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : Form("PresidentialPardonForm", 25, 5, other.getTarget()) {}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	this->setTarget(other.getTarget());
	return(*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::action(void) const
{
	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox.\n";
}

std::ostream & operator<<(std::ostream &out, const PresidentialPardonForm &form)
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