
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

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

#endif //ZOMBIE_HPP
