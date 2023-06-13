
#include "../headers/Bureaucrat.hpp"
#include "../headers/PresidentialPardonForm.hpp"
#include "../headers/RobotomyRequestForm.hpp"
#include "../headers/ShrubberyCreationForm.hpp"


#include <iostream>



int main()
{

	Bureaucrat intern = Bureaucrat("intern", 150);
	Bureaucrat John = Bureaucrat("John", 5);

	RobotomyRequestForm robotomi("test_robotomi");
	robotomi.beSigned(John);
	std::cout << robotomi << std::endl;
	robotomi.execute(John);



	return 0;
}