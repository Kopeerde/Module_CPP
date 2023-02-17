
#include "../headers/Cat.hpp"
#include "../headers/Dog.hpp"
#include "../headers/WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	const WrongAnimal* eldritch_monster = new WrongAnimal;
	const WrongAnimal* protato = new WrongCat;
	eldritch_monster->makeSound();
	protato->makeSound();



	delete meta;
	delete j;
	delete i;
	delete eldritch_monster;
	delete protato;

	return 0;
}