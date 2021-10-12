#include "Karen.hpp"

class Test {
public:
	typedef void (Test::*ptr)(void);
	void f(void)
	{
		std::cout << "Hell\n";
	}
	ptr ff;
	Test()
	{
		this->ff = &Test::f;
		(this->*ff)();
	//	this->*ff();
	}
};



int main()
{
	//Test t;
	//(t.*ff)();
	//typedef void (*ptr)(void);
	//ptr ff = &t.f;
	//ff();

	Karen test;// = new Karen();
	test.complain("DEBUG");
	test.complain("INFO");
	test.complain("WARNING");
	test.complain("ERROR");
	//test->debug();
	//(test.*debug_ptr)();

}