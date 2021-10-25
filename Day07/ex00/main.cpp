#include <iostream>
#include  "whatever.hpp"

int main()
{
	{
		Awesome a(19), b(1);
		std::cout << "Test with Awesome:\n";
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << min(a, b) << std::endl;
		std::cout << "max( a, b ) = " << max(a, b) << std::endl;
		swap(a, b);
		std::cout << "after swap: a = " << a << ", b = " << b << std::endl;
	}
	{
		std::cout << "\nTest with int:\n";
		int a = 9, b = 18;
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << max( a, b ) << std::endl;
		swap(a, b);
		std::cout << "after swap: a = " << a << ", b = " << b << std::endl;
	}
	{
		std::cout << "\nTest with float:\n";
		float a = 67889.1f, b = 67889.2f;
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << max( a, b ) << std::endl;
		swap(a, b);
		std::cout << "after swap: a = " << a << ", b = " << b << std::endl;
	}
	{
		std::cout << "\nTest with strings:\n";
		std::string c = "chaine1";
		std::string d = "chaine2";
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
		swap(c, d);
		std::cout << "after swap: c = " << c << ", d = " << d << std::endl;
		return 0;
	}
}