

#include "../headers/Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat class has been created." << std::endl;
	this->type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Cat class has been destroyed." << std::endl;
}

Cat::Cat(const Cat &original) : Animal(original)
{
	std::cout << "Cat class copy operator called." << std::endl;
	this->type = original.type;
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

