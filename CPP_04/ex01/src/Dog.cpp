

#include "../headers/Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog class created." << std::endl;
	this->type = "Dog";
	this->brain = new Brain;
}

Dog::~Dog()
{
	std::cout << "Dog class has been destroyed." << std::endl;
	delete brain;
}

Dog::Dog(const Dog &original) : Animal(original)
{
	std::cout << "Dog class copy has been called." << std::endl;
	this->type = original.type;
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Dog class assignment overload operator called." << std::endl;
	if (this == &other)
		return *this;
	this->type = other.type;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Bark" << std::endl;
}
