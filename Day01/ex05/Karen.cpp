#include "Karen.hpp"

#define GREEN(text) ("[38;2;96;186;70m" text "[0m")
#define GREEN2(text) ("[38;2;167;207;159m" text "[0m")
#define YELLOW(text) ("[38;2;254;209;12m" text "[0m")
#define RED(text) ("[38;2;255;12;27m" text "[0m")

Karen::Karen(void)
{
	this->debug_ptr = &Karen::debug;
	this->info_ptr = &Karen::info;
	this->warning_ptr = &Karen::warning;
	this->error_ptr = &Karen::error;
}

Karen::~Karen(void)
{
	std::cout << "Goodbye!\n";
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
			break ;
		case 1:
			(this->*info_ptr)();
			break ;
		case 2:
			(this->*warning_ptr)();
			break ;
		case 3:
			(this->*error_ptr)();
			break ;
		default:
			std::cout << "Unknown level\n";
			break ;
	}
}

void Karen::debug( void )
{
		std::cout << GREEN("debug\n");
}


void Karen::info( void )
{
		std::cout << GREEN2("info\n");
}

void Karen::warning( void )
{
		std::cout << YELLOW("warning\n");
}

void Karen::error( void )
{
		std::cout << RED("error\n");
}