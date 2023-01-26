//
// Created by kmendes- on 1/26/23.
//

#include "../headers/ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap named : " << name << " created" << std::endl;
	this->hp = 100;
	this->energy = 50;
	this->attack_dmg = 20;
}

ScavTrap::ScavTrap(const ScavTrap &original) : ClapTrap(original)
{
	this->name = original.name;
	this->attack_dmg = original.attack_dmg;
	this->energy = original.energy;
	this->hp = original.hp;
}

ScavTrap &ScavTrap::operator=(const ScavTrap& other)
{
	if (this == &other)
		return *this;
	this->hp = other.hp;
	this->energy = other.energy;
	this->attack_dmg = other.attack_dmg;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap named : " << this->name << " destroyed." << std::endl;
}

void ScavTrap::guardGate()
{
	if (this->hp <= 0)
	{
		std::cout << "ScavTrap " << this->name << " is dead and couldn't perform this action" << std::endl;
		return ;
	}
	else if (this->energy <= 0)
	{
		std::cout << "ScavTrap " << this->name << "don't have enough energy and couldn't perform this action" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->name << " has entered in Gate Keeper mode." << std::endl;
	this->energy--;
	std::cout << "ScavTrap " << this->name << " have " << this->energy << " energy points left." << std::endl;
}