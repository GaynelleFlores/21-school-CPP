#include <iostream>
#include <stdlib.h>

class Zombie {
private:
	std::string name;
public:
	~Zombie();
	Zombie(std::string name);
	void announce ();
};