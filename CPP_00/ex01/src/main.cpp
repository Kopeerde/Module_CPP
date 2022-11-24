#include "../headers/PhoneBook.hpp"
#include <iostream>
#include <limits>

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

	i = 0;
	greeter();
	while (true)
	{
		std::cout << "Enter a command : " << std::flush; // std::flush to remove the buffer for the incoming input
		std::cin >> input;
		if (input.compare("ADD") == 0)
		{
			phonebook.add_contact(i);
			if (i == 7)
				i = 0;
			else
				i++;
		}
		else if (input.compare("SEARCH") == 0)
		{
			phonebook.show_contacts();
			std::cout << "" << std::flush;
			std::cin >> input;
			if (i == 0)
				input = "0";
			phonebook.show_single_contact(input);
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