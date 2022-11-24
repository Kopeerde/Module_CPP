#include "../headers/PhoneBook.hpp"

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

	if (str.length() < 10)
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

PhoneBook::PhoneBook()
{
}

void PhoneBook::add_contact(int i)
{
	this->contacts[i].set_contact();
}

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

void PhoneBook::show_single_contact(std::string index)
{
	if (index == "0")
		std::cout << "PhonBook empty, cannot search" << std::endl;
//	int i = std::stol(index);
//	std::cout << i << std::endl;
//	if (i < 0 || 7 < i)
//	{}
}
