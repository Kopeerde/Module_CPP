//
// Created by kmendes- on 2/17/23.
//

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string ideas[100];

	public:
		Brain();
		~Brain();
		Brain(const Brain &original);
		Brain& operator=(const Brain&);

		void set_idea(int index, std::string str);
		std::string get_idea(int index) const;
};


#endif //BRAIN_HPP
