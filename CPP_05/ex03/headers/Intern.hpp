
#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>

#include "./ShrubberyCreationForm.hpp"
#include "./RobotomyRequestForm.hpp"
#include "./PresidentialPardonForm.hpp"

class Intern
{
	private:


	public:
		Intern();
		~Intern();
		Intern(const Intern &original);

		Intern& operator=(const Intern&);

		AForm *makeForm(std::string form_name, std::string target);

};


#endif //INTERN_HPP
