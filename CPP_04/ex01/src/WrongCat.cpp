

#include "../headers/WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat constructor called." << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat &original) : WrongAnimal(original)
{
	this->type = original.type;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	if (this == &other)
		return *this;
	this->type = other.type;
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "*Weird beeping sounds*" << std::endl;
}
