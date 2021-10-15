#include <iostream>
#include <stdlib.h>

#define ZOMBIE "\U0001F9DF"

class Zombie {
private:
	std::string name;
public:
	Zombie(void);
	~Zombie(void);
	Zombie(std::string name);
	void setName(std::string name);
	void announce (void);
};