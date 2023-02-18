//
// Created by kmendes- on 2/16/23.
//

#include "../headers/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructor called." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout<< "WrongAnimal destructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &original)
{
	this->type = original.type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this == &other)
		return *this;
	this->type = other.type;
	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << "*Unbearable eldritch horror monster noise*" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return this->type;
}


