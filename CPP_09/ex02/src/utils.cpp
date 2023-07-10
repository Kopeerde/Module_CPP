
#include "../headers/utils.hpp"

bool is_digits(char *str)
{
	for (; *str; str++)
		if (!isdigit(*str))
			return false;
	return true;
}
