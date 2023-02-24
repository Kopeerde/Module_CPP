//
// Created by kmendes- on 1/26/23.
//

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "./ClapTrap.hpp"


class ScavTrap : public ClapTrap
{
	private:

	public:
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &original);
		~ScavTrap();
		ScavTrap& operator=(const ScavTrap&);

		void guardGate();
};


#endif //SCAVTRAP_HPP
