#include "../headers/Contact.hpp"
#include "../headers/PhoneBook.hpp"
#include <iostream>

void set_contact(int i)
{
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string secret;

	std::cout << "Enter the first name of the contact : " << std::endl;
	std::cin >> first_name;
	std::cout << "Enter the last name of the contact : " << std::endl;
	std::cin >> last_name;
	std::cout << "Enter the nickname of the contact : " << std::endl;
	std::cin >> nickname;
	std::cout << "Enter the phone number of the contact : " << std::endl;
	std::cin >> phone_number;
	std::cout << "Enter the secret of the contact : " << std::endl;
	std::cin >> secret;

//	phonebook->set_contact(*(new Contact(first_name, last_name, nickname, phone_number, secret)));

}
