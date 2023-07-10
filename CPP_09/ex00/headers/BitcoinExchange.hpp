

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <string>
#include <algorithm>
#include <stdlib.h>
#include <iostream>
#include <sstream>

#include "./utils.hpp"

class BitcoinExchange
{
	private:
		std::map<std::string, double> dict;

	public:
	BitcoinExchange();
	BitcoinExchange(BitcoinExchange const &original);
	~BitcoinExchange();
	BitcoinExchange& operator=(BitcoinExchange const &);

	void add_entry(std::string key, std::string value);
	double get_value(std::string date);

};


#endif //BITCOINEXCHANGE_HPP
