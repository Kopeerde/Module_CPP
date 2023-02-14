//
// Created by kmendes- on 1/25/23.
//

#include "../headers/ClapTrap.hpp"
#include "../headers/ScavTrap.hpp"
#include "../headers/FragTrap.hpp"
#include "../headers/DiamondTrap.hpp"

int main()
{
	// Tests classe ClapTrap
	ClapTrap clap_trap = ClapTrap("Enflure");
	clap_trap.attack("himself");
	clap_trap.beRepaired(10);
	clap_trap.takeDamage(10);
	clap_trap.takeDamage(20);

	std::cout << "\n" << std::endl;

	// Tests classe ScavTrap
	ScavTrap scav_trap = ScavTrap("Scavenger");
	scav_trap.guardGate();
	scav_trap.attack("ClapTrap");
	scav_trap.beRepaired(10);
	scav_trap.takeDamage(50);

	std::cout << "\n" << std::endl;

	//Test classe FragTrap
	FragTrap frag_trap = FragTrap("Useless");
	frag_trap.highFivesGuys();
	frag_trap.attack("ClapTrap");
	frag_trap.beRepaired(10);
	frag_trap.takeDamage(50);

	std::cout << "\n" << std::endl;

	//Test classe DiamondTrap

	std::cout << "\n" << std::endl;

	return 0;
}