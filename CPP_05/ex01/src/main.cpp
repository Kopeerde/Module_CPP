
#include "../headers/Bureaucrat.hpp"
#include <iostream>

int main()
{
	Bureaucrat intern = Bureaucrat("nope", 150);
	Bureaucrat John = Bureaucrat("John", 15);

	Form formulaire = Form("test", 15, 15);
	Form form_2 = Form("test2", 15, 15);
	std::cout << formulaire << std::endl;
	try
	{
		formulaire.beSigned(intern);
	}
	catch (Form::GradeTooLowException)
	{}
	std::cout << formulaire << std::endl;
	formulaire.beSigned(John);
	std::cout << formulaire << std::endl;

	John.signForm(form_2);
	John.signForm(form_2);


	try
	{
		Form test = Form("test", 0, 15);
	}
	catch (Form::GradeTooLowException)
	{

	}
	catch (Form::GradeTooHighException)
	{
		std::cout << "Could not create form, sign grade too high." << std::endl;
	}

	try
	{
		Form test = Form("test", 151, 15);
	}
	catch (Form::GradeTooLowException)
	{
		std::cout << "Could not create form, sign grade too low." << std::endl;

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
		std::cout << "Could not create form, exec grade too high." << std::endl;
	}
	try
	{
		Form test = Form("test", 1, 151);
	}
	catch (Form::GradeTooLowException)
	{
		std::cout << "Could not create form, exec grade too low." << std::endl;
	}
	catch (Form::GradeTooHighException)
	{

	}

	return 0;
}