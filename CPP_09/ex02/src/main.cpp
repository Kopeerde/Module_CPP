
#include <iostream>
#include <iomanip>
#include <sys/time.h>
#include <vector>
#include <list>
#include <algorithm>
#include <stdlib.h>
#include <limits.h>

#include "../headers/utils.hpp"

void sort_lst(std::list<unsigned int> &lst)
{
	(void) lst;
}

void sort_vec(std::vector<unsigned int> &vec)
{
	(void) vec;
}

/**
 * Function created to populate both list and vector from user input arguments.
 **/
void populate(std::list<unsigned int> &lst, std::vector<unsigned int> &vec, char **lstr)
{
	long temp;

	for (int i = 0; lstr[i]; i++)
	{
		temp = strtol(lstr[i], NULL, 10);
		if (temp < 0 || temp > INT_MAX || !is_digits(lstr[i]))
		{
			std::cout << "Value is an int overflow or is negative or isn't a digit." << std::endl;
			exit(1);
		}
		vec.push_back((unsigned int) temp);
		lst.push_back((unsigned int) temp);
	}
}


int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "Cannot sort empty values." << std::endl;
		return 1;
	}
	argv++;
	std::list<unsigned int> lst;
	std::vector<unsigned int> vec;
	std::vector<unsigned int> vec_buffer;
	clock_t t;

	std::cout << "Before : ";
	for (int i = 0; argv[i]; i++)
		std::cout << argv[i] << " ";
	std::cout << std::endl << "After : ";


	populate(lst, vec, argv);

	vec_buffer = vec;
	std::sort(vec_buffer.begin(), vec_buffer.end());
	for (int i = 0; i < 5 && !vec_buffer.empty(); i++)
	{
		std::cout << vec_buffer.front() << " ";
		vec_buffer.erase(vec_buffer.begin());
	}
	std::cout << std::endl;

	t = clock();
	sort_lst(lst);
	t = clock() - t;


	std::cout << "Time to process a range of " << (argc - 1) << "elements with std::list : " << ((float) t / CLOCKS_PER_SEC) << std::endl;

	t = clock();
	sort_vec(vec);
	t = clock() - t;
	std::cout << "Time to process a range of " << (argc - 1) << "elements with std::vector : " << ((float) t / CLOCKS_PER_SEC) << std::endl;

	return 0;
}








