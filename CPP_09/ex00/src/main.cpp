

#include <iostream>
#include <fstream>
#include <regex.h>
#include <stdlib.h>

#include "../headers/BitcoinExchange.hpp"

// TODO : a voir comment gerer la liberation de memoire si necessaire
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
	}

	return 0;
}


