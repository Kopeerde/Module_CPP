
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
	double parsed;
	char * end_ptr;

	if (str.compare("nan") == 0 || str.compare("nanf") == 0)
	{
		parsed = std::numeric_limits<double>::quiet_NaN();
		std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << "impossible" << std::endl;
		std::cout << "float: " << std::numeric_limits<float>::quiet_NaN() << "f" << std::endl;
		std::cout << "double: " << std::numeric_limits<double>::quiet_NaN() << std::endl;
	}
	else if (str.compare("-inf") == 0 || str.compare("-inff") == 0)
	{
		parsed = std::numeric_limits<double>::infinity() * -1;
		std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << "impossible" << std::endl;
		std::cout << "float: " << std::numeric_limits<float>::infinity() * -1 << "f" << std::endl;
		std::cout << "double: " << std::numeric_limits<double>::infinity() * -1 << std::endl;
	}
	else if (str.compare("+inf") == 0)
	{
		parsed = std::numeric_limits<double>::infinity();
		std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << "impossible" << std::endl;
		std::cout << "float: " << std::numeric_limits<float>::infinity() << "f" << std::endl;
		std::cout << "double: " << std::numeric_limits<double>::infinity() << std::endl;
	}
	else if (str.compare("+inff") == 0)
	{
		parsed = std::numeric_limits<double>::infinity();
		std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << "impossible" << std::endl;
		std::cout << "float: " << std::numeric_limits<float>::infinity() << "f" << std::endl;
		std::cout << "double: " << (double) std::numeric_limits<float>::infinity() << std::endl;
	}
	else
	{
		regex_t comp_regex;
		int regex_init;
		// Compile regex
		if ((regex_init = regcomp(&comp_regex, "(^[+-]?[0-9]*\\.[0-9]+f?$)|(^[	-~]$)|(^[+-]?[0-9]+$)", REG_EXTENDED | REG_ICASE)))
		{
			std::cout << "Could not compile regex. error code : " << regex_init << std::endl;
			return ;
		}
		// Check if user input is valid
		if (regexec(&comp_regex, str.c_str(), 0, NULL, 0) != 0)
		{
			std::cout << "regex did not matched." << std::endl;
			regfree(&comp_regex);
			return ;
		}
		regfree(&comp_regex);
		
		// Parsing from string to char or double
		if (str.length() == 1 && (isdigit(*str.c_str()) == 0))
			parsed = (char) *str.c_str();
		else
			parsed = std::strtod(str.c_str(), &end_ptr);

		// Printing as char
		if (isprint((char) parsed))
			std::cout << "char: " << (char) parsed << std::endl;
		else if (0 <= parsed && parsed <= 127)
			std::cout << "char: " << "Non displayable" << std::endl;
		else
			std::cout << "char: impossible" << std::endl;

		// Printing as int
		if (parsed < std::numeric_limits<int>::max())
			std::cout << "int: " << (int) parsed << std::endl;
		else
			std::cout << "int: impossible" << std::endl;
		
		// Printing as float
		if (parsed < FLT_MAX)
			std::cout << "float: " << std::fixed << std::setprecision(1) << (float) parsed << "f" << std::endl;
		else
			std::cout << "float: impossible" << std::endl;
		
		// Printing as double, no need to parsed because already as double.
		std::cout << "double: " << std::fixed << std::setprecision(1) << parsed << std::endl;
	}

}
