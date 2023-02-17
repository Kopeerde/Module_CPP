//
// Created by kmendes- on 2/16/23.
//

#include "../headers/Animal.hpp"

Animal::Animal()
{
	std::cout << "Standart Animal class has been created." << std::endl;
}

Animal::~Animal()
{
	std::cout << "Standart Animal class has been destroyed." << std::endl;
}

Animal::Animal(const Animal &original)
{
	this->type = original.type;
}

Animal &Animal::operator=(const Animal &other)
{
	if (this == &other)
		return *this;
	this->type = other.type;
	return *this;
}

std::string Animal::getType() const
{
	return this->type;
}

void Animal::makeSound() const
{
	std::cout << "Incomprehensible screeching." << std::endl;
}
