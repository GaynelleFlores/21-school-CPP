#include <iostream>

typedef struct s_data {
	int i;
	std::string s;
} Data;

uintptr_t serialize(Data* ptr)
{
	return(reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return(reinterpret_cast<Data *>(raw));
}

int main ()
{
	uintptr_t test;
	Data data;
	Data *ptr;

	data.s = "Hello";
	data.i = 9;
	std::cout << "Before conversion:\n";
	std::cout << data.s << "\n";
	std::cout << data.i << "\n";
	test = serialize(&data);
	ptr = deserialize(test);
	std::cout << "After conversion:\n";
	std::cout << ptr->s << "\n";
	std::cout << ptr->i << "\n";
	return 0;
}