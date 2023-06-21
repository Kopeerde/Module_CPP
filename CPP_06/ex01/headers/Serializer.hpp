
#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <stdint.h>

struct Data
{
	int i;
};

class Serializer
{
	private:


	public:
		Serializer();
		~Serializer();
		Serializer(const Serializer &original);

		Serializer& operator=(const Serializer&);

		static uintptr_t serialize(Data* ptr);

		static Data* deserialize(uintptr_t raw);

};


#endif //SERIALIZER_HPP
