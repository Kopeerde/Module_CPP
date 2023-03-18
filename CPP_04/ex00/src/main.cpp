
#include "../headers/Cat.hpp"
#include "../headers/Dog.hpp"
#include "../headers/WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "\n" << j->getType() << " " << std::endl;
	std::cout << i->getType() << " \n" << std::endl;

	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << "\n" << std::endl;
	const WrongAnimal* eldritch_monster = new WrongAnimal;
	const WrongAnimal* protato = new WrongCat;

	std::cout << "\n" << std::endl;
	eldritch_monster->makeSound();
	protato->makeSound();

	std::cout << "\n" << std::endl;
	delete meta;
	delete j;
	delete i;
	delete eldritch_monster;
	delete protato;

	return 0;
}