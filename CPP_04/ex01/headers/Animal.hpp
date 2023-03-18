

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "./Brain.hpp"

class Animal
{
	protected:
		std::string type;

	private:
		Brain *brain;

	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal &original);
		Animal& operator=(const Animal&);

		//Getters
		std::string getType() const;

		// Fonctions membre
		virtual void makeSound() const;
};


#endif //ANIMAL_HPP
