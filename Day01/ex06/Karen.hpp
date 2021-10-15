#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>

class Karen {
	typedef void (Karen::*func_ptr)(void);
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
public:
	func_ptr debug_ptr;
	func_ptr info_ptr;
	func_ptr warning_ptr;
	func_ptr error_ptr;
	Karen(void);
	int returnLevel(std::string level);
	void complain(std::string level);
};

#endif