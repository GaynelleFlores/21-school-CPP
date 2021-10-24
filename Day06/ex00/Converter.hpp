#ifndef CONVERTER_HPP
#define CONVERTER_HPP

#include <iostream>

class Converter
{
public:
	Converter();
	Converter(const Converter &other);
	Converter& operator=(const Converter &other);
	~Converter();

	bool isDigits(const std::string s);
	bool isWholeNumber(const std::string s);
	void strToChar(std::string s, double num);
	void strToInt(std::string s, double num);
	void strToFloat(std::string s, double num);
	void strToDouble(std::string s, double num);
	int printInvisibleChars(char c);
	int checkZero(std::string s);
	int checkInf(std::string s);

};



#endif