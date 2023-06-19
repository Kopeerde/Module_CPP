
#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>

#include "./AForm.hpp"
#include <stdlib.h>

class AForm;

class RobotomyRequestForm : public AForm
{
	private:


	public:
		RobotomyRequestForm(const std::string name);
		~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm original);

		RobotomyRequestForm& operator=(const RobotomyRequestForm &);
		
		void execute(Bureaucrat const & executor) const;

};


#endif //ROBOTOMYREQUESTFORM_HPP
