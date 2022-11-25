
#include "../headers/Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *res = new Zombie[N]; // Zombie[N] permet d'allouer N objets en une fois

	for (int i = 0; i < N; i++)
		res[i].set_name(name);

	return res;
}