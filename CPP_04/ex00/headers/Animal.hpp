//
// Created by kmendes- on 2/16/23.
//

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string type;

	private:


	public:
		Animal();
		~Animal();
		Animal(const Animal &original);
		Animal& operator=(const Animal&);
		void makeSound() const;
		std::string getType() const;
};


#endif //ANIMAL_HPP
