#include <iostream>
#include <fstream>
#include <cerrno>
#include <sstream>
#include <stdio.h>
#include <sys/errno.h>

void checkArguments(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "I want to get filename, string1 and string2!\n";
		exit (0);
	}
	std::string s1(argv[2]);
	std::string s2(argv[3]);
	if (s1.empty() || s2.empty())
	{
		std::cout << "One or two strings are empty, try again.\n";
		exit (0);
	}
	if (s1 == s2)
	{
		std::cout << "First and Second strings are identical.\n";
		exit (0);
	}
}

void checkFile(std::ifstream *read)
{
	if (!*read)
	{
		std::cout << strerror(errno) << std::endl;
		exit (errno);
	}
	if (read->peek() == EOF)
	{
		std::cout << "Fail is empty\n";
		exit (0);
	}
}

void replacing(std::string del, std::string add, std::string name)
{
	std::string str;
	std::stringstream buffer;
	std::ifstream read(name);
	checkFile(&read);
	name.append(".replase");
	std::ofstream file(name);
	buffer << read.rdbuf();
	str = buffer.str();
	int start = 0;
	while ((start = str.find(del, start)) >= 0)
	{
		str.erase(start, del.length());
		str.insert(start, add);
	}
	file << str;
	file.close();
	read.close();
}

int main(int argc, char **argv)
{
	checkArguments(argc, argv);
	std::string del(argv[2]);
	std::string add(argv[3]);
	std::string name(argv[1]);
	replacing(del, add, name);
}