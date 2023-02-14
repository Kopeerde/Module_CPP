//
// Created by kmendes- on 1/25/23.
//

#ifndef MODULE_CPP_CLAPTRAP_HPP
#define MODULE_CPP_CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected:
		std::string name;
		int			hp;
		int			energy;
		int			attack_dmg;

	public:
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &original);
		~ClapTrap();
		ClapTrap& operator=(const ClapTrap&);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};


#endif //MODULE_CPP_CLAPTRAP_HPP
