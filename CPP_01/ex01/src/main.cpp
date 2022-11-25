
#include "../headers/Zombie.hpp"

int main()
{
	int number_zombs = 5;
	{
		Zombie *horde = zombieHorde(number_zombs, "Terry");
		for (int i = 0; i < number_zombs; i++)
			horde[i].announce();

		delete [] horde; // delete [] pour delete la liste d'objets creer en un appel a new
	}

	return 0;
}