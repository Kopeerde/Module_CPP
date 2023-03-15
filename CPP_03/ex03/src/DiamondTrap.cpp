//
// Created by kmendes- on 1/26/23.
//

#include "../headers/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name)
{
	std::cout << "DiamondTrap " << this->_name << " created." << std::endl;
	this->_name = name;
	ClapTrap::name = name;
}

DiamondTrap::DiamondTrap(const DiamondTrap &original)
{
//	ClapTrap::name = original.ClapTrap::name;
	this->_name = original.name;
	this->attack_dmg = original.attack_dmg;
	this->hp = original.hp;
	this->energy = original.energy;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->name << " destroyed." << std::endl;
}

DiamondTrap DiamondTrap::operator=(const DiamondTrap &other)
{
	if (this == &other)
		return *this;
//	ClapTrap::name = other.Claptrap::name;
	this->name = other.name;
	this->hp = other.hp;
	this->energy = other.energy;
	this->attack_dmg = other.attack_dmg;

	return *this;
}

void DiamondTrap::whoAmI()
{
	std::cout << "Je suis " + this->name + "et mon sous objet est "  + "TODO" << std::endl;
}


