
#include <iostream>
#include <sys/time.h>

#include "../headers/PmergeMe.hpp"






int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "Cannot sort empty values." << std::endl;
		return 1;
	}
	argv++;
	PmergeMe tester = PmergeMe(argv);

	for (; *argv; argv++)
		std::cout << *argv << " ";



	return 0;
}








