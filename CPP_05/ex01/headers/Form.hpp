//
// Created by kmendes- on 2/20/23.
//

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class Form
{
	private:
		std::string const name;
		bool is_signed;
		const short sign_grade;
		const short exec_grade;

	public:
		Form(std::string const name, short int sign_grade, short int exec_grade);
		~Form();
		Form(const Form &original);

		// Overload
		Form& operator=(const Form &);
		Form& operator<<(const Form &);

		// Getters
		std::string get_name() const;
		bool get_is_signed() const;
		const short int get_sign_grade() const;
		const short int get_exec_grade() const;

		// Setters
		void beSigned();

		// Exceptions
		class GradeTooHighException : public std::exception {};
		class GradeTooLowException : public std::exception {};

};


#endif //FORM_HPP
