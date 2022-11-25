
#ifndef MODULE_CPP_HUMANB_HPP
#define MODULE_CPP_HUMANB_HPP

#include <iostream>
#include <string>

#include "./Weapon.hpp"

class Weapon;

class HumanB
{
	private:
		std::string name;
		Weapon *weapon;
	public:
		HumanB(std::string name, Weapon *weapon);
		~HumanB();
		void attack();
};


#endif //MODULE_CPP_HUMANB_HPP
