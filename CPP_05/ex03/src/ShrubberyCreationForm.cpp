
#include "../headers/ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(const std::string name) : AForm(name, 145, 137)
{
	std::cout << "Default class ShruberryCreationForm constructor called." << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Default class destructor ShrubberyCreationForm destructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &original) : AForm(original)
{}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
	(void) other;
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->get_is_signed() == false)
	{
		throw AForm::NotSignedException();
	}
	else if (this->get_exec_grade() < executor.getGrade())
	{
		throw AForm::GradeTooLowException();
	}
	else
	{
		std::ofstream outfile ((this->get_name() + "_shrubbery").c_str());

		outfile << "          &&& &&  & &&\n";
		outfile << "      && &\\/&\\|& ()|/ @, &&\n";
		outfile << "      &\\/(/&/&||/& /_/)_&/_&\n";
		outfile << "   &() &\\/&|()|/&\\/ '%\" & ()\n";
		outfile << "  &_\\_&&_\\ |& |&&/&__%_/_& &&\n";
		outfile << "&&   && & &| &| /& & % ()& /&&\n";
		outfile << " ()&_---()&\\&\\|&&-&&--%---()~\n";
		outfile << "     &&     \\|||\n";
		outfile << "             |||\n";
		outfile << "             |||\n";
		outfile << "             |||\n";
		outfile << "       , -=-~  .-^- _\n";
		outfile << "              `\n";

		outfile.close();
	}
}