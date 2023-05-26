
#include "../headers/Bureaucrat.hpp"
#include <iostream>

int main()
{
	Bureaucrat too_low = Bureaucrat("nope", 150);
	Bureaucrat John = Bureaucrat("John", 15);

	Form formulaire = Form("test", 15, 15);
	std::cout << formulaire << std::endl;
	try
	{
		formulaire.beSigned(too_low);
	}
	catch (Form::GradeTooLowException){}
	std::cout << formulaire << std::endl;
	formulaire.beSigned(John);
	std::cout << formulaire << std::endl;


	try
	{
		Form test = Form("test", 0, 15);
	}
	catch (Form::GradeTooLowException)
	{

	}
	catch (Form::GradeTooHighException)
	{

	}

	try
	{
		Form test = Form("test", 151, 15);
	}
	catch (Form::GradeTooLowException)
	{

	}
	catch (Form::GradeTooHighException)
	{

	}

	try
	{
		Form test = Form("test", 1, 0);
	}
	catch (Form::GradeTooLowException)
	{

	}
	catch (Form::GradeTooHighException)
	{

	}
	try
	{
		Form test = Form("test", 1, 151);
	}
	catch (Form::GradeTooLowException)
	{

	}
	catch (Form::GradeTooHighException)
	{

	}

	return 0;
}