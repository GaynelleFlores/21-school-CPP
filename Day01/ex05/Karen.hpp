#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>

enum e_levels {
	DEBUG,
	INFO,
	WARNING,
	ERROR
};

class Karen {
	typedef void (Karen::*func_ptr)(void);
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
public:
	func_ptr debug_ptr;
	func_ptr info_ptr;
	func_ptr warning_ptr;
	func_ptr error_ptr;
	Karen()
	{
		this->debug_ptr = &Karen::debug;
		this->info_ptr = &Karen::info;
		this->warning_ptr = &Karen::warning;
		this->error_ptr = &Karen::error;
	}
	void complain(std::string level)
	{
		e_levels lvl(0);
		std::cout<<lvl;
		switch (level) {
			case "DEBUG":
				(this->*debug_ptr)();
				break ;
		case "INFO":
				(this->*info_ptr)();
				break ;
		case "WARNING":
				(this->*warning_ptr)();
				break ;
		case"ERROR":
				(this->*error_ptr)();
				break ;
	}
	}
};

#endif