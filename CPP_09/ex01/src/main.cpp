
#include <regex.h>

#include "../headers/RPN.hpp"


int check_input(char* str)
{
	regex_t comp_regex;
	int init_regex;

	if ((init_regex = regcomp(&comp_regex, "^([0-9] )+(([+\\-\\*/] )+)?[+\\-\\*/]$", REG_EXTENDED | REG_ICASE)) != 0)
	{
		std::cout << "Error, could not compile regex, code : " << init_regex << std::endl;
		return 1;
	}
	if (regexec(&comp_regex, str, 0, NULL, 0) != 0)
	{
		std::cout << "Error" << std::endl;
		regfree(&comp_regex);
		return 1;
	}
	regfree(&comp_regex);
	return 0;
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error" << std::endl;
		return 1;
	}
	else if (check_input(argv[1]) == 0)
	{
		RPN rpn(argv[1]);
		std::cout << rpn.get_result() << std::endl;
	}
	return 0;
}



