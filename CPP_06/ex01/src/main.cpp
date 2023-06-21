
#include <assert.h>

#include "../headers/Serializer.hpp"

int main()
{
	Data data;
	data.i = 100;
	std::cout << &data << std::endl;

	uintptr_t temp = Serializer::serialize(&data);
	std::cout << temp << std::endl;

	Data *temp_2 = Serializer::deserialize(temp);
	std::cout << temp_2 << std::endl;

	return 0;
}