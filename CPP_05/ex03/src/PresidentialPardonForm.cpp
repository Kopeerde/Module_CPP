
#include "../headers/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string name) : AForm(name, 25, 5)
{
	std::cout << name + " : Default class constructor PresidentialPardonForm called." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << this->get_name() + " : Default class destructor PresidentialPardonForm called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &original) : AForm(original)
{}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const &other)
{
	(void) other;
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->get_is_signed() == false)
		throw AForm::NotSignedException();
	else if (executor.getGrade() > this->get_exec_grade())
		throw AForm::GradeTooLowException();
	else
		std::cout << this->get_name() + " has been pardoned by Zaphod Beeblebrox." << std::endl;
}