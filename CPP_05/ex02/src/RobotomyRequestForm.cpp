
#include "../headers/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string name) : AForm(name, 72, 45)
{
	std::cout << name + " : Default class constructor RobotomyRequestForm called." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << this->get_name() + " : Default class destructor RobotomyRequestForm called." << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->get_is_signed() == 0)
		throw AForm::NotSignedException();
	else if (executor.getGrade() <= this->get_exec_grade())
	{
		std::cout << "*Drilling noises*" << std::endl;

		srand(time(NULL));
		if ((rand() % 100) >= 50)
			std::cout << this->get_name() + " has been robotomized." << std::endl;
		else
			std::cout << "*clonk* " << this->get_name() + " failed to be robotomized." << std::endl;
	}
	else
		throw AForm::GradeTooLowException();
}


RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &original) : AForm(original)
{}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	(void) other;
	return *this;
}






