#include "../headers/PhoneBook.hpp"
#include <iostream>
#include <limits>

/**
 * It returns true if the string contains only digits, and false otherwise
 *
 * @param str The string to check.
 *
 * @return A boolean value.
 */
bool is_num(std::string const str)
{
	for (int i = 0; str[i]; i++)
	{
		if (!std::isdigit(str[i]))
			return false;
	}
	return true;
}

/**
 * It prints a greeting to the console
 */
void greeter()
{
	std::cout << " _____ _               _____         _" << std::endl;
	std::cout << "|  _  | |_ ___ ___ ___| __  |___ ___| |_" << std::endl;
	std::cout << "|   __|   | . |   | -_| __ -| . | . | '_|" << std::endl;
	std::cout << "|__|  |_|_|___|_|_|___|_____|___|___|_,_|" << std::endl;
}

int main()
{
	std::string input;
	int i;
	PhoneBook phonebook;

	i = -1;
	greeter();
	while (true)
	{
		std::cout << "Enter a command : " << std::flush; // std::flush to remove the buffer for the incoming input
		std::cin >> input;
		if (input.compare("ADD") == 0)
		{
			if (i == 7)
				i = 0;
			else
				i++;
			phonebook.add_contact(i);
		}
		else if (input.compare("SEARCH") == 0)
		{
			phonebook.show_contacts();
			if (i == -1) // Case where no contact has been added yet
				phonebook.get_contact("-1");
			else // Case where at least one contact has been created
				phonebook.get_contact(input);
		}
		else if (input.compare("EXIT") == 0)
			break ;
		else // fallback if input isn't a valid command
		{
			std::cout << "Please, enter a valid command : ADD / SEARCH / EXIT" << std::endl;
			if (std::cin.eof())
			{
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max());
			}
		}
	}
	return 0;
}