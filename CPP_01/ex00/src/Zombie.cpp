
#include "../headers/Zombie.hpp"

Zombie::Zombie(std::string str)
{
	this->name = str;
	this->announce();
}

Zombie::~Zombie()
{
	std::cout << this->name << " has been destroyed" << std::endl;
}

void Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
