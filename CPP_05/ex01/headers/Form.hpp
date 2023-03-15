

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "./Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string const name;
		bool is_signed;
		short const sign_grade;
		short const exec_grade;

	public:
		Form(std::string const name, short int sign_grade, short int exec_grade);
		~Form();
		Form(const Form &original);

		// Overload
		Form& operator=(const Form &);


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

std::ostream& operator<<(std::ostream& stream, const Form&);

#endif //FORM_HPP
