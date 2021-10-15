#include "Karen.hpp"

int main(int argc, char **argv)
{
	Karen test;

	switch (argc) {
		case 1:
			std::cout << "Give me a level, please\n";
			exit(0);
	}
	test.complain(argv[1]);
}