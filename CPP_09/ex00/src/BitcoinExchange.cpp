

#include "../headers/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{

}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &original)
{
	this->dict = original.dict;
}

BitcoinExchange::~BitcoinExchange()
{

}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &other)
{
	if (this == &other)
		return *this;

	this->dict = other.dict;

	return *this;
}

//TODO : Check valid date
void BitcoinExchange::add_entry(std::string key, std::string value)
{
	double parsed = std::strtod(value.c_str(), NULL);
	if (parsed < 0 || parsed > 1000)
	{
		std::cout << "error : Erroneous value given, either inferior to 0 or superior to 1000 : " << key << " - " << value << std::endl;
		exit(1);
	}
	this->dict.insert(std::pair<std::string, double>(key, parsed));
}
