//
// Created by kmendes- on 2/20/23.
//

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include "./Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		std::string const name;
		bool is_signed;
		short const sign_grade;
		short const exec_grade;

	public:
		AForm(std::string const name, short int sign_grade, short int exec_grade);
		~AForm();
		AForm(const AForm &original);

		// Overload
		AForm& operator=(const AForm &);


		// Getters
		std::string get_name() const;
		bool get_is_signed() const;
		short int get_sign_grade() const;
		short int get_exec_grade() const;

		// Setters
		void beSigned(const Bureaucrat bureaucrat);

		// Exceptions
		class GradeTooHighException : public std::exception {};
		class GradeTooLowException : public std::exception {};

};

std::ostream& operator<<(std::ostream& stream, const AForm&);

#endif //FORM_HPP
