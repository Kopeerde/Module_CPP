//
// Created by kmendes- on 2/16/23.
//

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "./Brain.hpp"

class Animal
{
	protected:
		Animal();
		virtual ~Animal();
		Animal(const Animal &original);
		Animal& operator=(const Animal&);

		std::string type;

	private:


	public:
		

		Brain brain;
		
		virtual void makeSound() const;
		
		std::string getType() const;
};


#endif //ANIMAL_HPP
