
#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <list>
#include <cstdlib>
#include <limits.h>
#include <iostream>

#include "./utils.hpp"

class PmergeMe
{
	private:
		std::vector<unsigned int> vec;
		std::list<unsigned int> lst;

	public:
		PmergeMe();
		PmergeMe(char **list);
		PmergeMe(const PmergeMe &original);
		PmergeMe& operator=(const PmergeMe &);

		void sort_vector();
		void sort_list();




};


#endif //PMERGEME_HPP
