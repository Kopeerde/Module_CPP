
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

uintptr_t Serializer::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}