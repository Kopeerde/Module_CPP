//
// Created by kmendes- on 2/17/23.
//

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		

	public:
		Brain();
		~Brain();
		Brain(const Brain &original);
		Brain& operator=(const Brain&);

		std::string ideas[100];
};


#endif //BRAIN_HPP
