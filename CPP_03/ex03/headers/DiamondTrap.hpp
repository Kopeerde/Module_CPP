//
// Created by kmendes- on 1/26/23.
//

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "./ClapTrap.hpp"
#include "./FragTrap.hpp"
#include "./ScavTrap.hpp"


class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string name;
		FragTrap hp;
		ScavTrap energy;
		FragTrap attack_dmg;

	public:
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &original);
		ClapTrap::name(std::string name_clap_name);
		~DiamondTrap();
		DiamondTrap operator=(const DiamondTrap&);

		ScavTrap::attack();
		void whoAmI();
};


#endif //DIAMONDTRAP_HPP
