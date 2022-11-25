
#ifndef MODULE_CPP_ZOMBIE_HPP
#define MODULE_CPP_ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
	private:
		std::string name;

	public:
		Zombie();
		~Zombie();
		void set_name(std::string name);
		void announce(void);
};

Zombie* newZombie();
Zombie* zombieHorde(int N, std::string name);

#endif //MODULE_CPP_ZOMBIE_HPP
