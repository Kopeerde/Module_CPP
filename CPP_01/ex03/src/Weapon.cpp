
#include "../headers/Weapon.hpp"

Weapon::Weapon()
{
	this->type = "";
}

Weapon::~Weapon()
{}

void Weapon::setType(std::string str)
{ this->type = str; }

const std::string &Weapon::getType()
{ return this->type; }
