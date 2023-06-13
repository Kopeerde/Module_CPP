
#include "../headers/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string name) : AForm(name, 72, 45)
{
	std::cout << name << " : Default class constructor RobotomyRequestForm called." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Default class destructor RobotomyRequestForm called." << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	std::cout << "*Drilling noises*" << std::endl;
	
	if (this->get_is_signed() == true && executor.getGrade() <= this->get_exec_grade())
	{
		if (rand() % 100 >= 50) // TODO
			std::cout << "<target> has been robotomized." << std::endl;
		else
			std::cout << "<target> failed to be robotomized." << std::endl;
	}
	else
	{
		// TODO : Throw correct exception
	}
}