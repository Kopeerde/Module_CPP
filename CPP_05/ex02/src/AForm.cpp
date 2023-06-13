
#include "../headers/AForm.hpp"

AForm::AForm(const std::string name, short sign_grade, short exec_grade) : name(name), sign_grade(sign_grade), exec_grade(exec_grade)
{
	std::cout << name << " : Default constructor for class Form called." << std::endl;
	if (sign_grade < 1 || exec_grade < 1)
		throw AForm::GradeTooHighException();
	else if (150 < sign_grade || 150 < exec_grade)
		throw AForm::GradeTooLowException();
	this->is_signed = 0;
}

AForm::~AForm()
{
	std::cout << this->get_name() << " : Default destructor for class Form called." << std::endl;
}

AForm::AForm(const AForm &original) : name(original.name), sign_grade(original.sign_grade), exec_grade(original.exec_grade)
{
	this->is_signed = original.is_signed;
}

void AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= this->sign_grade)
	{
		this->is_signed = 1;
		bureaucrat.signForm(*this);
	}
	else
		throw AForm::GradeTooLowException();
}


AForm &AForm::operator=(const AForm &other)
{
	if (this == &other)
		return *this;
	this->is_signed = other.is_signed;
	return *this;
}

std::string AForm::get_name() const
{
	return this->name;
}

bool AForm::get_is_signed() const
{
	return this->is_signed;
}

short int AForm::get_sign_grade() const
{
	return this->sign_grade;
}

short int AForm::get_exec_grade() const
{
	return this->exec_grade;
}

std::ostream& operator<<(std::ostream& stream, const AForm& self)
{
	stream << self.get_name() << ", grade required signature " << self.get_sign_grade() << ", grade required execution " << self.get_exec_grade() << ", is signed " << self.get_is_signed();
	return stream;
}

void execute(Bureaucrat const & executor)
{
	(void) executor;
}