
#ifndef CPP_00_PHONEBOOK_H
#define CPP_00_PHONEBOOK_H

#include "./Contact.hpp"
#include "./utils.hpp"

class Contact;

class PhoneBook
{
	private:
		Contact contacts[8];

	public:
		PhoneBook();
		void add_contact(int index);
		void show_contacts();
		void get_contact(std::string index);
};

#endif //CPP_00_PHONEBOOK_H
