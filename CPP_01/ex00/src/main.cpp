
#include "../headers/Zombie.hpp"

int main()
{
	{
		Zombie test("test"); // test est dans la stack
		randomChump("test2"); // Creer au pif un zombie et le detruit instant
	}
	{
		Zombie *new_zomb = newZombie("new_zomb");
		delete new_zomb;
	}
	{
		Zombie *test2 = new Zombie("test3"); // Cree un zombie dans la heap
		delete test2;
	}
	{
		randomChump("ET ON FAIT TOURNER LES SERVIETTES");
	}
	return 0;
}