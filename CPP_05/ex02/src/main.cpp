
#include "../headers/Bureaucrat.hpp"
#include "../headers/PresidentialPardonForm.hpp"
#include "../headers/RobotomyRequestForm.hpp"
#include "../headers/ShrubberyCreationForm.hpp"


#include <iostream>



int main()
{

	Bureaucrat intern = Bureaucrat("intern", 150);
	Bureaucrat John = Bureaucrat("John", 5);
	std::cout << std::endl;

	RobotomyRequestForm robotomi("test_robotomi");
	PresidentialPardonForm pardon("target");
	ShrubberyCreationForm shrubs("shrubby");
	std::cout << std::endl;

	robotomi.beSigned(John);
	std::cout << robotomi << std::endl;
	robotomi.execute(John);
	John.executeForm(robotomi);

	John.signForm(pardon);
	pardon.execute(John);
	John.executeForm(pardon);

	John.signForm(shrubs);
	std::cout << std::endl;

	shrubs.execute(John);
	std::cout << std::endl;

	John.executeForm(shrubs);


	return 0;
}