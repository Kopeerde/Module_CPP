

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
	delete this->brain;
}

Dog::Dog(const Dog &original) : Animal(original)
{
	std::cout << "Dog class copy has been called." << std::endl;
	this->type = original.type;
	this->brain = new Brain(*original.brain);
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Dog class assignment overload operator called." << std::endl;
	if (this == &other)
		return *this;
	this->type = other.type;
	this->brain = new Brain(*other.brain);
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Bark" << std::endl;
}

std::string Dog::get_idea(unsigned int index) const
{
	if (this->brain->get_max_ideas() < index)
		return "";
	return this->brain->ideas[index];
}

void Dog::set_idea(unsigned int index, std::string str)
{
	if (this->brain->get_max_ideas() < index)
		return ;
	this->brain->ideas[index] = str;
}
