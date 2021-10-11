#include <iostream>

int main(int argc, char **argv)
{
	int i;
	int j;

	j = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		while (j < argc)
		{
			i = 0;
			while (argv[j][i] != '\0')
			{
				std::cout << (char)toupper(argv[j][i]);
				i++;
			}
			j++;
		}
		std::cout << "\n";
	}
}