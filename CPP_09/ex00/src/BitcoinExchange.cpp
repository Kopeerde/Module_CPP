

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

double BitcoinExchange::get_value(std::string date)
{
//	double res = this->dict.lower_bound(date)->second;
	std::map<std::string, double>::iterator temp = this->dict.lower_bound(date);
	if (temp == this->dict.end() || temp->first != date)
		temp--;
	double res = temp->second;

	return res;
}

void BitcoinExchange::add_entry(std::string key, std::string value)
{
	double parsed = std::strtod(value.c_str(), NULL);
	if (parsed < 0 || parsed > 1000)
	{
		std::cout << "error : Erroneous value given, either inferior to 0 or superior to 1000 : " << key << " - " << value << std::endl;
		exit(1);
	}

	int day, month, year;
	std::istringstream(key) >> year;
	std::istringstream(&(key[5])) >> month;
	std::istringstream(&(key[8])) >> day;
	if (!isValidDate(day, month, year))
	{
		std::cout << "error: Erroneous value given, date is invalid : " << key << " - " << value << std::endl;
		exit(1);
	}

	this->dict.insert(std::pair<std::string, double>(key, parsed));
}
