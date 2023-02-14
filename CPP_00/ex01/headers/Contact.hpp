#ifndef CPP_00_CONTACT_H
#define CPP_00_CONTACT_H
#include "./utils.hpp"

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string secret;

	public:
		Contact();
		~Contact(){};
		void set_contact();
		std::string get_first_name();
		std::string get_last_name();
		std::string get_nickname();
		std::string get_phone_number();
		std::string get_secret();

		void ask_input(std::string *field);
};

#endif //CPP_00_CONTACT_H
