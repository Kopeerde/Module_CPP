
#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <class T>
void iter(T *array, int array_len, void (*func)(T&))
{
	for (int i = 0; i < array_len; i++)
	{
		func(array[i]);
	}
}

template <class T>
void print(T val)
{
	std::cout << val << std::endl;
}



#endif //ITER_HPP
