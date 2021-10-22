#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Dog Scooby;
	for (int i = 0; i < 100; i++)
		Scooby.setIdea("Wow!", i);
	std::cout << std::endl;
	Dog Ralf(Scooby);
	std::cout << "Scooby's idea: " << Scooby.getIdea(78) << "\n";
	std::cout << "Ralf's idea: " << Ralf.getIdea(78) << "\n";
	Scooby.setIdea("Woof-Woof", 78);
	std::cout << "Scooby's idea: " << Scooby.getIdea(78) << "\n";
	std::cout << "Ralf's idea: " << Ralf.getIdea(78) << "\n";
}