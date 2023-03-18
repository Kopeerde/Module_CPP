

#ifndef DOG_HPP
#define DOG_HPP

#include "./Animal.hpp"

class Dog : public Animal
{
	private:


	public:
		Dog();
		virtual ~Dog();
		Dog(const Dog &original);
		Dog& operator=(const Dog&);

		// Fonctions membre
		void makeSound() const;
};


#endif //DOG_HPP
