//
// Created by kmendes- on 1/25/23.
//

#include "../headers/ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hp = 10;
	this->energy = 10;
	this->attack_dmg = 0;
	std::cout << "Claptrap named : " << name << " created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &original)
{
	this->name = original.name;
	this->hp = original.hp;
	this->energy = original.energy;
	this->attack_dmg = original. attack_dmg;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Claptrap named : " << this->name << " destroyed." << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& other)
{
	if (this == &other)
		return *this;
	this->name = other.name;
	this->hp = other.hp;
	this->energy = other.energy;
	this->attack_dmg = other.attack_dmg;
	return *this;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->hp <= 0)
	{
		std::cout << "Claptrap " << this->name << " is dead and couldn't perform this action" << std::endl;
		return ;
	}
	if (this->energy > 0)
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attack_dmg << " points of damage!" << std::endl;
		this->energy--;
		std::cout << "ClapTrap " << this->name << " have " << this->energy << " energy points left" << std::endl;
	}
	else
		std::cout << "Claptrap " << this->name << "don't have anymore energy left." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hp <= 0)
	{
		std::cout << "Claptrap " << this->name << "'s corpse took " << amount << "of damage." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " took " << amount << " damage." << std::endl;
	this->hp -= amount;
	if (this->hp < 0)
		std::cout << "Claptrap " << this->name << " died." << std::endl;
	else
		std::cout << "ClapTrap " << this->name << " " << this->hp << "hp left." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hp <= 0)
	{
		std::cout << "Claptrap " << this->name << " is dead and couldn't perform this action" << std::endl;
		return ;
	}
	if (this->energy > 0)
	{
		std::cout << "Claptrap " << this->name << " recovered " << amount << " of health." << std::endl;
		this->hp += amount;
		std::cout << "ClapTrap " << this->name << " have " << this->hp << " hp left" << std::endl;
		this->energy--;
		std::cout << "ClapTrap " << this->name << " have " << this->energy << " energy points left" << std::endl;
	}
	else
		std::cout << "Claptrap " << this->name << "don't have anymore energy left." << std::endl;
}
