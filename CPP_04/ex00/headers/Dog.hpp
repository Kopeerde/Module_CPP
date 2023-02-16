//
// Created by kmendes- on 2/16/23.
//

#ifndef DOG_HPP
#define DOG_HPP

#include "./Animal.hpp"

class Dog : public Animal
{
	private:


	public:
		Dog();
		~Dog();
		Dog(const Dog &original);
		Dog& operator=(const Dog&);
		void makeSound() const;
};


#endif //DOG_HPP
