
#ifndef HUMANB_HPP
#define HUMANB_HPP

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
		HumanB(std::string name);
		~HumanB();
		void setWeapon(Weapon &weapon); // Transmission par reference car la position de la memoire de la variable et du parametre sont la meme
		void attack();
};


#endif //HUMANB_HPP
