

#include "../headers/Ice.hpp"

Ice::Ice()
{
	std::cout << "Base class constructor Ice called." << std::endl;
}

Ice::~Ice()
{
	std::cout << "Base class destructor Ice called." << std::endl;
}

Ice::Ice(const Ice &original)
{
	this->type = original.type;
}

Ice &Ice::operator=(const Ice &other)
{
	if (this == &other)
		return *this;
	this->type = other.type;
	return *this;
}

