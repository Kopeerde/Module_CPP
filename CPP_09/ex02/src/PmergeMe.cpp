
#include "../headers/PmergeMe.hpp"


PmergeMe::PmergeMe()
{

}

PmergeMe::PmergeMe(char **list)
{
	long temp;

	for (int i = 0; list[i]; i++)
	{
		temp = strtol(list[i], NULL, 10);
		if (temp < 0 || temp > INT_MAX || !is_digits(list[i]))
		{
			std::cout << "Value is an int overflow or is negative or isn't a digit." << std::endl;
			exit(1);
		}
		this->vec.push_back((unsigned int) temp);
		this->lst.push_back((unsigned int) temp);
	}
}

PmergeMe::PmergeMe(const PmergeMe &original)
{
	this->lst = original.lst;
	this->vec = original.vec;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &other)
{
	if (this == &other)
		return *this;

	return *this;
}

void PmergeMe::sort_list()
{

}

void PmergeMe::sort_vector()
{

}












