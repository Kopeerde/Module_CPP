
#include <regex.h>
#include <stdlib.h>
#include <iostream>
#include <stack>


int check_input(char* str)
{
	regex_t comp_regex;
	int init_regex;

	if ((init_regex = regcomp(&comp_regex, "^([0-9+/*-] )+[0-9+/*-]$", REG_EXTENDED)) != 0)
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
	size_t numbers = 0;
	size_t signs = 0;
	for (int i = 0; str[i]; i++)
	{
		if (i % 2 != 0)
			continue;
		if (str[i] >= '0' && str[i] <= '9')
			numbers++;
		else
			signs++;
	}
	if ((numbers - 1) != signs)
	{
		std::cout << "Error" << std::endl;
		exit(1);
	}
	return 0;
}

float temp(int left, int right, char c)
{
	if (c == '+')
		return right + left;
	else if (c == '-')
		return right - left;
	else if (c == '*')
		return right * left;
	else
		return right / left;
}

float calculation(std::string &input)
{
	int left, right;
	std::stack<float> stack = std::stack<float>();

	for (std::string::iterator iterator = input.begin(); iterator != input.end(); iterator++)
	{
		if (*iterator == '+' || *iterator == '-' || *iterator == '*' || *iterator == '/')
		{
			if (stack.size() < 2)
			{
				std::cout << "Error" << std::endl;
				exit(1);
			}
			left = stack.top();
			stack.pop();
			right = stack.top();
			stack.pop();
			stack.push(temp(left, right, *iterator));
		}
		else if (*iterator >= '0' && *iterator <= '9')
		{
			stack.push(*iterator - '0');
		}
	}
	return stack.top();
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
		std::string input = argv[1];
		std::cout << calculation(input) << std::endl;
	}
	return 0;
}



