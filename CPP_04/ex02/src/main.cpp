
#include "../headers/Cat.hpp"
#include "../headers/Dog.hpp"
#include "../headers/WrongCat.hpp"

int main()
{
	{
//		Animal animal_on_stack = Animal();
//		Animal *animal_on_heap = new Animal();

//		delete animal_on_heap;
	}

	{
		Dog dog = Dog();
		Cat cat = Cat();
	}

	{
		Dog *dog = new Dog();
		Cat *cat = new Cat();

		delete dog;
		delete cat;
	}

	return 0;
}