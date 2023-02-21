//
// Created by kmendes- on 2/21/23.
//

#include "../headers/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string name) : AForm(name, 72, 45)
{
	std::cout << "Default class constructor RobotomyRequestForm called." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Default class destructor RobotomyRequestForm called." << std::endl;
}
