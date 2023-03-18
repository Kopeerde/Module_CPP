

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
		virtual ~Animal();
		Animal(const Animal &original);
		Animal& operator=(const Animal&);

		//Getters
		std::string getType() const;

		// Fonctions membre
		virtual void makeSound() const;
};


#endif //ANIMAL_HPP
