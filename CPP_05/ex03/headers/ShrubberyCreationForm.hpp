
#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>

#include "./AForm.hpp"
#include <iostream>
#include <fstream>

class AForm;

class ShrubberyCreationForm : public AForm
{
	private:


	public:
		ShrubberyCreationForm(const std::string name);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm const &original);

		ShrubberyCreationForm& operator=(ShrubberyCreationForm const &);

		void execute(Bureaucrat const & executor) const;

};


#endif //SHRUBBERYCREATIONFORM_HPP
