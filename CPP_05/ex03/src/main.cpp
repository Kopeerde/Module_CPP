
#include "../headers/Bureaucrat.hpp"
#include "../headers/Intern.hpp"
#include "../headers/PresidentialPardonForm.hpp"
#include "../headers/RobotomyRequestForm.hpp"
#include "../headers/ShrubberyCreationForm.hpp"


#include <iostream>



int main()
{

	Intern nobody;
	Bureaucrat John = Bureaucrat("John", 1);
	AForm *rrf;
	AForm *rrf2;
	AForm *rrf3;


	rrf = nobody.makeForm("robotomy", "test1");
	rrf2 = nobody.makeForm("shrubs", "test2");
	rrf3 = nobody.makeForm("pardon", "test3");

	John.signForm(*rrf);
	John.signForm(*rrf2);
	John.signForm(*rrf3);

	rrf->execute(John);
	rrf2->execute(John);
	rrf3->execute(John);


	delete rrf;
	delete rrf2;
	delete rrf3;


	return 0;
}