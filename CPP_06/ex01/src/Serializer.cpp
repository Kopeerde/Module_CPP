
#include "../headers/Serializer.hpp"

Serializer::Serializer()
{
	std::cout << "Base class constructor Serializer called." << std::endl;
}

Serializer::~Serializer()
{
	std::cout << "Base class destructor Serializer called." << std::endl;
}

Serializer::Serializer(const Serializer &original)
{
	(void) original;
}

Serializer &Serializer::operator=(const Serializer &)
{
	return *this;
}
