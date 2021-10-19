#include "Karen.hpp"

#define GREEN(text) ("[38;2;96;186;70m" text "[0m")
#define GREEN2(text) ("[38;2;167;207;159m" text "[0m")
#define YELLOW(text) ("[38;2;254;209;12m" text "[0m")
#define RED(text) ("[38;2;255;12;27m" text "[0m")

Karen::Karen()
{
	this->debug_ptr = &Karen::debug;
	this->info_ptr = &Karen::info;
	this->warning_ptr = &Karen::warning;
	this->error_ptr = &Karen::error;
}

int Karen::returnLevel(std::string level)
{
	int i;
	std::string lvls[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };

	i = 0;
	while (lvls[i] != level && i < 4)
		i++;
	return (i);
}

void Karen::complain(std::string level)
{
	int i;

	i = returnLevel(level);
	switch (i) {
		case 0:
			(this->*debug_ptr)();
		case 1:
			(this->*info_ptr)();
		case 2:
			(this->*warning_ptr)();
		case 3:
			(this->*error_ptr)();
			break;
		default:
			std::cout << "[ Insignificant problem ]\n";
	}
}

void Karen::debug( void )
{
	std::cout << GREEN("[ DEBUG ] This is debug!\n\n");
}

void Karen::info( void )
{
	std::cout << GREEN2("[ INFO ] This is info!\n\n");
}

void Karen::warning( void )
{
	std::cout << YELLOW("[ WARNING ] This is warning!\n\n");
}

void Karen::error( void )
{
	std::cout << RED("[ ERROR ] This is error!\n\n");
}