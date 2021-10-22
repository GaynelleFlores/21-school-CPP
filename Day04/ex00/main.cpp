#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	std::cout << "		NORMAL ANIMALS"<< std::endl;
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	std::cout << cat->getType() << " " << std::endl;
	cat->makeSound();
	std::cout << dog->getType() << " " << std::endl;
	dog->makeSound();
	std::cout << meta->getType() << " " << std::endl;
	meta->makeSound();
	std::cout << std::endl;

	std::cout << "		WRONG ANIMALS"<< std::endl;
	const WrongAnimal* wrongAnimal = new WrongAnimal();
	const WrongAnimal *wrongCat = new WrongCat();
	std::cout << wrongAnimal->getType() << " " << std::endl;
	wrongAnimal->makeSound();
	std::cout << wrongCat->getType() << " " << std::endl;
	wrongCat->makeSound();
	std::cout << std::endl;

	delete meta;
	delete dog;
	delete cat;
	delete wrongCat;
	delete wrongAnimal;
}

