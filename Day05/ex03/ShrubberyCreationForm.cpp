#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : ::Form("ShrubberyCreationForm", 145, 137, "no_target")
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137, target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : Form("ShrubberyCreationForm", 145, 137, other.getTarget())
{

}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	this->setTarget(other.getTarget());
	return(*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::action(void) const
{
	std::string name;
	std::string tree;

	name = this->getTarget() + "_shrubbery";
	tree = "       _-_\n    /~~   ~~\\\n /~~         ~~\\\n{               }\n \\  _-     -_  /\n   ~  \\\\ //  ~\n_- -   | | _- _\n_ -    | |   -_\n      // \\\\\n";
	std::ofstream file(name);
	file << tree;
	file.close();
	std::cout << "Shrubbery was successfully created.\n";
}

std::ostream & operator<<(std::ostream &out, const ShrubberyCreationForm &form)
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