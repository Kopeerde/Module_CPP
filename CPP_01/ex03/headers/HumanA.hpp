
#ifndef MODULE_CPP_HUMANA_HPP
#define MODULE_CPP_HUMANA_HPP

#include <string>
#include <iostream>

#include "./Weapon.hpp"

class Weapon;

class HumanA
{
	private:
		std::string name;
		Weapon &weapon;
	public:
		HumanA(std::string name, Weapon weapon);
		~HumanA();
		void attack();
};


#endif //MODULE_CPP_HUMANA_HPP
