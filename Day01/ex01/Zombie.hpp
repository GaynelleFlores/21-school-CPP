#include <iostream>
#include <stdlib.h>

class Zombie {
private:
	std::string name;
public:
	Zombie();
	~Zombie();
	Zombie(std::string name);
	void setName(std::string name);
	void announce ();
};