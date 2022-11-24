#include "../headers/Contact.hpp"
#include "../headers/PhoneBook.hpp"
#include <iostream>

/**
 * A constructor. It is called when an object is created.
 */
Contact::Contact()
{
	this->first_name = "" ;
	this->last_name = "";
	this->nickname = "";
	this->phone_number = "";
	this->secret = "";
}

/**
 * It asks the user to enter the first name, last name, nickname, phone number and secret of the contact
 */
void Contact::set_contact()
{
	std::cout << "Enter the first name of the contact : " << std::endl;
	std::cin >> this->first_name;
	std::cout << "Enter the last name of the contact : " << std::endl;
	std::cin >> this->last_name;
	std::cout << "Enter the nickname of the contact : " << std::endl;
	std::cin >> this->nickname;
	std::cout << "Enter the phone number of the contact : " << std::endl;
	std::cin >> this->phone_number;
	std::cout << "Enter the secret of the contact : " << std::endl;
	std::cin >> this->secret;
}

/**
 * This function returns the first name of the contact.
 *
 * @return The first name of the contact.
 */
std::string Contact::get_first_name()
{
	return this->first_name;
}

/**
 * This function returns the last name of the contact.
 *
 * @return The last name of the contact.
 */
std::string Contact::get_last_name()
{
	return this->last_name;
}

/**
 * This function returns the nickname of the contact.
 *
 * @return The nickname of the contact.
 */
std::string Contact::get_nickname()
{
	return this->nickname;
}
