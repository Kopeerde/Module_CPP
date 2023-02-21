//
// Created by kmendes- on 2/21/23.
//

#include "../headers/ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(const std::string name) : AForm(name, 145, 137)
{
	std::cout << "Default class ShruberryCreationForm constructor called." << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Default class destructor ShrubberyCreationForm destructor called." << std::endl;
}
