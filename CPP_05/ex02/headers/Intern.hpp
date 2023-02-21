//
// Created by kmendes- on 2/21/23.
//

#ifndef MODULE_CPP_INTERN_HPP
#define MODULE_CPP_INTERN_HPP

#include <iostream>

class Intern
{
	private:


	public:
		Intern();
		~Intern();
		Intern(const Intern &original);

		Intern& operator=(const Intern&);

		void makeForm(std::string form_name, std::string target);

};


#endif //MODULE_CPP_INTERN_HPP
