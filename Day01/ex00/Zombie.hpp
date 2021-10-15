#include <iostream>
#include <stdlib.h>

class Zombie {
private:
	std::string name;
public:
	~Zombie(void);
	Zombie(std::string name);
	Zombie(void);
	void announce (void);
};