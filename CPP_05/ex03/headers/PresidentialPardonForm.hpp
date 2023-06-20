
#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>

#include "./AForm.hpp"

class AForm;

class PresidentialPardonForm : public AForm
{
	private:


	public:
		PresidentialPardonForm(const std::string name);
		~PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm const &original);

		PresidentialPardonForm& operator=(PresidentialPardonForm const &);

		void execute(Bureaucrat const & executor) const;

};


#endif //PRESIDENTIALPARDONFORM_HPP
