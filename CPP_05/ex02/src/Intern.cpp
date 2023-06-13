
#include "../headers/Intern.hpp"

Intern::Intern()
{
	std::cout << "Basic constructor class Intern called." << std::endl;
}

Intern::~Intern()
{
	std::cout << "Basic destructor class Intern called." << std::endl;
}

Intern::Intern(const Intern &original)
{
	(void) original;
}

Intern &Intern::operator=(const Intern &other)
{
	if (this == &other)
		return *this;
	return *this;
}

void Intern::makeForm(std::string form_name, std::string target)
{

}
