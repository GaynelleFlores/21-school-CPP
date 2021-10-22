#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	{
		std::cout << "\n	FIRST MAIN\n";
		int num;
		int i;

		i = 0;
		num = 2;
		Animal *array[num];
		while (i < num)
		{
			if (i < num / 2)
				array[i] = new Cat;
			else
				array[i] = new Dog;
			i++;
		}
		std::cout << std::endl;
		std::cout << "Type of first animal: " << array[0]->getType() << "\n";
		std::cout << "Type of last animal: " << array[num - 1]->getType() << "\n";
		std::cout << std::endl;
		i = 0;
		while (i < num)
		{
			if (i < num / 2)
				delete	array[i];
			else
				delete array[i];
			i++;
		}
	}
	{
		std::cout << "\n	SECOND MAIN\n";
		Cat kitty;
		for (int i = 0; i < 100; i++)
			kitty.setIdea("Wow!", i);
		std::cout << std::endl;
		Cat tom(kitty);
		std::cout << "Kitty's idea: " << kitty.getIdea(78);
		std::cout << std::endl;
		std::cout << "Tom's idea: " << tom.getIdea(78);
		std::cout << std::endl;
		kitty.setIdea("Meow meow", 78);
		std::cout << "Kitty's idea: " << kitty.getIdea(78);
		std::cout << std::endl;
		std::cout << "Tom's idea: " << tom.getIdea(78);
		std::cout << std::endl;
		std::cout << std::endl;
	}
}