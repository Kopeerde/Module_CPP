
#include "../headers/Harl.hpp"


int level_input(std::string &level)
{
	if (level.compare("DEBUG") == 0)
		return 0;
	if (level.compare("INFO") == 0)
		return 1;
	if (level.compare("WARNING") == 0)
		return 2;
	if (level.compare("ERROR") == 0)
		return 3;
	return -1;
}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-"
				 "ketchup burger. I really do !" << std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put "
				 "enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming "
				 "for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	switch (level_input(level))
	{
		case 0:
			this->debug();
		case 1:
			this->info();
		case 2:
			this->warning();
		case 3:
			this->error();
			break;
		case -1:
			std::cout << "[ Probably complaining about insignificant problem ]" << std::endl;
	}
}
