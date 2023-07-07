
#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iostream>
#include <vector>

class not_found: std::exception
{
	public:
		virtual const char* what() const throw();
};

template <typename T>
typename T::iterator easyfind(T& a, int b)
{
	typename T::iterator res = std::find(a.begin(), a.end(), b);
	if (res != a.end())
	{
		std::cout << "Element found at index : " << std::distance(a.begin(), res) << std::endl;
		return res;
	}
	else
		throw not_found();
}

#endif //EASYFIND_HPP
