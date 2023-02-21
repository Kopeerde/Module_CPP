//
// Created by kmendes- on 2/20/23.
//

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "./AForm.hpp"

class AForm;

class Bureaucrat
{
	private:
		std::string const name;
		short grade;

	public:
		Bureaucrat(const std::string name, short grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &original);

		// Surcharges
		Bureaucrat& operator=(const Bureaucrat&);


		// Getters
		std::string getName() const;
		short int getGrade() const;

		// Setters
		void setGrade(short int grade);

		// Member Functions
		void increment_grade();
		void decrement_grade();
		void signForm(const AForm& form) const;
		void execute(Bureaucrat const & executor) const;

		class GradeTooHighException : public std::exception {};

		class GradeTooLowException : public std::exception {};

};

std::ostream& operator<<(std::ostream& stream, const Bureaucrat&);

#endif //BUREAUCRAT_HPP
