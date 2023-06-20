
#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <cstdlib>
#include <limits>
#include <iomanip>

class ScalarConverter
{
	private:
		static char c;
		static int i;
		static float f;
		static double d;

	public:
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter(const ScalarConverter &original);
		ScalarConverter& operator=(const ScalarConverter&);

		static void convert(std::string str);

};


#endif //SCALARCONVERTER_HPP
