#include <iostream>
#include "Converter.hpp"

double convertStrToDouble(std::string s)
{
	double num;

	if (s.length() == 1 && !(s[0] >= '0' && s[0] <= '9'))
	{
		num = s.at(0);
		return (num);
	}
	num = atof(s.c_str());
	return (num);
}

int main(int argc, char ** argv)
{
	double num;
	Converter converter;

	if (argc != 2)
	{
		std::cout << "Please, give me a one string representation of char, int, double or float.\n";
		exit (0);
	}
	std::string str(argv[1]);
	num = convertStrToDouble(str);
	converter.strToChar(str, num);
	converter.strToInt(str, num);
	converter.strToFloat(str, num);
	converter.strToDouble(str, num);
	return 0;
}