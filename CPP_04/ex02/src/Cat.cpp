

#include "../headers/Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat class has been created." << std::endl;
	this->type = "Cat";
	this->brain = new Brain;
}

Cat::~Cat()
{
	std::cout << "Cat class has been destroyed." << std::endl;
	delete this->brain;
}

Cat::Cat(const Cat &original) : Animal(original)
{
	std::cout << "Cat class copy operator called." << std::endl;
	this->type = original.type;
	this->brain = original.brain;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Cat class assignment overload operator called." <<std::endl;
	if (this == &other)
		return *this;
	this->type = other.type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}

std::string Cat::get_idea(unsigned int index) const
{
	if (this->brain->get_max_ideas() < index)
		return "";
	return this->brain->ideas[index];
}

void Cat::set_idea(unsigned int index, std::string str)
{
	if (this->brain->get_max_ideas() < index)
		return ;
	this->brain->ideas[index] = str;
}