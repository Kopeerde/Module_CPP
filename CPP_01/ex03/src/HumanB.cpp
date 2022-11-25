
#include "../headers/HumanB.hpp"

HumanB::HumanB(std::string name, Weapon *weapon)
{
	this->name = name;
	this->weapon = weapon;
}

HumanB::~HumanB()
{}

void HumanB::attack()
{
	if (this->weapon == NULL)
		std::cout << this->name << " attacks with their bare hands" << std::endl;
	else
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}
