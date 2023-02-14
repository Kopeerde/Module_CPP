//
// Created by kmendes- on 1/26/23.
//

#include "../headers/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name)
{
	std::cout << "DiamondTrap " << this->name << " created." << std::endl;
	this->attack_dmg = FragTrap::attack_dmg;
	this->energy = ScavTrap::energy;
	this->hp = FragTrap::hp;
}

DiamondTrap::DiamondTrap(const DiamondTrap &original)
{
	this->name = original.name;
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
	this->name = other.name;
	this->hp = other.hp;
	this->energy = other.energy;
	this->attack_dmg = other.attack_dmg;

	return DiamondTrap(NULL);
}

//TODO : Finish
void DiamondTrap::whoAmI()
{
	std::cout << "Je suis " + this->name + "et mon sous objet est "  + "TODO" << std::endl;
}


