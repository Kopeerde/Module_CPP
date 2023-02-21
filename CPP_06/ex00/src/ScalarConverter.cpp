//
// Created by kmendes- on 2/21/23.
//

#include "../headers/ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << "Base class constructor ScalarConverter called." << std::endl;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "Base class destructor ScalarConverter called." << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &original)
{
	(void) original;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &)
{
	return *this;
}
