#include "../headers/PhoneBook.hpp"

PhoneBook::PhoneBook()
{
}

void PhoneBook::add_contact(int i)
{
	this->contacts[i].set_contact();
}

void PhoneBook::show_contacts()
{
	std::cout << "WIP" << std::endl;
	std::cout << "|------------------------------------------|" << std::endl;
	std::cout << "|---------------- CONTACTS ----------------|" << std::endl;
	std::cout << "|------------------------------------------|" << std::endl;
	std::cout << "|- Index -|First Name| LastName | Nickname |" << std::endl;
	std::cout << "|---------|----------|----------|----------|" << std::endl;
	
	for (int i = 0; i < 8; i++)
	{
		std::cout << i << this->contacts[i].get_first_name() << this->contacts[i].get_last_name() << this->contacts[i].get_nickname() <<std::endl;
	}
}