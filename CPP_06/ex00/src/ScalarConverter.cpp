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

void ScalarConverter::convert(std::string str)
{
	//convertion take place here
	double parsed;
	char * end_ptr;

	if (str.compare("nan") == 0)
	{
		parsed = std::numeric_limits<double>::quiet_NaN();
		std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << "impossible" << std::endl;
		std::cout << "float: " << (float) parsed << "f" << std::endl;
		std::cout << "double: " << parsed << std::endl;
	}
	else
	{
		if (str.length() == 1 && isalpha(*str.c_str()))
			parsed = (int) *str.c_str();
		else
			parsed = std::strtod(str.c_str(), &end_ptr);


		if (isprint((char) parsed))
			std::cout << "char: " << (char) parsed << std::endl;
		else
			std::cout << "char: " << "Non displayable" << std::endl;
		std::cout << "int: " << (int) parsed << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(1) << (float) parsed << "f" << std::endl;
		std::cout << "double: " << std::fixed << std::setprecision(1) << parsed << std::endl;
	}

}
