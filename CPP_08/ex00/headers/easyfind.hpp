
#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iostream>
#include <vector>

template <class T>
void easyfind(T& a, int b)
{
	std::vector<int>::iterator res = std::find(a.begin(), a.end(), b);
	if (res != a.end())
		std::cout << "Element found at index : " << std::distance(a.begin(), res) << std::endl;
	else
		std::cout << "Element was not found in container." << std::endl;
}

#endif //EASYFIND_HPP
