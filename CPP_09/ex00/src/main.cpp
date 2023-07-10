

#include <iostream>
#include <fstream>
#include <regex.h>
#include <stdlib.h>

#include "../headers/BitcoinExchange.hpp"
#include "../headers/utils.hpp"

int check_line(std::string line, int current_line)
{
	regex_t comp_regex;
	int regex_init;
	if ((regex_init = regcomp(&comp_regex, "^[0-9]{4}\\-[0-9]{2}\\-[0-9]{2},[0-9]*(\\.([0-9]+))?($|\\n)", REG_EXTENDED | REG_ICASE)))
	{
		std::cout << "Could not compile regex. error code : " << regex_init << std::endl;
		return 1;
	}

	if (regexec(&comp_regex, line.c_str(), 0, NULL, 0) != 0)
	{
		std::cout << "regex did not matched on line : " << current_line << " => " << line << std::endl;
		regfree(&comp_regex);
		return 1;
	}
	regfree(&comp_regex);

	return 0;
}

int check_user_input(std::string str)
{
	int res = 0;
	regex_t comp_regex;
	int regex_init;

	if ((regex_init = regcomp(&comp_regex, "^[0-9]{4}\\-[0-9]{2}\\-[0-9]{2}$", REG_ICASE | REG_EXTENDED)))
	{
		std::cout << "regex did not compile. error code : " << regex_init << std::endl;
		return 1;
	}
	if (regexec(&comp_regex, str.c_str(), 0, NULL, 0) != 0)
	{
		regfree(&comp_regex);
		return 1;
	}
	regfree(&comp_regex);
	return 0;



	return res;
}

int main(int argc, char **argv)
{
	(void) argv;

	if (argc != 2)
		std::cout << "User input invalid, \"./btc <csv_file>\" ." << std::endl;
	else
	{
		std::ifstream file;

		file.open(argv[1]);
		if (!file)
		{
			std::cout << "Failed to open the file." << std::endl;
			exit(1);
		}

		BitcoinExchange database;
		std::string line;
		int current_line = 1;
		std::getline(file, line);
		while (std::getline(file, line))
		{
			current_line++;
			if (check_line(line, current_line) != 0)
				break;
			database.add_entry(line.substr(0, 10), line.substr(11));
		}
		file.close();


		while (true)
		{
			std::string user_input_date;
			std::string user_input_value;
			std::cout << "Enter a date : YYYY-MM-DD or EXIT to leave.\n" << std::flush;
			std::getline(std::cin >> std::ws, user_input_date);

			if (user_input_date.compare("EXIT") == 0 || std::cin.eof())
				break;

			if (check_user_input(user_input_date) != 0)
			{
				std::cout << "Please, enter a valid date." << std::endl;
				continue;
			}
			int day, month, year;
			std::istringstream(user_input_date) >> year;
			std::istringstream(&(user_input_date[5])) >> month;
			std::istringstream(&(user_input_date[8])) >> day;
			if (!isValidDate(day, month, year))
			{
				std::cout << "Please, enter a valid date." << std::cout;
				continue;
			}
			std::cout << "Enter the number of bitcoins :\n" << std::flush;
			std::getline(std::cin >> std::ws, user_input_value);
			int temp;
			std::istringstream(user_input_value) >> temp;
			if (temp < 0)
			{
				std::cout << "Sorry but a number of bitcoin cannot be negative." << std::endl;
				continue;
			}
			std::cout << "The total value of Bitcoins at " << user_input_date << " was : " << database.get_value(user_input_date) *  temp << std::endl;
		}

	}

	return 0;
}


