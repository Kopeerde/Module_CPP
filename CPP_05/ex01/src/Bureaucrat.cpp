
#include "../headers/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, short grade) : name(name)
{
	std::cout << name + " : Base class constructor for Bureaucrat called." << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (150 < grade)
		throw Bureaucrat::GradeTooLowException();
	else
		this->grade = grade;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << this->getName() + " : Base class Bureaucrat destructor called." << std::endl;
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
	stream << self.getName() << ", bureaucrat grade " << self.getGrade() << ".";
	return stream;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too high.";
}


const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too low.";
}

void Bureaucrat::signForm(Form& form) const
{
	if (form.get_is_signed() == 0 && form.get_sign_grade() > this->grade)
		std::cout << this->name + "couldn't sign " + form.get_name() + " because bureaucrat grade's too low." << std::endl;
	else if (form.get_is_signed() == true)
		std::cout << this->name + " couldn't sign " + form.get_name() + " because it has already been signed previously." << std::endl;
	else
	{
		form.beSigned(*this);
		std::cout << this->name + " signed " + form.get_name() << std::endl;
	}
}
























