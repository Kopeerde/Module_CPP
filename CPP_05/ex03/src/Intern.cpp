
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

AForm *Intern::makeForm(std::string form_name, std::string target)
{
	char *lst[4] = {(char *) "robotomy",
					(char *) "shrubs",
					(char *) "pardon",
	};

	for (int i = 0; lst[i]; i++)
	{
		if (form_name.compare(lst[i]) == 0)
		{
			switch (i)
			{
				case 0:
					return (new RobotomyRequestForm(target));
					break;
				
				case 1:
					return (new ShrubberyCreationForm(target));
					break;

				case 2:
					return (new PresidentialPardonForm(target));
					break;

				default:
					break;
			}
		}
	}
	std::cout << "The form requested doesn't exist." << std::endl;
	return NULL;
}
