//
// Created by kmendes- on 1/26/23.
//

#include "../headers/FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->hp = 100;
	this->energy = 100;
	this->attack_dmg = 30;
}

FragTrap::FragTrap(const FragTrap &original) : ClapTrap(original)
{
	this->name = original.name;
	this->hp = original.hp;
	this->energy = original.energy;
	this->attack_dmg = original.attack_dmg;
}

FragTrap::~FragTrap()
{
	std::cout << "Fragtrap named : " << this->name << " destroyed." << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	if (this == &other)
		return *this;
	this->name = other.name;
	this->hp = other.hp;
	this->energy = other.energy;
	this->attack_dmg = other.attack_dmg;
	return *this;
}

void FragTrap::highFivesGuys(void)
{
	if (this->hp <= 0)
	{
		std::cout << "FragTrap " << this->name << " is dead and couldn't perform this action. His teamates high fives to it's death." << std::endl;
		return ;
	}
	else if (this->energy <= 0)
	{
		std::cout << "FragTrap " << this->name << " don't have enough energy to perform this action and just look at his teamates high fives without him." << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->name << " wants a high five ..... but no one cares about him. Serisouly, who would high five him?" << std::endl;
	this->energy--;
	std::cout << "FragTrap " << this->name << " has just wasted an energy point for nothing, " << this->energy << " energy points left" << std::endl;
}

