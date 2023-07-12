
#include <iostream>
#include <iomanip>
#include <sys/time.h>
#include <vector>
#include <list>
#include <algorithm>
#include <stdlib.h>
#include <limits.h>

#include "../headers/utils.hpp"

void merge_lst(std::list<unsigned int> &lst, std::list<unsigned int> &top, std::list<unsigned int> &bottom)
{
	std::list<unsigned int>::iterator i = top.begin();
	std::list<unsigned int>::iterator j = bottom.begin();

	for (; i != top.end() && j != bottom.end(); ) // tant que l'ont n'as pas fini au moin une des sous-listes
	{
		if (*i < *j) // dereferencer donne la valeure
		{
			lst.push_back(*i);
			i++;
		}
		else
		{
			lst.push_back(*j);
			j++;
		}
	}

	while (i != top.end()) // Append le reste si il y en as
	{
		lst.push_back(*i);
		i++;
	}
	while (j != bottom.end()) // Comme precedemment mais avec l'autre sous-liste
	{
		lst.push_back(*j);
		j++;
	}
}

void sort_lst(std::list<unsigned int> &lst)
{
	if (lst.size() < 2)
		return ;
	std::list<unsigned int> top, bottom;
	unsigned long initial_size = lst.size();

	for (; lst.size() != 0; lst.pop_front()) // Permet de separer les valeures en deux listes
	{
		if ((initial_size / 2) >= lst.size())
			top.push_back(lst.front());
		else
			bottom.push_back(lst.front());
	}
	sort_lst(top);
	sort_lst(bottom);

	merge_lst(lst, top, bottom);
}

void merge_vec(std::vector<unsigned int> &lst, std::vector<unsigned int> &top, std::vector<unsigned int> &bottom)
{
	std::vector<unsigned int>::iterator i = top.begin();
	std::vector<unsigned int>::iterator j = bottom.begin();

	for (; i != top.end() && j != bottom.end(); )
	{
		if (*i < *j)
		{
			lst.push_back(*i);
			i++;
		}
		else
		{
			lst.push_back(*j);
			j++;
		}
	}

	while (i != top.end())
	{
		lst.push_back(*i);
		i++;
	}
	while (j != bottom.end())
	{
		lst.push_back(*j);
		j++;
	}
}

void sort_vec(std::vector<unsigned int> &vec)
{
	if (vec.size() < 2)
		return ;
	std::vector<unsigned int> top, bottom;
	unsigned long initial_size = vec.size();

	for (; vec.size() != 0; vec.erase(vec.begin()))
	{
		if ((initial_size / 2) >= vec.size())
			top.push_back(vec.front());
		else
			bottom.push_back(vec.front());
	}
	sort_vec(top);
	sort_vec(bottom);

	merge_vec(vec, top, bottom);
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
//	clock_t t;
	timeval begin;
	timeval end;

	std::cout << "Before : ";
	for (int i = 0; i < 5 && argv[i]; i++)
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

//	t = clock();
	gettimeofday(&begin, NULL);
	sort_lst(lst);
	gettimeofday(&end, NULL);
	//	t = clock() - t;


	std::cout << "Time to process a range of " << (argc - 1) << " elements with std::list : " << (end.tv_usec - begin.tv_usec) << " us" << std::endl;//((float) t / CLOCKS_PER_SEC) << std::endl;

//	t = clock();
	gettimeofday(&begin, NULL);
	sort_vec(vec);
	gettimeofday(&end, NULL);
	//	t = clock() - t;
	std::cout << "Time to process a range of " << (argc - 1) << " elements with std::vector : " << (end.tv_usec - begin.tv_usec) << " us" << std::endl;//((float) t / CLOCKS_PER_SEC) << std::endl;((float) t / CLOCKS_PER_SEC) << std::endl;

	return 0;
}








