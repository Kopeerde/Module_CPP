#include "../headers/PhoneBook.hpp"
#include <cstdlib>

/**
 * It takes a string and returns a string that is 10 characters long. If the input string is shorter than 10 characters, it
 * is padded with spaces. If the input string is longer than 10 characters, it is truncated to 9 characters and a period is
 * appended
 *
 * @param str the string to be displayed
 *
 * @return A string with the length of 10.
 */
static std::string show_cell(std::string str)
{
	std::string res = "";

	if (str.length() <= 10)
	{
		int len_spaces = 10 - str.length();
		res += std::string(len_spaces, ' ');
		res += str;
	}
	else
	{
		res += str.substr(0, 9);
		res += ".";
	}
	return res;
}

/**
 * A constructor for the PhoneBook class.
 */
PhoneBook::PhoneBook()
{}

/**
 * This function takes an integer as an argument and uses it to set the contact at
 * that index in the contacts array
 *
 * @param i the index of the contact you want to add
 */
void PhoneBook::add_contact(int i)
{ this->contacts[i].set_contact(); }

/**
 * It prints the contacts in a table
 */
void PhoneBook::show_contacts()
{
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|----------------- CONTACTS ----------------|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|- Index  -|First Name| LastName | Nickname |" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	
	for (int i = 0; i < 8; i++)
	{
		if (!(this->contacts[i].get_first_name().empty()))
			std::cout << "|         " << i << "|"
					  << show_cell(this->contacts[i].get_first_name()) << "|"
					  << show_cell(this->contacts[i].get_last_name()) << "|"
					  << show_cell(this->contacts[i].get_nickname()) << "|"
					  <<std::endl;
	}
	std::cout << "|-------------------------------------------|" << std::endl;
}

/**
 * It displays the contact at the index given by the user
 *
 * @param index the index of the contact to show
 */
void PhoneBook::get_contact(std::string index)
{
	if (index == "-1")
		std::cout << "PhoneBook empty, cannot search" << std::endl;
	else
	{
		int i;

		std::cout << "Input the index of the contact you want to look :" << std::endl;
		std::getline(std::cin >> std::ws, index);
		if (is_num(index))
			i = std::atoi(index.c_str());
		else
			i = -1;

		if (i >= 0 && i <= 7)
		{
			if (!this->contacts[i].get_first_name().empty())
			{
				std::cout << "First Name   : " << this->contacts[i].get_first_name() << std::endl;
				std::cout << "Last Name    : " << this->contacts[i].get_last_name() << std::endl;
				std::cout << "Nickname     : " << this->contacts[i].get_nickname() << std::endl;
				std::cout << "Phone Number : " << this->contacts[i].get_phone_number() << std::endl;
				std::cout << "Secret       : " << this->contacts[i].get_secret() << std::endl;
			}
			else
				std::cout << "Sorry but no one is store at this index" << std::endl;
		}
		else
			std::cout << "Sorry but your entry contains invalid input" << std::endl;
	}
}
