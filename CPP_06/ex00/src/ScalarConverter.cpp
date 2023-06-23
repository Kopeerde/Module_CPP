
#include "../headers/ScalarConverter.hpp"

double ScalarConverter::d = 0;
float ScalarConverter::f = 0;
char ScalarConverter::c = 0;
int ScalarConverter::i = 0;

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
		std::cout << "float: " << (float) parsed << "f" << std::endl;
		std::cout << "double: " << parsed << std::endl;
	
		ScalarConverter::d = std::numeric_limits<double>::quiet_NaN();
		ScalarConverter::f = std::numeric_limits<float>::quiet_NaN();
	}
	else if (str.compare("-inf") == 0 || str.compare("-inff") == 0)
	{
		parsed = std::numeric_limits<double>::infinity() * -1;
		std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << "impossible" << std::endl;
		std::cout << "float: " << (float) parsed << "f" << std::endl;
		std::cout << "double: " << parsed << std::endl;
	
		ScalarConverter::d = std::numeric_limits<double>::infinity() * -1;
		ScalarConverter::f = std::numeric_limits<float>::infinity() * -1;
	}
	else if (str.compare("+inf") == 0 || str.compare("+inff") == 0)
	{
		parsed = std::numeric_limits<double>::infinity();
		std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << "impossible" << std::endl;
		std::cout << "float: " << (float) parsed << "f" << std::endl;
		std::cout << "double: " << parsed << std::endl;
	
		ScalarConverter::d = std::numeric_limits<double>::infinity();
		ScalarConverter::f = std::numeric_limits<float>::infinity();
	}
	else
	{
		regex_t comp_regex;
		int regex_init;
		if ((regex_init = regcomp(&comp_regex, "(^[+-]?[0-9]*\\.[0-9]+f?$)|(^[	-~]$)|(^[+-]?[0-9]+$)", REG_EXTENDED | REG_ICASE)))
		{
			std::cout << "Could not compile regex. error code : " << regex_init << std::endl;
			return ;
		}

		if (regexec(&comp_regex, str.c_str(), 0, NULL, 0) != 0)
		{
			std::cout << "regex did not matched." << std::endl;
			return ;
		}

		if (str.length() == 1 && (isdigit(*str.c_str()) == 0))
			parsed = (char) *str.c_str();
		else
			parsed = std::strtod(str.c_str(), &end_ptr);

		if (isprint((char) parsed))
			std::cout << "char: " << (char) parsed << std::endl;
		else
			std::cout << "char: " << "Non displayable" << std::endl;
		if (parsed < INT_MAX)
			std::cout << "int: " << (int) parsed << std::endl;
		else
			std::cout << "int: impossible" << std::endl;
		if (parsed < FLT_MAX)
			std::cout << "float: " << std::fixed << std::setprecision(1) << (float) parsed << "f" << std::endl;
		else
			std::cout << "float: impossible" << std::endl;
		std::cout << "double: " << std::fixed << std::setprecision(1) << parsed << std::endl;
	}

}
