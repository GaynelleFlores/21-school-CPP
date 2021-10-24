#include "Converter.hpp"
#include <cmath>

Converter::Converter() {}

Converter::Converter(const Converter &other)
{
	(void)&other;
}

Converter& Converter::operator=(const Converter &other)
{
	(void)&other;
	return(*this);
}

Converter::~Converter() {}

bool Converter::isDigits(const std::string s)
{
	return (s.find_first_not_of(".+-f0123456789") == std::string::npos);
}

void Converter::strToInt(std::string s, double num)
{
	if ((num == 0 && checkZero(s)) || (this->isDigits(s) == 0 && s.length() > 1) || num > INT_MAX || num < INT_MIN)
	{
		std:: cout << "int: impossible\n";
		return ;
	}
	std:: cout << "int: " <<  static_cast<int>(num) << "\n";
}

int Converter::checkZero(std::string s)
{
	if (s != "0" || s != "0.0" || s != "0.0f" || s != "-0" || s != "+0")
		return (0);
	return (1);
}

int Converter::checkInf(std::string s)
{
	if (s == "-inf" || s == "+inf" || s == "-inff" || s == "+inff" || s == "nan" || s == "inf" || s == "inff" || s == "nanf")
		return (0);
	return (1);
}

void Converter::strToDouble(std::string s, double num)
{
	if (checkInf(s) == 0)
	{
		std:: cout << "double: ";
		if (num > 0)
			std:: cout << "+";
		std:: cout << num << "\n";
		return ;
	}
	if ((num == 0 && checkZero(s)) || (this->isDigits(s) == 0 && s.length() > 1))
	{
		std:: cout << "double: impossible\n";
		return ;
	}
	if (round(num) == num)
		std:: cout << "double: " << num << ".0\n";
	else
		std:: cout << "double: " << num << "\n";
}

void Converter::strToFloat(std::string s, double num)
{
	if (checkInf(s) == 0)
	{
		std:: cout << "float: ";
		if (num > 0)
			std:: cout << "+";
		std:: cout << num << "f\n";
		return ;
	}
	if ((num == 0 && checkZero(s)) || (this->isDigits(s) == 0 && s.length() > 1))
	{
		std:: cout << "float: impossible\n";
		return ;
	}
	if (round(num) == num)
		std:: cout << "float: " << num << ".0f\n";
	else
		std:: cout << "float: " << num << "f\n";
}

int Converter::printInvisibleChars(char c)
{
	std::string chars = "abtnvfr";
	if (c >= 7 && c <= 13)
	{
		std:: cout << "char: " << "\'\\" << chars[c - 7] << "\'\n";
		return (1);
	}
	if (c == 27)
	{
		std:: cout << "char: " << "\'\\" << 'e' << "\'\n";
		return (1);
	}
	return 0;
}

void Converter::strToChar(std::string s, double num)
{
	char c;

	c = static_cast<char>(num);
	if ((num == 0 && checkZero(s)) || round(num) != num || num > 127)
	{
		std:: cout << "char: impossible\n";
		return ;
	}
	if ((c >= 0 && c <= 6) || c == 127 || (c >= 14 && c <= 26) || (c >= 28 && c <= 31) || num < 0)
	{
		std:: cout << "char: " << "Non displayable\n";
		return ;
	}
	if (printInvisibleChars(c) == 1)
		return ;
	std:: cout << "char: " << "\'" << c << "\'\n";
}
