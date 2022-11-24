#ifndef CPP_00_PHONEBOOK_H
#define CPP_00_PHONEBOOK_H
#include "./Contact.hpp"
#include <iostream>
#include <iomanip>

class Contact;

class PhoneBook
{
	private:
		Contact contacts[8];

	public:
		PhoneBook();
		void add_contact(int index);
		void get_contact();
		void show_contacts();
		void show_single_contact(std::string index);
};

#endif //CPP_00_PHONEBOOK_H
