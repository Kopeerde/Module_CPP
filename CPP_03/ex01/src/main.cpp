//
// Created by kmendes- on 1/25/23.
//

#include "../headers/ClapTrap.hpp"
#include "../headers/ScavTrap.hpp"

int main()
{
	// Tests classe ClapTrap
	ClapTrap clap_trap = ClapTrap("Enflure");
	clap_trap.attack("soi-meme");
	clap_trap.beRepaired(10);
	clap_trap.takeDamage(10);
	clap_trap.takeDamage(20);

	std::cout << "\n" << std::endl;

	// Tests classe ScavTrap
	ScavTrap scav_trap = ScavTrap("beer");
	scav_trap.guardGate();
	scav_trap.attack("ClapTrap");
	scav_trap.beRepaired(10);
	scav_trap.takeDamage(50);

	std::cout << "\n" << std::endl;

	return 0;
}