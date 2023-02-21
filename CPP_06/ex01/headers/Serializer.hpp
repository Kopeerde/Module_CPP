//
// Created by kmendes- on 2/21/23.
//

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>

class Serializer
{
	private:


	public:
		Serializer();
		~Serializer();
		Serializer(const Serializer &original);

		Serializer& operator=(const Serializer&);

		uintptr_t serialize(Data* ptr);

		Data* deserialize(uintptr_t raw);

};


#endif //SERIALIZER_HPP
