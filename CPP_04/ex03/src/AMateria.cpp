

#include "../headers/AMateria.hpp"


AMateria::AMateria(const std::string &type)
{
	std::cout << "Base class AMateria constructor called." << std::endl;
	this->type = type;
}

AMateria::~AMateria()
{
	std::cout << "Base class destructor AMateria called." << std::endl;
}

AMateria::AMateria(const AMateria &original)
{
	this->type = original.type;
}

AMateria &AMateria::operator=(const AMateria &other)
{
	if (this == &other)
		return *this;
	this->type = other.type;
	return *this;
}

const std::string &AMateria::getType() const
{
	return this->type;
}

void AMateria::use(ICharacter &target)
{

}
