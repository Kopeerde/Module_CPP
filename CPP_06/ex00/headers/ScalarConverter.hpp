
#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <cstdlib>
#include <limits>
#include <float.h>
#include <iomanip>
#include <regex.h>

class ScalarConverter
{
	private:

	public:
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter(const ScalarConverter &original);
		ScalarConverter& operator=(const ScalarConverter&);

		static void convert(std::string str);

};


#endif //SCALARCONVERTER_HPP
