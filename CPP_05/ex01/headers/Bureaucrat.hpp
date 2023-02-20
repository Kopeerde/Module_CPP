//
// Created by kmendes- on 2/20/23.
//

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

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
		Bureaucrat& operator<<(const Bureaucrat&);

		// Getters
		std::string getName() const;
		short int getGrade() const;

		// Setters
		void setGrade(short int grade);

		// Member Functions
		void increment_grade();
		void decrement_grade();
		void signForm(); // TODO

		class GradeTooHighException : public std::exception {};

		class GradeTooLowException : public std::exception {};

};


#endif //BUREAUCRAT_HPP
