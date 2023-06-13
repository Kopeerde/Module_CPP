
#include "../headers/Form.hpp"

Form::Form(const std::string name, short sign_grade, short exec_grade) : name(name), sign_grade(sign_grade), exec_grade(exec_grade)
{
	std::cout << name + " : Default constructor for class Form called." << std::endl;
	if (sign_grade < 1 || exec_grade < 1)
		throw Form::GradeTooHighException();
	else if (150 < sign_grade || 150 < exec_grade)
		throw Form::GradeTooLowException();
	this->is_signed = 0;
}

Form::~Form()
{
	std::cout << this->name + " : Default destructor for class Form called." << std::endl;
}

Form::Form(const Form &original) : name(original.name), sign_grade(original.sign_grade), exec_grade(original.exec_grade)
{
	this->is_signed = original.is_signed;
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= this->sign_grade)
	{
		this->is_signed = 1;
	}
	else
		throw Form::GradeTooLowException();
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

short int Form::get_sign_grade() const
{
	return this->sign_grade;
}

short int Form::get_exec_grade() const
{
	return this->exec_grade;
}

std::ostream& operator<<(std::ostream& stream, const Form&self)
{
	stream << self.get_name() + ", grade required signature " << self.get_sign_grade() << ", grade required execution " << self.get_exec_grade() << ", is signed " << self.get_is_signed();
	return stream;
}
