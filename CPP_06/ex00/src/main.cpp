//
// Created by kmendes- on 2/21/23.
//

#include "../headers/ScalarConverter.hpp"
#include "../headers/utils.hpp"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		ScalarConverter temp;
		temp.convert(argv[1]);
	}
	return 0;
}




