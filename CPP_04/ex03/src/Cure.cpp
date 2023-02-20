

#include "../headers/Cure.hpp"


Cure::Cure()
{
	std::cout << "Base constructor for Cure class called." << std::endl;
}

Cure::~Cure()
{
	std::cout << "Base destructor for Cure class called." << std::endl;
}

Cure::Cure(const Cure &original)
{
	this->type = original.type;
}


Cure &Cure::operator=(const Cure &other)
{
	if (this == &other)
		return *this;
	this->type = other.type;
	return *this;
}
