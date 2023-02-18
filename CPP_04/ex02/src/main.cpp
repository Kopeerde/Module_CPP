
#include "../headers/Cat.hpp"
#include "../headers/Dog.hpp"
#include "../headers/WrongCat.hpp"

int main()
{
	const Dog* j = new Dog();
	const Cat* i = new Cat();
/*	Animal *list[10]; // Ne compile pas car on ne peut instancier une classe de base "Animal"
	for (int index = 0; index < 10; index++)
	{
		if (index < 5)
			list[index] = new Dog;
		else
			list[index] = new Cat;
	}

	list[0]->brain.ideas[0] = "0";
	list[0]->brain.ideas[1] = "1";
	list[1]->brain.ideas[0] = "test";
	list[1]->brain.ideas[1] = "wot?";

	std::cout << list[0]->brain.ideas[0] << std::endl;
	std::cout << list[0]->brain.ideas[1] << std::endl;
	std::cout << list[1]->brain.ideas[0] << std::endl;
	std::cout << list[1]->brain.ideas[1] << std::endl;
*/



	delete j;
	delete i;
//	for (int index = 0; index < 10; index ++)
//		delete list[index];


	return 0;
}