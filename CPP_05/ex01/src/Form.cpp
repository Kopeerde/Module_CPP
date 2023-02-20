//
// Created by kmendes- on 2/20/23.
//

#include "../headers/Form.hpp"

Form::Form(const std::string name, short sign_grade, short exec_grade) : name(name), sign_grade(sign_grade), exec_grade(exec_grade)
{
	std::cout << "Default constructor for class Form called." << std::endl;
	if (sign_grade < 1 || exec_grade < 1)
		throw Form::GradeTooHighException;
	else if (150 < sign_grade || 150 < exec_grade)
		throw Form::GradeTooLowException;
	this->is_signed = 0;
}

Form::~Form()
{
	std::cout << "Default destructor for class Form called." << std::endl;
}

Form::Form(const Form &original)
{
	this->is_signed = original.is_signed;
}

void Form::beSigned()
{
	this->is_signed = 1;
}


Form &Form::operator=(const Form &other)
{
	if (this == &other)
		return *this;
	this->is_signed = other.is_signed;
	return *this;
}

std::string Form::get_name() const
{
	return this->name;
}

bool Form::get_is_signed() const
{
	return this->is_signed;
}

const short int Form::get_sign_grade() const
{
	return this->sign_grade;
}

const short int Form::get_exec_grade() const
{
	return this->exec_grade;
}

// TODO
Form &Form::operator<<(const Form &)
{
	return *this;
}
