//
// Created by kmendes- on 2/20/23.
//

#include "../headers/Bureaucrat.hpp"
#include "../headers/PresidentialPardonForm.hpp"
#include "../headers/RobotomyRequestForm.hpp"
#include "../headers/ShrubberyCreationForm.hpp"


#include <iostream>



int main()
{

	try
	{
		Bureaucrat test = Bureaucrat("test", 151);
		std::cout << "ligne non affichee." << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException)
	{
		std::cout << "oops" << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException)
	{
		std::cout << "arf" << std::endl;
	}

	try
	{
		Bureaucrat test = Bureaucrat("test", 0);
		std::cout << "ligne non affichee." << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException)
	{
		std::cout << "oops" << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException)
	{
		std::cout << "arf" << std::endl;
	}

	try
	{
		Bureaucrat test = Bureaucrat("test", 1);
		std::cout << "ligne affichee." << std::endl;
		std::cout << test << std::endl;
		test.decrement_grade();
		std::cout << test << std::endl;
		test.increment_grade();
		std::cout << test << std::endl;

	}
	catch (Bureaucrat::GradeTooHighException)
	{
		std::cout << "oops" << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException)
	{
		std::cout << "arf" << std::endl;
	}

	ShrubberyCreationForm shrubs("test");



	return 0;
}