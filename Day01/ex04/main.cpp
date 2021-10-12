#include <iostream>
#include <fstream>
#include <cerrno>

void checkArguments(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "I want to get filename, string1 and string2!\n";
		exit (0);
	}
	if (!argv[2] || argv[2][0] == '\0' || !argv[3] || argv[3][0] == '\0' )
	{
		std::cout << "One or two strings are empty, try again.\n";
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
	std::ifstream read(name);
	checkFile(&read);
	name.append(".replase");
	std::ofstream file(name);
	while (std::getline(read, str))
	{
		int start = 0;
		while ((start = str.find(del, start)) >= 0)
		{
			str.replace(str.find(del, start), del.length(), add);
		}
		file << str << "\n";
	}
}

int main(int argc, char **argv)
{
	checkArguments(argc, argv);
	std::string del(argv[2]);
	std::string add(argv[3]);
	std::string name(argv[1]);
	replacing(del, add, name);
}