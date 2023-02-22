//
// Created by kmendes- on 2/21/23.
//

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <cstdlib>
#include <limits>
#include <iomanip>

class ScalarConverter
{
	private:


	public:
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter(const ScalarConverter &original);
		ScalarConverter& operator=(const ScalarConverter&);

		void convert(std::string str);

};


#endif //SCALARCONVERTER_HPP
