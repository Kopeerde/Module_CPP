//
// Created by kmendes- on 1/25/23.
//

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

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

		virtual void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};


#endif //CLAPTRAP_HPP
