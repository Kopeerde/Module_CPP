
#include "../headers/easyfind.hpp"
#include <vector>

const char *not_found::what() const throw()
{
	return "Target value has not been found inside container.";
}

int main()
{
	std::vector<int> vec(10, 0);
	for (int i = 0; i < 10; i++)
		vec[i] = i;
	vec[1] = 5;
	easyfind(vec, 5);
	try
	{
		easyfind(vec, 50);
	}
	catch (not_found &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
