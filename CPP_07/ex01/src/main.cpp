
#include "../headers/iter.hpp"

void add_one(int &val)
{
	val += 1;
}

int main()
{
	int array[6] = {0, 1, 2, 3, 4, 5};
	iter(array, 5, print);

	std::cout << std::endl;
	std::cout << std::endl;

	iter(array, 5, &add_one);
	iter(array, 5, print);

	std::cout << std::endl;
	std::cout << std::endl;
	
	char *array_char = (char *) "Hello World";
	iter(array_char, 11, print);

	return 0;
}