
#include "../headers/Bureaucrat.hpp"
#include <iostream>



int main()
{
	// Test creation Bureaucrate grade trop bas
	try
	{
		Bureaucrat test = Bureaucrat("test", 151);
		std::cout << "ligne non affichee." << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& e)
	{
		std::cout << e.what() << std::endl;
	}

	// Test creation Bureaucrate grade trop haut
	try
	{
		Bureaucrat test = Bureaucrat("test", 0);
		std::cout << "ligne non affichee." << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	// Test creation grade ok
	try
	{
		Bureaucrat test = Bureaucrat("test", 1);
		std::cout << test << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}


	// Test creation grade ok mais augmentation impossible
	try
	{
		Bureaucrat test = Bureaucrat("test", 1);
		std::cout << test << std::endl;
		test.increment_grade();
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}


	// Test creation Bureaucrate grade ok mais retrograder impossible
	try
	{
		Bureaucrat test = Bureaucrat("test", 150);
		std::cout << test << std::endl;
		test.decrement_grade();
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}


	return 0;
}