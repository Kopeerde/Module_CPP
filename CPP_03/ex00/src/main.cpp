//
// Created by kmendes- on 1/25/23.
//

#include "../headers/ClapTrap.hpp"

int main()
{
	ClapTrap clapTrap = ClapTrap("Enflure");
	clapTrap.attack("soi-meme");
	clapTrap.beRepaired(10);
	clapTrap.takeDamage(10);
	clapTrap.takeDamage(20);
	return 0;
}