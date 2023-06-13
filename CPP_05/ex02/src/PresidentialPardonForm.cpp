
#include "../headers/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string name) : AForm(name, 25, 5)
{
	std::cout << "Default class constructor PresidentialPardonForm called." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Default class destructor PresidentialPardonForm called." << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	(void) executor;
}