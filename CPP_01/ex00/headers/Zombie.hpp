
#ifndef MODULE_CPP_ZOMBIE_HPP
#define MODULE_CPP_ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
	private:
		std::string name;

	public:
		Zombie(std::string str);
		~Zombie();
		void announce(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif //MODULE_CPP_ZOMBIE_HPP
