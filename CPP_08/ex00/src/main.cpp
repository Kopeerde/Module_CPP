
#include "../headers/easyfind.hpp"
#include <vector>

int main()
{
	std::vector<int> vec(10, 0);
	for (int i = 0; i < 10; i++)
		vec[i] = i;
	vec[1] = 5;
	easyfind(vec, 5);
	return 0;
}