//
// Created by kmendes- on 2/21/23.
//

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

};


#endif //ROBOTOMYREQUESTFORM_HPP
