
#include "../headers/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, short grade) : name(name)
{
	std::cout << "Base class constructor for Bureaucrat called" << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (150 < grade)
		throw Bureaucrat::GradeTooLowException();
	else
		this->grade = grade;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Base class Bureaucrat destructor called." << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &original)
{
	this->grade = original.grade;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this == &other)
		return *this;
	this->grade = other.grade;
	return *this;
}

std::string Bureaucrat::getName() const
{
	return this->name;
}

short int Bureaucrat::getGrade() const
{
	return this->grade;
}

void Bureaucrat::setGrade(short grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (150 < grade)
		throw Bureaucrat::GradeTooLowException();
	else
		this->grade = grade;
}

void Bureaucrat::increment_grade()
{
	if (this->grade == 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->grade--;
}

void Bureaucrat::decrement_grade()
{
	if (this->grade == 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->grade++;
}

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& self)
{
	std::cout << self.getName() << ", bureaucrat grade" << self.getGrade() << std::endl;
	return stream;
}























