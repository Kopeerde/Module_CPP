

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <string>
#include <stdlib.h>

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

};


#endif //BITCOINEXCHANGE_HPP
