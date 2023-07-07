
#include "../headers/easyfind.hpp"

const char *not_found::what() const throw()
{
	return "Target value has not been found inside container.";
}
