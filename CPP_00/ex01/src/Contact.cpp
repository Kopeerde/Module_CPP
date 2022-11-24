#include "../headers/Contact.hpp"
#include "../headers/PhoneBook.hpp"
#include <iostream>

void Contact::set_contact()
{
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string secret;

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

//	phonebook->set_contact(*(new Contact(first_name, last_name, nickname, phone_number, secret)));

}

Contact::Contact()
{
	this->first_name = "" ;
	this->last_name = "";
	this->nickname = "";
	this->phone_number = "";
	this->secret = "";
}

std::string Contact::get_first_name()
{
	return this->first_name;
}

std::string Contact::get_last_name()
{
	return this->last_name;
}

std::string Contact::get_nickname()
{
	return this->nickname;
}
