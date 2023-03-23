
#include "../headers/Cat.hpp"
#include "../headers/Dog.hpp"
#include "../headers/WrongCat.hpp"

int main()
{
	const unsigned int nbr_animals = 10;

	const Dog *j = new Dog();
	const Cat *i = new Cat();
	Animal *list[nbr_animals];

	for (unsigned int index = 0; index < nbr_animals; index++)
	{
		if (index < (nbr_animals / 2))
			list[index] = new Dog;
		else
			list[index] = new Cat;
	}

	list[0]->set_idea(0, "0");
	list[0]->set_idea(1, "1");
	list[1]->set_idea(0, "test");
	list[1]->set_idea(1, "wot?");

	{
		Dog *temp_1 = new Dog();
		Dog *temp_2 = new Dog(*temp_1);

		temp_1->set_idea(0, "test");
		temp_2->set_idea(0, "argh");

		std::cout << "\ntemp_1 : " << temp_1->get_idea(0) << " temp_2 : " << temp_2->get_idea(0) << "\n" << std::endl;

		delete temp_1;
		delete temp_2;
	}

	std::cout << "\n" << std::endl;

	std::cout << list[0]->get_idea(0) << std::endl;
	std::cout << list[0]->get_idea(1) << std::endl;
	std::cout << list[1]->get_idea(0) << std::endl;
	std::cout << list[1]->get_idea(1) << std::endl;

	std::cout << "\n" << std::endl;


	delete j;
	delete i;
	for (int index = 0; index < 10; index ++)
		delete list[index];


	return 0;
}